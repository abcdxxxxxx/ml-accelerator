import numpy as np
import subprocess
import os
import sys

def matrix_multiply_int8(A, B):
    A = np.clip(A, -128, 127).astype(np.int8)
    B = np.clip(B, -128, 127).astype(np.int8)
    return A.astype(np.int32) @ B.astype(np.int32)

def generate_skewed_inputs(A, B, N=3):
    """Generate cycle-by-cycle skewed inputs for systolic array"""
    cycles = []
    total_cycles = 2*N + N - 1  # 7 cycles for N=3

    for c in range(total_cycles):
        a_row = [0] * N
        b_col = [0] * N
        for i in range(N):
            k = c - i  # skew: row i starts at cycle i
            if 0 <= k < N:
                a_row[i] = int(A[i][k])
        for j in range(N):
            k = c - j  # skew: col j starts at cycle j
            if 0 <= k < N:
                b_col[j] = int(B[k][j])
        cycles.append((a_row, b_col))
    return cycles

def write_testbench(A, B, test_id):
    """Generate SV testbench for given matrices"""
    N = 3
    cycles = generate_skewed_inputs(A, B, N)

    tb = f"""
module validate_tb_{test_id};
logic clk, reset, enable;
logic signed [7:0] a_in [3];
logic signed [7:0] b_in [3];
logic signed [31:0] acc_out [3][3];

systolic_array #(.N(3)) dut (.*);
always #5 clk = ~clk;

initial begin
    clk=0; reset=1; enable=0;
    foreach(a_in[i]) a_in[i]=0;
    foreach(b_in[j]) b_in[j]=0;
    @(posedge clk); #1;
    reset=0; enable=1;
"""
    for a_row, b_col in cycles:
        tb += f"    a_in[0]={a_row[0]}; a_in[1]={a_row[1]}; a_in[2]={a_row[2]};\n"
        tb += f"    b_in[0]={b_col[0]}; b_in[1]={b_col[1]}; b_in[2]={b_col[2]};\n"
        tb += "    @(posedge clk); #1;\n"

    tb += "    foreach(a_in[i]) a_in[i]=0;\n"
    tb += "    foreach(b_in[j]) b_in[j]=0;\n"
    tb += "    repeat(6) @(posedge clk); #1;\n"

    # Print results
    for i in range(N):
        for j in range(N):
            tb += f'    $display("OUT_{i}_{j}=%0d", acc_out[{i}][{j}]);\n'

    tb += "    $finish;\nend\nendmodule\n"
    return tb

def run_test(A, B, test_id):
    """Run one test: write TB, simulate, compare with numpy"""
    tb_code = write_testbench(A, B, test_id)

    tb_path = f"/tmp/validate_tb_{test_id}.sv"
    with open(tb_path, 'w') as f:
        f.write(tb_code)

    # Compile
    result = subprocess.run(
        ["verilator", "--binary", "--top-module", f"validate_tb_{test_id}",
         "rtl/pe.sv", "rtl/systolic_array.sv", tb_path,
         "-Wno-width", "-Wno-timescalemod",
         "--Mdir", f"/tmp/obj_{test_id}"],
        capture_output=True, text=True, cwd=os.getcwd()
    )
    if result.returncode != 0:
        return False, "Compile failed"

    # Run
    result = subprocess.run(
        [f"/tmp/obj_{test_id}/Vvalidate_tb_{test_id}"],
        capture_output=True, text=True
    )

    # Parse output
    rtl_out = np.zeros((3,3), dtype=np.int32)
    for line in result.stdout.strip().split('\n'):
        if line.startswith('OUT_'):
            parts = line.split('=')
            coords = parts[0].replace('OUT_','').split('_')
            i, j = int(coords[0]), int(coords[1])
            rtl_out[i][j] = int(parts[1])

    # Compare with numpy
    expected = matrix_multiply_int8(A, B)
    match = np.array_equal(rtl_out, expected)
    return match, rtl_out, expected

# ===== Run 50 random tests =====
print("Running 50 random INT8 matrix multiply tests...")
print("=" * 50)

np.random.seed(42)
passed = 0
failed = 0

for test_id in range(50):
    A = np.random.randint(-10, 10, (3,3), dtype=np.int8)
    B = np.random.randint(-10, 10, (3,3), dtype=np.int8)

    result = run_test(A, B, test_id)
    match = result[0]

    if match:
        passed += 1
        print(f"Test {test_id+1:02d}: PASS")
    else:
        failed += 1
        print(f"Test {test_id+1:02d}: FAIL")
        print(f"  Expected: {result[2]}")
        print(f"  Got:      {result[1]}")

print("=" * 50)
print(f"Results: {passed}/50 PASS, {failed}/50 FAIL")
if failed == 0:
    print("ALL TESTS PASSED! RTL matches numpy golden model exactly.")
    sys.exit(0)
else:
    print("FAILURES DETECTED!")
    sys.exit(1)
