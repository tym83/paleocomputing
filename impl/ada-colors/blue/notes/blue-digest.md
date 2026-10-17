# BLUE (SofTech, 1978): implementation digest

BLUE is SofTech's design for the DoD-1 competition. It reached phase 2 with RED,
GREEN and YELLOW and was dropped in spring 1978, before the RED/GREEN final. This
file is what bluec implements and why, with the places in the document.

Source: *Language Specification* and *Language Design Justification*, SofTech,
15 February 1978, DTIC ADB950587 (one PDF, pages 1251–1723 of the folder's scan
set). Conventions:

- `§4.5.7` is a section of the Specification; `[4-80]` a syntax production as
  numbered there; `J4.5-3` a section of the Justification.
- `p.4-45` is a Specification page, `PDF 1591` the page of the PDF. Within a
  chapter the offset is constant: chapter 2 PDF = 1377 + n, chapter 3 1385 + n,
  chapter 4 1546 + n, chapter 5 1621 + n, Appendix C 1673 + n (C-5 is PDF 1678).
- The Specification's own syntax summary (Appendix A of the specification) is
  PDF 1643–1665. The reserved words are [2-13], PDF 1381–1382.
- The OCR text is poor (`0` for `O`, `$` for `S`, `l` for `%`); every program in
  the corpus was transcribed from the page images, not from the OCR.

---

## 1. Lexical rules (§2.1, PDF 1378–1385)

- Character set: the 64-character ASCII subset (§2.1.1). Terminals are upper case
  ("sequences of upper case letters are terminal symbols", in the notation
  section); lower case occurs
  only in strings and comments.
- Comment: `%` to the next `%` or to the end of the line (§2.1.8, p.2-7). A `%`
  inside a comment ends it: `charset-bcd` (p.3-160) writes `%SIZE%` as an embedded
  comment.
- Reserved words [2-13] cannot be identifiers: AND ANY ARRAY ASSERT BIN BLOCK CONST
  DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD
  MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP
  RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE
  WITH XOR. Key words (§2.1.7: ABS, BOUNDS, CLOCK, MAX, MIN, SIZE, TARGET, TO_BIT,
  ...) are predefined names and may be redeclared.
- Numbers: `123`, `1.5`, `2E3`, `10\S14` (value with an explicit scale, §3.2.2);
  a number with an exponent and no point is a fixed point value of scale 0.
- Bitstrings: `BIN '0101'`, `OCT '17'`, `HEX '0FF'` ([3-111]); blanks allowed
  inside.
- Character strings ([3-135]): `[charset-name] display-char... ('...' display-char...)`.
  `''\CR` is the empty string followed by the enumerated literal `\CR`: one
  character. `''''` inside a string is one apostrophe.
- Enumerated literals: `\NAME`, `\'C` for a printing character.

## 2. Types (§3, PDF 1386–1548)

| Class | Spec | bluec |
|---|---|---|
| Fixed point | `FIXED (scale, radix, precision) [L:U]`, `INTEGER = FIXED (0,2,STD)` (§3.2) | int64 mantissa, compile-time scale; STD is 64 bits; radix 2 only |
| Floating | `FLOAT (digits) [L:U]` (§3.3) | C double, 1..15 digits |
| Enumerated | `ENUM (\A, ...)`, `UNORDERED (...)` (§3.4) | type classes are structural: same literals in the same order (§3.4.1, p.3-66) |
| Boolean | (§3.5) | |
| Bitstring | `BIT (n)` (§3.6) | string of '0'/'1' |
| Charstring | `CHAR_STR (n, charset)`, `ASCII_STR (n)` (§3.7) | byte string, 0-based substrings `S[L:U]`; generic over the charset |
| Array | `ARRAY [L:U, ...] OF T` (§3.8) | `ARRAY OF ARRAY` is forbidden (§3.8.1); `BOUNDS` is `ARRAY [0:n]` |
| Record | `RECORD VAR ...; SELECT tag FROM ... END SELECT; END RECORD` with value, TYPE and TAG parameters (§3.9) | C struct; record types compare structurally (p.3-130) |
| Pointer | `PTR (T)` (§3.10) | |
| Semaphore | `SEMAPHORE (SYNCH ! REGION)` (§3.11) | rt semaphore, priority-ordered release |
| User | `TYPE T (formals) = type-spec`; abstract types exported from modules (§3.12) | |

