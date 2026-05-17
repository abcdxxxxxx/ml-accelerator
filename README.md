# ML Accelerator — 3x3 Systolic Array (INT8)

Systolic-array based DNN inference accelerator in SystemVerilog.

## Architecture
AXI4-Lite CSR → Double Buffer (SRAM) → 3x3 Systolic Array → Output
↑
Load next tile while current tile computes

## Modules

| Module | Description |
|--------|-------------|
| `pe.sv` | Processing Element — INT8 MAC (acc += a * b) |
| `systolic_array.sv` | 3x3 array of PEs with skewed data feeding |
| `sram.sv` | Single-port synchronous SRAM |
| `double_buffer.sv` | 2-bank SRAM — zero idle cycles between tiles |
| `axi4_lite_slave.sv` | AXI4-Lite CSR interface (CTRL, STATUS, TILE_SIZE) |

## Verification

- PE testbench: MAC accumulation + negative values ✅
- Systolic array: Identity × B = B verified ✅
- Double buffer: Zero idle cycles between tiles ✅
- AXI4-Lite: Read/write CSR transactions ✅
- **Golden model: 50/50 random INT8 tests vs numpy — all PASS ✅**

## Synthesis (Yosys)

| Module | Gates |
|--------|-------|
| PE (1x) | 1,107 cells |
| Systolic Array (3x3, estimated) | ~9,963 cells |
| Flip-flops per PE | 48 |

## Run Simulation

```bash
# PE test
verilator --binary --top-module pe_tb rtl/pe.sv tb/pe_tb.sv && ./obj_dir/Vpe_tb

# Systolic array test
verilator --binary --top-module systolic_tb rtl/pe.sv rtl/systolic_array.sv tb/systolic_tb.sv && ./obj_dir/Vsystolic_tb

# Double buffer test
verilator --binary --top-module double_buffer_tb rtl/sram.sv rtl/double_buffer.sv tb/double_buffer_tb.sv -Wno-width && ./obj_dir/Vdouble_buffer_tb

# AXI4-Lite test
verilator --binary --top-module axi4_tb rtl/axi4_lite_slave.sv tb/axi4_tb.sv -Wno-width --timing && ./obj_dir/Vaxi4_tb

# 50-test golden model validation
python3 python/validate_rtl.py
```

## Run Synthesis

```bash
yosys scripts/synth.ys
```

## Tools

- SystemVerilog / Verilog
- Verilator v5.032
- Yosys v0.52
- Python 3 + numpy
