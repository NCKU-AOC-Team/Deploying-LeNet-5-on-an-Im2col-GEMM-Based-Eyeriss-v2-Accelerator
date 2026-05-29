#!/usr/bin/env python3
# =============================================================================
# analyze_pe_vcd.py — first-look HW-utilization analysis for the Eyeriss-v2 +
# LeNet-5 Verilator run.
#
# Consumes the dump.vcd produced by `make trace_public ITERS=1` and reports:
#
#   Q1  PE activity: per-cycle PE_state histogram for all 9 PEs (pe00..pe22),
#       grouped into idle / operand-fetch / compute(DO_MAC) / write-back, plus
#       the headline numbers active% and DO_MAC% (PE compute efficiency).
#
#   Q2  Per-layer / per-phase cycles: a cycles[layer_count][state] matrix from
#       the TOP_controller FSM, with per-layer totals and a compute-vs-load split.
#
# Design notes:
#   * Pure stdlib (no pyvcd) so it runs as-is in the TA Docker (Python 3.11).
#   * Signals are discovered BY NAME, not by hard-coded mangled paths, so the
#     script is robust to the exact instance hierarchy. `layer_count` exists
#     only inside TOP_controller, so the `state` reg sharing its scope is the
#     top-level FSM (avoids colliding with other modules' `state`).
#   * One sample per clock rising edge: at each timestamp boundary we compare
#     clock; on 0->1 we record the current PE_state of all 9 PEs and the
#     current (layer_count, state) of the controller.
#   * What got matched is printed up top so you can sanity-check discovery.
#
# Usage:  python3 analyze_pe_vcd.py [dump.vcd]
# =============================================================================
import re
import sys
from collections import defaultdict

# ---- FSM decode tables (from the RTL) ---------------------------------------
PE_STATES = {0: "IDLE", 1: "RD_FRM_ADDR", 2: "RD_FRM_DATA", 3: "RD_LAT_ADDR",
             4: "RD_LAT_DAT1", 5: "RD_LAT_DAT2", 6: "DO_MAC", 7: "WRITE_BACK"}
PE_ORDER = [0, 1, 2, 3, 4, 5, 6, 7]
PE_BUCKET = {0: "idle",
             1: "fetch", 2: "fetch", 3: "fetch", 4: "fetch", 5: "fetch",
             6: "compute", 7: "writeback"}

# Per-PE controller FSM (Processing_Element_Controller.PE_state, 2-bit)
PE_CTRL_STATES = {0: "IDLE", 1: "LOAD", 2: "CAL"}
PE_CTRL_ORDER = [0, 1, 2]

CTRL_STATES = {0: "IDLE", 1: "LOAD_IFMAP", 2: "LOAD_GLB", 3: "LOAD_PE",
               4: "CAL", 5: "PSUM_ACC", 6: "READ_OUT_PSUM", 7: "POOLING",
               8: "LAYER_DONE", 63: "DONE"}
CTRL_ORDER = [0, 1, 2, 3, 4, 5, 6, 7, 8, 63]
CTRL_BUCKET = {1: "load", 2: "load", 3: "load",
               4: "compute", 5: "compute",
               6: "output", 7: "pool"}  # IDLE/LAYER_DONE/DONE -> "other"

PE_RE = re.compile(r"pe(\d)(\d)")


