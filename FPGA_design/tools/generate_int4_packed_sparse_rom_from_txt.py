#!/usr/bin/env python3
"""Generate a CSC sparse ROM with true INT4 payload in the data byte.

This is the first hardware-oriented INT4 format:
- CSC address/count ordering stays identical to the existing generator.
- Weight values are quantized to signed INT4 [-8, 7].
- The ROM data byte stores the 4-bit two's-complement value in bits [3:0].
- Bits [7:4] are zero, so RTL must explicitly sign-extend bits [3:0].

By default it is intentionally single-lane: one CSC entry still carries one
logical weight and one count. The optional two-lane FC sideband format keeps
the original stream length and lane0 content intact, then stores the following
FC/Later entry in lane1. This makes lane1 real data without changing the
controller schedule yet.
"""

from __future__ import annotations

import argparse
from pathlib import Path

import generate_int4_as_int8_sparse_rom_from_txt as base


def int4_payload(value: int) -> int:
    if value < -8 or value > 7:
        raise ValueError(f"INT4 packed value out of range: {value}")
    return value & 0xF


def int4_packed_data_count_hex(data: list[int], count: list[int], count_width: int) -> list[str]:
    digits = 4 if count_width == 5 else 3
    out: list[str] = []
    for value, cnt in zip(data, count):
        payload = int4_payload(value)
        bits = base.to_binary(payload, 8, signed=False) + base.to_binary(cnt, count_width, signed=False)
        out.append(format(int(bits, 2), f"0{digits}x"))
    return out


def int4_packed_two_lane_fc_data_count_hex(data: list[int], count: list[int], count_width: int) -> list[str]:
    if count_width == 5:
        # Former/conv would need 18 bits:
        # {w1[3:0], count1[4:0], w0[3:0], count0[4:0]}.
        # The current ROM word is 16 bits, so keep this path single-lane.
        return int4_packed_data_count_hex(data, count, count_width)

    out: list[str] = []
    for index, (value, cnt) in enumerate(zip(data, count)):
        next_is_valid = index + 1 < len(data)
        lane1_value = data[index + 1] if next_is_valid else 0
        lane1_count = count[index + 1] if next_is_valid else 0
        bits = (
            base.to_binary(int4_payload(lane1_value), 4, signed=False)
            + base.to_binary(lane1_count, 4, signed=False)
            + base.to_binary(int4_payload(value), 4, signed=False)
            + base.to_binary(cnt, 4, signed=False)
        )
        out.append(format(int(bits, 2), "04x"))
    return out


def encode_matrix_same_count_simd2(matrix: base.Matrix, inact_or_weight: bool, count_width: int) -> tuple[list[str], list[str]]:
    if count_width == 5:
        return encode_matrix_same_count_simd2.original_encode_matrix(matrix, inact_or_weight, count_width)

    zero_code = 255 if inact_or_weight else 127
    max_count = 31 if inact_or_weight else 15
    modified, mask = base.modify_matrix(matrix)
    addr: list[int] = []
    data_words: list[str] = []
    packed_pairs = 0

    cols = len(modified[0])
    rows = len(modified)
    for col in range(cols):
        current_col = [modified[row][col] for row in range(rows)]
        if max(abs(x) for x in current_col) == 0:
            addr.append(zero_code)
        else:
            if col != 0:
                addr.append(len(data_words))
            entries: list[tuple[int, int]] = []
            for row, value in enumerate(current_col):
                if value != 0:
                    entries.append((max_count if mask[row][col] else row, value))

            index = 0
            while index < len(entries):
                count0, value0 = entries[index]
                value1 = 0
                count1 = count0
                if index + 1 < len(entries) and entries[index + 1][0] == count0:
                    count1, value1 = entries[index + 1]
                    index += 2
                    packed_pairs += 1
                else:
                    index += 1
                bits = (
                    base.to_binary(int4_payload(value1), 4, signed=False)
                    + base.to_binary(count1, 4, signed=False)
                    + base.to_binary(int4_payload(value0), 4, signed=False)
                    + base.to_binary(count0, 4, signed=False)
                )
                data_words.append(format(int(bits, 2), "04x"))

    if len(data_words) - 1 > addr[-1]:
        addr.append(len(data_words))
    if len(data_words) - addr[-1] == 1:
        addr.append(len(data_words))
    if all(row[-1] == 0 for row in modified):
        addr.append(zero_code)

    addr.append(0)
    data_words.append("0000")
    encode_matrix_same_count_simd2.packed_pairs += packed_pairs
    return base.addr_hex(addr), data_words


