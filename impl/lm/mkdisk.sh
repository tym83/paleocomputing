#!/bin/bash
# Образ диска настоящей системы с моделью: эталонный образ + LM.Mod и
# LM.Weights. Объектного файла НЕ кладём: собранный в Norebo, он ссылается на
# ключи символьных файлов Norebo, и система отвергает его («imports Files with
# bad key»). Модуль компилирует сама система, сценарием scripts/lm.src.
# Кладёт файлы VDiskUtil из Norebo (тот же путь, которым build-image.py
# собирает образы с нуля). Эталон не трогается — работаем на копии.
#   lm/mkdisk.sh [выходной образ]   (по умолчанию build/lm/oberon-lm.dsk)
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
out="${1:-$P/build/lm/oberon-lm.dsk}"
d="$P/build/lm/img"; mkdir -p "$d"; cd "$d"
cp -f "$NB"/Norebo/VDisk.Mod "$NB"/Norebo/VFileDir.Mod "$NB"/Norebo/VFiles.Mod \
      "$NB"/Norebo/VDiskUtil.Mod "$P/lm/LM.Mod" "$P/lm/LM.Weights" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile VDisk.Mod/s VFileDir.Mod/s VFiles.Mod/s VDiskUtil.Mod/s LM.Mod/s > compile.log 2>&1 \
  || { cat compile.log; exit 1; }
cp -f "$P/ext/disk/Oberon-2016-08-02.dsk" disk.dsk
# Две команды дописываются в System.Tool — окно инструментов, которое система
# открывает при старте. Тогда сценарию не нужна клавиатура: только два средних
# щелчка, одинаковых для RTL и для QEMU. System.Tool — простой текст (без
# заголовка Texts), строки через CR.
python3 - "$P" <<'PY'
import sys; sys.path.insert(0, sys.argv[1] + "/tools")
from oberonfs import Image
img = Image(sys.argv[1] + "/ext/disk/Oberon-2016-08-02.dsk")
t = img.read(img.files()["System.Tool"])
open("System.Tool", "wb").write(t + b'ORP.Compile LM.Mod/s ~\rLM.Generate 16 1 "alice was " ~\r')
PY
"$NB/norebo.bin" VDiskUtil.InstallFiles disk.dsk \
  LM.Mod =\> LM.Mod LM.Weights =\> LM.Weights System.Tool =\> System.Tool > install.log 2>&1
grep -q failed install.log && { cat install.log; exit 1; }
cp -f disk.dsk "$out"
echo "  образ с моделью: $out"
