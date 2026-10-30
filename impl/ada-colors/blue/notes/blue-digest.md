# BLUE (SofTech, 1978): implementation digest

BLUE is SofTech's design for the DoD-1 competition, one of the four designs (with
RED, GREEN and YELLOW) paid for in 1977; in spring 1978 only RED and GREEN went on. This
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
  unambiguous. Only types and routines are exported, and only a type takes a WITH
  list, of its operations (p.4-26). An exported enumerated type keeps its literals
  and equality outside, and is unordered there unless the module exports <, <=,
  >, >=, SUCC and PRED for it (p.4-25).
- The routines of one scope have distinct signatures, checked at the declaration
  (§4.1); the data a routine imports must be known in the immediately enclosing
  scope, for change if imported for change (§4.1.1).

## 5. Statements (§4.5, PDF 1575–1597)

`IF ... THEN ... ORIF ... ELSE ... END IF;` — `SELECT x FROM labels --> body END;
... ELSE --> body END; END SELECT;` (on `OBJECT_MACHINE` the elements are
machine-dependent parts; on `W.TAG` of a variant record it discriminates) —
`LOOP [UNTIL p DO] ... END LOOP [WHEN p];` — `LOOP FOR I IN range DO ... END LOOP I;`
— `EXIT;` — `BLOCK ... END BLOCK;` — `WITH W NAMING expr stmt` — `GO TO L;` —
`ASSERT p;` — `SIGNAL [name];` — `RETURN [e];`. Any statement may be followed by
`EXCEPT name --> body END; ... END EXCEPT;` (§4.5.7, [4-80]). A case statement selects on
any predefined type, floating and scaled fixed point by comparisons; its label
values are distinct, and `W.TAG` discriminates only for a bound-var of an enclosing
with-clause, which prefixes only a structured statement (4.5.3-4.5.5).

## 6. Parallel processing (§4.6, PDF 1600–1616)

`PAR_BLOCK PATH P [FOR I IN range] [PRIORITY e] [CONNECT (s)] [SIGNALS] [IMPORTS];
body END PATH P; ... END PAR_BLOCK;` — `WAIT (seconds);` `TERMINATE [(path)];`
`PRIORITY (e [, path]);` `CLOCK [(path)]` `REQUEST (# s);` `RELEASE (# s);`.
bluec runs paths on the rt scheduler of this repository: highest priority first,
FIFO within a priority, virtual clock in microseconds, so every run prints the same.
Processing takes time: every loop iteration and every routine invocation is a step,
and 1000 steps take one virtual microsecond of the executing activation; the clock
moves with them, so a WAIT expires while another path computes and the scheduler
preempts it then (4.6.2). CLOCK is that processing time (4.6.5). The activations of a
block are made held and put in the ready state together once all are activated
(4.6.1); an exception during the activation (PRIORITY out of range, a second CONNECT)
leaves none of them. TERMINATE reaches a ready or preempted activation when it next
runs, before anything else (4.6.3). An interrupt connection ends with the block.

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
2. **CLOCK** is the cumulative processing time of the activation (§4.6.5), counted
   in steps (above); its fixed point scale is 20. The time of day, which the
   language does not have, is `REAL_TIME` of the implementation's TERMINAL
   segment: the simulated machine's real-time clock since the program began, in
   seconds at scale 20. (Until October 2026 CLOCK was the elapsed time; the
   programs of `../os`, `../kube` and `../labs/blue` now read REAL_TIME.)
3. **ASCII** is the character set of §3.7.2 example 1 (p.3-92). Its `\EXT` (for
   ETX) is kept as printed. Quoted strings may contain any printable character.
4. **An enumerated literal of several visible classes** with nothing wanted from
   the context needs a type specifier (§3.4.5), ASCII included: `\'I'` is a
   literal of ASCII and of a program's character set. (Until October 2026 bluec
   took the class that is not ASCII; the charset-bcd driver now writes
   `[BCD]$$(\'I')`.) A literal wanted as a value of a type takes that type,
   with its representation (§3.4.5: "automatically considered").
