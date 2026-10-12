#!/bin/sh
# Make the 1979 RED and GREEN originals runnable (the originals are not in git: get them
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
# contract problem NN: the configuration capsule, NN-units.red, the original
# through NN-slug.sed, then NN-main.red; the program is pN
red_problem() {
  f=$(ls problems/original/red/$1-*.red)
  { cat problems/run/configuration.red
    if [ -f "problems/run/$1-units.red" ]; then cat "problems/run/$1-units.red"; fi
    echo; body "$f" | sed -f "problems/run/$(basename "$f" .red).sed"
    cat "problems/run/$1-main.red"; } > "$tmp/p${1#0}.red"
}
RED_PROBLEMS="01 02 03 05 06 07 08 09 10"
for n in $RED_PROBLEMS; do red_problem "$n"; done
printf '%-80s\n%-80s\n' STATUS DONE > "$tmp/cards"
fail=0
for p in c1 $(for n in $RED_PROBLEMS; do printf 'p%s ' "${n#0}"; done); do
  build/redc < "$tmp/$p.red" > "$tmp/$p.c"
  cc -std=gnu11 -O1 -w -Irt "$tmp/$p.c" rt/paleo.c -o "$tmp/$p" -lpthread -lm
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$p" < "$tmp/cards" > "$tmp/$p.txt" 2>&1
  if diff -u "problems/run/$p.out" "$tmp/$p.txt"; then echo "ok $p"; else echo "FAIL $p"; fail=1; fi
done
# GREEN problem 9, distributed output, with green/build/greenc
gbody() { sed -n '/^-- -----/,$p' "$1" | tail -n +2; }
{ gbody problems/original/green/09-distributed-output.grn \
  | sed -f problems/run/green/09-distributed-output.sed; cat problems/run/green/09-main.grn; } > "$tmp/g9.grn"
for p in g9; do
  green/build/greenc < "$tmp/$p.grn" > "$tmp/$p.c"
  cc -std=gnu11 -O1 -w -Irt "$tmp/$p.c" rt/paleo.c -o "$tmp/$p" -lpthread -lm
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$p" > "$tmp/$p.txt" 2>&1
  if diff -u "problems/run/green/$p.out" "$tmp/$p.txt"; then echo "ok $p"; else echo "FAIL $p"; fail=1; fi
done
exit $fail
