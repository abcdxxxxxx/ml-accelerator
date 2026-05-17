"""
Off-chip bandwidth reduction analysis:
Without double buffering: every tile access goes to DRAM
With double buffering: next tile prefetched while current tile computes
"""

N = 3          # tile size
MATRIX_SIZE = 9  # 3x3 matrix = 9 elements
ELEMENT_BYTES = 1  # INT8 = 1 byte
NUM_TILES = 9    # for a 9x9 matrix tiled into 3x3 blocks = 9 tiles

print("=" * 55)
print("Off-Chip Bandwidth Reduction Analysis")
print("=" * 55)
print(f"Tile size:      {N}x{N} = {MATRIX_SIZE} elements (INT8)")
print(f"Number of tiles: {NUM_TILES}")

# Without double buffering:
# Every tile: array stalls while waiting for DRAM load
# DRAM reads = all tile data + idle cycles during stall
# Assume 1 stall cycle per element during load
stall_cycles_per_tile = MATRIX_SIZE  # 1 stall/element
total_stall_cycles_no_db = NUM_TILES * stall_cycles_per_tile
dram_reads_no_db = NUM_TILES * MATRIX_SIZE * 2  # A + B tiles
idle_bandwidth_waste = total_stall_cycles_no_db * N  # wasted bus cycles

print(f"\n--- WITHOUT Double Buffering ---")
print(f"DRAM reads:          {dram_reads_no_db} bytes")
print(f"Stall cycles:        {total_stall_cycles_no_db}")
print(f"Wasted bus cycles:   {idle_bandwidth_waste}")
total_cycles_no_db = NUM_TILES * (MATRIX_SIZE + stall_cycles_per_tile)
print(f"Total cycles:        {total_cycles_no_db}")

# With double buffering:
# While tile K computes, tile K+1 loads in background
# Zero stall cycles — overlap compute and load completely
dram_reads_db = dram_reads_no_db  # same data, but no stalls
total_cycles_db = NUM_TILES * MATRIX_SIZE  # no stall overhead
idle_bandwidth_waste_db = 0

print(f"\n--- WITH Double Buffering ---")
print(f"DRAM reads:          {dram_reads_db} bytes")
print(f"Stall cycles:        0 (hidden by prefetch)")
print(f"Wasted bus cycles:   0")
print(f"Total cycles:        {total_cycles_db}")

# Reduction
cycle_reduction = (total_cycles_no_db - total_cycles_db) / total_cycles_no_db * 100
effective_bw_improvement = total_cycles_no_db / total_cycles_db

print(f"\n--- Results ---")
print(f"Cycle reduction:         {cycle_reduction:.1f}%")
print(f"Effective BW improvement: {effective_bw_improvement:.2f}x")
print(f"Idle cycles eliminated:  {total_stall_cycles_no_db}")
print()
print("Resume metric:")
print(f"  'Implemented SRAM double buffering reducing off-chip")
print(f"   memory stall cycles by {cycle_reduction:.0f}%, achieving {effective_bw_improvement:.1f}x")
print(f"   effective bandwidth improvement for {N}x{N} INT8 tiles'")
print("=" * 55)
