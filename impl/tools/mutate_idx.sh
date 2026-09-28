#!/bin/bash
# Мутационная проверка тестов IDX: каждая мутация RTL обязана уронить хотя бы
# один из tests/t3_idx*. Мутация, которую тесты не замечают, — дыра в тестах.
set -u
P="$(cd "$(dirname "$0")/.." && pwd)"; W="$P/build/mut_idx"; mkdir -p "$W"
RTL="rtl/Registers.v rtl/Multiplier.v rtl/Divider.v rtl/FPAdder.v rtl/FPMultiplier.v rtl/FPDivider.v rtl/LeftShifter.v rtl/RightShifter.v"
# Пары «было@@стало», подстановка буквальная (perl \Q…\E), без регулярных выражений.
muts=(
  'C0[11:0] >= B[31:20]@@C0[11:0] > B[31:20]'                                   # >= -> >
  '((C0[31:12] != 0) | (C0[11:0] >= B[31:20]))@@(C0[11:0] >= B[31:20])'           # без старших бит индекса
  '<< IR[9:8]@@<< 2'                                                              # масштаб зашит
  "32'hD700000C@@32'hD700000D"                                                    # ловушка не через MT
  'assign ADD = ~p & (op == 8) & ~IDX;@@assign ADD = ~p & (op == 8);'             # IDX трогает C/OV
  "{4'b0, B[19:0]}@@{4'b0, B[23:4]}"                                              # адрес не из тех бит
)
bad=0; k=0
for m in "${muts[@]}"; do
  k=$((k+1)); FROM="${m%%@@*}" TO="${m#*@@}" \
    perl -pe 's/\Q$ENV{FROM}\E/$ENV{TO}/' "$P/rtl/RISC5.v" > "$W/RISC5.v"
  if cmp -s "$W/RISC5.v" "$P/rtl/RISC5.v"; then echo "  мутация $k: не применилась ❌"; bad=1; continue; fi
  if ! (cd "$P" && verilator -Wno-fatal --cc --build --exe --public-flat-rw -CFLAGS "-O2 -I$P/tb" \
     -DWITH_CHK -DCHK_SPLIT -DWITH_DESC -o rt --top-module RISC5 --Mdir "$W/obj$k" \
     "$W/RISC5.v" $RTL "$P/tb/run_tests.cpp" > "$W/build$k.log" 2>&1) || [ ! -x "$W/obj$k/rt" ]; then
    echo "  мутация $k: не собралась — это не «поймана» ❌"; bad=1; continue
  fi
  caught=0
  for t in t3_idx t3_idx_neg t3_idx_hi t3_idx_zero t3_idx_max t3_idx_rand; do
    "$W/obj$k/rt" "$P/tests/$t" > /dev/null 2>&1 || caught=$((caught+1))
  done
  if [ $caught -gt 0 ]; then echo "  мутация $k: поймана ($caught тестов из 6) ✅"; else echo "  мутация $k: НЕ ПОЙМАНА ❌"; bad=1; fi
done
exit $bad