Representation: `REP` specifications are parsed. `ENUM_REP`, `ENUM_VAL_REP`
(TO_BIT and back) and `FIXED_REP` size are used; `RECORD_REP` packing and
`ARRAY_REP` are kept unparsed and ignored. Sizes of the simulated machine: STD 64
bits, FLOAT 64, BOOLEAN 1, characters 8, enumerations the smallest that fits
(ENUM_STD, p.3-69).

## 3. Expressions (§3.1.4 and per type)

- `&` and `!` are the conditional and/or (§3.5.4.1); `AND`, `OR`, `XOR` the
  unconditional ones.
- `!!` concatenates strings and bitstrings. `//` truncating integer division,
  `MOD` with the sign of the dividend, `/` only for FLOAT.
- Fixed point: `+ - * //` with the scale rules of §3.2.4.2; scaled operators
  `!*s!` with an explicit result scale; the machine-dependent `!op!` (§3.2.4.5).
- Every operator is a call of a function with a fixed name: `ADD_`, `SUBTRACT_`,
  `MULTIPLY_`, `EQUAL_`, `LESS_THAN_`, `CONCATENATE_`, `SUBSTRING_`, `STORE_`
  (assignment), `SUBSTRING_STORE_` (Appendix D). Abstract types define them.
- Type specifiers `[T]$$(e)` construct or convert (§3.1.1.4); `T.ATTR` and
  `(T.ATTR).MAX` query attributes.

## 4. Program structure (§4.1–4.4, PDF 1547–1574)

- A program is segments. `MAIN SEGMENT` has statements; `USES (S (DATA: (in # inout),
  ROUTINES: (...), TYPES: (...), MODULES: (...)))`; `DEFINES (names) ! ALL`.
- Closed scope body: declarations, then statements, then routines and modules.
- Importing (§4.1.1, p.4-6): a closed scope must import every global variable it
  uses directly or through a routine; it may import the routine instead. A routine
  exported from a module that uses an own variable of the module must be imported
  outside the module. Constants need no import.
- Routines: `PROCEDURE P (in # inout # out)`, `##` is an empty inout list.
  Functions have only input parameters. Inouts are by reference, outputs copied
  back on normal completion (§4.3.2, p.4-16).
- Modules: `MODULE M IMPORTS (...) EXPORTS (T WITH (ops), routine, ...)`. Outside,
  T is abstract; `T$NAME` routines are its operations, callable as `NAME` when
  unambiguous. Only types and routines are exported (p.4-26).

## 5. Statements (§4.5, PDF 1575–1597)

`IF ... THEN ... ORIF ... ELSE ... END IF;` — `SELECT x FROM labels --> body END;
... ELSE --> body END; END SELECT;` (on `OBJECT_MACHINE` the elements are
machine-dependent parts; on `W.TAG` of a variant record it discriminates) —
`LOOP [UNTIL p DO] ... END LOOP [WHEN p];` — `LOOP FOR I IN range DO ... END LOOP I;`
— `EXIT;` — `BLOCK ... END BLOCK;` — `WITH W NAMING expr stmt` — `GO TO L;` —
`ASSERT p;` — `SIGNAL [name];` — `RETURN [e];`. Any statement may be followed by
`EXCEPT name --> body END; ... END EXCEPT;` (§4.5.7, [4-80]).

## 6. Parallel processing (§4.6, PDF 1600–1616)

`PAR_BLOCK PATH P [FOR I IN range] [PRIORITY e] [CONNECT (s)] [SIGNALS] [IMPORTS];
body END PATH P; ... END PAR_BLOCK;` — `WAIT (seconds);` `TERMINATE [(path)];`
`PRIORITY (e [, path]);` `CLOCK [(path)]` `REQUEST (# s);` `RELEASE (# s);`.
bluec runs paths on the rt scheduler of this repository: highest priority first,
FIFO within a priority, virtual clock in microseconds, so every run prints the same.

## 7. Generics (§5, PDF 1622–1638)

`?T` in a formal derives a type (or a value: `ASCII_STR (?L)`, `[?LB : ?UB]`);
`?T REP ?R` also derives the representation (`R.SIZE`); `?` alone is "don't care";
`T: TYPE` formals take type arguments; routine formals take routines whose
template matches; `WHERE T NEEDS (routine templates)` takes routines from the
caller's environment. bluec makes an instance per set of static bindings (types,
fixed point scales, routines, string lengths); values that travel with arguments
(string lengths, array bounds, record parameters) are read from the argument.

