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

## Next step
rt additions (arrays/descriptors, sets, files, monitors/signals), then boot/yellowboot.py.

## Journal
### 2026-10-16 — reading
- Grammar (App. B, p.1084-1089) rendered and checked against the OCR. Printed symbols with no
  ASCII form: the not-equal sign (rendered `#`, as in Modula, which YELLOW follows) and the
  up-arrow of dereference (rendered `^`, as in ASCII Pascal).
- Subscripts use square brackets (rule 43); parentheses are calls and value denotations.
- Non-associative operators (-, /, DIV, MOD, XOR, free ops) need parentheses when mixed:
  `a - b + c` is a syntax error. The 1978 tutorial breaks this rule itself (convex hull).
