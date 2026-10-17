# YELLOW 1978 corpus: what it took to run the originals

Programs of Part Three (Tutorial and Programming Examples) of the YELLOW report, SRI
International, February 1978, as reprinted in DTIC ADB950587, pp.1096-1124, plus two
examples of Parts Two and Four. `original/` keeps them as printed: line numbers kept for the
numbered fragments of section II, the not-equal sign written `#` and the up-arrow `^`.

`run.sh` makes two programs of each:

- **as printed** — the original, with only what it says it assumes around it
  (`NAME.pre.yel`, `NAME.post.yel`; fragments are put in declaration-before-use order). The
  first message of yellowc must be the one in `NAME.asprinted` (empty: accepted).
- **fixed** — the same through `NAME.sed`, the changes the translator forced; it is run and
  must print `NAME.out`.

## Verdicts as printed

| Example | Pages | yellowc says as printed | Why it is an error |
|---|---|---|---|
| E03 flu shots | 1096-1099 | accepted | |
| E07 distance | 1100-1102 | `expected ENDSELECT, found ENDRECORD` | the variant part of Coordinate is not closed (rule 78) |
| E11 sieve | 1104 | accepted | |
| E12 more sets, fixed point | 1105 | accepted | |
| E13 MyStandardConventions | 1106 | accepted | |
| E14 real time | 1107 | `Clock is closed with another name` | `ENDPROCESS clock` (names are case sensitive, p.994) |
| E15 convex hull | 1108-1109 | `expected a representation` | `ARRAY([1..(size+1)] OF point)` has no index type |
| E17 exception handling | 1110 | `expected a statement` | label `overflowscope:` inside a WHILE; labels are for top-level statements of a block and must be declared (IX.A.4, VII.C) |
| E18 line input | 1111 | `' ' is a character of two alphabets here: qualify it (VI.A.3)` | the blank is in ASCII and in pdp11chars |
| E19 track reservation | 1112 | accepted (but see below) | |
| E20 SIFT scheduler | 1113-1114 | `expected =, found ;` | `CONST period: ARRAY(levels OF INT);` has no value (rule 7) |
| E22 search tree | 1115-1116 | `key is not declared here` | `CONST SearchKey: key` — key is a component, the representation is Zodiac |
| E24 hash tables | 1117-1118 | `expected :, found =` | `CONST index = ...` without a representation (rule 7) |
| E26 exchange sort | 1119 | `expected a statement` | `IMPORTS`, `EXPORTS` are not words of the language |
| E27 Decsystem 10 I/O | 1120-1124 | `a segment is a module (XIII.A)` | a TEMPLATE between segments; the example is machine code throughout and is not run |
| D12 safe pointer | 1137 | accepted | |
| L70 overloads across modules | 1054 | `expected an identifier, found ..` | the bodies are elided with "..." |

## Changes, and what the runs show

- **E03 flu shots.** None. Two more employee records and the output are added around it.
- **E07 distance.** ENDSELECT added; `MODULE ComputeDistance;` loses its semicolon. Run with the
  example's own points C and P (p.1101), `Distance` raises `OUT_OF_RANGE`: the square of their
  difference is above the 1000 that the representation FLOAT of line 901 can hold. Smaller
  points give the right distances.
- **E11, E12.** None.
- **E14 real time.** `ENDPROCESS Clock`; `WAIT(clockSignal)` (printed `clocksignal`); `tick`
  removed from the export list (a signal may not be exported, X.E.4); `WORDLENGTH` imported
  (the monitor is a closed scope); `Pause` gets its RETURN. The line clock is simulated (a
  signal AT BASE8 100 is sent every 20 virtual ms). Result: under the send semantics of X.E.4
  (the receiver goes on in the monitor at once, the sender waits) the clock process answers
  every WAIT of `Pause` within the same tick, so `Pause(5)` returns after one tick.
- **E15 convex hull.** Index type added; closing names (`complexhull`, `ComplexHullFinder`,
  `ComplexHullMacro` for convexhull, ConvexHullFinder, ConvexHullTemplate); parentheses where
  `-`, `/` meet another operator of their level (three places, VIII.A); `ABS` imported;
  `convexhull` gets its RETURN; `pointstatus` exported TRANSPARENT, else a user cannot name its
  values. Result: for eight points whose hull has five, the printed algorithm marks two as on
  the hull. A Python transcription of the same algorithm gives the same marks.