## 8. Machine-dependent programming (§4.8, PDF 1617–1620)

`OBJECT_MACHINE` is called `PDP_11` here, so the machine parts of Appendix C run.
`START_IO (device, operation, ...)` calls the START_IO cases "built into a given
implementation" (C-9): the corpus driver of Appendix C declares them in a BLUE
segment that simulates LT33 teletypes on standard input and output. TARGET
routines (§4.8.2) are accepted and have no body (there is no target code).

---

## 9. Ambiguities and the decisions taken

Each is a place where the 1978 text is silent, contradicts itself or is
unreadable; the decision is bluec's.

1. **Unhandled exceptions.** §4.5.7 calls an unhandled exception an error with
   undefined behaviour. bluec stops the program with `*** unhandled exception X`.
2. **CLOCK** is the elapsed virtual time (bluec's reading of §4.6.5); its fixed
   point scale is 20.
3. **ASCII** is the character set of §3.7.2 example 1 (p.3-92). Its `\EXT` (for
   ETX) is kept as printed. Quoted strings may contain any printable character.
4. **An enumerated literal of several visible classes** with nothing wanted from
   the context: §3.4.5 asks for a type specifier; bluec takes the class that is not
   ASCII.
5. **Operator routines**: the BCD example (p.3-160) writes `LESS_THAN` without the
   underscore; operator routines are also found by that name.
6. **Uninitialized variables** start as zero. The language has the exception
   UNINITIALIZED_VARIABLE (§4.3.2 raises it when a function ends without RETURN,
   and bluec does that); reading a variable before it is set is not tracked.
7. **Aliasing and side-effect rules** (§4.3.3, §4.3.4) are not checked; importing
   is (§4.1.1), with these readings: a routine the scope imports covers the
   variables it uses, also when called through the scope's own local routines
   (FORMPRINT, C-28); `IMPORTS (MODULES: (M))` imports M's exported routines (§4.2).
8. **Recursion** needs no import of itself.
9. **WITH NAMING** does not hide the named variable.
10. **TRUNCATED/ROUNDED** apply to fixed point; `WITH PREC` is accepted and
    ignored; FLOAT is always double.
11. **Segments are translated in USES order** (§4.1, p.4-5: a segment's data are
    initialized before those of the segments that use it); Appendix C prints
    SYSTEM, which uses STANDARD_IO, first.
12. **DEFINES**: naming a module carries what it exports (§4.2, p.4-9); naming a
    routine `NEW` also carries `T$NEW` (the comment at C-5).
13. **The headers of routines** may use the constants of their scope; objects are
    declared before headers, and a call resolves the header it needs.
14. **Substrings as output arguments** (C-8, C-31; [4-41] says variable): the
    formal is a view of the variable's characters.
15. **CONNECT (LT33_PS(I))** with the path's loop identifier (C-5; [4-93] says
    semaphore-name).
16. **Literals typed by a parameter**: `OPEN (..., \OLD, ...)` names a literal of a
    parameter type declared inside a module (C-17).
17. **TO_BIT of a charstring** outside machine-dependent parts (J3.6-6's reason
    for enumerated values applies to characters).
18. **START_IO is a statement**, not an invocation: what its cases import is not
    the caller's concern.
19. **MAX, MIN, REM, INTEGER_MAX** are used by examples and defined nowhere; MAX
    and MIN are key words for attributes only. The drivers define what they need.
20. **TARGET** is a key word, not a reserved word; it starts a declaration only
    before PROCEDURE, FUNCTION or INLINE.
21. **`(\A, \B)` as a type** (Appendix C) is accepted as `ENUM (\A, \B)`; the
    corpus fix files still note it as a misprint.
22. **Derived range bounds** `[?LB : ?UB]` are the widest values (ranges do not
    travel with values); derived bounds of array parameters `[1:?M]` are extents.
23. **The machine**: OBJECT_MACHINE = PDP_11 but STD is 64 bits; the PDP-11 of
    Appendix C would have 16.

The misprints of the program examples and the rules they break are in
`../corpus/CHANGES.md`.

## 10. Not done

- Representation clauses for records and arrays (packing); explicit
  representation converters beyond enumerations, strings, bitstrings and fixed.
- Aliasing and side-effect enforcement (§4.3.3–4.3.4, Appendix A.3).
- LIBRARIES (§4.7), simulation (§4.6.9).
- FLOAT precisions are not modelled (always 15 digits).