5. **Operator routines**: the BCD example (p.3-160) writes `LESS_THAN` without the
   underscore; operator routines are also found by that name.
6. **Uninitialized variables** start as zero. The language has the exception
   UNINITIALIZED_VARIABLE (§4.3.2 raises it when a function ends without RETURN,
   and bluec does that); reading a variable before it is set is not tracked,
   except the tag of a `T(ANY)` record, which has no value until the record is
   assigned and raises UNINITIALIZED_VARIABLE when read then (p.3-134).
7. **Aliasing and side-effect rules** (§4.3.3, §4.3.4) are checked as written:
   a variable (or a component of it) is at most one inout and one output
   argument, never an inout argument of a procedure that imports it; a variable
   a function imports inout (directly or through the routines it imports) is
   not named, nor used by another function, in the same expression, subscript
   list, argument list or assignment; ASSERT invokes no such function (4.5.8).
   Of an overloaded name, the data every candidate imports count. Own data a
   module routine changes without importing it are not seen. (Until October
   2026 none of this was checked.) Importing is (§4.1.1), with these readings: a routine the scope imports covers the
   variables it uses, also when called through the scope's own local routines
   (FORMPRINT, C-28); `IMPORTS (MODULES: (M))` imports M's exported routines (§4.2).
8. **Recursion** needs no import of itself.
9. **WITH NAMING** hides the named variable (or the aggregate containing it,
   unless it is reached through a pointer) in its structured statement, and
   rejects invoking a routine that imports it (4.5.4). The variable is named
   through other pointers unchecked. (Until October 2026 nothing was hidden.)
10. **TRUNCATED/ROUNDED** apply to fixed and floating point alike (fixed point
    defaults to TRUNCATED, floating point to ROUNDED, 3.3.4.1); NATIVE_R and
    NATIVE_T, in machine-dependent parts only, are the hardware's rounding and
    truncation. Two floating point precisions are implemented: single (IEEE
    binary32, IMP_PRECISION 7, for nominal precisions 1 to 7) and double
    (binary64, 15, for 8 to 15); a result is rounded or truncated to the
    implemented precision of its nominal precision, the larger of the operands'
    and of `WITH PREC` (3.3.4.4); UNDERFLOW is raised for a non-zero result below
    the smallest normal value. (Until October 2026 every float was a double and
    the mode and WITH PREC were ignored.)
11. **Segments are translated in USES order** (§4.1, p.4-5: a segment's data are
    initialized before those of the segments that use it); Appendix C prints
    SYSTEM, which uses STANDARD_IO, first.
12. **DEFINES**: naming a module carries what it exports (§4.2, p.4-9); naming a
    routine `NEW` also carries `T$NEW` (the comment at C-5).
    The segments are one merged scope (p.4-9: "all names are known to the
    translator"), and a segment's own code may use a name another segment
    defines only as its USES clause selects it: the whole DEFINES list of a
    segment named without items (variables inout), else the DATA items (input
    ones read only), ROUTINES by name, TYPES with their operations and MODULES
    with what they export. USES names segments of the program, items are names
    the segment defines, DEFINES names local or imported names, and the
    input/inout conflict of 4.3.1 holds for segments too. The code of a generic
    instance is its generic's and is not checked again. (Until October 2026
    DEFINES names were visible to every later segment.)
13. **The headers of routines** may use the constants of their scope; objects are
    declared before headers, and a call resolves the header it needs.
14. **Substrings as output arguments** (C-8, C-31; [4-41] says variable): the
    formal is a view of the variable's characters.
15. **CONNECT (LT33_PS(I))** with the path's loop identifier (C-5; [4-93] says
    semaphore-name); the semaphore must be implementation-defined (4.6.1): a
    variable of a segment of bluec's library, the machine's PDP_11_LT33. NEW
    redeclared by a routine (LT33_DEVICE_$NEW, which PDP_11_LT33 defines) still
    constructs where a pointer or semaphore is wanted; the variable it names is known in the path without
    an import (4.6.1).
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
21. **`(\A, \B)` as a type** (Appendix C) is accepted as `ENUM (\A, \B)`, so
    the Appendix C parameter types are read as printed.