- **E17 exception handling.** The label and `END overflowscope` removed; the trap names of
  this implementation used (`OVERFLOW`, `ZERO_DIVIDE` for the printed `overflow`,
  `zerodevide`). The fragment is one sweep of the Durand-Kerner iteration; twelve sweeps on
  (x-1)(x-2)(x-3) give 1, 2, 3.
- **E18 line input.** The blank qualified `pdp11chars ' '` (three places); the three
  procedures get their RETURN.
- **E19 track reservation.** `returntrack` falls out of its bottom, which "is an error"
  (IX.A.6): as printed its first call raises `NO_RETURN`. RETURN added.
- **E20 SIFT scheduler.** `period` made a VAR; `(ept > 0) AND enabled[pri]` (twice: as printed
  it is `ept > (0 AND enabled[pri])`); the IF inside the loop gets its own ENDIF. Translated
  only: the module's tables are local and "the mechanism for initializing" is left out. Note
  also that every path of `schedule` returns before `enable(tickinterrupt)`.
- **E22 search tree.** `SearchKey: Zodiac`; `newTree` for the undeclared `newKey`; the export
  `NewTree` is `newTree`. The module exports `=` and `#` but not `:=`: a user can initialize a
  Tree and compare Trees, never assign one.
- **E24 hash tables.** Representation for `CONST index`; `tablesize` (printed `tableSize`);
  0 means "none" but `tableRange` starts at 1, so as printed the first `Scan` raises
  `OUT_OF_RANGE` — slot and the IndexSlot components get `INTEGER [0..tablesize]`; `MOD
  tablesize` for `MOD tableRange` (a representation used as a number); `table[probe].flag` for
  the undeclared `Tag(...)`; `table[indexSlot.slot]` for the undeclared `slot`; `Delete` gets its
  RETURN. The module offers no way to make an empty table (this implementation starts every
  variable at zero, which is `fresh`).
- **E26 exchange sort.** IMPORT/EXPORT; `LENGTH` (not a standard operation) written with HIGH
  and LOW; parentheses around the relations of a WHILE; `stringArray` (printed `stringARRAY`
  once); Exchange's parameters CONST (it is called with `i` and `i+1`); the VAR declarations
  moved before `Exchange`, which assigns `lastSorted` (X.G); RETURNs. Result: the printed `>`
  loops while every character of s1 is above that of s2 and is TRUE only if that lasts to the
  end, so ordinary names are never exchanged; for a pair that does compare greater, the index
  runs past the end of the string and the sort raises `OUT_OF_RANGE`.
- **D12 safe pointer.** None: `DerefRpointer AS ^` and the export of the standard `= := #` with
  the opaque type work as the Design Discussion says.
- **L70.** The elided bodies filled in, the modules import the two types.

## Patterns

Of fifteen programs of Part Three, five are accepted as printed. The errors a translator
finds are of the kinds a document typed but never compiled collects: closing names that drift
(`complexhull`), names in two spellings (`tableSize`, `clocksignal`, `NewTree`), words of other
languages (`IMPORTS`, `LENGTH`, `Tag`), and the language's own rules forgotten by its authors —
relations bind loosest, `-` is not associative, routines must not fall out of their bottom,
labels are declared, a CONST has a value, a signal is not exported. Three programs that
compile are wrong when run (convex hull, exchange sort, and the distance example with its own
data), and one (real time) shows a consequence of the monitor semantics the Report chose.

## The evaluators' YELLOW (Section H)

Team 126-02 of the 1978 evaluation wrote small comparative programs in all four languages
(DTIC ADB950587, Section H, Appendix 2). Their YELLOW is the only YELLOW written in 1978 by
people other than its designers, and they too read the CASE arrow as `=>`.

| Example | Page | As printed | Changes |
|---|---|---|---|
| H1893 array summation | 1893 | accepted | data added |
| H1895 summation as a function | 1895 | `expected :, found ;` | `VAR TOTAL ; R2`; a `;` between formals and body; `ENDFUNCTION` without its name |
| H1898 days in a month | 1898 | `expected an identifier, found ..` | the elided months; `CASE FEB, =>`; `ELSE =>` (ELSE takes no arrow); YEAR undeclared |
| H1900 variant record | 1900 | `expected a statement` | REAL is not a YELLOW type; `Z.LENGTH ;` is not a statement and a variant component is reached only inside a SELECT on its case |

"The YELLOW example is a little tedious", they wrote of the second; the language report gave
them, by their account, "insufficient information ... to allow construction of the fixed point
square root example".
