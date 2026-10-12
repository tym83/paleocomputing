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
