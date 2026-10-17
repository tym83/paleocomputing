# Session log — BLUE side (started 2026-10-16)

## Goal
BLUE (SofTech, 15 Feb 1978) like RED and GREEN: Python bootstrap -> bluec written in BLUE ->
fixed point -> grow to the language of the 1978 specification -> tests and 1978 corpus.

## Current state
- bluec (~9.5k lines BLUE, blue/bluec/) at its fixed point, seed refreshed after each step;
  `make genesis` replays the Python bootstrap step (v1 source in genesis/).
- tests/run.sh: 24 pass (enums, fixed/float, records/variants/arrays/pointers, strings and
  bitstrings, modules/abstract types/STORE_, generics, scopes/imports/labels/exceptions,
  paths/semaphores, 15 rejected programs).
- rt: BLUE additions appended (batch 1 strings/console, batch 2 fixed/bits/conversions/
  paths/semaphores). RED/GREEN fixed points and tests re-checked after each rt change.

## Next step
Corpus: transcribe the program examples of the 1978 document into blue/corpus (with page
numbers), patch files for what does not compile as printed, then Appendix C (I/O modules)
with simulated LT33 teletypes; then notes/blue-digest.md, README(.ru), CI.md.

## Journal
### design decisions (before code)
- bluec keeps its state behind CONST pointers to heap records: constants need not be
  imported (4.1), and the report itself says pointers escape the aliasing rules (4.3.4).
  User programs get the IMPORTS checks.
- Console I/O: an implementation-defined segment TERMINAL (PUT, PUT_LINE, NEW_LINE,
  GET_CODE, STOP); TO_CHAR for built-in types added to the prelude (Appendix C expects it).
- OBJECT_MACHINE is called PDP_11 so the machine-dependent branches of Appendix C run;
  the simulated machine has 64-bit STD fixed point.
- Predefined ASCII = the 64-character-subset definition of 3.7.2 example 1 (\A = 'a');
  quoted strings may also contain any printable character (implementation option, 3.7.2).
### v1 (genesis)
- blueboot.py: lexer, parser, C generator for the subset bluec v1 uses.
- bluec v1: one MAIN SEGMENT, state behind CONST W: PTR(WORLD); texts in a 64 MB arena;
  FMT1..FMT4 build C from patterns with @. Fixed point on the first try.
- FROM and TO are reserved words (2.1.6): parameters had to be renamed.
### v2: the whole grammar
- Parser for all of Appendix A (REP specs parsed, RECORD_REP skipped).
- Reserved words bit me again: MODULE, TAG, ANY, REP, NEEDS, PAR_BLOCK cannot be names.
- A function may not have inout parameters: UNIFY keeps bindings behind a list head.
- rt batch 2: fixed point with __int128, bitstrings as '0'/'1' strings, conversions,
  semaphores (priority-ordered release), path activations (rt_b_act, trampoline sets a
  thread-local self), virtual clock in microseconds.
### tests per feature (2026-10-17)
- Enum literals of a TYPE declaration must stay in that scope (RESOLVE_IN_DECL opened one).
- Abstract types: the module's operations see the underlying type; parameterized abstract
  types compare by underlying type (STACK(INTEGER,10) vs STACK(COLOR,3)).
- ? for a TYPE formal: the instance takes the argument's type; a hidden binding keys it.
- A call node was rewritten to N_APPLY on first translation; a generic body translated
  twice then failed. Nodes are not mutated by translation any more.
- PAR_BLOCK used rt_taskdecl where the runtime wanted rt_b_par.
