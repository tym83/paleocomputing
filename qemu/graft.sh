#!/bin/sh
# Grafts the RISC5 target into a QEMU tree.
#
# QEMU targets are compiled in: dropping the files in is not enough, the target
# also has to be declared in four places. That is why this is a script and not
# a list of steps kept in someone's head; otherwise the build is not reproducible.
#
#   graft.sh <qemu-tree-directory>
set -eu
Q="${1:?specify the QEMU tree directory}"
HERE=$(cd "$(dirname "$0")" && pwd)

# cp -R, not cp -a: the copies must get the current time. With the source
# timestamps kept, a file edited before the previous build looks older than its
# object file, and an incremental build silently keeps the old code.
cp -R "$HERE/target/risc5"               "$Q/target/"
cp -R "$HERE/hw/risc5"                   "$Q/hw/"
cp    "$HERE/configs/targets/risc5-softmmu.mak" "$Q/configs/targets/"
cp -R "$HERE/configs/devices/risc5-softmmu"     "$Q/configs/devices/"

add_once() {  # file, what to look for, what to replace it with
  grep -q "$3" "$1" || sed -i.bak "s|$2|$3\\n$2|" "$1"
  rm -f "$1.bak"
}

add_once "$Q/target/meson.build" "subdir('riscv')"      "subdir('risc5')"
add_once "$Q/target/Kconfig"     "source riscv/Kconfig"  "source risc5/Kconfig"
add_once "$Q/hw/meson.build"     "subdir('riscv')"       "subdir('risc5')"
add_once "$Q/hw/Kconfig"         "source riscv/Kconfig"  "source risc5/Kconfig"

# The list of targets in QAPI; without it target-info does not build.
grep -q "'risc5'" "$Q/qapi/machine.json" || \
  sed -i.bak "s|'ppc64', 'riscv32'|'ppc64', 'risc5', 'riscv32'|" "$Q/qapi/machine.json"
rm -f "$Q/qapi/machine.json.bak"

echo "risc5 target grafted into $Q"
