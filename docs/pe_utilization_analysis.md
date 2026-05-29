# PE Utilization & Per-Layer Cycle Analysis (Eyeriss-v2 + LeNet-5)

**Question (work items C.4 / C.3):** Where do the cycles go, and is the
accelerator compute-bound or data-movement-bound? The answer decides which
innovation direction is worth pursuing.

**Method:** `make trace_public ITERS=1` (one MNIST inference, `--public-flat-rw`
exposes internal signals) → `analyze_pe_vcd.py dump.vcd`. We read two existing
FSMs per cycle: the **PE core datapath** (`Processing_Element_core.PE_state`, 9
PEs) for true MAC activity, and the **TOP controller** (`state` + `layer_count`)
for per-layer phases. No RTL was modified.

**Sample:** 1 image, **93,388 cycles** total; 9 PEs → 840,492 PE-cycles.
> Single-pattern snapshot — structural conclusions are stable, exact ratios to be
> confirmed across more patterns (incl. a fail case).

---

## Finding 1 — The PE array is almost never computing (2.8 % MAC)

Where every PE-cycle goes (datapath core FSM, aggregate over 9 PEs):

```
IDLE        84.5%  ##################################################  (incl. spad load)
fetch        9.9%  ######    operand reads (addr + data)
WRITE_BACK   2.8%  ##        psum accumulate / write back
DO_MAC       2.8%  ##        <-- the actual multiply
```

- **True compute efficiency = DO_MAC / all PE-cycles = 2.8 %.**
- PE active (non-idle) only 15.5 % — and even *inside* that active window:

```
within ACTIVE (15.5%):   fetch 64%  ############### | MAC 18% ##### | write-back 18% #####
```

- **~5.5 cycles per MAC, of which only 1 is the multiply.** Each MAC needs
  `RD_LAT_ADDR → RD_LAT_DAT1 → RD_LAT_DAT2 (SRAM wait) → DO_MAC → WRITE_BACK`.
- Only **23,650 MACs** for the whole image vs. *hundreds of thousands* for dense
  LeNet-5 → **CSC zero-skip + sparse MNIST input + ReLU already remove >90 % of
  multiplies.** The low DO_MAC% is partly the sparsity feature working as
  designed, partly per-MAC overhead.

> Validity check (decode is correct): `RD_LAT_DAT1 = RD_LAT_DAT2 = DO_MAC =
> WRITE_BACK` (a no-branch 4-cycle chain), and core IDLE (84.5 %) ≈ controller
> IDLE+LOAD (84.5 %). Fully self-consistent.

---

## Finding 2 — Per-layer: FC layers are dominated by weight loading

| Layer | Type | % of run | Dominant phase |
|------:|------|---------:|----------------|
| 0 | conv1 | 36.5 % | **CAL 62 %** (compute-heavy) |
| 1 | conv2 | 23.9 % | CAL 51 % / LOAD_GLB 39 % |
| 2 | FC1   | 29.1 % | **LOAD_GLB 87 %** (weight load) |
| 3 | FC2   |  9.3 % | **LOAD_GLB 90 %** (weight load) |
| 4 | FC3   |  1.2 % | LOAD_GLB 69 % |

Global phase split (whole run):

```
load     45.0%  #############     <-- biggest single bucket (FC weights)
compute  39.6%  ############
output    5.3%  ##
other     5.4%  ##  (incl. startup: reset + 784B image load)
pool      4.8%  #
```

FC weight matrices are loaded once per use with little reuse → **memory-bound**.

---

## Finding 3 — Load imbalance across the 3×3 PE array

MACs per PE range **1,668 (pe10) … 4,471 (pe02) — a 2.7× spread**; row 0 works
markedly more than rows 1–2. The shared `iact` (former) reads are uniform, so the
imbalance comes from the weight/sparsity distribution and the GEMM mapping.

---

## Bottom line: overhead / data-movement bound — NOT compute bound

Three compounding layers of waste:

1. **Macro:** 45 % of the run is data loading (FC weights dominate).
2. **Meso:** even during the nominal compute phase the array is only ~40 % active.
3. **Micro:** each real MAC costs ~5.5 cycles (operand fetch + SRAM latency).

→ Effective MAC utilization ≈ **2.8 %**. The multipliers are essentially never
the bottleneck.

### Implication for the innovation direction

| Candidate | Verdict | Why |
|-----------|:------:|-----|
| Faster / low-precision multiplier (#1 mult, #3) | ❌ | Multiplier busy 2.8 % — speeding it up buys ~nothing |
| **Weight load / compression (esp. FC)** | ✅✅ | FC layers spend 87–90 % loading weights |
| **Per-MAC inner-loop pipelining** (overlap fetch+MAC, drop SRAM wait) | ✅ | 5.5 cyc/MAC → fewer directly shortens compute |
| **Dataflow / mapping / load balancing** | ✅ | <40 % active in CAL; 2.7× PE imbalance |
| More activation sparsity (#2 on activations) | ⚠️ | Already removes >90 % of MACs — little headroom |

**One-line conclusion:** the bottleneck is *feeding the array* (FC weights) +
*per-MAC fixed overhead* + *array utilization* — not arithmetic throughput.
Innovation should target dataflow / weight handling / inner-loop pipelining and
**not** multiplier precision.

---

### Reproduce
```bash
cd FPGA_design/sim/verilator
make trace_public ITERS=1
python3 analyze_pe_vcd.py dump.vcd
```
