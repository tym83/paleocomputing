#!/bin/sh
# Translates a RED or GREEN program and runs it.
#
#   ada-colors-run [file.red ...]    RED: the files are joined in this order
#   ada-colors-run [file.grn ...]    GREEN: the same
#
# Without arguments every source in $SRCDIR (default /src) is taken in name
# order. Standard input goes to the program. The language is chosen by the
# extension; RED and GREEN cannot be mixed in one run.
set -e
SRC=${SRCDIR:-/src}
OPT=/opt/ada-colors
[ -d "$SRC" ] && cp -f "$SRC"/*.red "$SRC"/*.grn . 2>/dev/null || true

files="$*"
[ -n "$files" ] || files=$(ls *.red *.grn 2>/dev/null | tr '\n' ' ')
[ -n "$files" ] || { echo "nothing to run: no .red or .grn source" >&2; exit 2; }

lang=""
for f in $files; do
  case "$f" in
    *.red) l=red ;;
    *.grn) l=green ;;
    *) echo "$f: not a .red or .grn file" >&2; exit 2 ;;
  esac
  [ -z "$lang" ] || [ "$lang" = "$l" ] || { echo "RED and GREEN sources cannot be mixed" >&2; exit 2; }
  lang=$l
done

# shellcheck disable=SC2086
cat $files > program.src
if [ "$lang" = red ]; then tr=$OPT/bin/redc; else tr=$OPT/bin/greenc; fi
if ! "$tr" < program.src > program.c; then
  tail -1 program.c >&2
  exit 1
fi
cc -std=gnu11 -O1 -w -I$OPT/rt program.c $OPT/rt/paleo.o -o program -lpthread -lm
exec ./program
