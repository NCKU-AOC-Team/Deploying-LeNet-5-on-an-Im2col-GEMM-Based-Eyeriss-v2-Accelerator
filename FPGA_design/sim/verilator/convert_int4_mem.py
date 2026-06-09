#!/usr/bin/env python3
"""Convert generated INT4-as-INT8 MEM data into the RTL sparse ROM format."""

import argparse
import re
from pathlib import Path


BOUNDARY_RE = re.compile(r"parameter\s+(\w+)\s*=\s*'d(\d+)\s*;")
ORDER = [
    "WEIGHT_ADDR_1_END",
    "WEIGHT_DATA_1_END",
    "WEIGHT_ADDR_2_FORMER_END",
    "WEIGHT_DATA_2_FORMER_END",
    "WEIGHT_ADDR_2_LATER_END",
    "WEIGHT_DATA_2_LATER_END",
    "WEIGHT_ADDR_3_END",
    "WEIGHT_DATA_3_END",
    "WEIGHT_ADDR_4_END",
    "WEIGHT_DATA_4_END",
    "WEIGHT_ADDR_5_END",
    "WEIGHT_DATA_5_END",
]


def read_boundaries(path: Path) -> dict[str, int]:
    boundaries = dict(BOUNDARY_RE.findall(path.read_text(encoding="ascii")))
    missing = ["IACT_DATA_END", *ORDER]
    missing = [name for name in missing if name not in boundaries]
    if missing:
        raise ValueError(f"missing boundaries: {', '.join(missing)}")
    return {name: int(value) for name, value in boundaries.items()}


def convert(source: Path, boundaries_path: Path, output: Path) -> None:
    boundaries = read_boundaries(boundaries_path)
    values = [
        int(line.strip(), 16)
        for line in source.read_text(encoding="ascii").splitlines()
        if line.strip()
    ]

    start = boundaries["IACT_DATA_END"]
    converted: list[int] = []
    for index, end_name in enumerate(ORDER):
        end = boundaries[end_name]
        segment = values[start:end]
        if index % 2 == 0:
            converted.extend(value & 0xFFFF for value in segment)
        else:
            if len(segment) % 2:
                raise ValueError(f"{end_name} has odd data/count entry count")
            for offset in range(0, len(segment), 2):
                weight = segment[offset] & 0xFF
                count = segment[offset + 1]
                if count > 0x1F:
                    raise ValueError(f"{end_name} count exceeds 5 bits: {count}")
                converted.append((count << 8) | weight)
        start = end

    output.write_text(
        "".join(f"{value:04x}\n" for value in converted), encoding="ascii"
    )
    print(f"  {len(converted)} entries")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("source", type=Path)
    parser.add_argument("boundaries", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    convert(args.source, args.boundaries, args.output)


if __name__ == "__main__":
    main()
