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
- Numbers: integer `[Base] [-] digits`; floating `[+|-] digits . {digits} [E [+|-] digits]`
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
- Rule 61 `[Type] ConcreteType`: the optional Type is taken to be a type identifier.
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
  layout. `INTEGER`, `FIXED`, `FLOATING` are types: a variable needs a representation
  (`INTEGER [1..10]`, `FIXED [0.0P..10P5] SCALE 0.01P`, `FLOATING [-1.0E3..1.0E3] PRECISION 7`).
- **Type identity (VII.G, p.1024)**: two declarations have the same type when their
  representations derive from the same type identifier. `INTEGER [1..5]` and `INTEGER [0..9]`
  are one type; two RECORD...ENDRECORD written apart are two. `TYPE T = INTEGER` makes a new
  type with INTEGER's operations; its literals are written `T 50`.
- Assignment and CONST binding need the same type; the representation is converted with a
  range check (`OUT_OF_RANGE`). VAR binding needs the same representation (yellowc checks the
  type only).
- UNORDERED enumerations have = and #; ORDERED and ALPHABET also < <= > >= SUCC PRED FIRST LAST.
  BOOLEAN is UNORDERED(FALSE, TRUE).
- Arrays are indexed by integer or scalar representations; records have CONST and VAR
  components and one optional variant part with a CONST case-selection component. Values are
  denoted by the representation's name: `Date(Mar, 4, 1977)`, `bits(FALSE)` (every component),
  `IntegerSet(3, 5)`, `IntegerSet()`.
- Pointers: `POINTER(R)`, `NEW(p)`, `p^`, `T NIL`. FREE_POINTER is the low-level dual (XIV).
- Sets of any integer or scalar range; `+ - * XOR IN`, prefix `-` is the complement.
- Bounds are scope-entry constants: computed once where the representation is elaborated.
- **Literal disambiguation (VI.A.3, p.1012)**: an enumeration literal of two visible types,
  and a character of two visible alphabets, must be qualified; a string in a scope with two
  alphabets must always be qualified. ASCII is this implementation's standard alphabet and is
  visible everywhere, so any program declaring an alphabet qualifies its strings — "modules
  with controlled importation can often be used to ensure that scopes include only one
  alphabet" (p.1013).

## 4. Statements (IX, pp.1037-1042)

Assignment, procedure call or process activation, ASSERT, GOTO, EXIT (names its LOOP), RETURN,
TERMINATE_PROCESS, PROPAGATE_EXCEPTION, IF/ELSIF/ELSE/ENDIF, SELECT/CASE/ELSE/ENDSELECT (no
matching case and no ELSE: nothing is done), WHILE, FOR over a representation, LOOP name ...
ENDLOOP name, [SIMULATED_TIME] BEGIN block END.

- Falling out of the bottom of a routine or process "is an error" (IX.A.6-7). Not decidable
  at translation in general: yellowc raises the trap `NO_RETURN`.
- Labels are declared by LABEL and label only top-level statements of a block.

## 5. Routines, modules, templates (X, pp.1043-1059)

- FUNCTION: CONST parameters only; assigns only to its locals (D-33 is stricter than Ironman:
  "forbidden assignment in a function to any nonlocal variable"). PROCEDURE with RETURNS is a
  value-returning procedure: an impure function, called only in expressions; a plain procedure
  only as a statement.
- Parameters: CONST (by reference or value, never modified), VAR (by reference), OUT (a local
  copied out at RETURN; undefined after an exception). Length-unresolved arrays
  `ARRAY (n DIMENSIONS OF R)` with LOW and HIGH.
- Overloading by the types (not representations) of the parameters: EXTENDS adds a
  definition, REPLACES overrides one, a declaration with neither hides all others (X.A.1).
  Operators and `:=` are names too (`FUNCTION EXTENDS + ...`, `DerefRpointer AS ^`).
- Modules are closed scopes: only their own names, their imports and the standard names are
  visible inside. IMPORT M stands for M's exports; yellowc also brings M itself, so that a
  module nested inside can import it (the convex-hull template of p.1108 imports
  MyStandardConventions wherever it is instantiated). Exports: OPAQUE (default for types and
  representations), TRANSPARENT, READONLY (default for variables), VAR; FROM and AS. Two
  sibling modules may export one name, usable only through FROM. Exporting `:=`, `=`, `#`
  without declaring them gives the standard ones with the opaque types (D-33).
- Composite declarations may refer to each other in any order; simple ones are declared
  before use (pointer bases excepted).
- TEMPLATE T(formals) MODULE ... ENDTEMPLATE T; INSTANCE T(actuals) writes the module with
  the actuals for the formals (X.C-D): yellowc copies the tokens with the names replaced.

## 6. Processes and synchronization (X.E, XIV)

- `PROCESS P(formals) [PRIORITY e] [INSTANCES e] [SIZE e]`; `P(args)` activates a new
  instance; the scope where it is declared and activated ends only when it ends (processes of
  a module hold the scope around the module).
- MONITOR: a module whose procedures exclude each other; a process declared in a monitor runs
  inside it. SIGNAL variables live in monitors and are not exported. `WAIT(s[, rank])` lets
  the monitor go; `SEND(s)` passes the monitor to the waiter with the smallest rank (first
  come first served within a rank) and delays the sender (Hoare semantics, p.1057);
  `AWAITED(s)`. Nested monitors add no exclusion.
- Semaphores (binary): CLAIM, RELEASE, CONDITIONAL_CLAIM. PROCESS_IDENTITY, CHANGE_PRIORITY,
  RAISE_PROCESS_TERMINATION (raises PROCESS_TERMINATION in the target), DELAY, CLOCK_TIME.
- SIMULATED_TIME: this runtime's clock is virtual everywhere and its scheduler deterministic,
  so the whole program already runs in simulated time; the prefix is accepted and changes
  nothing.
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
byte per character; other files hold the values' machine images (no arrays or pointers).
Formatted text output is not in the language: the prelude's TextIO provides `Write`,
overloaded on strings, characters, integers and BOOLEAN, `WriteFloat`, `WriteFixed`, `WriteLn`.

## 9. Programs and separate compilation (XIII)

A program is a sequence of segments, each a module, behaving as the modules of one BEGIN
block in link order (XIII.A). yellowc reads the segments of a program together (the prelude
first); a synopsis is a module whose routines have empty bodies and parses as one, but is not
used for separate compilation.

## 10. Implementation-dependent parts (XIV)

PACKED, ALIGNMENT and AT on record components are read and ignored; AT on variables is kept
only for device signals. SPACE formals, ADDR and EXTENT are accepted (ADDR gives the C
address). Code inserts: the machine of this implementation is C, so `C_CODE_INSERT("...")`
puts C text in the program, `$name` standing for a variable, constant or parameter. Trap
handlers, numeric inquiries other than the prelude's constants, and configuration modules
other than the prelude are not provided.

## 11. Not done, or done approximately

- Aliasing rules (X.A.6) are not checked; neither is the life-scope rule for VAR actuals of
  processes.
- A FUNCTION's purity is checked for its own assignments and VAR/OUT actuals, not for the
  procedures it calls.
- FIXED values are held in doubles (p.1001 allows floating-point to implement them), checked
  to be multiples of their scale.
- Representations of one type with different structured layouts are converted by copying.
- The `:=` of a user definition (exporting a redefined `:=`) is not called by assignment.
- Initialization of a variable of an opaque type is allowed though `:=` is not exported.
