#!/bin/sh
# Check a RED lab: labs/check.sh <lab> <task> [file]
#   lab   01..11      task  look | change | break | build
#   file  defaults to the lab's program in labs/red/
# It translates the file with build/redc, runs it and says whether the task is done.
set -u
cd "$(dirname "$0")/.."
lab=$1; task=$2; file=${3:-}
[ -x build/redc ] || make -s fixpoint > /dev/null
[ -n "$file" ] || file=$(ls labs/red/$lab-*.red 2>/dev/null | head -1)
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
translate() {
  if build/redc < "$file" > "$tmp/p.c"; then
    cc -std=gnu11 -O1 -w -Irt "$tmp/p.c" rt/paleo.c -o "$tmp/p" -lpthread -lm || return 2
    perl -e 'alarm shift; exec @ARGV' 30 "$tmp/p" > "$tmp/out" 2>&1; return 0
  fi
  tail -1 "$tmp/p.c" > "$tmp/out"; return 1
}
ok()   { echo "lab $lab/$task: done. $1"; exit 0; }
no()   { echo "lab $lab/$task: not yet. $1"; echo "--- output:"; cat "$tmp/out"; exit 1; }
want() { grep -q -- "$1" "$tmp/out" && ok "$2" || no "$3"; }
translate; rc=$?
case "$lab/$task" in
  01/look)   want "popped 42" "The capsule hides everything but stack, init, push, pop." "run it unchanged" ;;
  01/change) want "peek 7" "peek is exported and seen from main." "add FUNC peek(READONLY s : stack) => INT, export it, print \"peek\" & CNVT[STRING[ASCII]](peek(s))" ;;
  01/break)  want "not exported by its capsule" "Exporting a type does not export its components (8.2)." "write s.top := 0; in main" ;;
  02/break)  want "not imported" "A procedure is a closed scope (3.5)." "remove hits from the IMPORTS list" ;;
  02/change) want "readonly" "READONLY imports cannot be assigned." "assign to limit inside hit" ;;
  03/change) [ "$(grep -n 'send 2' "$tmp/out" | cut -d: -f1)" -gt "$(grep -n 'got 1' "$tmp/out" | cut -d: -f1)" ] && ok "With size 0 the sender cannot get ahead: a rendezvous." || no "set CONST size := 0" ;;
  04/change) want "timeout" "The timeout won the race." "make the sender slower than the WAIT" ;;
  04/break)  want "X_EMPTY_MAILBOX" "RED forbids a SEND to a zero-size mailbox inside WAIT: it could deadlock (10.5)." "wait on SEND(m0, 1) where m0 is a MAILBOX[INT](0)" ;;
  05/break)  want "deadlock" "The exception left the task, its region was released, but main still waits for a message that never comes: the runtime sees every task blocked." "remove the GUARD around the REGION" ;;
  06/change) want "^a" "Equal priorities run in the order they became eligible." "give a, b and c the same priority" ;;
  07/build)  want "max" "Your generic got an instance per type it was called with." "write GENERIC t : TYPE FUNC max(CONST a, b : t) => t and print \"max\" & something" ;;
  08/break)  want "disagree" "Replying before the checkpoint loses a confirmed transfer: the NonStop rule exists for this." "in the primary, swap the checkpoint SEND (with its IF) and the reply SEND, so the crash comes between them" ;;
  08/change) want "exactly once" "Wherever the primary dies, the audit holds." "change crash_after to another request number" ;;
  09/break)  want "NotReady" "Deciding after each event, before the queued relist is read, evicts healthy nodes after a control plane failover." "delete the draining loop in node_ctl" ;;
  10/build)  [ $rc -eq 0 ] && want "7" "Your built-in went through a fixed point of redc." "add MAX to builtin in red/redc/07-expr.red, run make fixpoint, then translate a program printing MAX(3, 7)" ;;
  11/break)  [ $rc -eq 1 ] && ok "The 1979 text does not translate without that change: $(cat "$tmp/out")" || no "drop one line of problems/run/C1-matrix-vector.sed and regenerate" ;;
  *)         [ $rc -eq 0 ] && { cat "$tmp/out"; exit 0; } || { cat "$tmp/out"; exit 1; } ;;
esac
