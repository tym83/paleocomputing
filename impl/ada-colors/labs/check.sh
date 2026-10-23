#!/bin/sh
# Check a lab: labs/check.sh <lab> <task> [file]
#   lab   01..12 (RED), b1..b7 (BLUE), y1..y8 (YELLOW)      task  look | change | break | build
#   file  defaults to the lab's program in labs/red/, labs/blue/ or labs/yellow/
# It translates the file with build/redc (blue/build/bluec for .blu; YELLOW:
# yellow/build/yellowc, after the prelude), runs it and says whether the task is done.
set -u
cd "$(dirname "$0")/.."
lab=$1; task=$2; file=${3:-}
[ -x build/redc ] || make -s fixpoint > /dev/null
[ -n "$file" ] || file=$(ls labs/red/$lab-*.red labs/blue/$lab-*.blu 2>/dev/null | head -1)
cc=build/redc
case "$file" in *.blu) cc=blue/build/bluec; [ -x $cc ] || make -s -C blue fixpoint > /dev/null;; esac
[ -n "$file" ] || file=$(ls labs/yellow/$lab-*.yel 2>/dev/null | head -1)
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
translate() {
  if $cc < "$file" > "$tmp/p.c"; then
    cc -std=gnu11 -O1 -w -Irt "$tmp/p.c" rt/paleo.c -o "$tmp/p" -lpthread -lm || return 2
    perl -e 'alarm shift; exec @ARGV' 30 "$tmp/p" > "$tmp/out" 2>&1; return 0
  fi
  tail -1 "$tmp/p.c" > "$tmp/out"; return 1
}
case "$file" in *.yel)
  [ -x yellow/build/yellowc ] || make -s -C yellow fixpoint > /dev/null
  # line numbers in yellowc's messages count the prelude: give them back in the lab's file
  translate() {
    if cat yellow/lib/prelude.yel "$file" | yellow/build/yellowc > "$tmp/p.c" 2> /dev/null; then
      cc -std=gnu11 -O1 -w -Irt "$tmp/p.c" rt/paleo.c -o "$tmp/p" -lpthread -lm || return 2
      perl -e 'alarm shift; exec @ARGV' 30 "$tmp/p" > "$tmp/out" 2>&1; return 0
    fi
    tail -1 "$tmp/p.c" | awk -v n="$(wc -l < yellow/lib/prelude.yel)" \
      'match($0, /^line [0-9]+:/) { $0 = "line " (substr($0, 6, RLENGTH - 6) - n) substr($0, RLENGTH) } 1' > "$tmp/out"
    return 1
  } ;;
