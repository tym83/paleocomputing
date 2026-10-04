#!/bin/bash
# An image of the real Oberon system with Kube.Mod and commands appended to
# System.Tool. No object file goes in: the system compiles the module itself
# (it rejects an .rsc built in Norebo, whose symbol file keys differ).
#   kube/mkdisk.sh [output image]   (default build/kube/oberon-kube.dsk)
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
out="${1:-$P/build/kube/oberon-kube.dsk}"
d="$P/build/kube/img"; mkdir -p "$d"; cd "$d"
cp -f "$NB"/Norebo/VDisk.Mod "$NB"/Norebo/VFileDir.Mod "$NB"/Norebo/VFiles.Mod \
      "$NB"/Norebo/VDiskUtil.Mod "$P/kube/Kube.Mod" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile VDisk.Mod/s VFileDir.Mod/s VFiles.Mod/s VDiskUtil.Mod/s Kube.Mod/s > compile.log 2>&1 \
  || { cat compile.log; exit 1; }
grep -q "FAILED" compile.log && { cat compile.log; exit 1; }
cp -f "$P/ext/disk/Oberon-2016-08-02.dsk" disk.dsk
# Commands appended to System.Tool (plain text, CR line ends): compile ->
# three controllers -> a deployment of 3 -> show the tree -> delete a pod by
# its quoted name -> show the tree again, with the pod recreated.
python3 - "$P" <<'PY'
import sys; sys.path.insert(0, sys.argv[1] + "/tools")
from oberonfs import Image
img = Image(sys.argv[1] + "/ext/disk/Oberon-2016-08-02.dsk")
t = img.read(img.files()["System.Tool"])
cmds = (b'ORP.Compile Kube.Mod/s ~\r'
        b'Kube.Start ~\r'
        b'Kube.Apply web 3 nginx ~\r'
        b'Kube.Get ~\r'
        b'Kube.DeletePod "web-rs-0" ~\r'
        b'Kube.Get ~\r')
open("System.Tool", "wb").write(t + cmds)
PY
"$NB/norebo.bin" VDiskUtil.InstallFiles disk.dsk \
  Kube.Mod =\> Kube.Mod System.Tool =\> System.Tool > install.log 2>&1
grep -q failed install.log && { cat install.log; exit 1; }
cp -f disk.dsk "$out"
echo "  image with kube: $out"
