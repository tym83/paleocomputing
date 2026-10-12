#!/bin/sh
# Run the X8 test program of the Mathematisch Centrum (X8Stest.elan, D. Grune,
# 1971-72; 375 tests of almost the whole instruction set, interrupts
# included) on our assembler and emulator. The program is not ours and is not
# in the repository: it comes with the X8S simulator from Dick Grune's page.
set -eu
here=$(cd "$(dirname "$0")" && pwd)
top=$here/..
work=${WORK:-$top/build/x8stest}
mkdir -p "$work"
if [ ! -f "$work/X8Stest.elan" ]; then
  curl -fsSL -o "$work/X8S.zip" https://dickgrune.com/Old_Computers/EL-X8/X8S.zip
  echo "6838a343698c84e971d5501f41e799e94cba214245b2aa5f7f1fc71f3ddfe63c  $work/X8S.zip" | shasum -a 256 -c - >/dev/null
  (cd "$work" && unzip -o -q X8S.zip X8Stest.elan)
fi
python3 "$top/asm/x8asm.py" "$work/X8Stest.elan" -o "$work/test.tape" -l "$work/test.lst"
# the program punches its results through CHARON on punch 18; 64K words of core
"$top/emu/x8emu" -core 65536 -punch "$work/punch.out" -max 120 "$work/test.tape"
python3 "$here/pustat.py" "$work/punch.out" "$here/x8stest.checks" > "$work/pustat.txt" || {
  tail -5 "$work/pustat.txt"; exit 1; }
tail -2 "$work/pustat.txt"
diff -u "$here/x8stest.expected" "$work/pustat.txt" && echo "x8stest: output unchanged"
