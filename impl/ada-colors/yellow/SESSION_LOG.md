# Session log — YELLOW side (started 2026-10-16)

## Goal
YELLOW (SRI International, Feb 1978) like RED and GREEN: Python bootstrap -> yellowc written
in YELLOW -> fixed point -> grow (modules, templates, overloading, processes/monitors,
exceptions, files) -> tests and the 1978 tutorial corpus.

## Current state
- Worktree ~/projects/paleo-yellow, branch feat/ada-yellow; area impl/ada-colors/yellow/.
- Source: ~/projects/ada-colors-sources/blue-yellow/DTIC_ADB950587.pdf pages 977-1250
  (text yellow-sri-1978.txt; page-numbered copy made in the scratchpad).
- Spec read: Part Two (Language Report) in full, Part Three (tutorial) in full, Part Four.
- yellowc (~4.5k lines of YELLOW, yellow/yellowc/) at its fixed point; seed and genesis in place
  (`make -C yellow fixpoint genesis`).
- rt additions appended to rt/paleo.{c,h} under `YELLOW additions`; RED/GREEN still pass.

## Next step
Tests per feature (tests/*.yel + run.sh), then the 1978 tutorial corpus; grow yellowc
(GOTO/labels, variants checks, prelude library, purity of functions).

## Journal
### 2026-10-16 — reading
- Grammar (App. B, p.1084-1089) rendered and checked against the OCR. Printed symbols with no
  ASCII form: the not-equal sign (rendered `#`, as in Modula, which YELLOW follows) and the
  up-arrow of dereference (rendered `^`, as in ASCII Pascal).
- Subscripts use square brackets (rule 43); parentheses are calls and value denotations.
- Non-associative operators (-, /, DIV, MOD, XOR, free ops) need parentheses when mixed:
  `a - b + c` is a syntax error. The 1978 tutorial breaks this rule itself (convex hull).
### 2026-10-16 — rt additions, bootstrap
- Arrays are descriptors {lo[4], hi[4], p} with run-time ydesc (bounds are scope-entry
  constants); a store deep-copies (y_store), so arrays and records keep value semantics.
- Monitors: Hoare semantics (SEND hands the monitor to the receiver, the sender waits on an
  urgent queue), WAIT ranks sorted, FIFO within a rank.
### 2026-10-16 — yellowc v1 and the fixed point
- Text in YELLOW: fixed arrays only, so all text is a pool of characters named by numbers;
  the builder SB..SE works in a scratch stack so builds may nest.
- FROM is used by the import/export rules but is not in Appendix A: read as a contextual word.
- The bootstrap made routine locals globals at first (recursion broke): fixed.
- yellowc0 (from boot) -> yellowc1.c; yellowc1 -> yellowc2.c == yellowc1.c: fixed point on the
  first self-translation.
