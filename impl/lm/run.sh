#!/bin/bash
# Собрать LM.Mod компилятором Оберона и сгенерировать текст.
#   lm/run.sh ДВИЖОК N ЗЕРНО "затравка"
# ДВИЖОК: emu — эмулятор Norebo на C (быстро, такты по модели);
#         rtl — Norebo на RTL Вирта (build/obj_nb/norebo_tb);
#         rtl-fast — то же на ядре с быстрым FP-умножителем (build/obj_nbf/norebo_tb).
# Компилирует всегда эмулятор: объектный файл от движка не зависит (находка 22).
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
eng="${1:-emu}"; n="${2:-64}"; seed="${3:-1}"; prompt="${4:-alice was }"
d="$P/build/lm/run"; mkdir -p "$d"; cd "$d"
cp -f "$P/lm/LM.Mod" "$P/lm/LM.Weights" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile LM.Mod/s > compile.log 2>&1 \
  || { cat compile.log; exit 1; }
grep -q "compiling LM" compile.log || { cat compile.log; exit 1; }
case "$eng" in
  emu)      bin="$NB/norebo.bin" ;;
  rtl)      bin="$P/build/obj_nb/norebo_tb" ;;
  rtl-fast) bin="$P/build/obj_nbf/norebo_tb" ;;
  *) echo "движок: emu | rtl | rtl-fast"; exit 2 ;;
esac
# порт светодиодов — метки окна замера; эмулятор печатает каждую, прячем
NOREBO_CYCLES=1 "$bin" LM.Generate "$n" "$seed" "\"$prompt\"" 2>&1 | grep -v "^\[LEDs:"
