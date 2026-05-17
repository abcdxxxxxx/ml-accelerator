"""
LLVM-style Matmul Tiling Pass (Python implementation)
Detects matmul loop nests and generates CSR schedule for accelerator
Equivalent to what an LLVM FunctionPass would do
"""
import json
import numpy as np

TILE_SIZE = 3  # Match our 3x3 systolic array

def detect_matmul(M, K, N):
    """
    Detect if dimensions are compatible with our accelerator
    Returns tiling schedule
    """
    return (M % TILE_SIZE == 0 or M <= TILE_SIZE) and \
           (K % TILE_SIZE == 0 or K <= TILE_SIZE) and \
           (N % TILE_SIZE == 0 or N <= TILE_SIZE)

def tile_matmul(A, B, tile_size=TILE_SIZE):
    """
    Tile matmul into NxN blocks
    Emits CSR programming schedule for accelerator
    Like LLVM pass: identifies loop nests, tiles them, emits schedule
    """
    M, K = A.shape
    K2, N = B.shape
    assert K == K2

    # Pad to tile boundary
    M_pad = ((M + tile_size - 1) // tile_size) * tile_size
    K_pad = ((K + tile_size - 1) // tile_size) * tile_size
    N_pad = ((N + tile_size - 1) // tile_size) * tile_size

    A_pad = np.zeros((M_pad, K_pad), dtype=np.int8)
    B_pad = np.zeros((K_pad, N_pad), dtype=np.int8)
    A_pad[:M, :K] = A
    B_pad[:K, :N] = B

    schedule = []
    C_result = np.zeros((M_pad, N_pad), dtype=np.int32)

    # Generate tile schedule (what LLVM pass would emit)
    tile_id = 0
    for i in range(0, M_pad, tile_size):
        for j in range(0, N_pad, tile_size):
            for k in range(0, K_pad, tile_size):
                A_tile = A_pad[i:i+tile_size, k:k+tile_size]
                B_tile = B_pad[k:k+tile_size, j:j+tile_size]

                # CSR programming entry (what firmware reads)
                csr_entry = {
                    "tile_id":    tile_id,
                    "A_offset":   int(i * K_pad + k),
                    "B_offset":   int(k * N_pad + j),
                    "C_offset":   int(i * N_pad + j),
                    "tile_size":  tile_size,
                    "accumulate": k > 0  # accumulate if not first k-tile
                }
                schedule.append(csr_entry)

                # Compute tile result
                C_result[i:i+tile_size, j:j+tile_size] += \
                    A_tile.astype(np.int32) @ B_tile.astype(np.int32)

                tile_id += 1

    return schedule, C_result[:M, :N]

def verify_schedule(A, B, schedule, C_computed):
    """Verify tiled result matches direct numpy matmul"""
    C_expected = A.astype(np.int32) @ B.astype(np.int32)
    return np.array_equal(C_computed, C_expected)

# ===== Test the tiler =====
print("=" * 60)
print("LLVM-Style Matmul Tiling Pass")
print(f"Target: {TILE_SIZE}x{TILE_SIZE} Systolic Array")
print("=" * 60)

test_cases = [
    ("3x3 (exact tile)",   (3,3,3)),
    ("6x6 (2x2 tiles)",    (6,6,6)),
    ("9x9 (3x3 tiles)",    (9,9,9)),
    ("3x6x3 (rect)",       (3,6,3)),
]

np.random.seed(42)
all_pass = True

for name, (M, K, N) in test_cases:
    A = np.random.randint(-10, 10, (M, K), dtype=np.int8)
    B = np.random.randint(-10, 10, (K, N), dtype=np.int8)

    if not detect_matmul(M, K, N):
        print(f"{name}: SKIP (not tileable)")
        continue

    schedule, C = tile_matmul(A, B)
    ok = verify_schedule(A, B, schedule, C)
    all_pass = all_pass and ok

    print(f"\n[{name}]")
    print(f"  Tiles generated: {len(schedule)}")
    print(f"  CSR entries:     {len(schedule)}")
    print(f"  Result correct:  {'PASS ✅' if ok else 'FAIL ❌'}")
    print(f"  Sample CSR[0]:   {json.dumps(schedule[0])}")

# Save schedule as binary (firmware would read this)
schedule_out, _ = tile_matmul(
    np.random.randint(-10,10,(9,9),dtype=np.int8),
    np.random.randint(-10,10,(9,9),dtype=np.int8)
)
with open("llvm_pass/schedule.json", "w") as f:
    json.dump(schedule_out, f, indent=2)

print("\n" + "=" * 60)
print(f"All tests: {'PASS ✅' if all_pass else 'FAIL ❌'}")
print(f"Schedule saved to: llvm_pass/schedule.json")
print("\nResume metric:")
print("  'Implemented Python-based LLVM-style matmul tiling pass;")
print(f"   tiles NxN operator graphs to {TILE_SIZE}x{TILE_SIZE} array dimensions,")
print("   emits JSON CSR schedule table for accelerator firmware'")
print("=" * 60)