22. **Derived range bounds** `[?LB : ?UB]` are the widest values (ranges do not
    travel with values); derived bounds of array parameters `[1:?M]` are extents.
23. **The machine**: OBJECT_MACHINE = PDP_11 but STD is 64 bits by default; the
    PDP-11 of Appendix C has 16, and `bluec -pdp11` gives that profile: STD
    fixed point values of 16 bits (INTEGER [-32768:32767], OVERFLOW out of
    them on every operator result and literal), 16-bit words for the packing
    and for pointers, and the exponent range of the F and D formats (8 bits,
    2**-128 .. 2**127) for both floating point precisions, computed in binary32
    and binary64 (the 56-bit mantissa of D is not modelled).
24. **`type-name.attribute`.** The syntax of attribute queries [3-2] allows a
    type name only inside `(T.A).B`, and p.3-29 repeats that `T.A` is not
    permitted; yet the examples write `ASCII.SIZE` (3.4.3), `BCD.SIZE` (3.12) and
    `R.SIZE` (Appendix C). bluec follows the examples for declared types
    (`INTEGER`, `ASCII` and the program's own) and rejects the type classes
    (`FIXED.SIZE` is "not well-defined", p.3-29).
25. **Scaled operators on other types.** The table of 3.1.4.2 maps `!*s!` to
    MULTIPLY_ and so on but D.5 says nothing of the scale; for a program's own
    operator routines the scale is passed as a further input argument, before the
    precision and the rounding mode (D.5 B, C).
26. **A rounding mode** [3-16] is an identifier right after an expression that
    is not followed by `(`, `.`, `:=`, `:` or `$`, and is not a clause of a path
    header; it must be a value of the ROUNDINGS visible there, which a program
    may redefine with more values (FLOOR ...). A mode the predefined operations
    do not know needs an operator routine of the program that takes it.
27. **A float-literal outside the range of single precision** (1.0E-300 has two
    digits, and so a single implemented precision) is given the nominal precision
    8, so that it is represented in double precision rather than rejected.
28. **Dynamic storage.** The simulated machine has 8 GiB for NEW and arrays,
    and nothing is reclaimed (no garbage collector): SPACE_EXHAUSTED once it is
    used (3.10.2). A pointer assignment whose ELEMENT_TYPEs differ in an
    attribute known at translation is rejected; a record argument known only at
    run time is compared then, raising TYPE_MISMATCH (3.10.5).
29. **Use modes.** USAGE is UNORDERED (SYNCH, REGION) (3.11.1); `\SYNCH` is a
    different identifier ([2-10]: the backslash is only a convention), so
    `SEMAPHORE (\SYNCH)` is rejected, while a constant of USAGE is accepted.
30. **TARGET INLINE.** 4.8.2 says in a note that INLINE target routines "can
    be declared, since INLINE is permitted in procedure and function headers",
    and in its constraints that "Target routines cannot be INLINE". The
    constraint is normative and the note only reasons from the syntax: bluec
    rejects TARGET INLINE. The stack-size of DYNSIZE is a manifest integer
    expression, at least zero ([4-111]).
31. **User types and reptypes (3.12).** A type or reptype declaration is a
    closed scope: no changeable variable from outside, no function importing
    one (input parameters and imported inputs count as constants). Circular
    declarations are rejected where declared, through other declarations of
    the scope and not through PTR. A reptype-reference is expanded where it is
    used: formals and the OF base type bound, arguments reduced to manifest
    values, so `FRACTION` of FIXED_BIN(10) is FIXED_REP (10, UNSIGNED) with
    SIZE 10. The expanded reptype must be a predefined one of the class
    (FIXED_STD/FIXED_REP, FLOAT_STD, BOOLEAN_STD, ENUM_STD/ENUM_REP/
    ENUM_VAL_REP, CHAR_STR_STD/CHAR_STR_REP, BIT_STD, ARRAY_STD/ARRAY_REP,
    RECORD_STD/RECORD_REP, PTR_STD, SEMAPHORE_STD); an abstract type takes no
    REP. FIXED_REP checks size, signing and the range (3.2.3). The storage of
    a value stays the C one: SIZE reports the representation, values are not
    packed.
32. **Generics (5, 5.1, 5.2).** In a generic body the objects of a TYPE
    parameter (?T, or E: TYPE) carry it in their type; an operator, an
    assignment (STORE_) or a predefined or program routine invoked with them
    must be named in the WHERE clause, and a generic routine invoked with them
    must have its WHERE routines among the caller's. WHERE routines import no
    data and their templates declare no derived parameters. A routine passed
    for a routine parameter matches its template exactly (modes, types with
    their ranges, result, the listed exceptions among its SIGNALS), derived
    parameters and ? matching real values; `NAME (types) [RETURNS (type)]`
    picks one of several. ?T alone takes only standard representations; a
    repeated ?L of known lengths must agree at the call; FIXED (?, ?, ?)
    takes the argument's type; FIXED_REP (?S, SIGNED) binds S. A `#` closing a
    proc-template is rejected (5.1 says so); a `#` closing a formal or argument
    list is accepted, as [4-21] and [4-38] allow an empty group.
33. **Components and aliasing.** 4.3.3 forbids a variable "or any of its
    components" as two inout or two output arguments; Appendix C passes three
    fields of the record F as outputs of FSYS_CREATE (C-15). Components that
    cannot overlap -- different fields at some level of selection -- are
    accepted; subscripts, as in the spec's M(I), M(J), are not.
34. **INLINE (4.3.1).** An INLINE routine invoked with manifest input
    arguments is expanded for them: a separate body in which those formals are
    manifest, so its conditions select their arms when translated and a
    formal may stand where a manifest value is needed (3.1.4.1). Its own body
    is translated only when it is invoked with other arguments or passed as a
    routine. INLINE routines cannot recurse; a recursive routine imports only
    static data (variables of no routine).
35. **Explicit generic arguments (5).** The arguments of explicit generic
    parameters (inputs a returns-clause uses) "must be constants or constant
    expressions": no variable (a constant or an input parameter is one, a
    variable reached through a pointer is not), only functions that import no
    data. bluec's own STR (T, L) is invoked so (through helpers whose text
    parameters are inputs).
