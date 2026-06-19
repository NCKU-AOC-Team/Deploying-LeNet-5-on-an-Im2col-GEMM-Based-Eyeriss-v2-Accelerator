# Unified INT8 / INT4 Runtime Mode

This work changes the INT8 and INT4 packed SIMD2 flows from compile-time-selected hardware into one runtime-selectable hardware structure.

The goal is a single elaborated RTL / netlist / bitstream that can run:

- INT8 weight mode
- INT4 packed SIMD2 FULL weight mode

The ROM/COE data image may still differ by mode. That is a data image difference, not a different PE/Psum/Requant hardware structure.

## Modified Files

| File | Purpose |
|---|---|
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | Always includes lane1 datapath/FSM and always instantiates `Psum_Spad_Banked`; runtime `int4_later_weight_mode` enables/disables INT4 lane1 behavior. |
| `FPGA_design/src/Quantizer/Psum_Requantizer.v` | Replaces INT4 requant compile define with runtime `int4_weight_mode` mux. |
| `FPGA_design/src/TOP/TOP.v` | Passes runtime FC weight-data boundaries into `TOP_controller` and passes runtime mode into `Psum_Requantizer`. |
| `FPGA_design/src/TOP/TOP_controller.v` | Uses runtime FC ROM end boundaries instead of compile-time parameters for FC read-done checks. |
| `FPGA_design/src/TOP/TOP_interface.v` | Runtime-selects INT8/INT4 ROM boundaries and unpacking format based on `int4_weight_mode`. |
| `FPGA_design/sim/verilator/Makefile` | Keeps a single unified RTL build; `RUNTIME_INT4=1` selects INT4 data/runtime plusarg, not a different PE/Psum/Requant hardware define. |
| `FPGA_design/sim/verilator/scripts/run_unified_regression.sh` | Runs unified INT8 and INT4 runtime regression and reports expected/actual cycles with PASS/FAIL. |

## Compile Macro to Runtime Mapping

| Old compile-time behavior | New runtime behavior |
|---|---|
| `+define+INT4_PACKED_SIMD2_FULL` selected PE lane1/Psum/FSM hardware. | Lane1/Psum/FSM hardware is always present. `int4_later_weight_mode` controls whether lane1 is active. |
| `+define+INT4_REQUANT_14_7` selected INT4 requant hardware. | `Psum_Requantizer` uses `int4_weight_mode ? data_in[14:7] : data_in[17:10]`. |
| `+define+INT4_AS_INT8_REGEN` affected INT4 flow behavior. | INT4 mode is selected by runtime mode plus INT4 ROM/COE data image. |

The unified INT4 build command was checked with `make -n` and does not contain:

- `+define+INT4_PACKED_SIMD2_FULL`
- `+define+INT4_REQUANT_14_7`

The RTL source tree was also checked for functional precision branches:

```bash
grep -R "ifdef INT4_PACKED_SIMD2_FULL\|ifdef INT4_REQUANT\|ifdef INT4_AS_INT8_REGEN" FPGA_design/src -n
```

Result: no matching functional RTL branch remains under `FPGA_design/src`.

## Later Data Format

### INT8 mode

```text
later_data[15:12] = 4'd0
later_data[11:4]  = INT8 weight
later_data[3:0]   = row/count
```

### INT4 packed SIMD2 FULL mode

```text
later_data[15:12] = lane1 INT4 weight
later_data[11:8]  = lane1 row/count
later_data[7:4]   = lane0 INT4 weight
later_data[3:0]   = lane0 row/count
```

In PE runtime decode:

- INT8 mode: lane0 uses `[11:4]`, lane1 is disabled.
- INT4 mode: lane0 uses sign-extended `[7:4]`, lane1 uses sign-extended `[15:12]`.

## Mode Signal Source

The Verilator harness passes runtime INT4 mode through:

```text
--int4-weight-mode
```

`TOP_interface` drives:

```verilog
input int4_weight_mode
```

Inside `TOP_eyeriss`:

```verilog
int4_former_weight_mode = int4_weight_mode & ctrl_conv_flag;
int4_later_weight_mode  = int4_weight_mode & ctrl_fc_flag;
```

## Test Commands

From WSL:

```bash
cd FPGA_design/sim/verilator

make clean
make sim ITERS=5

make clean
make sim ITERS=5 RUNTIME_INT4=1 INT4_REQUANT=14_7
```

Or run the unified regression script:

```bash
cd FPGA_design/sim/verilator
bash scripts/run_unified_regression.sh
cat out/unified_regression_summary.txt
```

## Baseline vs Unified Results

| Mode | Baseline cycles | Unified cycles | Summary | Output match | Cycle match |
|---|---|---|---|---|---|
| INT8 | `79871, 79850, 77341, 79131, 79245` | `79871, 79850, 77341, 79131, 79245` | `5/5 passed` | PASS | PASS |
| INT4 packed SIMD2 FULL runtime | `72268, 71879, 69770, 71305, 71591` | `72268, 71879, 69770, 71305, 71591` | `5/5 passed` | PASS | PASS |

## Notes

- The unified INT4 flow still selects an INT4 ROM/COE data image. This is expected because INT4 and INT8 weights are different data images.
- The important hardware change is that PE lane1, banked psum support, and requant selection are no longer selected by structural precision compile defines.
- No golden output was changed.
- No output was hard-coded.
