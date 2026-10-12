# Session log — Ada RED & GREEN (started 2026-10-12)

## Goal
Episode on the two finalists of the DoD-1 competition: RED (Intermetrics) and GREEN
(CII-Honeywell-Bull, before it became Ada). Recreate both from their 1979 specs, make each
compiler self-hosting, labs, a small OS on RED concepts, Kube on their patterns, comparison
with Ada 83, alt-history, article RU+EN.

## Current state
- Worktree: ~/projects/paleo-ada, branch feat/ada-red-green (from origin/main 2fd83bd)
- Sources (NOT in git, copyright): ~/projects/ada-colors-sources/
  red-rm/ (RED Reference Manual HTML), red-rat/ (Rationale incl. contract problems, samples),
  steelman/ (Strawman..Steelman), green/ (DTIC PDFs from archive.org)
- Toolchain: python3 3.14, Apple clang 21, emcc, node. No GNAT locally.

## Next step
Digest specs -> pick subsets -> bootstrap compilers.

## Journal
### 2026-10-12 — start
- Backlog items in scope: 3e (two Adas), 14 (RED front end), 15 (NonStop kernel on RED),
  29 (R1000, note only), 5 (THE), 04-infra-layer (RED compiler as build service -> WASM).
### 2026-10-12 — sources and architecture
- Found on archive.org (DTIC mirror) beyond what 08-ada-red.md listed: DTIC_ADA071761 "Preliminary
  Ada Reference Manual" (May 1979), DTIC_ADA073662 "Rationale for the Design of the GREEN
  Programming Language" (Mar 1979), DTIC_ADA131511 (Ada 83 RM, for comparison).
- Background agents: RED grammar from diagrams -> notes/red-grammar.md; GREEN digest ->
  notes/green-digest.md; contract problems -> problems/; history -> notes/history.md.
- Architecture decision: both languages compile to C; shared C runtime rt/ (setjmp exceptions,
  tasks = pthreads with a baton so exactly one runs: deterministic RED ACT priority/FIFO
  scheduler; virtual clock for DELAY). Bootstrap: small Python compiler (boot subset) ->
  compiler written in the language itself (full subset) -> fixed point stage1.c == stage2.c.
  Generated C of the self-hosted compiler is committed as the seed.
- RED facts worth the article: implicit generic instantiation at call site + NEEDS list (C++
  templates/concepts shape, 1979); FREE refuses to free a shared object (X_FREE); CONST=copy vs
  READONLY=ref input binding; normal vs ABNORMAL functions (purity for CSE); EXIT must name the
  statement it leaves; zero-size mailbox = rendezvous; user-defined schedulers (ch.14).
### 2026-10-12 — parser meets the 1979 sample (Rationale App. C.1 matrix_vector_package)
- Errors in the original that any translator rejects: `ASSERT b.n : c.m` (x4, ':' for '='),
  capsule opened as matrix_vector_package and closed as vector_matrix_package. Plus HTML
  transcription noise (stray backtick, nbsp, 1NT, SUBT_1OOP). Suggests the samples were
  typed, not compiled.
### 2026-10-12 — agents done, bootstrap works
- notes/red-grammar.md (83 diagrams, 105 examples), notes/green-digest.md (Preliminary Ada 1979
  vs Ada 83 table), problems/ (all 10 contract problems on both sides; originals gitignored
  pending a copyright decision), redboot.py runs a test with PTR/strings/GUARD/EXIT/CASE.
- Plan: redc.red v1 = port of redboot (same subset) -> fixed point; then grow redc feature by
  feature, each version compiled by the previous one. Runnable problems: P5 P6 P7 P8 P9 C1
  (interrupt/REP-bound ones only with simulation, maybe later).
### 2026-10-12 — FIXED POINT for RED v1
- redc.red (3400 lines of RED, red/redc/*.red) built by redboot -> redc0; redc0 translates
  redc.red -> redc1.c; redc1 -> redc2.c; cmp equal. `make fixpoint`.
- Bugs found on the way: global `pos` hid the predefined POS (legit RED scoping); field named
  LEN collides with the .LEN attribute (renamed slen); indirect vars must be reset to NIL at
  every elaboration of a loop body; READONLY temporaries must be boxed per evaluation.
- Debug aid: PALEO_ABORT=<exception id> prints a C backtrace at the raise.
### 2026-10-12 — redc grows: tasks, overloading, new types, 2-D arrays, sets; C.1 runs
- Tasking (mailboxes, WAIT, REGION, priorities, delays) tested in red/tests/tasks.red.
- Overloading incl. operators; bug found: subprogram body looked up by name picked another
  overload -> lookup_decl. User ABS(vector) must not hide built-in ABS(INT).
- RED Rationale C.1 matrix_vector_package (1979) runs for the first time:
  problems/run/C1-matrix-vector.sed lists the fixes; real 1979 slips found by the translator:
  undeclared m/n in trans/upperTriangle/backSubstitute, a(p.r), x(k.p), ASSERT b.n : c.m,
  capsule end name. Logic slips kept: IF i = j (should be /=) skips pivot swap; determ ignores
  the sign of row swaps and multiplies the diagonal inside the elimination loop;
  realmultiply loops to k instead of its parameter i.
### 2026-10-12 — OS and Kube on RED
- os/pairs.red: NonStop-style kernel, process pair $BANK, crash between checkpoint and reply,
  exactly-once via numbered retries. os/run.sh runs os/ and kube/ programs.
- kube/kube.red: apiserver task, mailbox watches, informer caches, optimistic writes,
  expectations, leases; node 2 power loss -> NotReady -> pods move; rollout v2.
- kube/kube_ha.red ("crazy"): apiserver as a Tandem process pair, primary dies mid-rollout
  after storing the first v2 pod; lost writes repaired by level-triggered resync + expiring
  expectations + relist from the new primary. On the way it reproduced two real Kubernetes
  failure modes: (1) all nodes NotReady after a control plane outage -> full disruption guard;
  (2) freshness must be the controller's OBSERVED time of a lease change (as the node lifecycle
  controller does), and a controller must drain queued events before deciding.
- GREEN chain delegated to a fork (works only under green/, does not commit).
### 2026-10-12 — contract problem 6 runs; WAIT fairness
- problems/run/06-*: RED P6 (process control) runs with operator cards. 1979 slips the translator
  rejects: mes('b0..'b1) on a parameterless new type, buffers declared as TYPE but used as a
  variable, aa/ba/ca declared but cc/bb created, keep_outputting/keep_outputing.
- Found by running it: with WAIT always taking the first ready alternative, task a never sees
  the operator's DONE (its returned buffer is always ready): the 1979 solution needs a fair WAIT.
  RED leaves the choice undefined; rt_wait now rotates its starting alternative.
  Also: if task a dies, the operator console hangs on SEND to the zero-size mcontrol.
- The fairness exposed my own bug: the Kube node controller drained its queue with
  WAIT RECEIVE / DELAY(0), relying on the first alternative winning; now FULL_SLOTS.
- DTIC was under maintenance (ADB950587 still not checked).
