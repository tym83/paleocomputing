#!/bin/bash
# Compile Kube.Mod with the Oberon compiler (headless Norebo, an emulator of
# Wirth's RISC5) and run the self-contained reconcile demo.  Run: kube/check.sh
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
d="$P/build/kube"; mkdir -p "$d"; cp -f "$P/kube/Kube.Mod" "$d/"
cd "$d"
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
rm -f Kube.rsc Kube.smb
"$NB/norebo.bin" ORP.Compile Kube.Mod/s > compile.log 2>&1 || true
if grep -q "FAILED" compile.log || ! grep -q "new symbol file" compile.log; then
  cat compile.log; exit 1
fi
echo "compiled OK"
echo "--- Kube.Demo ---"
"$NB/norebo.bin" Kube.Demo 2>&1 | grep -v '^\[LEDs:'
