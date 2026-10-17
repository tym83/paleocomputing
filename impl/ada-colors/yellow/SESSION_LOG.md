# Session log — YELLOW side (started 2026-10-16)

## Goal
YELLOW (SRI International, Feb 1978) like RED and GREEN: Python bootstrap -> yellowc written
in YELLOW -> fixed point -> grow (modules, templates, overloading, processes/monitors,
exceptions, files) -> tests and the 1978 tutorial corpus.

## Current state
- Worktree ~/projects/paleo-yellow, branch feat/ada-yellow; area impl/ada-colors/yellow/.
- yellowc (~6k lines of YELLOW) at its fixed point; seed refreshed; `make genesis` reproduces.
- tests/run.sh: 29 pass (incl. 11 rejection tests). corpus/run.sh: 40 checks pass
  (15 Part Three programs, 2 of Parts Two/Four, 4 of the evaluators of Section H).
- Docs: README.md/.ru.md, notes/yellow-digest.md, corpus/CHANGES.md, CI.md (job for the
  coordinator to integrate).
- rt additions appended under `YELLOW additions`; RED, GREEN, os/kube, labs still pass.

## Next step
Later phases: THE/Kubernetes ports (os/, kube/), labs, wasm build, langpack, article.
Known gaps: aliasing rules, process life-scope rule, transitive purity, redefined :=.

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
