#!/bin/sh
# Runs a lab as a batch job: a change goes in, a verdict comes out.
#
# The change is supplied as the /work directory: files from it are laid over the tree.
# This way a lab needs neither git nor network, only a volume with the changed files.
set -e
cd /lab

apply() {
  [ -d /work ] || return 0
  found=0
  # The parentheses are required: without them -o overrides -type f, and find returns extra entries.
  for f in $(cd /work && find . -type f \( -name '*.v' -o -name '*.s' \
             -o -name '*.Mod' -o -name '*.py' -o -name '*.cpp' -o -name '*.h' \) 2>/dev/null); do
    mkdir -p "$(dirname "$f")"
    cp "/work/$f" "$f"
    echo "  applied: $f"
    found=1
  done
  [ $found -eq 1 ] || echo "  no changes in /work, running on the original tree"
}

case "${1:-help}" in
  help)
    cat <<'TXT'
Host-side labs. Usage:

  lab check        full check: tests, system boot, differential
                   testbench, bootstrap, system rebuild
  lab isa          isa assignment: your own processor instruction.
                   Put the changed rtl/*.v and tests/*.s into /work
  lab compiler     compiler assignment: your own built-in procedure.
                   Put the changed ext/norebo/... or *.Mod into /work
  lab shell        a shell inside the image

Changes are supplied as a volume: -v "$PWD/mywork:/work"
TXT
    ;;
  check)   apply; exec make check ;;
  isa)
    apply
    echo; echo "── processor instruction tests ──"
    make test
    echo; echo "── decoder equivalence ──"
    make equiv
    ;;
  compiler)
    apply
    echo; echo "── compiler bootstrap on RTL ──"
    exec make selfhost
    ;;
  shell)   shift; exec /bin/sh "$@" ;;
  *)       echo "unknown command: $1" >&2; exit 2 ;;
esac
