#!/bin/bash
# Находка 78: 1.0 < 2.0 даёт FALSE, если перед сравнением целое сложение
# переполнилось. Прогон на эмуляторе Norebo и на RTL Вирта.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
d="$P/build/lm/ov"; mkdir -p "$d"; cd "$d"; cp -f "$P/lm/OvProbe.Mod" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile OvProbe.Mod/s > compile.log 2>&1 || { cat compile.log; exit 1; }
echo "  эмулятор Norebo:"; "$NB/norebo.bin" OvProbe.Run < /dev/null | sed 's/^/    /'
# ⚠ stdin закрыт: стенд читает шину и при записи, а чтение порта -56 у Norebo —
# getchar(); с открытым терминалом прогон молча ждёт ввода.
echo "  RTL Вирта:"; "$P/build/obj_nb/norebo_tb" OvProbe.Run < /dev/null | grep "overflow" | sed 's/^/    /'
