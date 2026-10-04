#!/bin/bash
# Disk image of the real system with the model: the reference image + LM.Mod and
# LM.Weights. We do NOT put the object file there: built in Norebo, it refers to
# the keys of Norebo's symbol files, and the system rejects it ("imports Files with
# bad key"). The system compiles the module itself, via the scripts/lm.src script.
# Files are written with VDiskUtil from Norebo (the same path build-image.py uses
# to build images from scratch). The reference is not touched; we work on a copy.
#   lm/mkdisk.sh [output image]   (default build/lm/oberon-lm.dsk)
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
# Two commands are appended to System.Tool, the tool viewer the system
# opens at startup. Then the script needs no keyboard: just two middle
# clicks, identical for RTL and QEMU. System.Tool is plain text (no
# Texts header), lines separated by CR.
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
echo "  image with the model: $out"