36. **TO_BIT (VAL) in PUT_OUT (C-20).** TO_BIT of a value of any type is
    machine-dependent (3.7.6), yet PUT_OUT applies it outside a machine-dependent
    part. Its WHERE clause names TO_BIT (T REP R): inside the generic body it is
    the WHERE routine, an operation of T (5.2), which the program supplies
    where it instantiates PUT_OUT; bluec reads it so.
38. **Representations on the simulated PDP-11** (3.x.3, 3.12.4). Values keep
    their C storage; the representation is modelled for SIZE, PACKING, TO_BIT,
    [T]$$ and the explicit-rep-converters. Words have 64 bits. An element or
    field takes a slot: itself (DENSE), the byte, half-word, word that holds it
    (PACKED; a character is a byte, its 7 ASCII bits after a 0 filler bit, so
    TO_BIT of a PACKED string is its bytes), or whole words (UNPACKED, the
    default of arrays and records); SIZE is the sum of the slots, a record's
    with RECORD_REP's packing-specs, element-specs (fields, VARIANTS, OMIT of
    a manifest argument, FILLER, ZEROS, BLANKS) and variant packings, the
    variant of the tag's value. ASCII.SIZE is 7. An explicit-rep-converter
    reptype-spec (e) checks the value against the representation (FIXED_REP:
    size and signing), raising INVALID_REP. Only elements of UNPACKED arrays
    are inout arguments.
