import numpy as np

def matrix_multiply_int8(A, B):
    """
    INT8 Matrix Multiply — same as hardware will do
    A: MxK matrix
    B: KxN matrix
    Returns: MxN result (int32 accumulator)
    """
    # Clip to INT8 range
    A = np.clip(A, -128, 127).astype(np.int8)
    B = np.clip(B, -128, 127).astype(np.int8)
    
    # Matrix multiply with int32 accumulator
    C = np.zeros((A.shape[0], B.shape[1]), dtype=np.int32)
    for i in range(A.shape[0]):
        for j in range(B.shape[1]):
            for k in range(A.shape[1]):
                C[i][j] += int(A[i][k]) * int(B[k][j])
    return C

def relu(x):
    """ReLU activation"""
    return np.maximum(0, x)

# Test 1: Simple 3x3 matrix multiply
print("=== Test 1: 3x3 Matrix Multiply ===")
A = np.array([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
], dtype=np.int8)

B = np.array([
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 1]
], dtype=np.int8)

C = matrix_multiply_int8(A, B)
print(f"A =\n{A}")
print(f"B (Identity) =\n{B}")
print(f"C = A*B =\n{C}")
print(f"Expected: same as A ✅" if np.array_equal(C, A) else "FAIL ❌")

# Test 2: ReLU
print("\n=== Test 2: ReLU ===")
C2 = np.array([[-5, 3], [0, -2]], dtype=np.int32)
R = relu(C2)
print(f"Input:  {C2}")
print(f"Output: {R}")
print(f"Expected: [[0,3],[0,0]] ✅" if np.array_equal(R, [[0,3],[0,0]]) else "FAIL ❌")

# Test 3: Random INT8 test
print("\n=== Test 3: Random 4x4 ===")
np.random.seed(42)
A3 = np.random.randint(-128, 127, (4,4), dtype=np.int8)
B3 = np.random.randint(-128, 127, (4,4), dtype=np.int8)
C3 = matrix_multiply_int8(A3, B3)
C3_numpy = A3.astype(np.int32) @ B3.astype(np.int32)
print(f"Match with numpy: {'✅ PASS' if np.array_equal(C3, C3_numpy) else '❌ FAIL'}")
print(f"Result shape: {C3.shape}")
print(f"Max value: {C3.max()}, Min value: {C3.min()}")

print("\n=== Golden Model Ready! ===")
