#!/bin/bash
# Полная среда Norebo в одной конфигурации кодогенератора (выпуск 14).
#
# Зачем: у конфигурации F другой ABI открытого массива (первое слово —
# дескриптор). Замер по методике находки 21 держит среду Norebo (Kernel, Files,
# Texts, Oberon…) стоковой и меняет только компилятор — с F так нельзя:
# стоковый Texts получил бы дескриптор вместо адреса. Поэтому здесь КАЖДАЯ
# конфигурация собирает ВСЁ своим кодогенератором, и сравниваются полностью
# однородные системы.
#
#   ступень 1: исходники конфигурации, собранные стоковыми бинарниками Norebo —
#              код внутри ещё стоковый, но компилятор уже порождает код X
#   ступень 2: собранная компилятором ступени 1 — вся среда в коде X
#   ступень 3: собранная ступенью 2 — компилятор, сам исполняющий код X
# Ступени 2 и 3 обязаны совпасть побайтово: компилятор в коде X делает то же,
# что компилятор в стоковом коде. Для F это проверка того, что дескрипторы не
# ломают ни одной программы среды, включая сам компилятор. Замер — на ступени 2.
#
# Использование: build_cfg_toolchain.sh A|B|E|F   -> build/tc/<cfg>/{s1,s2,s3}
set -e
cfg="$1"; P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; T="$P/build/tc/$cfg"
MODS="Norebo Kernel FileDir Files Modules Fonts Texts RS232 Oberon CoreLinker ORS ORB ORG ORP ORTool"
# Компоновщик Norebo передаёт открытому параметру буфер 63 КБ (16 128 слов,
# CoreLinker.Mod: Buffer = ARRAY 63*1024 DIV 4 OF INTEGER) — длиннее, чем
# выражает дескриптор (4095). Это единственное такое место во всей среде и во
# всех 40 собираемых модулях PO2013 (tools/scan_open_args.sh). Поэтому в F
# компоновщик не собирается, а InnerCore во всех конфигурациях одинаково
# компонует стоковый CoreLinker из build2: он только читает .rsx и пишет образ,
# его собственный код в замер не входит.
[ "$cfg" = F ] && MODS="${MODS/CoreLinker /}"
NMODS=$(echo $MODS | wc -w | tr -d ' ')
rm -rf "$T"; mkdir -p "$T/s1" "$T/s2" "$T/s3"
stage() {  # $1 каталог, $2 откуда бинарники
  cd "$1"
  if [ "$cfg" != B ]; then cp "$P/patches/ORG-cfg$cfg.Mod" ORG.Mod; fi
  # По одному модулю на запуск, и .rsc сразу убирается в .rsx. Два повода.
  # (1) Куча: Norebo держит 8 МБ и не собирает мусор внутри команды; четырнадцать
  #     модулей за один запуск поднимают кучу выше 1 МБ, а дескриптор выражает
  #     только 20-битный адрес — строки из кучи получают обрезанный адрес, и
  #     компилятор в коде F зависает (проверено: с памятью Norebo 1 МБ тот же
  #     прогон исчерпывает кучу на ORP). Отдельный запуск — свежая куча.
  # (2) Собранный здесь Kernel/Modules не должен заслонить модули самой среды
  #     при следующем запуске; импорту нужны только .smb.
  : > compile.log
  for m in $MODS; do
    NOREBO_PATH="$1:$NB/Norebo:$NB/Oberon:$2" perl -e 'alarm 60; exec @ARGV' \
      "$NB/norebo.bin" ORP.Compile $m.Mod/s >> compile.log 2>&1 || true
    [ -f $m.rsc ] && mv $m.rsc $m.rsx
  done
  # E и F штампуют версию 2 и 3 — стоковый компоновщик (как и загрузчик системы)
  # такие отвергает, в этом и смысл штампа. Здесь, на копиях в build/ и только
  # для измерительного стенда, версия возвращается в 1 (так же делает находка 21
  # для E, tools/rsc_setversion.py).
  [ "$cfg" = E ] || [ "$cfg" = F ] && python3 "$P/tools/rsc_setversion.py" 1 *.rsx > /dev/null
  NOREBO_PATH="$1:$NB/Norebo:$NB/Oberon:$NB/build2" "$NB/norebo.bin" CoreLinker.LinkSerial Modules InnerCore >> compile.log 2>&1 || true
  for i in *.rsx; do mv "$i" "${i%.rsx}.rsc"; done
  n=$(ls *.rsc 2>/dev/null | wc -l | tr -d ' ')
  echo "  $cfg $(basename "$1"): модулей $n, $(grep -c "compiling" compile.log) скомпилировано, InnerCore $( [ -f InnerCore ] && echo есть || echo НЕТ)"
  [ "$n" = "$NMODS" ] && [ -f InnerCore ] || { tail -20 compile.log; exit 1; }
}
stage "$T/s1" "$NB/build2"
stage "$T/s2" "$T/s1"
stage "$T/s3" "$T/s2"
same=0; diff=0
for f in "$T"/s2/*.rsc "$T/s2/InnerCore"; do
  if cmp -s "$f" "$T/s3/$(basename "$f")"; then same=$((same+1)); else diff=$((diff+1)); echo "    различается: $(basename "$f")"; fi
done
echo "  $cfg: ступени 2 и 3 — совпало $same, различается $diff $( [ $diff = 0 ] && echo ✅ || echo ❌)"
[ $diff = 0 ]
