# Session log — GREEN side (started 2026-10-12)

## Goal
GREEN (Preliminary Ada, May 1979) like RED: Python bootstrap -> greenc written in GREEN ->
fixed point -> grow (packages, overloading, tasking, generics) -> tests and 1979 corpus.

## Current state
- greenc (~13k lines of GREEN in green/greenc/) at its fixed point; seed refreshed;
  `make genesis` replays the bootstrap step (v1 source in genesis/).
- Branch feat/green-coverage: the RM79 audit gaps are closed chapter by chapter (lexical
  elements to input-output); see notes/green-findings.md for what is simulated and the
  remaining deviations.
- Predefined library units written in GREEN inside greenc (99-main PREDEFINED_UNIT):
  TEXT_IO, INPUT_OUTPUT, UNSAFE_PROGRAMMING, MACHINE_CODE, LOW_LEVEL_IO; their helpers
  are `$NAME` foreign subprograms, rt_g_name in rt/paleo.c.
- tests/run.sh: 112 passed.

## Next step
Nothing pending from the audit list; see the Deviations of notes/green-findings.md.

## Journal
### v1
- RM79 6.5 findings: functions may not assign non-locals nor allocate; value-returning
  procedures take in parameters only and may be called only where the globals they assign are
  NOT in scope, and only in assignments/initializations/procedure calls. So a recursive-descent
  parser over a global token pointer cannot use value-returning procedures: greenc's parser is
  procedures with out parameters (EXPR(X) instead of X := EXPR).
- Bug found by boot: C keyword `default` as record field -> C field names get a suffix.
- RM79: `case X of` (not `is`); `CHARACTER'ORD("A") = 66` (positions from 1).
### packages, overloading, RM79 6.5 rules
- Packages: spec/body, private part, private types (components hidden outside: RM79 7.4),
  P.X, use, library packages as compilation units, subprogram specs completed by bodies.
- Overloading by parameter types/modes/names AND result type (RM79 6.6); operator designators;
  "/=" follows "="; overloaded enumeration literals (RED vs LIGHT both have RED, GREEN).
- RM79 6.5 enforced: functions may not assign non-locals, write through access values,
  allocate, do I/O or call outside procedures; value-returning procedures only in
  assignment/initialization/procedure call, and only where the globals they assign are not
  visible. greenc's own source passes these checks (fixed point holds with them on).
### task families (coordinator request) — DONE, in green/build/greenc
- task F(INTEGER range 1 .. N) is ... end;  members F(I).E(args); F'INDEX in the body;
  initiate F; / F(I); / F(lo .. hi);  abort likewise;  F(I)'ACTIVE, F(I)'PRIORITY.
  Bounds evaluated once at the declaration; a missing member raises INDEX_ERROR.
  Test: tests/families.grn.
### entry families — DONE
- entry E(lo .. hi)(params) / entry E(T)(params); calls E(I)(args), T.E(I)(args), E(I);
  accept E(I)(params) do ... end, also as select alternatives. Not combined with task
  families (error). Test: tests/entry_families.grn.
### audit gaps (feat/green-coverage)
- Ch.2-6: lexical rules, distinct numeric and derived types, fixed point, arrays of any rank,
  aggregates, records with discriminants and variants, attributes, short-circuit and mixing
  rules, goto, case coverage, exit rules, aliasing, overloading checks.
- Ch.7-12: restricted types, deferred constants, visibility restrictions, use conflicts,
  renaming, task rules, SEMAPHORE/SIGNAL, subunits and the program library, generics.
- Ch.13: representation specifications, the simulated machine (memory, registers, code
  statements, interrupts, devices), foreign functions, UNSAFE_CONVERSION, SUPPRESS.
- Ch.14: INPUT_OUTPUT and TEXT_IO with host files, layout, ENUM_IO, FIXED_IO, GET of
  lexical units; pragma ENVIRONMENT makes a module's identifiers outermost (RM79 8.6).
- Found: LOWER_S/UPPER_S assumed STRING bounds from 1 (wrong once slices keep their bounds).
