#!/bin/bash
# Ступень «дескрипторы» (выпуск 14): четыре конфигурации кодогенератора на трёх
# нагрузках, каждая — в ПОЛНОСТЬЮ однородной среде (build_cfg_toolchain.sh):
#   A — проверок нет, B — программные (сток), E — CHK, F — E + IDX для открытых
#   массивов.
# Нагрузки:
#   compile  — компилятор компилирует пять модулей системы (как находка 21)
#   arr      — bench/ArrBench.Mod: только массивы известной длины (F = E по коду)
#   open     — bench/OpenBench.Mod: те же ядра на открытых массивах
# Такты — модель тактов эмулятора Norebo, сверенная с RTL (находка 17);
# IDX в ней стоит такт, как в RTL (tests/t3_idx*, make idx-diff).
#
# Проверка правильности: каждую нагрузку компиляции повторяет компилятор той же
# конфигурации, но исполняющий СТОКОВЫЙ код (ступень 1). Вывод обязан совпасть
# побайтово — иначе код конфигурации исполняется неверно, и такты ничего не стоят.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; OUT="$P/build/md"
LOAD="Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod"
for c in A B E F; do
  [ -f "$P/build/tc/$c/s2/InnerCore" ] || bash "$P/tools/build_cfg_toolchain.sh" $c > /dev/null
done
run() {  # $1 каталог, $2 ступень-бинарники, остальное — команда
  local d="$1" bin="$2"; shift 2
  cd "$d"; NOREBO_CYCLES=1 NOREBO_PATH="$d:$bin:$NB/Norebo:$NB/Oberon" \
    perl -e 'alarm 120; exec @ARGV' "$NB/norebo.bin" "$@" > run.log 2>&1 || true
  grep -oE "CYCLES [0-9]+ INSNS [0-9]+" run.log || echo "CYCLES 0 INSNS 0"
}
rm -rf "$OUT"; mkdir -p "$OUT"
printf "%-4s %-8s %14s %14s  %s\n" cfg нагрузка такты команды "код / проверка"
for c in A B E F; do
  S2="$P/build/tc/$c/s2"
  # compile
  d="$OUT/$c-compile"; mkdir -p "$d"; args=""; for m in $LOAD; do args="$args $m/s"; done
  r=$(run "$d" "$S2" ORP.Compile $args)
  code=$(grep -E "^\s+compiling" "$d/run.log" | awk '{s+=$(NF-2)} END {print s}')
  d1="$OUT/$c-compile-s1"; mkdir -p "$d1"; run "$d1" "$P/build/tc/$c/s1" ORP.Compile $args > /dev/null
  same=ok; for m in $LOAD; do cmp -s "$d/${m%.Mod}.rsc" "$d1/${m%.Mod}.rsc" || same=РАЗНЫЕ; done
  printf "%-4s %-8s %s  код %s слов, вывод = ступень 1: %s\n" $c compile "$r" "$code" "$same"
  # arr / open
  for w in ArrBench OpenBench; do
    d="$OUT/$c-$w"; mkdir -p "$d"; cp "$P/bench/$w.Mod" "$d/"
    run "$d" "$S2" ORP.Compile $w.Mod/s > /dev/null; mv run.log compile.log
    k=$(python3 "$P/tools/count_traps.py" $w.rsc | tr -s ' ')
    r=$(run "$d" "$S2" $w.Run)
    bad=$(grep -ciE "trap|assert|halt|index" run.log || true)
    printf "%-4s %-8s %s  %s%s\n" $c $w "$r" "$k" "$( [ "$bad" = 0 ] || echo '  ❌ ловушка при исполнении')"
  done
done | tee "$OUT/summary.txt"
