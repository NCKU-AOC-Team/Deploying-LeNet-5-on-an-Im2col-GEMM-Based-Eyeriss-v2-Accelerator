#!/usr/bin/env python3
"""Generate an INT4-as-INT8 CSC sparse ROM from dense INT8 weight text files.

No third-party Python package is required.
"""

from __future__ import annotations

import argparse
import re
from pathlib import Path


Matrix = list[list[int]]


def parse_int_file(path: Path) -> list[int]:
    return [int(x) for x in re.findall(r"[-+]?\d+", path.read_text())]


def read_conv_weights(path: Path, matrix_size: int, channels: int) -> list[list[int]]:
    data = parse_int_file(path)
    per_kernel = matrix_size * matrix_size * channels
    if len(data) % per_kernel != 0:
        raise ValueError(f"{path} length {len(data)} is not divisible by {per_kernel}")
    return [data[i : i + per_kernel] for i in range(0, len(data), per_kernel)]


def read_fc_weights(path: Path, elements_per_group: int, num_groups: int) -> Matrix:
    data = parse_int_file(path)
    expected = elements_per_group * num_groups
    if len(data) != expected:
        raise ValueError(f"{path} length {len(data)} != expected {expected}")
    return [data[i : i + elements_per_group] for i in range(0, len(data), elements_per_group)]


def flatten_nested(values) -> list[int]:
    if isinstance(values, int):
        return [values]
    out: list[int] = []
    for item in values:
        out.extend(flatten_nested(item))
    return out


def map_nested(values, fn):
    if isinstance(values, int):
        return fn(values)
    return [map_nested(item, fn) for item in values]


def quantize_int8_value_to_int4(value: int) -> int:
    q4 = int(round(value / 16.0))
    if q4 < -8:
        return -8
    if q4 > 7:
        return 7
    return q4


def quantize_and_threshold(values, factor: float, container_scale: int):
    quantized = map_nested(values, lambda value: quantize_int8_value_to_int4(value) * container_scale)
    flat = flatten_nested(quantized)
    threshold = (sum(abs(x) for x in flat) / len(flat)) * factor if flat else 0
    return map_nested(quantized, lambda x: 0 if abs(x) < threshold else x)


def transpose_stacked(arrays: list[list[int]]) -> Matrix:
    return [[array[col] for array in arrays] for col in range(len(arrays[0]))]


def matrix_slice_cols(matrix: Matrix, start: int, stop: int) -> Matrix:
    return [row[start:stop] for row in matrix]


def matrix_is_zero_col(matrix: Matrix, col: int) -> bool:
    return all(row[col] == 0 for row in matrix)


def modify_matrix(matrix: Matrix) -> tuple[Matrix, list[list[bool]]]:
    out = [row[:] for row in matrix]
    rows = len(out)
    cols = len(out[0]) if rows else 0
    mask = [[False for _ in range(cols)] for _ in range(rows)]
    for col in range(cols):
        if matrix_is_zero_col(out, col):
            out[rows - 1][col] = 1
            mask[rows - 1][col] = True
    return out, mask


def gen_adr_count_data(matrix: Matrix, inact_or_weight: bool, modified_mask: list[list[bool]]):
    zero_code = 255 if inact_or_weight else 127
    max_count = 31 if inact_or_weight else 15
    adr: list[int] = []
    count: list[int] = []
    data: list[int] = []

    cols = len(matrix[0])
    rows = len(matrix)
    for col in range(cols):
        current_col = [matrix[row][col] for row in range(rows)]
        if max(abs(x) for x in current_col) == 0:
            adr.append(zero_code)
        else:
            if col != 0:
                adr.append(len(data))
            for row, value in enumerate(current_col):
                if value != 0:
                    count.append(max_count if modified_mask[row][col] else row)
                    data.append(value)

    if len(data) - 1 > adr[-1]:
        adr.append(len(data))
    if len(data) - adr[-1] == 1:
        adr.append(len(data))
    if all(row[-1] == 0 for row in matrix):
        adr.append(zero_code)

    adr.append(0)
    count.append(0)
    data.append(0)
    return adr, count, data


def to_binary(value: int, digits: int, signed: bool = False) -> str:
    if signed and value < 0:
        value = (1 << digits) + value
    return format(value, f"0{digits}b")


def data_count_hex(data: list[int], count: list[int], count_width: int) -> list[str]:
    digits = 4 if count_width == 5 else 3
    out = []
    for value, cnt in zip(data, count):
        bits = to_binary(value, 8, signed=True) + to_binary(cnt, count_width, signed=False)
        out.append(format(int(bits, 2), f"0{digits}x"))
    return out


def addr_hex(addr: list[int]) -> list[str]:
    return [format(value, "x") for value in addr]


def encode_matrix(matrix: Matrix, inact_or_weight: bool, count_width: int) -> tuple[list[str], list[str]]:
    modified, mask = modify_matrix(matrix)
    addr, count, data = gen_adr_count_data(modified, inact_or_weight, mask)
    return addr_hex(addr), data_count_hex(data, count, count_width)


def append_group(rom: list[str], addr_parts: list[list[str]], data_parts: list[list[str]], boundaries: list[int]) -> None:
    for part in addr_parts:
        rom.extend(part)
    boundaries.append(len(rom))
    for part in data_parts:
        rom.extend(part)
    boundaries.append(len(rom))


def prepare_weights(values, quant: str, factor: float, container_scale: int):
    if quant == "int4":
        return quantize_and_threshold(values, factor, container_scale)
    if quant == "none":
        return threshold_dense(values, factor)
    raise ValueError(f"unsupported quant mode: {quant}")


