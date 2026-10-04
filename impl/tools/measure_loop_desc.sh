#!/bin/bash
# The central-number loop (finding 55) on RTL, four RISC5 stages:
#   A — no check, B — SUB+BCC, E — CHKS, D — descriptor + IDX.
# The setup of finding 55: exactly 2,000,000 instructions from reset, iterations taken from
# counter R5. All four run on the descriptor core (it executes both CHK and IDX);
# A, B, E are cross-checked with the base core and the CHK core: the cycles must match.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; cd "$P"
ITER=1000000; BUDGET=2000000
printf "%-3s %-12s %10s %12s %10s %10s\n" cfg core iterations cycles "insn/iter" "cyc/iter"
for c in a b e d; do
  for core in desc chk tests; do
    bin=build/obj_$core/run_tests; [ $core = tests ] || bin=${bin}_$core
    [ $c = d ] && [ $core != desc ] && continue   # IDX exists only on the desc core
    [ $c = e ] && [ $core = tests ] && continue   # the base core has no CHK
    set -- $($bin tests/bench_bounds_$c --budget=$BUDGET)
    it=$((ITER - $7))
    python3 -c "print(f'%-3s %-12s %10d %12d %10.3f %10.3f' % ('$c'.upper(), '$core', $it, $5, $3/$it, $5/$it))"
  done
done
# Negative control: the same D, but with a descriptor for 32 elements while the index goes up to
# 63. The check must stop the loop exactly at i = 32 (trap -> a handler
# that spins in place): 32 full iterations, after that the counter does not move.
mkdir -p build
sed 's/MHI  R11, 0x0400/MHI  R11, 0x0200/' tests/bench_bounds_d.s > build/bench_bounds_d32.s
python3 tools/asm.py build/bench_bounds_d32.s > /dev/null
set -- $(build/obj_desc/run_tests_desc build/bench_bounds_d32 --budget=$BUDGET)
it=$((ITER - $7))
[ $it = 32 ] && echo "control: descriptor for 32: stopped after $it iterations ✅" \
             || { echo "❌ control: descriptor for 32 gave $it iterations"; exit 1; }
