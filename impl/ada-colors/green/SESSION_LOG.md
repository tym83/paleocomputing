# Session log — GREEN side (started 2026-10-12)

## Goal
GREEN (Preliminary Ada, May 1979) like RED: Python bootstrap -> greenc written in GREEN ->
fixed point -> grow (packages, overloading, tasking, generics) -> tests and 1979 corpus.

## Current state
- greenc (~6.4k lines of GREEN in green/greenc/) at its fixed point; seed refreshed;
  `make genesis` replays the bootstrap step (v1 source in genesis/).
- Features: packages (private types, use, P.X), nested subprograms, overloading incl.
  operators and result type, RM79 6.5 rules enforced, exceptions, tasking (initiate, entries,
  accept, select, delay, abort, FAILURE, 'ACTIVE, 'COUNT, SET_PRIORITY), task and entry
  families, generics with explicit instantiation (subprograms, packages, tasks).
- tests/run.sh: 19 passed (13 tests + 6 corpus programs from the 1979 introduction).

## Next step
Records with defaults, multi-dimensional arrays, visible procedures of tasks, the contract
problems of 1979 (problems/original/green) with stubs.

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
