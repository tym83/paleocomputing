#!/bin/sh
# Translate and run every RED, GREEN, BLUE and YELLOW program in os/ and kube/; compare with .out
set -u
cd "$(dirname "$0")/.."
pass=0; failn=0; tmp=$(mktemp -d)
[ -x green/build/greenc ] || make -s -C green fixpoint > /dev/null
[ -x blue/build/bluec ] || make -s -C blue fixpoint > /dev/null
[ -x yellow/build/yellowc ] || make -s -C yellow fixpoint > /dev/null
yellowc() { cat yellow/lib/prelude.yel - | yellow/build/yellowc; }   # after the prelude
for src in os/*.red os/*.grn os/contrast/*.red os/contrast/*.grn kube/*.red kube/*.grn os/*.blu os/contrast/*.blu kube/*.blu os/*.yel os/contrast/*.yel kube/*.yel; do
  [ -f "$src" ] || continue
  case "$src" in *.yel) cc=yellowc; name=$(basename "$src" .yel)y;; *.grn) cc=green/build/greenc; name=$(basename "$src" .grn)g;; *.blu) cc=blue/build/bluec; name=$(basename "$src" .blu)b;; *) cc=build/redc; name=$(basename "$src" .red);; esac
  exp="${src%.*}.out"
  $cc < "$src" > "$tmp/$name.c" || { echo "FAIL $src: $(tail -1 "$tmp/$name.c")"; failn=$((failn+1)); continue; }
  flags=-w
  # GREEN: no incompatible pointer or integer conversions in what greenc makes
  case "$src" in *.grn) flags="-Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion";; esac
  ${CC:-cc} -std=gnu11 -O1 $flags -Irt "$tmp/$name.c" rt/paleo.c -o "$tmp/$name" -lpthread -lm || { echo "FAIL $src: C"; failn=$((failn+1)); continue; }
  perl -e 'alarm shift; exec @ARGV' 60 "$tmp/$name" > "$tmp/$name.txt" 2>&1
  if diff -u "$exp" "$tmp/$name.txt"; then pass=$((pass+1)); else echo "FAIL $src"; failn=$((failn+1)); fi
done
rm -rf "$tmp"; echo "os/kube programs: $pass passed, $failn failed"; [ "$failn" -eq 0 ]
