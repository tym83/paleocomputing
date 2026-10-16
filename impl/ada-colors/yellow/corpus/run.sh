#!/bin/sh
# The programs of Part Three of the 1978 YELLOW report (DTIC ADB950587,
# pp.1096-1124), transcribed in original/ as printed.
#
# For each example two programs are made and translated with build/yellowc:
#  - as printed: the original text, with only what the example says it
#    assumes around it (NAME.pre.yel, NAME.post.yel); the first message of
#    the translator must be the one in NAME.asprinted (or nothing, when the
#    original is accepted);
#  - fixed: the same through NAME.sed, the changes the translator forced;
#    it is run and must print NAME.out.
# The tutorial fragments of section II carry line numbers: they are taken
# by number and put in declaration-before-use order by the recipes below.
set -u
cd "$(dirname "$0")/.."
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
pass=0; failn=0

# numbered lines a..b of a transcription, without their numbers
num() {
  awk -v a="$2" -v b="$3" '
    /^[0-9]+ / { n = $1; sub(/^[0-9]+ /, ""); if (n >= a && n <= b) print; next }
    n != "" && n >= a && n <= b { print }' "corpus/original/$1"
}

part() { [ -f "corpus/$1" ] && cat "corpus/$1"; true; }

# the text of an example: its recipe, or the whole original
text() {
  case "$1" in
    E03-flushots)
      f=E03-flushots.txt
      num $f 301 302; echo ";"; num $f 201 206; echo ";"; num $f 501 502; echo ";"
      num $f 101 108; echo ";"; num $f 401 401; num $f 601 601; num $f 801 802; echo ";"
      part E03-flushots.data.yel
      num $f 402 403; num $f 602 603; echo ";"; num $f 701 702
      part E03-flushots.fill.yel
      num $f 803 809;;
    E07-distance)
      f=E07-distance.txt
      num $f 901 901; echo ";"; num $f 1101 1102; num $f 1001 1005; echo ";"
      num $f 1201 1201; num $f 1301 1321; echo ";"
      num $f 1202 1203;;
    E11-sieve) num E11-sieve.txt 1401 1415;;
    E12-moresets)
      f=E12-moresets.txt
      num $f 1501 1506; num $f 1601 1602; part E12-moresets.decl.yel; num $f 1507 1510;;
    *) cat "corpus/original/$1.yel";;
  esac
}

# the program: the standard prelude, what the example assumes, the text
program() {
  cat lib/prelude.yel
  # the advanced examples import the module of p.1106 (E-13)
  case "$1" in E1[4-9]-*|E2*) cat corpus/original/E13-conventions.yel;; esac
  part "$1.pre.yel"
  if [ "$2" = fixed ] && [ -f "corpus/$1.sed" ]; then
    text "$1" | LC_ALL=C sed -f "corpus/$1.sed"
  else
    text "$1"
  fi
  part "$1.post.yel"
}

for t in corpus/*.asprinted; do
  name=$(basename "$t" .asprinted)
  # as printed
  program "$name" printed > "$tmp/$name.p.yel"
  build/yellowc < "$tmp/$name.p.yel" > "$tmp/$name.p.c" 2>/dev/null
  got=$(grep -m1 '^line ' "$tmp/$name.p.c" | sed 's/^line [0-9]*: //' || true)
  want=$(cat "$t")
  if [ "$got" = "$want" ]; then pass=$((pass+1)); else
    echo "FAIL $name as printed: want [$want] got [$got]"; failn=$((failn+1))
    ln=$(grep -m1 '^line ' "$tmp/$name.p.c" | sed 's/^line \([0-9]*\):.*/\1/')
    [ -n "$ln" ] && sed -n "${ln}p" "$tmp/$name.p.yel" | sed 's/^/    at: /'
  fi
  # fixed, and run (only translated when there is nothing to run)
  [ -f "corpus/$name.out" ] || [ -f "corpus/$name.sed" ] || continue
  program "$name" fixed > "$tmp/$name.yel"
  if ! build/yellowc < "$tmp/$name.yel" > "$tmp/$name.c" 2>/dev/null; then
    echo "FAIL $name: $(grep -m1 '^line ' "$tmp/$name.c")"; failn=$((failn+1)); continue
  fi
  if ! ${CC:-cc} -std=gnu11 -O1 -w -I../rt "$tmp/$name.c" ../rt/paleo.c -o "$tmp/$name" -lpthread -lm 2> "$tmp/cc.txt"; then
    echo "FAIL $name: C compiler"; head -5 "$tmp/cc.txt"; failn=$((failn+1)); continue
  fi
  if [ ! -f "corpus/$name.out" ]; then pass=$((pass+1)); continue; fi
  perl -e 'alarm shift; exec @ARGV' 30 "$tmp/$name" < /dev/null > "$tmp/$name.txt" 2>&1
  if diff -u "corpus/$name.out" "$tmp/$name.txt" > "$tmp/diff.txt"; then pass=$((pass+1)); else
    echo "FAIL $name"; cat "$tmp/diff.txt"; failn=$((failn+1)); fi
done
echo "yellow corpus: $pass passed, $failn failed"
[ "$failn" -eq 0 ]