def parse_header(f):
    """Read $var declarations (tracking $scope nesting) up to $enddefinitions.
    Returns the vcd-id of each signal we care about, plus a discovery report."""
    scope = []
    pe_cands = defaultdict(list)  # label -> [(vid, low_path)]  (core + controller)
    layer_count_cands = []      # (vid, scope_tuple, fullpath)
    state_cands = []            # (vid, width, scope_tuple, fullpath)
    clock_cands = []            # (vid, depth, fullpath)

    for line in f:
        s = line.strip()
        if not s:
            continue
        if s.startswith("$scope"):
            scope.append(s.split()[2])
        elif s.startswith("$upscope"):
            if scope:
                scope.pop()
        elif s.startswith("$var"):
            # $var <type> <width> <id> <name> [<bitrange>] $end
            p = s.split()
            width, vid, name = int(p[2]), p[3], p[4]
            full = "/".join(scope + [name])
            low = full.lower()
            if name == "PE_state":
                m = PE_RE.search(low)
                label = "pe%s%s" % (m.group(1), m.group(2)) if m else full
                pe_cands[label].append((vid, low))
            elif name == "layer_count":
                layer_count_cands.append((vid, tuple(scope), full))
            elif name == "state":
                state_cands.append((vid, width, tuple(scope), full))
            elif name in ("clock", "clk"):
                clock_cands.append((vid, len(scope), full))
        elif s.startswith("$enddefinitions"):
            break

    # Resolve layer_count: prefer one whose scope mentions a controller.
    layer_count = None
    lc_scope = None
    lc_path = None
    for vid, sc, full in layer_count_cands:
        if layer_count is None or "controller" in full.lower():
            layer_count, lc_scope, lc_path = vid, sc, full
            if "controller" in full.lower():
                break

    # Resolve controller state: the `state` reg sharing layer_count's scope.
    ctrl_state = None
    ctrl_path = None
    if lc_scope is not None:
        for vid, width, sc, full in state_cands:
            if sc == lc_scope:
                ctrl_state, ctrl_path = vid, full
                break
    if ctrl_state is None:  # fallback: widest `state` under a *controller scope
        best = None
        for vid, width, sc, full in state_cands:
            if "controller" in full.lower() and width >= 5:
                if best is None or width > best[1]:
                    best = (vid, width, full)
        if best:
            ctrl_state, ctrl_path = best[0], best[2]

    # Resolve clock: the shallowest one (top-level).
    clock = None
    clk_path = None
    for vid, depth, full in sorted(clock_cands, key=lambda x: x[1]):
        clock, clk_path = vid, full
        break

    # Each ProcessingElement has TWO regs named PE_state: the datapath core
    # (3-bit, 8 states incl DO_MAC) and the controller (2-bit IDLE/LOAD/CAL).
    # Use the core for Q1 (real MAC detail); keep the controller for Q1b.
    pe_core, pe_ctrl = {}, {}
    for label, cands in pe_cands.items():
        core = next((vid for vid, low in cands if "core" in low), None)
        ctrl = next((vid for vid, low in cands if "controller" in low), None)
        if core is None and ctrl is None and cands:
            core = cands[0][0]  # fallback: whatever exists
        if core is not None:
            pe_core[label] = core
        if ctrl is not None:
            pe_ctrl[label] = ctrl

    report = {
        "clock": clk_path, "layer_count": lc_path, "ctrl_state": ctrl_path,
        "pe_core": sorted(pe_core.keys()),
        "pe_ctrl": sorted(pe_ctrl.keys()),
    }
    return pe_core, pe_ctrl, ctrl_state, layer_count, clock, report


def scan_values(f, pe_core, pe_ctrl, ctrl_state, layer_count, clock):
    """Stream the value-change section, counting one sample per clock rising
    edge. Returns (cycles, pe_hist, pe_ctrl_hist, ctrl_hist)."""
    tracked = set(pe_core.values()) | set(pe_ctrl.values())
    tracked.update(v for v in (ctrl_state, layer_count, clock) if v)

    cur = {}                                   # vid -> int value (None == x/z)
    pe_hist = defaultdict(lambda: defaultdict(int))       # core: label->state->cnt
    pe_ctrl_hist = defaultdict(lambda: defaultdict(int))  # controller: label->cnt
    ctrl_hist = defaultdict(int)                          # (layer, state) -> count
    cycles = 0
    clk_prev = 0

    def sample():
        nonlocal cycles
        cycles += 1
        for label, vid in pe_core.items():
            pe_hist[label][cur.get(vid)] += 1
        for label, vid in pe_ctrl.items():
            pe_ctrl_hist[label][cur.get(vid)] += 1
        ctrl_hist[(cur.get(layer_count), cur.get(ctrl_state))] += 1

    def edge_check():
        nonlocal clk_prev
        clk = cur.get(clock)
        clk = 0 if clk is None else clk
        if clk_prev == 0 and clk == 1:   # rising edge == one clock cycle
            sample()
        clk_prev = clk

    for line in f:
        s = line.strip()
        if not s:
            continue
        c = s[0]
        if c == "#":                     # timestamp boundary -> prev ts settled
            edge_check()
        elif c in "01xzXZ":              # scalar value change: <val><id>
            vid = s[1:]
            if vid in tracked:
                cur[vid] = int(c) if c in "01" else None
        elif c in "bB":                  # vector value change: b<bits> <id>
            parts = s.split()
            if len(parts) >= 2 and parts[1] in tracked:
                try:
                    cur[parts[1]] = int(parts[0][1:], 2)
                except ValueError:
                    cur[parts[1]] = None
        # ignore real (r...), $dumpvars/$end markers, comments
    edge_check()                         # close the final timestamp
    return cycles, pe_hist, pe_ctrl_hist, ctrl_hist


