#!/bin/sh
# Translates a RED, GREEN, BLUE or YELLOW program and runs it.
#
#   ada-colors-run [file.red ...]    RED: the files are joined in this order
#   ada-colors-run [file.grn ...]    GREEN: the same
#   ada-colors-run [file.blu ...]    BLUE: the same
#   ada-colors-run [file.yel ...]    YELLOW: the same, after the standard prelude
#
# Without arguments every source in $SRCDIR (default /src) is taken in name
# order. Standard input goes to the program. The language is chosen by the
# extension; languages cannot be mixed in one run. ADA_COLORS (default
# /opt/ada-colors) holds bin/, rt/paleo.o and lib/prelude.yel.
set -e
SRC=${SRCDIR:-/src}
OPT=${ADA_COLORS:-/opt/ada-colors}
[ -d "$SRC" ] && cp -f "$SRC"/*.red "$SRC"/*.grn "$SRC"/*.blu "$SRC"/*.yel . 2>/dev/null || true

files="$*"
[ -n "$files" ] || files=$(ls *.red *.grn *.blu *.yel 2>/dev/null | tr '\n' ' ')
[ -n "$files" ] || { echo "nothing to run: no .red, .grn, .blu or .yel source" >&2; exit 2; }

lang=""
for f in $files; do
  case "$f" in
    *.red) l=red ;;
    *.grn) l=green ;;
    *.blu) l=blue ;;
    *.yel) l=yellow ;;
    *) echo "$f: not a .red, .grn, .blu or .yel file" >&2; exit 2 ;;
  esac
  [ -z "$lang" ] || [ "$lang" = "$l" ] || { echo "sources of different languages cannot be mixed" >&2; exit 2; }
  lang=$l
done

case "$lang" in
  red) tr=redc ;;
  green) tr=greenc ;;
  blue) tr=bluec ;;
  yellow) tr=yellowc ;;
esac

# shellcheck disable=SC2086
if [ "$lang" = yellow ]; then
  # yellowc reports the first error as "line N:", counting the prelude
  skip=$(wc -l < "$OPT/lib/prelude.yel")
  cat "$OPT/lib/prelude.yel" $files > program.src
  if ! "$OPT/bin/$tr" < program.src > program.c 2>/dev/null; then
    grep -m1 '^line ' program.c | awk -v s="$skip" '{ sub(/:$/, "", $2); $2 = ($2 - s) ":"; print }' >&2
    exit 1
  fi
else
  cat $files > program.src
  if ! "$OPT/bin/$tr" < program.src > program.c; then
    tail -1 program.c >&2
    exit 1
  fi
fi
cc -std=gnu11 -O1 -w -I"$OPT/rt" program.c "$OPT/rt/paleo.o" -o program -lpthread -lm
exec ./program
