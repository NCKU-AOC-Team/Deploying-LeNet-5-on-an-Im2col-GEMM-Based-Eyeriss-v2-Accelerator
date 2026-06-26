#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SIM_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
OUT_DIR="${SIM_DIR}/out"
mkdir -p "${OUT_DIR}"
cd "${SIM_DIR}"

INT8_EXPECTED="79871 79850 77341 79131 79245"
INT4_EXPECTED="72268 71879 69770 71305 71591"
SUMMARY_RE='Iter|Summary|PASS|FAIL|mismatch|cycle|accuracy'

extract_cycles() {
  grep -oE '\([0-9]+ cycles\)' "$1" | grep -oE '[0-9]+' | paste -sd' ' -
}

summary_pass() {
  if grep -q 'Summary: 5/5 passed' "$1" && ! grep -q 'FAIL\|TIMEOUT' "$1"; then
    echo PASS
  else
    echo FAIL
  fi
}

compare_cycles() {
  local expected="$1"
  local actual="$2"
  if [[ "${expected}" == "${actual}" ]]; then
    echo PASS
  else
    echo FAIL
  fi
}

# Unified INT8 mode: single unified hardware build, runtime INT8/default mode.
make clean
make sim ITERS=5 2>&1 | tee "${OUT_DIR}/unified_int8.log"

# Unified INT4 runtime mode: same RTL hardware, INT4 data image plus runtime mode.
make clean
make sim ITERS=5 INT4_REQUANT=14_7 RUNTIME_INT4=1 2>&1 | tee "${OUT_DIR}/unified_int4.log"

INT8_ACTUAL="$(extract_cycles "${OUT_DIR}/unified_int8.log")"
INT4_ACTUAL="$(extract_cycles "${OUT_DIR}/unified_int4.log")"
INT8_CYCLE_MATCH="$(compare_cycles "${INT8_EXPECTED}" "${INT8_ACTUAL}")"
INT4_CYCLE_MATCH="$(compare_cycles "${INT4_EXPECTED}" "${INT4_ACTUAL}")"
INT8_SUMMARY_PASS="$(summary_pass "${OUT_DIR}/unified_int8.log")"
INT4_SUMMARY_PASS="$(summary_pass "${OUT_DIR}/unified_int4.log")"

{
  echo "# Unified regression summary"
  echo
  echo "## Unified INT8 log excerpt"
  grep -E "${SUMMARY_RE}" "${OUT_DIR}/unified_int8.log" || true
  echo
  echo "## Unified INT4 runtime log excerpt"
  grep -E "${SUMMARY_RE}" "${OUT_DIR}/unified_int4.log" || true
  echo
  echo "## Cycle and pass/fail check"
  echo "INT8 expected cycles: ${INT8_EXPECTED}"
  echo "INT8 actual cycles  : ${INT8_ACTUAL}"
  echo "INT8 cycle_match    : ${INT8_CYCLE_MATCH}"
  echo "INT8 summary        : ${INT8_SUMMARY_PASS}"
  echo
  echo "INT4 expected cycles: ${INT4_EXPECTED}"
  echo "INT4 actual cycles  : ${INT4_ACTUAL}"
  echo "INT4 cycle_match    : ${INT4_CYCLE_MATCH}"
  echo "INT4 summary        : ${INT4_SUMMARY_PASS}"
} | tee "${OUT_DIR}/unified_regression_summary.txt"

if [[ "${INT8_CYCLE_MATCH}" != PASS || "${INT4_CYCLE_MATCH}" != PASS || "${INT8_SUMMARY_PASS}" != PASS || "${INT4_SUMMARY_PASS}" != PASS ]]; then
  echo "Unified regression mismatch. See ${OUT_DIR}/unified_regression_summary.txt" >&2
  exit 1
fi

echo "Unified regression logs written to ${OUT_DIR}"
