#!/bin/sh
# Make the 1979 GREEN originals runnable and run them with green/build/greenc.
# Each NN-slug.sed lists the changes a translator forced and why; NN-main.grn
# drives the program (NN-units.grn, if present, comes first); gNN.out is the
# expected output.
set -eu
cd "$(dirname "$0")/../../.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
gbody() { sed -n '/^-- -----/,$p' "$1" | tail -n +2; }
fail=0
for sedf in problems/run/green/[0-9][0-9]-*.sed; do
  base=$(basename "$sedf" .sed); n=${base%%-*}; p=g$n
  {
    if [ -f "problems/run/green/$n-units.grn" ]; then cat "problems/run/green/$n-units.grn"; fi
    gbody "problems/original/green/$base.grn" | LC_ALL=C sed -f "$sedf"
    cat "problems/run/green/$n-main.grn"
  } > "$tmp/$p.grn"
  if ! green/build/greenc < "$tmp/$p.grn" > "$tmp/$p.c" 2> "$tmp/$p.err"; then
    cat "$tmp/$p.err"; echo "FAIL $p (translation)"; fail=1; continue
  fi
  cc -std=gnu11 -O1 -Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion -Irt "$tmp/$p.c" rt/paleo.c -o "$tmp/$p" -lpthread -lm
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$p" > "$tmp/$p.txt" 2>&1 || true
  if diff -u "problems/run/green/$p.out" "$tmp/$p.txt"; then echo "ok $p"; else echo "FAIL $p"; fail=1; fi
done
exit $fail