def threshold_dense(values, factor: float):
    flat = flatten_nested(values)
    threshold = (sum(abs(x) for x in flat) / len(flat)) * factor if flat else 0
    return map_nested(values, lambda x: 0 if abs(x) < threshold else x)


def build_sparse_rom(input_dir: Path, quant: str, threshold: float, container_scale: int) -> tuple[list[str], list[int]]:
    conv1 = prepare_weights(read_conv_weights(input_dir / "kernel1.txt", 5, 1), quant, threshold, container_scale)
    conv2 = prepare_weights(read_conv_weights(input_dir / "kernel2.txt", 5, 6), quant, threshold, container_scale)
    fc1 = prepare_weights(read_fc_weights(input_dir / "kernel3.txt", 256, 120), quant, threshold, container_scale)
    fc2 = prepare_weights(read_fc_weights(input_dir / "kernel4.txt", 120, 84), quant, threshold, container_scale)
    fc3 = prepare_weights(read_fc_weights(input_dir / "kernel5.txt", 84, 10), quant, threshold, container_scale)

    rom: list[str] = []
    boundaries: list[int] = []

    addr, data = encode_matrix(transpose_stacked(conv1), True, 5)
    append_group(rom, [addr], [data], boundaries)

    former_addr_parts: list[list[str]] = []
    former_data_parts: list[list[str]] = []
    for start, stop in ((0, 25), (25, 50), (50, 75), (75, 100), (100, 125), (125, 150)):
        merged = transpose_stacked([kernel[start:stop] for kernel in conv2])
        addr, data = encode_matrix(matrix_slice_cols(merged, 0, 8), True, 5)
        former_addr_parts.append(addr)
        former_data_parts.append(data)
    append_group(rom, former_addr_parts, former_data_parts, boundaries)

    later_addr_parts: list[list[str]] = []
    later_data_parts: list[list[str]] = []
    for start, stop in ((0, 25), (25, 50), (50, 75), (75, 100), (100, 125), (125, 150)):
        merged = transpose_stacked([kernel[start:stop] for kernel in conv2])
        addr, data = encode_matrix(matrix_slice_cols(merged, 8, 16), True, 5)
        later_addr_parts.append(addr)
        later_data_parts.append(data)
    append_group(rom, later_addr_parts, later_data_parts, boundaries)

    fc1_addr_parts: list[list[str]] = []
    fc1_data_parts: list[list[str]] = []
    for i in range(16):
        for j in range(30):
            addr, data = encode_matrix([row[i * 16 : 16 + i * 16] for row in fc1[4 * j : 4 + 4 * j]], False, 4)
            fc1_addr_parts.append(addr)
            fc1_data_parts.append(data)
    append_group(rom, fc1_addr_parts, fc1_data_parts, boundaries)

    fc2_addr_parts: list[list[str]] = []
    fc2_data_parts: list[list[str]] = []
    for i in range(6):
        for j in range(21):
            addr, data = encode_matrix([row[i * 20 : 20 + i * 20] for row in fc2[4 * j : 4 + 4 * j]], False, 4)
            fc2_addr_parts.append(addr)
            fc2_data_parts.append(data)
    append_group(rom, fc2_addr_parts, fc2_data_parts, boundaries)

    fc3_addr_parts: list[list[str]] = []
    fc3_data_parts: list[list[str]] = []
    for i in range(4):
        for j in range(3):
            rows = fc3[4 * j : 4 + 4 * j] if j != 2 else fc3[8:10]
            addr, data = encode_matrix([row[i * 21 : 21 + i * 21] for row in rows], False, 4)
            fc3_addr_parts.append(addr)
            fc3_data_parts.append(data)
    append_group(rom, fc3_addr_parts, fc3_data_parts, boundaries)

    # Convert grouped conv2/fc boundaries into TOP_interface's 12 cumulative ends.
    return rom, [
        boundaries[0],
        boundaries[1],
        boundaries[2],
        boundaries[3],
        boundaries[4],
        boundaries[5],
        boundaries[6],
        boundaries[7],
        boundaries[8],
        boundaries[9],
        boundaries[10],
        boundaries[11],
    ]


def write_txt(path: Path, lines: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("".join(f"{line}\n" for line in lines))


def write_coe(path: Path, lines: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w") as file:
        file.write("memory_initialization_radix=16;\n")
        file.write("memory_initialization_vector=\n")
        for index, line in enumerate(lines):
            file.write(line.zfill(4))
            file.write(";\n" if index == len(lines) - 1 else ",\n")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input-dir", type=Path, default=Path("FPGA_design/SW/layer2"))
    parser.add_argument("--quant", choices=("int4", "none"), default="int4")
    parser.add_argument("--threshold", type=float, default=0.9)
    parser.add_argument("--container-scale", type=int, default=1)
    parser.add_argument("--output-txt", type=Path, default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_AS_INT8.txt"))
    parser.add_argument("--output-coe", type=Path, default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_AS_INT8.coe"))
    args = parser.parse_args()

    rom, boundaries = build_sparse_rom(args.input_dir, args.quant, args.threshold, args.container_scale)
    write_txt(args.output_txt, rom)
    write_coe(args.output_coe, rom)
    print(f"source={args.input_dir}")
    print(f"txt={args.output_txt}")
    print(f"coe={args.output_coe}")
    print(f"quant={args.quant}")
    print(f"threshold={args.threshold}")
    print(f"container_scale={args.container_scale}")
    if args.quant == "int4":
        print("int4_range=[-8,7], sign bit is bit[3], stored as signed 8-bit container")
    print(f"words={len(rom)}")
    print("boundaries=" + ",".join(str(item) for item in boundaries))


if __name__ == "__main__":
    main()
