#!/bin/bash
# Цикл центрального номера (находка 55) на RTL, четыре ступени RISC5:
#   A — без проверки, B — SUB+BCC, E — CHKS, D — дескриптор + IDX.
# Постановка находки 55: ровно 2 000 000 команд со сброса, итерации — из
# счётчика R5. Все четыре — на ядре с дескрипторами (оно исполняет и CHK, и IDX);
# A, B, E сверяются с базовым ядром и ядром CHK — такты обязаны совпасть.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; cd "$P"
ITER=1000000; BUDGET=2000000
printf "%-3s %-12s %10s %12s %10s %10s\n" cfg ядро итераций тактов "ком/итер" "такт/итер"
for c in a b e d; do
  for core in desc chk tests; do
    bin=build/obj_$core/run_tests; [ $core = tests ] || bin=${bin}_$core
    [ $c = d ] && [ $core != desc ] && continue   # IDX есть только на ядре desc
    [ $c = e ] && [ $core = tests ] && continue   # CHK нет на базовом ядре
    set -- $($bin tests/bench_bounds_$c --budget=$BUDGET)
    it=$((ITER - $7))
    python3 -c "print(f'%-3s %-12s %10d %12d %10.3f %10.3f' % ('$c'.upper(), '$core', $it, $5, $3/$it, $5/$it))"
  done
done
# Отрицательный контроль: тот же D, но дескриптор на 32 элемента при индексе до
# 63. Проверка обязана остановить цикл ровно на i = 32 (ловушка -> обработчик,
# который крутится на месте): 32 полные итерации, дальше счётчик не движется.
mkdir -p build
sed 's/MHI  R11, 0x0400/MHI  R11, 0x0200/' tests/bench_bounds_d.s > build/bench_bounds_d32.s
python3 tools/asm.py build/bench_bounds_d32.s > /dev/null
set -- $(build/obj_desc/run_tests_desc build/bench_bounds_d32 --budget=$BUDGET)
it=$((ITER - $7))
[ $it = 32 ] && echo "контроль: дескриптор на 32 — остановка после $it итераций ✅" \
             || { echo "❌ контроль: дескриптор на 32 дал $it итераций"; exit 1; }
