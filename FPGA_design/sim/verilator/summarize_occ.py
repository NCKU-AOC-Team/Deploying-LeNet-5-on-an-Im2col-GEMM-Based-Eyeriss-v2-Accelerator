#!/usr/bin/env python3
import re
import sys
from collections import defaultdict


OCC_RE = re.compile(
    r"^\[occ\]\s+(?P<path>.*?)\s+writes=(?P<writes>\d+)\s+"
    r"max_write_addr=(?P<max>\d+)\s+depth=(?P<depth>\d+)\s+width=(?P<width>\d+)"
)


def classify(path):
    if "Psum_Rearrange_BRAM" in path:
        return "TOP Psum_Rearrange"
    if "TOP_integration.u0.u" in path:
        return "TOP ifmap BRAM"
    if "Iact_Data_SRAM_BRAM" in path:
        return "GLB Iact data SRAM"
    if "Iact_Addr_SRAM_BRAM" in path:
        return "GLB Iact addr SRAM"
    if "Psum_Data_SRAM_BRAM" in path:
        return "GLB Psum SRAM"
    if "Iact_DATA_Spad_BRAM" in path:
        return "PE Iact data SPad"
    if "Weight_DATA_Spad_BRAM" in path:
        return "PE Weight data SPad"
    if "Psum_DATA_Spad_BRAM" in path:
        return "PE Psum SPad"
    return "Other"


def main():
    if len(sys.argv) != 2:
        print("usage: summarize_occ.py <occ_log>", file=sys.stderr)
        return 2

    groups = defaultdict(lambda: {
        "instances": 0,
        "writes": 0,
        "max_addr": 0,
        "depth": 0,
        "width": 0,
    })

    with open(sys.argv[1], "r", encoding="utf-8", errors="replace") as f:
        for line in f:
            m = OCC_RE.match(line.strip())
            if not m:
                continue
            kind = classify(m.group("path"))
            g = groups[kind]
            g["instances"] += 1
            g["writes"] += int(m.group("writes"))
            g["max_addr"] = max(g["max_addr"], int(m.group("max")))
            g["depth"] = max(g["depth"], int(m.group("depth")))
            g["width"] = max(g["width"], int(m.group("width")))

    print("Memory occupancy summary")
    print("kind,instances,total_writes,max_write_addr,depth,used_percent,width")
    for kind in sorted(groups):
        g = groups[kind]
        used = 100.0 * (g["max_addr"] + 1) / g["depth"] if g["depth"] else 0.0
        print(f"{kind},{g['instances']},{g['writes']},{g['max_addr']},"
              f"{g['depth']},{used:.2f}%,{g['width']}")


if __name__ == "__main__":
    raise SystemExit(main())
