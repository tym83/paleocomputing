# Session log — BLUE side (started 2026-10-16)

## Goal
BLUE (SofTech, 15 Feb 1978) like RED and GREEN: Python bootstrap -> bluec written in BLUE ->
fixed point -> grow to the language of the 1978 specification -> tests and 1978 corpus.

## Current state
- Spec read (PDF pp. 1361-1723). boot/blueboot.py (subset) -> bluec v1 (~3k lines BLUE):
  genesis reproduced, fixed point holds, seed committed. tests/run.sh: 1 test.
- rt: BLUE additions appended to paleo.{c,h} (exception names, 0-based strings, DUP,
  console). RED/GREEN fixpoints and tests re-run: identical.
- Sources: /Users/tym83/projects/ada-colors-sources/blue-yellow/ (PDF + OCR text).
  Compact page-marked text: scratchpad blue/blue.txt (awk over blue-softech-1978.txt).

## Next step
Grow bluec: nested routines/frames, enums, overloading, modules, generics, fixed/float,
bitstrings, variants, imports checks, parallel paths.

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