39. **TARGET routines** (4.8.2) hold machine code that the simulated machine
    does not execute: invoking one raises the implementation's exception
    TARGET_TRAP, which a handler may take (it used to stop the program).
    TERMINAL, the implementation's segment, also has ARGUMENT_COUNT,
    ARGUMENT (I), FILE_EXISTS (N), READ_FILE (N) and WRITE_FILE (N, TEXT),
    which bluec itself uses for its options and libraries.
40. **Libraries and options (4.2, 4.7, 4.6.9, D.7).** `bluec [-L dir]
    [-suppress]`. A segment named in USES and not in the compilation is read
    from the library directory (default `lib`, i.e. `blue/lib` for the tests and
    the corpus) as NAME.blu, its own USES followed in turn. Segments are also
    translated separately: `bluec -c -L dir < S.blu > S.c` translates the one
    segment of its input into a unit whose variables and routines have C names
    of the segment (`bs_S_v3_TOTAL`, `bs_S_r1_BUMP`), with an initialization
    routine `bs_S_init`, and writes its interface dir/S.bif (the segment's text:
    BLUE has no separate synopsis, and generic and INLINE routines are expanded
    in the units that use them). A unit that USES S finds S.bif before S.blu,
    translates the interface without code (extern names, no bodies, S's
    initialization by `bs_S_init`) and refers to the symbol
    `bs_S_iface_<fingerprint of S.bif>`, which only the unit of that interface
    defines: a unit translated against an older interface does not link. The library holds PDP_11_LT33, the simulated
    machine's standard segment (LT33 teletypes and RP03 disk drives, their
    START_IO cases and interrupt semaphores LT33_PS, LT33_KS and DISK_S; a
    disk transfer interrupts after the seek and the rotation on the virtual
    clock, by INTERRUPT_AFTER (us # S), the machine-dependent operation the
    devices use; the Appendix C driver uses the segment), and SIMULATION, the package of 4.6.9: a
    monitor module SIM with RESOURCE, SIM_PATH, SIM_START, SIM_INIT, SIM_WAIT,
    SIM_REQUEST, SIM_RELEASE, SIM_DONE and SIM_TIME, which moves simulated time
    when the last running path blocks. `-suppress` suppresses the exceptions
    (4.5.8): no RANGE checks, ASSERT not evaluated (subscripts stay checked: the
    C storage depends on them). The parallel operations of D.7 are predefined
    routines a program may redefine (REQUEST, RELEASE, WAIT, TERMINATE,
    PRIORITY, CLOCK), and PAR_BLOCK_ too: a PAR_BLOCK_ visible at a parallel
    block gets the list of the activations the block made (held, not yet
    run) as an ARRAY [1:N] OF PATH_ENTRY, the record type of the library
    segment PARALLEL_SUPPORT (D.7 writes an anonymous RECORD, which no actual
    could match; PATH_ADDR is BIT (64), CONNECT_NAME has 32 characters).
    RUN_PATHS (list), the implementation's PAR_BLOCK_, runs the activations a
    list names with its priorities and waits for them; those it does not name,
    or all when RUN_PATHS is not invoked, never run.
37. **Generic instances across segments.** The body of an instance of a generic
    routine is translated in the scope of the segment that declares it, its
    local names visible again, whichever segment invokes it (4.2, 5).

The misprints of the program examples and the rules they break are in
`../corpus/CHANGES.md`.

## 10. Not done

- Storage of packed values: SIZE and the conversions follow the
  representation, the C storage of values does not.

---

## 11. BLUE under an operating system (`../os`, `../kube`, `../labs/blue`)

THE, Kubernetes on THE, the Kubernetes control loop and the three contrast
problems were written in BLUE after RED and GREEN. What BLUE could say directly,
what it said another way, and what it could not say:

1. **THE is native.** BLUE's semaphores are THE's P and V, with nothing built in
   between; `os/the.blu` prints exactly what `os/the.red` prints, and both share
   `os/the.out`. Each level's state is a module, so a path's IMPORTS name the
   levels it calls on; even the switched-off call of lab B6 from level 1 to
   level 2 shows in DUMP's IMPORTS.
