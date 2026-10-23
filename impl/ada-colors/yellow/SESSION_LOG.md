# Session log — YELLOW side (started 2026-10-16)

## Goal
YELLOW (SRI International, Feb 1978) like RED and GREEN: Python bootstrap -> yellowc written
in YELLOW -> fixed point -> grow (modules, templates, overloading, processes/monitors,
exceptions, files) -> tests and the 1978 tutorial corpus.

## Current state
- Phase 2 done in worktree ~/projects/paleo-yellow-os, branch feat/ada-yellow-os (not pushed).
- os/the_yellow.yel, os/the_kube_yellow.yel, kube/kube_yellow.yel, os/contrast/*_yellow.yel
  with .out; os/run.sh runs .yel (23 programs pass). labs/yellow/y1..y8 with solutions;
  check.sh/verify.sh know them (61 checks pass). notes/yellow-os.md lists what YELLOW
  could not say. RED/GREEN/YELLOW fixpoints, tests (5/28/33), corpus (40) green; signal arrays and
  forward module imports fixed in yellowc (circular imports still refused).

## Next step
Coordinator: merge with the BLUE branch (both edit os/run.sh, labs/check.sh, labs/verify.sh,
labs/README*); top-level impl/ada-colors/README* still describe os/kube/labs as RED+GREEN.

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
### 2026-10-16 — tests and corpus
- The CASE arrow is => (bold = glyph at 300 dpi), not ->: changed through a reseed.
- PROPAGATE_EXCEPTION (and ASSERT) leave their own block: the block's handler does not see
  them (p.1039, p.1058, D-44); traps raised by operations are handled by the current block.
- PRECISION/SCALE operands are simple expressions ("PRECISION 7 = 3.14" in a CONST, p.1100).
- INSTANCE takes numbers as actuals (the Report's own examples) though rule 16 says Ids.
- Strict VI.A.3: chars of two visible alphabets and strings near two alphabets are qualified.
- Corpus findings so far: missing ENDSELECT (distance), FLOAT range too small for the
  distance of the example's own points, IMPORTS/EXPORTS, LENGTH, precedence slips, closing
  names, routines falling out of their bottom, CONST without value, exchange sort's > logic,
  convex hull algorithm wrong (checked in Python).
### 2026-10-17 — device signals, labels, docs
- Simulated PDP-11 line clock for signals AT BASE8 100: the RealTime monitor runs; with X.E.4
  send semantics Pause(n) returns after one tick (finding).
- LABEL/GOTO, FUNCTION purity, export of the standard := = # with opaque types (D-33),
  user-defined ^ (p.1137), strict VI.A.3 for characters and strings.
- The evaluators' YELLOW (Section H, team 126-02) added to the corpus; they write => too.
### 2026-10-23 — phase 2 starts
- New worktree paleo-yellow-os from origin/main; RED/GREEN/YELLOW fixpoints and os/run.sh
  (17) green before any change.
### 2026-10-23 — contrast, kube, THE, labs
- Contrast in YELLOW: timeout by a watchdog that SENDs the consumer's signal (the waiter
  decides), failure (monitor released by the exception, SEMAPHORE not), Hoare's readers and
  writers monitor. PROPAGATE_EXCEPTION leaves its own block: the failing part needs an inner
  block for the handler to see it.
- kube_yellow: API server a monitor, watch streams one monitor template x 8 instances with a
  SELECT dispatch; clock process for resync ticks; RAISE_PROCESS_TERMINATION for node 2.
- the_yellow (named so: the.out belongs to the.red): segment controller a monitor, level 3
  buffers a template, console keeps its process, answers by WAIT rank = ticket. RED's run but
  for two lines at 90 ms. reportDumps TRUE deadlocks as in RED.
- the_kube_yellow: store lock = binary SEMAPHORE, wake-ups = template monitors: output is
  byte-for-byte the RED one.
- Found: yellowc accepts ARRAY OF SIGNAL but does not bind the components to the monitor
  (WAIT keeps the monitor: deadlock); yellowc resolves imports in text order, the Report (X.G)
  does not require it. Both noted in notes/yellow-os.md; compiler not touched.
- Labs y1..y8 (operators, parameters, enumerations, templates, monitor, functions, modules,
  THE); check.sh gives yellowc's line numbers in the lab's file.
### 2026-10-23 — two yellowc shortfalls fixed
- Signal arrays: components were zeroed opaque pointers (wrong size, no monitor), so WAIT on
  one kept the monitor. DeclareSignalArray ties each component to the monitor; rt gets
  `y_d_sig` (inside the YELLOW block); whole-array assignment and export refused.
  tests/signalarrays.yel (deadlocked with the old seed).
- X.G module order: Declarations keeps the scope's list (DeclList[Depth]); an import that is
  not found translates the later sibling module that provides it first (node ival 0/1/2).
  A circle of imports is refused. tests/forward.yel, tests/circle.err.yel.
- Seed refreshed, genesis reproduced; yellow tests 33, corpus 40, os/run 23, verify 61.
