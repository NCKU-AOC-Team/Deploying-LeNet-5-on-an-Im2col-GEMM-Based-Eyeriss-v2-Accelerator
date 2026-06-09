#!/usr/bin/env python3
"""Create an INT4-as-INT8-container sparse ROM COE.

This first-stage INT4 experiment keeps the existing CSC stream structure:
one address entry still maps to one data/count entry, and the RTL still sees
the original 8-bit signed weight field. Only the signed weight value inside
each data/count word is requantized to signed INT4 [-8, 7] and sign-extended
back to 8 bits.

Important: this script uses the existing sparse INT8 COE as its source. It is
not a replacement for exporting weights from a true INT4 QAT checkpoint.
"""

from __future__ import annotations

import argparse
import re
from pathlib import Path


DEFAULT_BOUNDARIES = [
    7,
    97,
    151,
    760,
    814,
    1351,
    9511,
    25090,
    27736,
    32974,
    33238,
    33722,
]


def read_coe(path: Path) -> list[int]:
    text = path.read_text(encoding="utf-8")
    if "memory_initialization_vector" not in text:
        raise ValueError(f"{path} does not look like a COE file")
    body = text.split("memory_initialization_vector", 1)[1]
    body = body.split("=", 1)[1]
    tokens = re.findall(r"[0-9a-fA-F]+", body)
    return [int(tok, 16) for tok in tokens]


def write_coe(path: Path, values: list[int]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="ascii", newline="\n") as f:
        f.write("memory_initialization_radix=16;\n")
        f.write("memory_initialization_vector=\n")
        for idx, value in enumerate(values):
            suffix = ";\n" if idx == len(values) - 1 else ",\n"
            f.write(f"{value & 0xffff:04x}{suffix}")


def signed_from_bits(value: int, bits: int) -> int:
    sign = 1 << (bits - 1)
    mask = (1 << bits) - 1
    value &= mask
    return value - (1 << bits) if value & sign else value


def int4_from_int8(value: int) -> int:
    quantized = int(round(value / 16.0))
    quantized = max(-8, min(7, quantized))
    # Keep the existing CSC non-zero pattern valid. The current RTL consumes a
    # pre-compressed stream, so turning an existing non-zero entry into zero can
    # invalidate artificial non-zero markers used for all-zero columns.
    if value != 0 and quantized == 0:
        quantized = 1 if value > 0 else -1
    return quantized


def sign_extend_int4_to_int8(value: int) -> int:
    if not -8 <= value <= 7:
        raise ValueError(f"INT4 value out of range: {value}")
    return value & 0xff


def convert_data_word(word: int, count_bits: int) -> int:
    data_shift = count_bits
    count_mask = (1 << count_bits) - 1
    count = word & count_mask
    data_u8 = (word >> data_shift) & 0xff
    data_i8 = signed_from_bits(data_u8, 8)
    data_i4 = int4_from_int8(data_i8)
    data_i8_ext = sign_extend_int4_to_int8(data_i4)
    return (data_i8_ext << data_shift) | count


def convert(values: list[int], boundaries: list[int]) -> list[int]:
    if len(boundaries) != 12:
        raise ValueError("Expected 12 sparse ROM boundaries")
    if len(values) < boundaries[-1]:
        raise ValueError(f"COE has {len(values)} values, need at least {boundaries[-1]}")

    out = list(values)
    starts = [0] + boundaries[:-1]
    # Segment order:
    # addr1, data1, addr2_former, data2_former, addr2_later, data2_later,
    # addr3, data3, addr4, data4, addr5, data5.
    data_segments = {
        1: 4,
        3: 5,
        5: 5,
        7: 4,
        9: 4,
        11: 4,
    }
    for segment_idx, count_bits in data_segments.items():
        for rom_idx in range(starts[segment_idx], boundaries[segment_idx]):
            out[rom_idx] = convert_data_word(values[rom_idx], count_bits)
    return out


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input-coe", type=Path, required=True)
    parser.add_argument("--output-coe", type=Path, required=True)
    parser.add_argument(
        "--boundaries",
        type=int,
        nargs=12,
        default=DEFAULT_BOUNDARIES,
        help="12 cumulative sparse ROM segment boundaries from TOP_interface.v",
    )
    args = parser.parse_args()

    values = read_coe(args.input_coe)
    converted = convert(values, args.boundaries)
    write_coe(args.output_coe, converted)
    print(f"source={args.input_coe}")
    print(f"output={args.output_coe}")
    print("int4_range=[-8,7], sign bit is bit[3], sign-extended back to 8-bit container")
    print("nonzero-preserving=enabled for existing CSC stream compatibility")
    print(f"entries={len(converted)} converted_data_segments=6")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