2. **No message passing.** There are no mailboxes and no rendezvous. A queue is
   a generic module, `MAILBOXES`, a record of items with one REGION and two
   SYNCH semaphores, instantiated per element type (section 5). It costs thirty
   lines and works for records, integers and arrays of mailboxes alike.
3. **No timed wait, and one semaphore at a time.** REQUEST has no timeout. The
   BLUE answer is the 1978 evaluators' (problem A 2.8, DTIC ADB950587 PDF 4300):
   two paths race and the winner TERMINATEs the loser. That is a parallel block,
   two activations, for every wait. A parallel block may not stand in a routine
   (4.6.1), so the wait cannot be made a procedure: `kube/kube_blue.blu` writes it
   out twice, once for a family of four controllers and once for the kubelets.
   The race is safe only when the waiting path runs at a higher priority than
   the timer: otherwise the timer can terminate it after it took the token and
   before it said so, and the item is stranded (lab B7; J3.11-1 makes the same
   argument for REGION semaphores). Waiting for "a conversation or a key"
   (the message interpreter) is one SYNCH semaphore and a look at the queues.
4. **TERMINATED does not say who sent it.** A path inside a race cannot tell its
   own race's TERMINATED from a TERMINATE aimed at it from outside, when the
   outside one arrives after the race was decided. The kubelet of
   `kube/kube_blue.blu` reads a note (`POWERED`) left by the user before the
   TERMINATE.
5. **No time of day.** CLOCK is the processing time of one path activation
   (4.6.5, decision 2). The language has no other clock, so the programs read the
   simulated machine's real-time clock, `REAL_TIME` of the implementation's
   TERMINAL segment, as an operating system would read its line clock. Until
   October 2026 bluec gave CLOCK as the elapsed time and the programs made every
   process a path of one parallel block started at 0 to log with it.
6. **WAIT takes seconds in binary fixed point.** A millisecond is no binary
   fraction; `PAUSE` rounds it down at scale 30 and the runtime rounds up to the
   microsecond tick, so the runs keep the whole milliseconds of RED's.
7. **A semaphore's value cannot be read.** RED's THE/KUBE saturates its wake-up
   mailboxes by looking at FULL_SLOTS; in BLUE a wake-up pending flag sits under
   a REGION semaphore next to each SYNCH one.
8. **A module body has no statements** (4.4), so a module's variables start at
   zero unless an exported routine sets them: `DRUM_USED` replaces RED's
   `drum_free`, and the vocabulary is loaded by `BOOT_VOCABULARY`.
9. **REGION semaphores change the failure stories.** In `os/the_kube_blue.blu`
   the power cut terminates a kubelet in the middle of its pass, holding the
   store's semaphore, and the control plane goes on; RED and GREEN had to wait
   until the kubelet was between passes. In `os/contrast/readers_blue.blu` the
   writer's semaphore must be SYNCH, since the reader that releases it is often
   not the one that took it.
10. **Exception handlers belong to the statement they follow** ([4-80]).
    `BLOCK ... EXCEPT ... END BLOCK;` attaches the handler to the last statement
    of the block, not to the block; `BLOCK ... END BLOCK; EXCEPT ...` covers it.
11. **Functions returning strings of different lengths.** bluec accepts
    `RETURNS (ASCII_STR (?))` and gives each RETURN the length of its value; the
    specification writes a result with `?` only in the routine templates of
    `WHERE ... NEEDS` (Appendix C).
12. **A manifest condition selects its arm alone** (4.5.5.1): the arms it rules
    out emit no code. bluec first skipped them entirely, so their errors, the
    import checks included, went unreported (`os/the.blu` compiled with a call
    its IMPORTS did not cover while `REPORT_DUMPS` was FALSE). They are now
    translated for their errors and the code dropped (`tests/dead_arm.err.blu`,
    `tests/dead_else.err.blu`).

Found and fixed on the way: a path TERMINATEd before it first ran still waited
out its first WAIT or took a free semaphore; REQUEST and WAIT now check for it
(`tests/terminate_early.blu`).