def encode_matrix_adjacent_simd2_full(matrix: base.Matrix, inact_or_weight: bool, count_width: int) -> tuple[list[str], list[str]]:
    if count_width == 5:
        return encode_matrix_adjacent_simd2_full.original_encode_matrix(matrix, inact_or_weight, count_width)

    zero_code = 255 if inact_or_weight else 127
    max_count = 31 if inact_or_weight else 15
    modified, mask = base.modify_matrix(matrix)
    addr: list[int] = []
    data_words: list[str] = []
    packed_pairs = 0

    cols = len(modified[0])
    rows = len(modified)
    for col in range(cols):
        current_col = [modified[row][col] for row in range(rows)]
        if max(abs(x) for x in current_col) == 0:
            addr.append(zero_code)
        else:
            if col != 0:
                addr.append(len(data_words))
            entries: list[tuple[int, int]] = []
            for row, value in enumerate(current_col):
                if value != 0:
                    entries.append((max_count if mask[row][col] else row, value))

            index = 0
            while index < len(entries):
                count0, value0 = entries[index]
                if index + 1 < len(entries):
                    count1, value1 = entries[index + 1]
                    index += 2
                    packed_pairs += 1
                else:
                    count1, value1 = 0, 0
                    index += 1
                bits = (
                    base.to_binary(int4_payload(value1), 4, signed=False)
                    + base.to_binary(count1, 4, signed=False)
                    + base.to_binary(int4_payload(value0), 4, signed=False)
                    + base.to_binary(count0, 4, signed=False)
                )
                data_words.append(format(int(bits, 2), "04x"))

    if len(data_words) - 1 > addr[-1]:
        addr.append(len(data_words))
    if len(data_words) - addr[-1] == 1:
        addr.append(len(data_words))
    if all(row[-1] == 0 for row in modified):
        addr.append(zero_code)

    addr.append(0)
    data_words.append("0000")
    encode_matrix_adjacent_simd2_full.packed_pairs += packed_pairs
    return base.addr_hex(addr), data_words


encode_matrix_same_count_simd2.packed_pairs = 0
encode_matrix_same_count_simd2.original_encode_matrix = base.encode_matrix
encode_matrix_adjacent_simd2_full.packed_pairs = 0
encode_matrix_adjacent_simd2_full.original_encode_matrix = base.encode_matrix


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input-dir", type=Path, default=Path("FPGA_design/SW/layer2"))
    parser.add_argument("--threshold", type=float, default=0.0)
    parser.add_argument("--output-txt", type=Path, default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SINGLE_LANE.txt"))
    parser.add_argument("--output-coe", type=Path, default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SINGLE_LANE.coe"))
    parser.add_argument(
        "--two-lane-fc-sideband",
        action="store_true",
        help="Pack FC/Later count-width-4 entries as {w1,c1,w0,c0} while keeping stream length unchanged.",
    )
    parser.add_argument(
        "--same-count-simd2",
        action="store_true",
        help="Compress FC/Later same-count pairs into one {w1,count,w0,count} entry and update address boundaries.",
    )
    parser.add_argument(
        "--adjacent-simd2-full",
        action="store_true",
        help="Compress adjacent FC/Later count-width-4 entries into one {w1,count1,w0,count0} entry and update address boundaries.",
    )
    args = parser.parse_args()

    original_data_count_hex = base.data_count_hex
    original_encode_matrix = base.encode_matrix
    base.data_count_hex = int4_packed_two_lane_fc_data_count_hex if args.two_lane_fc_sideband else int4_packed_data_count_hex
    if args.same_count_simd2:
        encode_matrix_same_count_simd2.packed_pairs = 0
        encode_matrix_same_count_simd2.original_encode_matrix = original_encode_matrix
        base.encode_matrix = encode_matrix_same_count_simd2
    if args.adjacent_simd2_full:
        encode_matrix_adjacent_simd2_full.packed_pairs = 0
        encode_matrix_adjacent_simd2_full.original_encode_matrix = original_encode_matrix
        base.encode_matrix = encode_matrix_adjacent_simd2_full
    try:
        rom, boundaries = base.build_sparse_rom(args.input_dir, "int4", args.threshold, 1)
    finally:
        base.data_count_hex = original_data_count_hex
        base.encode_matrix = original_encode_matrix

    base.write_txt(args.output_txt, rom)
    base.write_coe(args.output_coe, rom)

    print(f"source={args.input_dir}")
    print(f"txt={args.output_txt}")
    print(f"coe={args.output_coe}")
    print("quant=int4")
    print(f"threshold={args.threshold}")
    if args.same_count_simd2:
        print("format=same-count SIMD2 packed stream for count-width-4 entries: {w1[3:0], count[3:0], w0[3:0], count[3:0]}")
        print("format_note=count-width-5 Former/conv entries remain single-lane because 18-bit packed entries do not fit the 16-bit ROM")
        print("stream_note=address/data boundaries are recomputed after packing; lane1 is nonzero only for same-count pairs")
        print(f"packed_same_count_pairs={encode_matrix_same_count_simd2.packed_pairs}")
    elif args.adjacent_simd2_full:
        print("format=adjacent SIMD2 full packed stream for count-width-4 entries: {w1[3:0], count1[3:0], w0[3:0], count0[3:0]}")
        print("format_note=count-width-5 Former/conv entries remain single-lane because 18-bit packed entries do not fit the 16-bit ROM")
        print("stream_note=address/data boundaries are recomputed after packing; lane1 may target a different psum count")
        print(f"packed_adjacent_pairs={encode_matrix_adjacent_simd2_full.packed_pairs}")
    elif args.two_lane_fc_sideband:
        print("format=two-lane FC sideband for count-width-4 entries: {w1[3:0], count1[3:0], w0[3:0], count0[3:0]}")
        print("format_note=count-width-5 Former/conv entries remain single-lane because 18-bit packed entries do not fit the 16-bit ROM")
        print("stream_note=stream length and lane0 content are unchanged; lane1 mirrors the following logical FC entry")
    else:
        print("format=single-lane INT4 payload in data[3:0], data[7:4]=0")
    print("rtl_requirement=sign-extend selected data[3:0] inside PE path before MAC")
    print(f"words={len(rom)}")
    print("boundaries=" + ",".join(str(item) for item in boundaries))


if __name__ == "__main__":
    main()
