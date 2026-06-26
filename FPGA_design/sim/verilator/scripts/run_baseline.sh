#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SIM_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
OUT_DIR="${SIM_DIR}/out"
mkdir -p "${OUT_DIR}"
cd "${SIM_DIR}"

SUMMARY_RE='Iter|Summary|PASS|FAIL|mismatch|cycle|accuracy'

make clean
make sim ITERS=5 2>&1 | tee "${OUT_DIR}/baseline_int8.log"

make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7 2>&1 | tee "${OUT_DIR}/baseline_int4_packed_simd2_full.log"

{
  echo "# Baseline summary"
  echo
  echo "## INT8 baseline"
  grep -E "${SUMMARY_RE}" "${OUT_DIR}/baseline_int8.log" || true
  echo
  echo "## INT4_PACKED_SIMD2_FULL baseline"
  grep -E "${SUMMARY_RE}" "${OUT_DIR}/baseline_int4_packed_simd2_full.log" || true
} | tee "${OUT_DIR}/baseline_summary.txt"

echo "Baseline logs written to ${OUT_DIR}"
