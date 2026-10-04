#!/bin/bash
# Run Kube in the real Oberon system on the RTL of Wirth's machine and grab the
# screen. The system compiles Kube.Mod itself, installs the controllers as
# background tasks (Oberon.Loop) and reconciles between clicks. 1-2 minutes.
#   kube/system.sh            -> build/kube/kube_rtl.png
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; cd "$P"
RTL="rtl/RISC5.v rtl/Registers.v rtl/Multiplier.v rtl/Divider.v rtl/FPAdder.v \
     rtl/FPMultiplier.v rtl/FPMultiplierFast.v rtl/FPDivider.v rtl/LeftShifter.v rtl/RightShifter.v"
[ -x build/obj_soc/soc_tb ] || verilator -Wno-fatal --cc --build --exe --public-flat-rw \
  -CFLAGS "-O2 -I../../tb" -o soc_tb --top-module RISC5 --Mdir build/obj_soc \
  $RTL tb/soc_tb.cpp tb/disk/disk.c > build/soc_build.log 2>&1
PYTHONPATH=tools python3 tools/mkscript.py scripts/kube.src > scripts/kube.txt
kube/mkdisk.sh
./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=140000000 \
  --disk=build/kube/oberon-kube.dsk --persist --script=scripts/kube.txt > build/kube/run.log 2>&1
python3 tools/pbm2png.py build/kube/kube_rtl.pbm build/kube/kube_rtl.png
echo "  screen: build/kube/kube_rtl.png"