esac
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
  06/change) [ "$(head -1 "$tmp/out")" = "a" ] && ok "Equal priorities run in the order they became eligible." || no "give a, b and c the same priority" ;;
  07/build)  want "max" "Your generic got an instance per type it was called with." "write GENERIC t : TYPE FUNC max(CONST a, b : t) => t and print \"max\" & something" ;;
  08/break)  want "disagree" "Replying before the checkpoint loses a confirmed transfer: the NonStop rule exists for this." "in the primary, swap the checkpoint SEND (with its IF) and the reply SEND, so the crash comes between them" ;;
  08/change) want "exactly once" "Wherever the primary dies, the audit holds." "change crash_after to another request number" ;;
  09/break)  want "NotReady" "Deciding after each event, before the queued relist is read, evicts healthy nodes after a control plane failover." "delete the draining loop in node_ctl" ;;
  10/build)  [ $rc -eq 0 ] && want "7" "Your built-in went through a fixed point of redc." "add MAX to builtin in red/redc/07-expr.red, run make fixpoint, then translate a program printing MAX(3, 7)" ;;
  11/break)  [ $rc -eq 1 ] && ok "The 1979 text does not translate without that change: $(cat "$tmp/out")" || no "drop one line of problems/run/C1-matrix-vector.sed and regenerate" ;;
  12/look)   want "no circle of waiting" "Every process waits only for processes below it; the society finishes." "run it unchanged" ;;
  12/change) want "drum transfers 0" "With a core page per segment the segment controller never touches the drum." "set CONST ncore := 8" ;;
  12/break)  want "deadlock" "The segment controller waited for the message interpreter, which needed the segment controller to read its vocabulary: the reason THE puts the console on level 2." "set report_dumps to TRUE" ;;
  b1/look)   want "light number 2 and color number 3" "One literal, two types, two positions: the context, or [T]\$\$, says which." "run it unchanged" ;;
  b1/change) want "FLASHING" "A new literal is a new name of the type; SELECT and SUCC follow it." "add \\FLASHING to LIGHT and make NEXT_LIGHT go from \\AMBER to it" ;;
  b1/break)  want "no ordering" "An UNORDERED type has = and <> and nothing else (3.4.4.1)." "write IF S < \\SPADES THEN ... END IF;" ;;
  b2/look)   want "swapped: 1978 BLUE" "One text, an instance per type it is called with, and none of them named." "run it unchanged" ;;
  b2/build)  want "bigger" "Your generic got its LESS_THAN_ from where it was called." "write FUNCTION BIGGER (X, Y: ?T) RETURNS (T) WHERE T NEEDS (LESS_THAN_ (T, T) RETURNS (BOOLEAN)) and print \"bigger \" & something" ;;
  b2/break)  want "no declaration of the routine fits" "?T is bound by one argument, and the other must be of the same type." "write SWAP (# I, K);" ;;
  b3/look)   want "hits 3 of 5" "HIT stops at LIMIT; PLAY may call it because it imports it." "run it unchanged" ;;
  b3/break)  want "import one of them" "A caller must import the routine or every variable the routine uses (4.1.1)." "remove ROUTINES: (HIT) from PLAY" ;;
  b3/change) want "must be a variable" "LIMIT is imported as input, before the #: HIT cannot assign it." "assign to LIMIT inside HIT" ;;
  b4/look)   want "reads .BUSY" "The code 0001 read from the register is the literal whose REP it is." "run it unchanged" ;;
  b4/change) want "reads .OFFLINE" "A literal and its code are added together, in the type and in its REP." "add \\OFFLINE AS BIN '0100' and read BIN '0100' from the register" ;;
  b4/break)  want "machine-dependent part" "Bits become a value only inside SELECT OBJECT_MACHINE (4.5.5.2)." "move S := [STATUS]\$\$(REGISTER); out of the SELECT" ;;
  b5/look)   want "worker 2 holds the semaphore" "Worker 1 died holding a REGION semaphore, and its end released it." "run it unchanged" ;;
  b5/change) grep -q "balance 110" "$tmp/out" && ! grep -q "signals FAILED" "$tmp/out" && ok "The path handled its own failure and released by hand: it ended normally." || no "catch FAILED inside the path, after the BLOCK that holds the semaphore, and RELEASE there" ;;
  b5/break)  want "deadlock" "A SYNCH semaphore is a signal, not a lock: a dying path does not give it back (J3.11-1)." "declare MUTEX as SEMAPHORE (SYNCH)" ;;
  b6/look)   want "no circle of waiting" "Every process waits only for processes below it; the society finishes." "run it unchanged" ;;
  b6/change) want "drum transfers 0" "With a core page per segment the segment controller never touches the drum." "set CONST NCORE: INTEGER := 8;" ;;
  b6/break)  want "deadlock" "Level 1 called level 2, which needed level 1 to read its vocabulary. DUMP's IMPORTS said it could all along." "set REPORT_DUMPS to TRUE" ;;
  b7/look)   want "2 received" "Each wait is a parallel block of two paths, and the item at 30 ms is not lost." "run it unchanged" ;;
  b7/change) want "no item for 5 ms" "The timer path won the race." "set CONST TIMEOUT: INTEGER := 5;" ;;
  b7/break)  want "1 still in the box" "TIMER terminated GET after GET had taken the item's token: the item stays in the box and no RECEIVE will get it." "remove PRIORITY 1 from GET" ;;
  y1/look)   want "a - (b - c) = 9" "- is not associative: YELLOW makes you say which subtraction comes first." "run it unchanged" ;;
  y1/change) want "13 10" "* and DIV are on one level and DIV is not associative: a * b DIV c needs parentheses too." "print (a * b) DIV c, a space, and a * (b DIV c)" ;;
  y1/break)  want "needs parentheses" "a - b - c is a syntax error: Pascal's left-to-right reading is gone (VIII.A)." "write a - b - c without parentheses" ;;
  y2/look)   want "not copied back: q = 3" "An OUT parameter reaches the actual only at RETURN; the exception left q as it was." "run it unchanged" ;;
  y2/change) want "remainder 1" "A second OUT parameter, copied back with the first." "add OUT r to Divide, set r := a MOD b, print \"remainder \" and r" ;;
  y2/break)  want "a variable is needed here" "A CONST parameter cannot be assigned, not even inside its own routine." "write a := 0 inside Divide" ;;
  y3/look)   want "Running comes after Pending" "An ORDERED enumeration has SUCC, PRED, FIRST, LAST and drives FOR." "run it unchanged" ;;
  y3/change) want "last phase Failed" "LAST follows the declaration: the new value is last." "add Failed at the end of Phase and a CASE for it in WritePhase" ;;
  y3/break)  want "apply to ordered values" "An UNORDERED enumeration has only = and #." "compare two fruits with <" ;;
  y4/look)   want "depths 3 2" "Two instances, two modules, written out from one template." "run it unchanged" ;;
  y4/change) want "depths 3 1" "Two instances of one type are still two modules, each with its own state." "add a second INTEGER64 instance (OtherStack, PushO, ...), push 5 on it, print \"two integer stacks, depths \" with both depths" ;;
  y4/break)  want "apply to ordered values" "The template was fine until an instance put an UNORDERED type where Largest uses <." "instantiate StackTemplate for Fruit" ;;
  y5/look)   want "B got 1" "SEND woke the smallest rank, and the waiter ran before the sender went on." "run it unchanged" ;;
  y5/change) want "A got 1" "Within one rank, the first who waited is the first woken." "give A and B the same rank" ;;
  y5/break)  want "deadlock" "Without SEND nobody wakes the consumers: a signal is not a state, and WAIT waits for ever." "remove SEND(arrived) from Give" ;;
  y6/look)   want "calls 0" "Square is a FUNCTION: it cannot count its calls." "run it unchanged" ;;
  y6/change) want "calls 2" "A value-returning PROCEDURE may have side effects; a FUNCTION may not." "make Square a PROCEDURE ... RETURNS that adds 1 to calls" ;;
  y6/break)  want "is not local" "A FUNCTION assigns only to its own locals (D-33)." "write calls := calls + 1 inside the FUNCTION Square" ;;
  y7/look)   want "count 2" "count is seen outside Counter, but only for reading." "run it unchanged" ;;
  y7/change) want "after reset 0" "Exported VAR, the variable can be assigned outside its module." "export count VAR, set count := 0 in the main part, print \"count after reset \" and count" ;;
  y7/break)  want "components are hidden" "An OPAQUE representation hides its components outside its module (X.B.3)." "write st.top := 0 in the main part" ;;
  y8/look)   want "no circle of waiting" "Every process waits only for processes below it; the society finishes." "run it unchanged" ;;
  y8/change) want "drum transfers 0" "With a core page per segment the segment controller never touches the drum." "set ncore to 8" ;;
  y8/break)  want "deadlock" "The segment controller waited for the console, whose interpreter needed the segment controller to read its vocabulary." "set reportDumps to TRUE" ;;
  *)         [ $rc -eq 0 ] && { cat "$tmp/out"; exit 0; } || { cat "$tmp/out"; exit 1; } ;;
esac
