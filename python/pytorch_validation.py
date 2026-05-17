"""
PyTorch/ONNX-style INT8 test vector generation and RTL validation
Generates realistic DNN weight matrices and validates against systolic array RTL
"""
import torch
import numpy as np
import subprocess
import os
import sys

def quantize_to_int8(tensor):
    """Simulate INT8 quantization like real DNN deployment"""
    scale = tensor.abs().max() / 127.0
    if scale == 0:
        scale = 1.0
    quantized = torch.clamp(torch.round(tensor / scale), -128, 127).to(torch.int8)
    return quantized, scale

def matrix_multiply_int8(A, B):
    A = np.clip(A, -128, 127).astype(np.int8)
    B = np.clip(B, -128, 127).astype(np.int8)
    return A.astype(np.int32) @ B.astype(np.int32)

def generate_skewed_inputs(A, B, N=3):
    cycles = []
    total_cycles = 2*N + N - 1
    for c in range(total_cycles):
        a_row = [0]*N
        b_col = [0]*N
        for i in range(N):
            k = c - i
            if 0 <= k < N:
                a_row[i] = int(A[i][k])
        for j in range(N):
            k = c - j
            if 0 <= k < N:
                b_col[j] = int(B[k][j])
        cycles.append((a_row, b_col))
    return cycles

def run_rtl_test(A, B, test_id):
    cycles = generate_skewed_inputs(A, B)
    tb = f"module pytorch_tb_{test_id};\n"
    tb += "logic clk, reset, enable;\n"
    tb += "logic signed [7:0] a_in [3], b_in [3];\n"
    tb += "logic signed [31:0] acc_out [3][3];\n"
    tb += "systolic_array #(.N(3)) dut (.*);\n"
    tb += "always #5 clk = ~clk;\n"
    tb += "initial begin\n"
    tb += "    clk=0; reset=1; enable=0;\n"
    tb += "    foreach(a_in[i]) a_in[i]=0;\n"
    tb += "    foreach(b_in[j]) b_in[j]=0;\n"
    tb += "    @(posedge clk); #1; reset=0; enable=1;\n"
    for a_row, b_col in cycles:
        tb += f"    a_in[0]={a_row[0]}; a_in[1]={a_row[1]}; a_in[2]={a_row[2]};\n"
        tb += f"    b_in[0]={b_col[0]}; b_in[1]={b_col[1]}; b_in[2]={b_col[2]};\n"
        tb += "    @(posedge clk); #1;\n"
    tb += "    foreach(a_in[i]) a_in[i]=0;\n"
    tb += "    foreach(b_in[j]) b_in[j]=0;\n"
    tb += "    repeat(6) @(posedge clk); #1;\n"
    for i in range(3):
        for j in range(3):
            tb += f'    $display("OUT_{i}_{j}=%0d", acc_out[{i}][{j}]);\n'
    tb += "    $finish;\nend\nendmodule\n"

    tb_path = f"/tmp/pytorch_tb_{test_id}.sv"
    with open(tb_path, 'w') as f:
        f.write(tb)

    r = subprocess.run(
        ["verilator", "--binary", "--top-module", f"pytorch_tb_{test_id}",
         "rtl/pe.sv", "rtl/systolic_array.sv", tb_path,
         "-Wno-width", "--Mdir", f"/tmp/ptobj_{test_id}"],
        capture_output=True, text=True, cwd=os.getcwd()
    )
    if r.returncode != 0:
        return None

    r2 = subprocess.run(
        [f"/tmp/ptobj_{test_id}/Vpytorch_tb_{test_id}"],
        capture_output=True, text=True
    )
    rtl_out = np.zeros((3,3), dtype=np.int32)
    for line in r2.stdout.strip().split('\n'):
        if line.startswith('OUT_'):
            parts = line.split('=')
            coords = parts[0].replace('OUT_','').split('_')
            rtl_out[int(coords[0])][int(coords[1])] = int(parts[1])
    return rtl_out

print("=" * 60)
print("PyTorch INT8 Quantized Weight Validation")
print("Simulating realistic CNN/FC layer weight matrices")
print("=" * 60)

torch.manual_seed(42)
passed = 0
failed = 0
test_configs = [
    ("FC Layer weights (uniform)", lambda: torch.nn.Linear(3,3).weight.data),
    ("Conv weights (normal dist)",  lambda: torch.randn(3,3) * 0.5),
    ("Large weights",               lambda: torch.randn(3,3) * 5.0),
    ("Sparse weights",              lambda: torch.randn(3,3) * (torch.rand(3,3) > 0.7).float()),
    ("Negative dominant",           lambda: -torch.abs(torch.randn(3,3))),
]

for name, gen_fn in test_configs:
    print(f"\n[Config: {name}]")
    for trial in range(5):
        test_id = passed + failed
        # Generate PyTorch tensors
        A_float = gen_fn()
        B_float = gen_fn()
        # Quantize to INT8
        A_int8, scaleA = quantize_to_int8(A_float)
        B_int8, scaleB = quantize_to_int8(B_float)
        A = A_int8.numpy().astype(np.int8)
        B = B_int8.numpy().astype(np.int8)

        # Run RTL
        rtl_out = run_rtl_test(A, B, test_id)
        expected = matrix_multiply_int8(A, B)

        if rtl_out is not None and np.array_equal(rtl_out, expected):
            passed += 1
            print(f"  Trial {trial+1}: PASS (scaleA={scaleA:.3f}, scaleB={scaleB:.3f})")
        else:
            failed += 1
            print(f"  Trial {trial+1}: FAIL")

print("\n" + "=" * 60)
print(f"Results: {passed}/{passed+failed} PASS")
if failed == 0:
    print("ALL PyTorch quantized weight tests PASSED!")
    print("RTL correctly implements INT8 matmul for realistic DNN weights.")
else:
    print(f"FAILURES: {failed}")
print("=" * 60)
