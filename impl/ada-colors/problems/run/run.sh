#!/bin/sh
# Make the 1979 RED originals runnable (the originals are not in git: get them
# as described in problems/README.md) and run them. Each sed file lists the
# changes a translator forced; *-units.red stand for what the problem assumes
# to be present; *-main.red drive the program.
set -eu
cd "$(dirname "$0")/../.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
body() { sed -n '/^% -----/,$p' "$1" | tail -n +2; }
# C.1, the matrix-vector package
LC_ALL=C sed -f problems/run/C1-matrix-vector.sed problems/original/red/C1-matrix-vector.red \
  | sed -n '/^CAPSULE matrix_vector_package/,/^END CAPSULE/p' > "$tmp/c1.red"
cat problems/run/C1-main.red >> "$tmp/c1.red"
# problem 6, process control
{ cat problems/run/06-units.red; echo; body problems/original/red/06-process-control.red \
  | sed -f problems/run/06-process-control.sed; cat problems/run/06-main.red; } > "$tmp/p6.red"
printf '%-80s\n%-80s\n' STATUS DONE > "$tmp/cards"
for p in c1 p6; do
  build/redc < "$tmp/$p.red" > "$tmp/$p.c"
  cc -std=gnu11 -O1 -w -Irt "$tmp/$p.c" rt/paleo.c -o "$tmp/$p" -lpthread -lm
  echo "== $p"
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$p" < "$tmp/cards"
done