def pct(n, d):
    return (100.0 * n / d) if d else 0.0


def report_pe(cycles, pe_hist):
    print("\n=== Q1: PE datapath activity — core FSM (per cycle, %d PEs) ===" % len(pe_hist))
    hdr = "%-6s" % "PE" + "".join("%12s" % PE_STATES[s] for s in PE_ORDER)
    hdr += "%9s%9s" % ("active%", "DO_MAC%")
    print(hdr)
    agg = defaultdict(int)
    for label in sorted(pe_hist):
        h = pe_hist[label]
        tot = sum(h.values())
        row = "%-6s" % label + "".join("%12d" % h.get(s, 0) for s in PE_ORDER)
        active = tot - h.get(0, 0)
        row += "%8.1f%%%8.1f%%" % (pct(active, tot), pct(h.get(6, 0), tot))
        print(row)
        for s, n in h.items():
            agg[s] += n

    tot = sum(agg.values())
    row = "%-6s" % "ALL" + "".join("%12d" % agg.get(s, 0) for s in PE_ORDER)
    active = tot - agg.get(0, 0)
    row += "%8.1f%%%8.1f%%" % (pct(active, tot), pct(agg.get(6, 0), tot))
    print("-" * len(hdr))
    print(row)

    buckets = defaultdict(int)
    for s, n in agg.items():
        buckets[PE_BUCKET.get(s, "other")] += n
    print("\nAggregate buckets over all PEs (PE-cycles = %d):" % tot)
    for b in ("idle", "fetch", "compute", "writeback", "other"):
        if buckets.get(b):
            print("  %-10s %12d  (%5.1f%%)" % (b, buckets[b], pct(buckets[b], tot)))
    print("\n  >> PE compute efficiency (DO_MAC / all PE-cycles) = %.1f%%"
          % pct(agg.get(6, 0), tot))
    print("  >> PE active ratio (non-idle)                      = %.1f%%"
          % pct(tot - agg.get(0, 0), tot))


def report_pe_ctrl(cycles, hist):
    """Coarse PE phase from the per-PE controller FSM (IDLE/LOAD/CAL). LOAD
    separates 'spad being loaded' from genuine idle, which the core FSM's
    single IDLE state lumps together."""
    print("\n=== Q1b: PE controller phase (per cycle, %d PEs) ===" % len(hist))
    agg = defaultdict(int)
    for label in hist:
        for s, n in hist[label].items():
            agg[s] += n
    tot = sum(agg.values())
    for s in PE_CTRL_ORDER:
        v = agg.get(s, 0)
        print("  %-6s %11d  (%5.1f%%)" % (PE_CTRL_STATES.get(s, "S%s" % s), v, pct(v, tot)))
    other = tot - sum(agg.get(s, 0) for s in PE_CTRL_ORDER)
    if other:
        print("  %-6s %11d  (%5.1f%%)" % ("other", other, pct(other, tot)))
    print("  >> PE busy (LOAD+CAL) = %.1f%%" % pct(tot - agg.get(0, 0), tot))


