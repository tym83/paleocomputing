# What the 1978 programs needed

Every program in `orig/` is transcribed as printed in the BLUE Language
Specification of 15 February 1978 (DTIC ADB950587); its header names the
section and page. `fix/NAME.sed` applies the changes a compiler forced, each with
its reason as a comment; `main/NAME.blu` is the driver that supplies the elided
code and prints. Nothing in `orig/` is ever edited to make a program pass.

## Misprints

| Program | Page | As printed | Read as |
|---|---|---|---|
| stack-module | 4-27 | assignment before `ELSE` without `;`; `LOOP FOR ...;` | `;` added; `DO` |
| generic-stack | 5-12 | `LOOP FOR I IN [1:S1.TOP];` | `DO` |
| producer-consumer | 4-66, 4-67 | `CLEAR(BUF)`, `BUFF`, two missing `;` | `CLEAR(# BUF)`, `BUF`, `;` |
| charset-bcd | 3-159, 3-160 | `CONST INT_REP INTEGER`, case elements without `END;` | colon, `END;` |
| matrix | 5-10 | `M1(I, 1) * M1(1, J)` | `M1(I, 1) * M2(1, J)` |
| integrate | 5-7 | `INTEGRATE (P,1,100)`, `INTEGER (14,2,STD)` | arguments in the order of the formals; `FIXED (14,2,STD)` |
| array-sum | 4-44 | `A.BOUNDS(1)` for a one-dimensional array | `A.BOUNDS(0)`: BOUNDS is `ARRAY [0:n]` (3.8.1) |
| vstr | 5-13 .. 5-17 | record fields without `VAR`; `VAR_CHAR_SET`; `FIXED_STRING`; `MAX(U-L+1)`; `BLANKS:`; no `;` before `EXCEPT` | `VAR`; `VAR_CHAR_STR`; `FIXED_STR`; `MAX(U-L+1,0)`; `;` |
| vstr | 5-14, 5-15 | `SUBV.STRING := V.STRING[L:U]` and the concatenation assign shorter strings | assigned to the leading part (3.7.5 raises SIZE otherwise) |
| appendix-c | C-5 | path headers without `PATH`; `LT33-PRINTERS` | `PATH`; `LT33_PRINTERS` |
| appendix-c | C-8 | `BIN('')` | `BIN ''` ([3-111]) |
| appendix-c | C-11, C-20 | `;` before `IMPORTS` | moved after it |
| appendix-c | C-14 | record fields separated by `,` | `;` |
| appendix-c | C-15, C-16 | `IO-ERROR`, `FYS_CHECK` | `IO_ERROR`, `FSYS_CHECK` |
| appendix-c | C-26 | `SIGNAL IO_ERROR` without `;`; `''`, `''LF`, `''CR LF` | `;`; `' '`, `''\LF`, `''\CR\LF` |
| appendix-c | C-29 | `then` | `THEN` |
| appendix-c | C-31 | `END LOOP;` of `LOOP FOR I` | `END LOOP I;` |
| appendix-c | C-33 | `END PROCEDURE FORM_READ` | `FORMREAD` |
| appendix-c | C-34 | `ASCII_STR(?)), RETURNS (T)` | no comma |

## Rules the programs break

- **Appendix C names a procedure `IN`** (C-21), a reserved word (2.1.6). It is
  `FILE_IN` here.
- **Appendix C exports the constant `NUM_OF_LT33`** from two modules (C-6, C-10);
  4.4 allows only types and routines ("Own data cannot be made accessible outside
  the module"). The constant moves to the segment.
- **Appendix C's closed scopes import nothing** where 4.1.1 asks for it: the SYSTEM
  paths invoke `OUTPUT_DRIVER` and `INPUT_DRIVER`, which use own variables of
  TELETYPE. Imports are added (the semaphores `LT33_PS`, `LT33_KS` they pass are
  known through the CONNECT clause, 4.6.1).
- **Appendix C assigns BUFFER values outside the module that exports BUFFER**
  (C-10: `IN_BUF` and `OUT_BUF := BUF_INIT ( )`). Outside its module an abstract
  type is assigned only through its STORE_ operation (4.4), and the BUFFER of
  4.6.8 has none: the driver's copy of that module adds `BUFFER$STORE_`.
- **Appendix C's GET and PUT pass objects of their ?T to GET_IN and PUT_OUT**
  (C-17 .. C-19) without a WHERE clause; 5.2 lets a generic routine invoke another
  with objects of its type only if the other's WHERE routines are among its own.
  GET and PUT take the WHERE clauses of GET_IN and PUT_OUT.
- **`REM`, `MAX` and `INTEGER_MAX` are used but defined nowhere.** `REM` becomes
  `MOD` (the operands are positive); MAX and INTEGER_MAX come from the drivers.
- **Elided parts**: the `...` and lower-case placeholders are filled by the sed
  file or the driver; the CR11 case of `IN` goes with the elided card-reader
  module.

## Readings the compiler took

These are not edits; they are how bluec reads what the 1978 text leaves open,
forced by these programs. The digest (`../notes/blue-digest.md`) has the details.

- Appendix C passes substrings as output arguments (`BS[I:I+BYTESIZE-1]`,
  `STR[I:I]`); [4-41] says variable. Accepted: the formal is a view of the
  variable's characters.
- `CONNECT (LT33_PS(I))` names an element of an array of semaphores with the loop
  identifier of the path; [4-93] says semaphore-name.
- An enumerated literal is typed by the parameter it is passed to even where the
  type's literals are not visible (`OPEN (..., \OLD, ...)`, C-17).
- `TO_BIT` of a charstring is allowed outside machine-dependent parts (its bits
  are those of the character set's enumerated values, J3.6-6's reason).
- `DEFINES (NEW)` also defines `T$NEW`, as the comment of C-5 expects; `DEFINES`
  of a module carries what the module exports (4.2).
