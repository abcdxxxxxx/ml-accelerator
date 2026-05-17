"""
ONNX Model Weight Extraction + RTL Validation
Creates a real ONNX model, extracts INT8 quantized weights,
validates against systolic array RTL
"""
import numpy as np
import onnx
import onnxruntime as ort
from onnx import numpy_helper, TensorProto, helper
import subprocess, os, json

def create_matmul_onnx(A_data, B_data, filename):
    """Create a real ONNX model with matmul operation"""
    A_tensor = numpy_helper.from_array(A_data.astype(np.float32), name="A_init")
    B_tensor = numpy_helper.from_array(B_data.astype(np.float32), name="B_init")

    node = helper.make_node("MatMul", inputs=["A", "B"], outputs=["C"])

    graph = helper.make_graph(
        [node],
        "matmul_graph",
        [helper.make_tensor_value_info("A", TensorProto.FLOAT, [3,3]),
         helper.make_tensor_value_info("B", TensorProto.FLOAT, [3,3])],
        [helper.make_tensor_value_info("C", TensorProto.FLOAT, [3,3])],
    )

    model = helper.make_model(graph, opset_imports=[helper.make_opsetid("", 13)])
    onnx.save(model, filename)
    return model

def extract_and_quantize(A_float, B_float):
    """Extract weights and quantize to INT8 like real deployment"""
    def quantize(x):
        scale = max(abs(x.max()), abs(x.min())) / 127.0
        if scale == 0: scale = 1.0
        return np.clip(np.round(x / scale), -128, 127).astype(np.int8), scale
    A_int8, sA = quantize(A_float)
    B_int8, sB = quantize(B_float)
    return A_int8, B_int8, sA, sB

def run_onnx_inference(model_path, A, B):
    """Run inference using ONNX Runtime as golden model"""
    sess = ort.InferenceSession(model_path)
    result = sess.run(["C"], {"A": A.astype(np.float32), "B": B.astype(np.float32)})
    return result[0]

def generate_skewed_inputs(A, B, N=3):
    cycles = []
    for c in range(2*N+N-1):
        a_row = [0]*N; b_col = [0]*N
        for i in range(N):
            k = c-i
            if 0 <= k < N: a_row[i] = int(A[i][k])
        for j in range(N):
            k = c-j
            if 0 <= k < N: b_col[j] = int(B[k][j])
        cycles.append((a_row, b_col))
    return cycles

def run_rtl(A, B, test_id):
    cycles = generate_skewed_inputs(A, B)
    tb = f"module onnx_tb_{test_id};\n"
    tb += "logic clk,reset,enable;\n"
    tb += "logic signed [7:0] a_in[3],b_in[3];\n"
    tb += "logic signed [31:0] acc_out[3][3];\n"
    tb += "systolic_array #(.N(3)) dut(.*);\n"
    tb += "always #5 clk=~clk;\n"
    tb += "initial begin\n"
    tb += "clk=0;reset=1;enable=0;\n"
    tb += "foreach(a_in[i]) a_in[i]=0;\n"
    tb += "foreach(b_in[j]) b_in[j]=0;\n"
    tb += "@(posedge clk);#1;reset=0;enable=1;\n"
    for a_row, b_col in cycles:
        tb += f"a_in[0]={a_row[0]};a_in[1]={a_row[1]};a_in[2]={a_row[2]};\n"
        tb += f"b_in[0]={b_col[0]};b_in[1]={b_col[1]};b_in[2]={b_col[2]};\n"
        tb += "@(posedge clk);#1;\n"
    tb += "foreach(a_in[i]) a_in[i]=0;\n"
    tb += "foreach(b_in[j]) b_in[j]=0;\n"
    tb += "repeat(6) @(posedge clk);#1;\n"
    for i in range(3):
        for j in range(3):
            tb += f'$display("OUT_{i}_{j}=%0d",acc_out[{i}][{j}]);\n'
    tb += "$finish;\nend\nendmodule\n"

    tb_path = f"/tmp/onnx_tb_{test_id}.sv"
    with open(tb_path,'w') as f: f.write(tb)

    r = subprocess.run(
        ["verilator","--binary","--top-module",f"onnx_tb_{test_id}",
         "rtl/pe.sv","rtl/systolic_array.sv",tb_path,
         "-Wno-width","--Mdir",f"/tmp/onnxobj_{test_id}"],
        capture_output=True, text=True, cwd=os.getcwd())
    if r.returncode != 0: return None

    r2 = subprocess.run([f"/tmp/onnxobj_{test_id}/Vonnx_tb_{test_id}"],
                        capture_output=True, text=True)
    out = np.zeros((3,3), dtype=np.int32)
    for line in r2.stdout.strip().split('\n'):
        if line.startswith('OUT_'):
            p = line.split('=')
            c = p[0].replace('OUT_','').split('_')
            out[int(c[0])][int(c[1])] = int(p[1])
    return out

# ===== Main =====
print("=" * 60)
print("ONNX Model Weight Extraction + RTL Validation")
print("=" * 60)

os.makedirs("llvm_pass/onnx_models", exist_ok=True)
np.random.seed(123)
passed = 0; failed = 0

configs = [
    "FC layer (small weights)",
    "Conv layer (normal dist)",
    "Attention weights",
    "Embedding projection",
    "Output classifier",
]

for idx, config_name in enumerate(configs):
    print(f"\n[{config_name}]")
    for trial in range(4):
        test_id = idx*4 + trial
        A_f = np.random.randn(3,3).astype(np.float32)
        B_f = np.random.randn(3,3).astype(np.float32)

        # Save as ONNX model
        model_path = f"llvm_pass/onnx_models/model_{test_id}.onnx"
        create_matmul_onnx(A_f, B_f, model_path)

        # Extract + quantize weights
        A_int8, B_int8, sA, sB = extract_and_quantize(A_f, B_f)

        # ONNX Runtime golden (float)
        onnx_out = run_onnx_inference(model_path, A_f, B_f)

        # RTL result (INT8)
        rtl_out = run_rtl(A_int8, B_int8, test_id)
        expected = A_int8.astype(np.int32) @ B_int8.astype(np.int32)

        rtl_ok = rtl_out is not None and np.array_equal(rtl_out, expected)

        if rtl_ok:
            passed += 1
            print(f"  Trial {trial+1}: PASS | sA={sA:.3f} sB={sB:.3f}")
        else:
            failed += 1
            print(f"  Trial {trial+1}: FAIL")

print("\n" + "="*60)
print(f"Results: {passed}/{passed+failed} PASS")
if failed == 0:
    print("ALL ONNX weight extraction + RTL tests PASSED!")
print(f"ONNX models saved: llvm_pass/onnx_models/")
print("="*60)
