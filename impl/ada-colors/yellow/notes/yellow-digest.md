# YELLOW digest: the language as reconstructed

Source: *Preliminary Design Phase Report and Language Specification*, SRI International,
15 February 1978, reprinted in DTIC ADB950587 (*DoD Common High Order Language, Phase 1*),
PDF pages 977-1250. Page numbers below are PDF pages; "L-n", "E-n", "D-n" are the report's own
page numbers in Part Two (Language Report), Part Three (Tutorial) and Part Four (Design
Discussion). The text was read from the OCR; every grammar page and every example was checked
against a rendering of the scan.

YELLOW was the design "modifying Pascal to comply with Ironman" (p.984). It keeps Pascal's
structure and adds Modula's modules, monitors and signals, a split between types and
representations, overloading by EXTENDS/REPLACES, module templates, and block-structured
exception handling.

## 1. Lexical rules (III-IV, pp.992-998)

- Identifiers: letters, digits and `_`, not starting with a digit (L-9; the tutorial, E-12,
  says "must begin with a letter"; yellowc follows L-9). Upper and lower case are distinct
  (p.994). Reserved words are upper case (Appendix A, p.1081).
- Comment: `(*` ... `*)`, closed on its own line (p.994, D-3).
- Numbers: integer `[Base] [-] digits`, the digits consistent with the Base (`BASE8 9` is an
  error); floating `[+|-] digits . {digits} [E [+|-] digits]`
  (a digit before the point is required, E-12); fixed `[Base] [+|-] mantissa P [[+|-] digits]`,
  the value being mantissa times base to the power (L-10). Base words BASE2, BASE8, BASE10,
  BASE16 precede the number with a space. A sign belongs to a literal only where no operand
  precedes it (yellowc's reading of "[+|-]" in the literal rules).
- Character literal: one printing character or a mnemonic, between apostrophes: `'A'`, `'CR'`.
  Apostrophe and quotation mark are written `'SQ'`, `'DQ'` (D-6). The mnemonics belong to an
  alphabet; ASCII's are the control names, SP, DEL, SQ and DQ.
- String: `"..."` of characters, a one-character literal losing its apostrophes; strings
  separated only by blanks and line ends are one literal (p.998).
- **Printed symbols with no ASCII form**: not-equal `≠` is written `#` (Modula's spelling) and
  the dereferencing up-arrow `↑` is written `^`. Free operators `≠≠ ≠≠≠` are `## ###`.
- **The CASE arrow is `=>`.** The OCR reads "->"; at 300 dpi the bold glyph is the same as in
  `:=` and in `=` (rules 18, 28, 78, p.1085, p.1100). The 1978 evaluators typed it `=>` in
  their own YELLOW examples (Section H, team 126-02, p.1898, p.1900).

## 2. Grammar (Appendix B, pp.1084-1089)

The rule numbers of the Appendix are used in yellowc's comments. Points that needed a decision:

- `FROM` (rules 4-5) is not in the reserved words of Appendix A: read as a word of import and
  export lists only.
- Rule 83-84 `PRECISION ManifestConstant`: in `CONST Pi: FLOATING [0.0..4.0] PRECISION 7 = 3.14`
  (p.1100) the `=` belongs to the declaration, so the constant after PRECISION, SCALE,
  PACKED and ALIGNMENT is read as a simple expression.
- Rule 85 `ARRAY (n DIMENSIONS OF R)`; p.1063 writes `1 DIMENSION`: both are read.
- Rule 87 separates parameter groups by `;`; the examples also use `,` (E-9, E-23): both read.
- Rule 16 says the actuals of INSTANCE are identifiers, but the Report's instances pass
  numbers (`StackTemplate(100, INT)`, p.1162; `getBufferRing(3,64)`, p.1123): numbers accepted.
- Rule 61 `[Type] ConcreteType`: the optional Type is taken to be a type identifier, and the
  concrete type must have its structure (the same components and types, literals, indices).
- A VAR or CONST list continues after `;` while an identifier is followed by `,`, `:` or `AT`.
- Expressions (rules 34-54, p.1030): five levels — NOT, multiplying, adding, prefix minus,
  relational. `* AND + OR` are associative; `/ DIV MOD - XOR` and all free operators are not:
  `a - b + c`, `a * b DIV c`, `-a + b` need parentheses (VIII.A, D-19/20). Relations bind
  loosest, so `x > 0 AND b` is `x > (0 AND b)`.
- Designators (rules 41-43): `Id`, `Id(args)`, then `.Id`, `[subscripts]`, `^`. Parentheses
  are calls and denotations of values; subscripts use brackets.
- Rule 40 `[Id] Literal`: a literal qualified by the name of its type: `Colors Orange`,
  `Tree NIL`, `Roman "MCMX"`, `Foot_Type 50`.

## 3. Types and representations (VI, VII, pp.1000-1028)

- A type is a set of values; a representation is a type with a range, scale, precision or
  layout. FIXED is exact (VIII.C): a value is held as a whole number of its scale (128 bits),
  sums are taken at the common scale of the operands, products at the product of the scales;
  assigning to a scale the value is not a multiple of raises FIXED_NOT_REPRESENTABLE. Scales
  are manifest fractions of 64-bit integers. FLOATING is the machine's double: a PRECISION
  above 15 is an error, an overflowing result raises OVERFLOW. `INTEGER`, `FIXED`, `FLOATING` are types: a variable needs a representation
  (`INTEGER [1..10]`, `FIXED [0.0P..10P5] SCALE 0.01P`, `FLOATING [-1.0E3..1.0E3] PRECISION 7`).
- **Type identity (VII.G, p.1024)**: two declarations have the same type when their
  representations derive from the same type identifier. `INTEGER [1..5]` and `INTEGER [0..9]`
  are one type; two RECORD...ENDRECORD written apart are two. `TYPE T = INTEGER` makes a new
  type with INTEGER's operations; its literals are written `T 50`.
- Assignment and CONST binding need the same type; the representation is converted with a
  range check (`OUT_OF_RANGE`), component by component for records and arrays whose
  representations of one type differ (`Polar2` to `Polar3`). VAR binding needs the same
  representation (VII.G Case 2: the representation identifiers expanded, the concrete forms
  alike), for a length-unresolved formal the same component representation; an OUT actual of
  another representation gets a temporary of the formal's, assigned after the call.
- UNORDERED enumerations have = and #; ORDERED and ALPHABET also < <= > >= SUCC PRED FIRST LAST.
  BOOLEAN is UNORDERED(FALSE, TRUE), so it has no SUCC. SUCC and PRED give a value of the
  type: of an integer an INTEGER (only overflow stops it), of an enumeration a value that
  raises OUT_OF_RANGE past its first or last literal (XI); FIRST and LAST are the bounds of
  the argument's representation.
- Arrays are indexed by integer or scalar representations; records have CONST and VAR
  components and one optional variant part with a CONST case-selection component. A component
  of a variant is designated only inside a SELECT on the case-selection component of the same
  record, in a case of that variant (VIII.B); it is checked again when the program runs, since
  the case may change inside the SELECT. Files, signals and semaphores may be components of
  records and arrays at any depth; what holds them has no :=, = or #. Values are
  denoted by the representation's name: `Date(Mar, 4, 1977)`, `bits(FALSE)` (every component),
  `IntegerSet(3, 5)`, `IntegerSet()`.
- Pointers: `POINTER(R)`, `NEW(p)`, `p^`, `T NIL`. FREE_POINTER is the low-level dual (XIV): it
  recovers the dynamic variable and leaves its cell dead, so following any other pointer to it
  raises INVALID_POINTER (a pointer is a cell holding the variable).
- Sets of any integer or scalar range; `+ - * XOR IN`, prefix `-` is the complement. A base
  range of more than 65536 values (`SET (INTEGER64)`) is held as a sorted list of members, or
  of non-members after a complement.
- A variable is undefined until it is assigned (VII.B, VIII.B): a fresh scalar, in a variable,
  a component or a dynamic variable, holds a value no representation has, and reading it
  raises the trap UNINITIALIZED (Appendix C, "access to uninitialized variable"). A VAR or
  OUT actual may be undefined, and copying a structure copies its undefined components.
- Bounds are scope-entry constants: computed once where the representation is elaborated.
  Manifest constants (VI.C) are literals, manifest CONSTs and what standard operators and
  functions make of them: SUCC, PRED, FIRST, LAST, LOW, HIGH (where the bounds are known),
  AND, OR, XOR, NOT. A string literal assigned to an array of manifest bounds must have its
  length; a TYPE made from INTEGER takes plain literals in a range (`Feet = Foot_Type
  [1..5280]`, VII.G).
- **Literal disambiguation (VI.A.3, p.1012)**: an enumeration literal of two visible types,
  and a character of two visible alphabets, must be qualified; a string in a scope with two
  alphabets must always be qualified. ASCII is this implementation's standard alphabet and is
  visible everywhere, so any program declaring an alphabet qualifies its strings — "modules
  with controlled importation can often be used to ensure that scopes include only one
  alphabet" (p.1013).

## 4. Statements (IX, pp.1037-1042)

Assignment, procedure call or process activation, ASSERT, GOTO, EXIT (names its LOOP), RETURN,
TERMINATE_PROCESS, PROPAGATE_EXCEPTION, IF/ELSIF/ELSE/ENDIF, SELECT/CASE/ELSE/ENDSELECT (no
matching case and no ELSE: nothing is done; the labels are distinct), WHILE, FOR over an
ordered scalar or integer representation, LOOP name ... ENDLOOP name, [SIMULATED_TIME] BEGIN
block END.

- Falling out of the bottom of a routine or process "is an error" (IX.A.6-7): yellowc refuses
  a body whose end control can reach, by a conservative reading of its statements (a LOOP
  without an EXIT for it, a WHILE TRUE, and IF and SELECT with an ELSE whose every part ends
  otherwise do not complete). The trap `NO_RETURN` remains as a guard.
- Warnings, on the standard error and in a comment heading the C program: an ASSERT whose
  expression calls a procedure (IX.A.3), a routine declared without EXTENDS or REPLACES that
  hides a standard routine (X.A.1).
- Labels are declared by LABEL and label only top-level statements of a block.

## 5. Routines, modules, templates (X, pp.1043-1059)

- FUNCTION: CONST parameters only; assigns only to its locals (D-33 is stricter than Ironman:
  "forbidden assignment in a function to any nonlocal variable"). PROCEDURE with RETURNS is a
  value-returning procedure: an impure function, called only in expressions; a plain procedure
  only as a statement. Once every body is translated, what each routine assigns and refers to
  outside its scope is closed over its calls: a FUNCTION may not call, at any depth, a routine
  that assigns to a variable not local to the FUNCTION or to a dynamic variable (X.A.4); an
  INLINE routine may not reach itself (X.A.5); the aliasing rules of X.A.6 hold for every
  call and process activation: no two VAR actuals that may share storage (the same variable,
  one a part of the other, subscripts not known at translation, P^ and a pointer of its
  type, two dynamic variables of one pointer type), no VAR actual that the routine refers to
  freely (its root variable among the routine's free variables, or a dynamic variable when the
  routine reaches one of that pointer type, or a pointer of that type, freely); and the same
  variable is not the actual of two OUT parameters (IX.A.2). The rule on pointers is read as
  written, of a VAR actual "of the form P^": a component of a dynamic variable (P^.c) or a
  pointer variable Q passed VAR is not in conflict with the dynamic variables the routine
  reaches freely. The reason: the VAR formal then names a field or the pointer itself, not the
  dynamic variable, and reading the rule wider would forbid passing any pointer of a type
  that some global structure also uses, which every list-handling program does.
- Parameters: CONST (by reference or value, never modified), VAR (by reference), OUT (a local
  copied out at RETURN; undefined after an exception). Length-unresolved arrays
  `ARRAY (n DIMENSIONS OF R)` with LOW and HIGH.
- Overloading by the types (not representations) of the parameters (a value-returning routine
  is extended only by value-returning ones, a procedure by procedures): EXTENDS adds a
  definition, REPLACES overrides one, a declaration with neither hides all others (X.A.1).
  Operators, `NOT` and `:=` are names too (`FUNCTION EXTENDS + ...`, `DerefRpointer AS ^`).
  A definition of `:=` (`PROCEDURE REPLACES := (OUT a: V; CONST b: V)`) is called by every
  assignment of its type: assignment statements, initializations, the copy of OUT parameters;
  inside its own body the standard assignment applies, or it could not be written.
- Modules are closed scopes: only their own names, their imports and the standard names are
  visible inside. IMPORT M stands for M's exports; yellowc also brings M itself, so that a
  module nested inside can import it (the convex-hull template of p.1108 imports
  MyStandardConventions wherever it is instantiated). Exports: OPAQUE (default for types and
  representations), TRANSPARENT, READONLY (default for variables and constants), VAR; FROM and
  AS. The attributes restrict and never relax: a constant or a READONLY export is not exported
  VAR, an opaque one not TRANSPARENT (X.B.3); what a module imports it does not export (X.B.1).
  Exported routines extend the definitions of their name around the module (X.B.5), an error
  for parameter types already defined there. Two
  sibling modules may export one name, usable only through FROM. Exporting `:=`, `=`, `#`
  without declaring them gives the standard ones with the opaque types (D-33). An
  initialization is an assignment: a variable of an opaque type is initialized outside its
  module only when `:=` is exported.
- Composite declarations may refer to each other in any order; simple ones are declared before
  use (pointer bases excepted). A name a declaration uses that a later declaration of the same
  sequence declares is that later entity, used too early (VII.I); the body of a routine or
  process uses only the simple declarations of its scope that precede it (X.G). yellowc reads
  every declaration of a scope, and the declarations of the modules in it, before it writes
  the bodies of their routines and the initializations of the modules (each written where its
  module is, so modules initialize in order). A module may import from a module declared
  later (that module is translated first, and initializes first), a routine or process
  declared later, or a module that imports from it in turn: such an import is resolved when
  its provider has been read, and until then only bodies may use it. An import of a simple
  declaration that comes after the module is an error (X.G).
- TEMPLATE T(formals) MODULE ... ENDTEMPLATE T; INSTANCE T(actuals) writes the module with
  the actuals for the formals (X.C-D): yellowc copies the tokens with the names replaced.

## 6. Processes and synchronization (X.E, XIV)

- `PROCESS P(formals) [PRIORITY e] [INSTANCES e] [SIZE e]`; `P(args)` activates a new
  instance; the scope where it is declared and activated ends only when it ends (processes of
  a module hold the scope around the module).
- MONITOR: a module whose procedures exclude each other; a process declared in a monitor runs
  inside it. SIGNAL variables, and structures holding them, live in monitors and are not
  exported; every signal of such a structure belongs to the monitor. `WAIT(s[, rank])` lets
  the monitor go; `SEND(s)` passes the monitor to the waiter with the smallest rank (first
  come first served within a rank) and delays the sender (Hoare semantics, p.1057);
  `AWAITED(s)`. Nested monitors add no exclusion.
- Semaphores (binary): CLAIM, RELEASE, CONDITIONAL_CLAIM. PROCESS_IDENTITY, CHANGE_PRIORITY,
  RAISE_PROCESS_TERMINATION (raises PROCESS_TERMINATION in the target), DELAY, CLOCK_TIME.
- Time and scheduling. The clock is virtual and the scheduler deterministic. Outside
  SIMULATED_TIME a process is preempted after a time slice of 10000 backward branches (loop
  iterations and GOTOs) and the processes of its priority take their turn, so a process that
  never waits does not starve the others (X.E.1); a higher priority, by PRIORITY or
  CHANGE_PRIORITY, runs first. Inside a SIMULATED_TIME block the block and the processes
  activated in it are quasi-parallel (X.E.5): none is preempted. The clock is the simulated
  machine's real time, the same inside and outside simulations: computation takes none of
  it, and it moves to the next wake-up when every process waits; so every run of a program
  is the same. When every process waits, the
  trap Deadlock (Appendix C) is raised in the main process. SIZE n bounds the local storage of
  an instance to n words (a word is 8 bytes of frame): a call that goes beyond raises
  TOO_LITTLE_LOCAL_STORAGE (XIV.X.2). A VAR actual of a process activation must live at least
  as long as the process (X.E.2: its life scope, the nearest routine, process or BEGIN block
  around its declaration, encloses the process's).
- Device signals: a SIGNAL AT the PDP-11 line clock vector (BASE8 100) is sent every 20 ms of
  virtual time by a simulated line clock; other locations are not simulated.

## 7. Exceptions (IX.A.8, X.F, D-41..45)

- Exceptions are names, not declared. A block has at most one handler, before its statements:
  `EXCEPTION CASE a, b => ... ELSE ... ENDEXCEPTION`. The chosen case is the terminal
  statement sequence of the block; no ELSE means ELSE PROPAGATE_EXCEPTION.
- **PROPAGATE_EXCEPTION leaves its own block**: it "terminates the current context and invokes
  the named exception within the dynamically enclosing context" (p.1039), resembling RETURN
  more than a call (D-44). The block's own handler does not see it; it sees exceptions coming
  back from calls and inner blocks, and traps of its own operations. ASSERT is defined as IF
  NOT e THEN PROPAGATE_EXCEPTION INVALID_ASSERTION (p.1038) and behaves the same.
- Trap names are the implementation's (XIV.X.3, Appendix C): OUT_OF_RANGE (ranges,
  subscripts, SUCC of the last value), OVERFLOW, ZERO_DIVIDE, INVALID_POINTER,
  INVALID_ASSERTION, INVALID_VARIANT, END_OF_FILE, FILE_ERROR, ZERO_DENOMINATOR,
  FIXED_NOT_REPRESENTABLE, TOO_MANY_PROCESS_INSTANCES, PROCESS_TERMINATION, NO_RETURN.
  An exception not handled in a process ends that process.

## 8. Input and output (XII, pp.1063-1065)

`FILE(R)`; `OPEN(f, name, READ|WRITE|APPEND)`, `GET`, `PUT`, `CHECK_EOF`, `CLOSE`.
The Report passes files "as program parameters"; a program here is a module with none, so the
external names `INPUT` and `OUTPUT` denote the standard streams. Files of characters hold one
byte per character; other files hold any representation but files, signals and semaphores: arrays and records component by component, sets as their range and members, numbers and pointers as stored.
Formatted text output is not in the language: the prelude's TextIO provides `Write`,
overloaded on strings, characters, integers and BOOLEAN, `WriteFloat`, `WriteFixed`, `WriteLn`.

## 9. Programs and separate compilation (XIII)

A program is a sequence of segments, each a module, behaving as the modules of one BEGIN
block in link order (XIII.A). Without options yellowc reads the segments of a program together
(the prelude first); a synopsis followed by its segment in that input is checked and the
segment translated. Segments are also translated separately, against a library directory of
translated interfaces:

- `yellowc -i LIB < prelude + synopsis` checks a synopsis (no statements; routines and
  processes without bodies but INLINE routines, XIII.B, E; import lists that name segments,
  XIII.C; every name resolved, XIII.D) and keeps it in LIB as S.ysyn with its fingerprint S.yfp.
- `yellowc -c LIB < prelude + segment` checks the segment against its synopsis (the same
  import and export lists, each declaration of the synopsis token for token in the segment,
  nested modules and templates in turn, XIII.C-G), translates it with the synopses of the
  segments it imports, and writes S.yuse, the fingerprints of the synopses used. The C defines
  `ys_S_init`, `ys_S_await` and, for each variable, constant, routine and process at the top
  of the segment's modules, a pointer the other segments reach it by (a process through an
  activation routine).
- `yellowc -l LIB S1 ... Sk` writes the main program: the segments initialized in that order,
  then awaited. A segment translated with a synopsis that has changed since, or importing a
  segment that is not linked, is an error naming it; the program checks again when it starts
  that each segment's C is the one translated with those synopses (XIII.I).

What a segment's routines do is part of its stamp: -c leaves LIB/S.yfx, for each routine,
process and value-returning procedure it gives the others, whether it assigns to any variable
not its own, whether it reaches dynamic variables freely, and the variables of segments it
refers to freely, closed over every call. A segment translated after reads them: a FUNCTION may
call a procedure of another segment that assigns to nothing (X.A.4), the aliasing rules hold
for calls across segments (X.A.6), and so does the life-scope rule for the VAR actuals of a
process of another segment, which lives at the top of its segment (X.E.2). A segment
translated before the segments it imports has no stamp to read and takes their procedures to
assign; its uses name the stamps it read, and linking refuses a segment whose imports' stamps
have changed since (XIII.I).

## 10. Implementation-dependent parts (XIV)

They are defined on a simulated machine: words of 64 bits addressed by word, a store of 65536
words (`MAIN_STORE_ARRAY`, indexed by `ADDRESS = INTEGER [0..16777215]`, components `WORD`),
whose top 8192 words (BASE8 160000 on) are the PDP-11 I/O page of the Report's examples.

- Sizes are counted in bits. Unpacked, a scalar takes a word (FIXED two), components start on
  words; PACKED takes the bits the range needs (BOOLEAN 1, `INTEGER [0..262143]` 18, a
  pointer 24) and PACKED n refuses a representation that needs more than n (XIV.VI.1).
  ALIGNMENT n starts values on multiples of n bits; AT on a record component gives its offset
  in bits, and components placed so that they overlap are an error. A component of a PACKED
  object is not a VAR actual. EXTENT counts words, of the representation (of the actual for
  arrays of bounds known only when the program runs).
- AT on a VAR or CONST puts it in the store at that word address (`VAR ClockStatus AT BASE8
  177546: WORD`); AT on a formal passes the actual in that word. ADDR gives that address; for
  other storage an address above the store, given when ADDR first asks. MAKE_POINTER(p, a)
  makes a pointer to what address a names; MAIN_STORE_ARRAY[a] is the word there. An address
  that names nothing raises ADDRESS_VIOLATION ("addressing protection violation", App. C).
- The line clock is simulated: a SIGNAL AT BASE8 100 is sent every 20 ms of virtual time. Its
  status register is a word of the I/O page like any other; the clock does not consult it.
- SPACE formals take an actual of any representation as its place and extent, for ADDR and
  EXTENT only; a SPACE formal may be passed on to another.
- Numeric enquiries (StandardImplementationPrelude): REAL_PRECISION 15, RADIX 2,
  UPPER_EXPONENT 1024, LOWER_EXPONENT -1021, for both PRECISION_DESCRIPTOR values.
- Arrays take up to 8 dimensions, alphabets up to 256 characters, string literals up to
  65536 characters: beyond, a translation error.

- Trap handlers (XIV.X.3): a procedure without parameters named TRAP_ and the exception, declared
  with REPLACES in the outermost scope of a segment (`PROCEDURE REPLACES TRAP_OVERFLOW ()`),
  replaces the standard handler, which propagates the exception. It is called where the trap
  happens; it may propagate an exception there, or RETURN to resume the operation: a value out
  of range becomes the nearest bound (a subscript too), an integer overflow wraps, a division
  by zero gives 0, a fixed-point value not representable is rounded to its scale, an
  activation beyond INSTANCES is not made, storage beyond SIZE is used; an invalid pointer and
  an address that names nothing cannot be resumed, and the exception follows the handler.
  Traps: OUT_OF_RANGE, OVERFLOW, ZERO_DIVIDE, INVALID_POINTER, FIXED_NOT_REPRESENTABLE,
  TOO_MANY_PROCESS_INSTANCES, TOO_LITTLE_LOCAL_STORAGE, ADDRESS_VIOLATION, UNINITIALIZED.
- The compiler status module of the prelude, CompilerStatus (XIV.XIII.2): SUPPRESS_TRAP(t)
  and RESTORE_TRAP(t) are directives to the translator from the call to the end of the
  block (and the bodies declared there); TRAP_SUPPRESSED(t) tells the state. Suppressing
  a trap leaves out the code that detects it, and the program gets what the simulated machine
  does, always inside the machine's own storage: with RANGE_TRAP a value out of range is kept;
  with OVERFLOW_TRAP integer arithmetic wraps in two's complement; with ASSERTION_TRAP an
  ASSERT has no effect (IX.A.3); with UNINITIALIZED_TRAP an undefined value is read as it is;
  with INDEX_TRAP a subscript out of bounds wraps round the array (the component at the
  subscript's distance from the low bound, modulo the length); with POINTER_TRAP a NIL, freed
  or undefined pointer designates the simulated store from address 0; with ZERO_DIVIDE_TRAP an
  integer DIV or MOD by zero gives 0 and a floating-point division by zero gives the IEEE
  infinity or NaN (which OVERFLOW then reports unless it is suppressed too).

Code inserts: the machine of this implementation is C, so `C_CODE_INSERT("...")`
puts C text in the program, `$name` standing for a variable, constant or parameter.

## 11. Not done, or done approximately

What remains approximate, with the reason:

- PACKED, ALIGNMENT and AT offsets of components set sizes, limits and errors on the simulated
  machine, but values are still stored as C stores them: a packed array of BOOLEAN takes a word
  per component in the C program. Nothing a program can observe depends on it except through
  MAIN_STORE_ARRAY and MAKE_POINTER, whose words are those of the C storage.
- The line clock does not consult its status register in the I/O page; it runs from the
  moment a signal is declared at its vector (the Report's own example arms it, so nothing
  differs).