def report_ctrl(cycles, ctrl_hist):
    """Per-layer breakdown: one block per layer, each state listed (cycles
    high->low) with %-of-layer and a bar, plus a phase summary line."""
    print("\n=== Q2: per-layer cycle breakdown (TOP_controller) ===")
    print("total counted cycles: %d\n" % cycles)
    layers = sorted({k[0] for k in ctrl_hist}, key=lambda x: (x is None, x))
    states_seen = {k[1] for k in ctrl_hist}
    first_layer = layers[0] if layers else None
    BARW = 30  # bar width = 100%

    def sname(s):
        return "x" if s is None else CTRL_STATES.get(s, "S%d" % s)

    def bar(p):
        return "#" * int(round(p / 100.0 * BARW))

    gb = defaultdict(int)
    for ly in layers:
        rows = [(s, ctrl_hist.get((ly, s), 0)) for s in states_seen]
        rows = sorted([(s, v) for s, v in rows if v > 0], key=lambda x: -x[1])
        ltot = sum(v for _, v in rows)
        print("--- Layer %s : %d cycles (%.1f%% of run) ---"
              % ("x" if ly is None else ly, ltot, pct(ltot, cycles)))
        b = defaultdict(int)
        for s, v in rows:
            p = pct(v, ltot)
            note = "  <- startup (reset+image load)" if (s == 0 and ly == first_layer) else ""
            print("  %-14s %9d  %5.1f%%  |%-*s|%s" % (sname(s), v, p, BARW, bar(p), note))
            b[CTRL_BUCKET.get(s, "other")] += v
        for k, v in b.items():
            gb[k] += v
        print("  phase:  compute %.1f%%   load %.1f%%   output %.1f%%   pool %.1f%%   other %.1f%%\n"
              % (pct(b["compute"], ltot), pct(b["load"], ltot), pct(b["output"], ltot),
                 pct(b["pool"], ltot), pct(b["other"], ltot)))

    gt = sum(gb.values())
    print("=== Global phase split (compute=CAL+PSUM_ACC, load=IFMAP+GLB+PE) ===")
    for k in ("compute", "load", "output", "pool", "other"):
        v = gb.get(k, 0)
        p = pct(v, gt)
        print("  %-8s %9d  %5.1f%%  |%-*s|" % (k, v, p, BARW, bar(p)))
    print("\n  (note: IDLE in the first layer ~= reset/image-load startup;"
          " exclude from efficiency ratios.)")


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else "dump.vcd"
    try:
        f = open(path)
    except OSError as e:
        sys.exit("ERROR: cannot open %s (%s)\nRun `make trace_public ITERS=1` first."
                 % (path, e))

    with f:
        pe_core, pe_ctrl, ctrl_state, layer_count, clock, rep = parse_header(f)

        print("=== Signal discovery (sanity-check these) ===")
        print("  clock         : %s" % rep["clock"])
        print("  layer_count   : %s" % rep["layer_count"])
        print("  ctrl state    : %s" % rep["ctrl_state"])
        print("  PE core    x%-2d: %s" % (len(rep["pe_core"]),
                                          ", ".join(rep["pe_core"]) or "(none!)"))
        print("  PE ctrl    x%-2d: %s" % (len(rep["pe_ctrl"]),
                                          ", ".join(rep["pe_ctrl"]) or "(none)"))
        problems = []
        if not clock:
            problems.append("no clock signal found")
        if len(rep["pe_core"]) != 9:
            problems.append("expected 9 PE cores, found %d" % len(rep["pe_core"]))
        if not ctrl_state:
            problems.append("controller 'state' not found")
        if not layer_count:
            problems.append("'layer_count' not found")
        if problems:
            print("\n  !! WARNING: " + "; ".join(problems))
            print("     (results below may be partial — tell me and I'll adjust matching.)")

        cycles, pe_hist, pe_ctrl_hist, ctrl_hist = scan_values(
            f, pe_core, pe_ctrl, ctrl_state, layer_count, clock)

    if pe_hist:
        report_pe(cycles, pe_hist)
    if pe_ctrl_hist:
        report_pe_ctrl(cycles, pe_ctrl_hist)
    if ctrl_hist:
        report_ctrl(cycles, ctrl_hist)


if __name__ == "__main__":
    main()
