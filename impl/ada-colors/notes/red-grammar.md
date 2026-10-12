# RED language grammar (Intermetrics, RED Reference Manual, 8 March 1979)

Reconstructed from the primary source for compiler work. Sources:

- HTML transcription of the RED LRM, `~/projects/ada-colors-sources/red-rm/*.htm|txt`, with every
  syntax diagram read from the scanned images in `red-rm/images/` (lexical diagrams A–L, grammar
  diagrams 1–83).
- OCR of the same manual, `~/projects/ada-colors-sources/green/DTIC_ADA219453.txt`. It was used to
  check the reserved-word list, the operator and precedence tables and the examples, and to repair
  passages that are garbled in the HTML (§4.5.1/§4.5.2, §12.2 ABSENT).
- Appendix F (diagram cross reference), `red-rm/xref.txt`. It is the source of the diagram numbering
  and section numbers used below.

Coverage: all 12 lexical diagrams (A–L) and all 83 grammar diagrams (1–83) were read from the images.
There are no syntax diagrams in Chapter 14, Appendix A or Appendix C, and none are listed for them in
Appendix F. Appendix C contributes the built-in subtype forms and the ASCII enumeration (§1.10 below).

Notation: ISO-style EBNF. `"X"` is a terminal (a reserved word, a contextual keyword or a symbol),
`[ ]` means optional, `{ }` means zero or more, `|` separates alternatives. Rule names are the
diagram names with `_` in place of blanks. Each rule carries `(* §section, diagram N *)`. The
diagrams label repeated boxes ("identifier 1", "type 2", ...) because the RULES text refers to them;
those labels are kept as comments. Nothing below is invented. Where the diagrams leave something to
the prose (for example `.ALL`), the rule says so in a note.

---

## 1. Lexical structure (Chapter 2)

### 1.1 Character set (§2.1)

- **Basic 55-character set:** `% & ' ( ) * + , - . / : ; < = > ?`, `0`–`9`, `A`–`Z`, `_`, and blank.
  (The image shows 17 symbols, 10 digits, 26 letters and `_`, which makes 54. Blank is not printed;
  it is inferred as the 55th character.)
- **95-character ASCII set:** the 55 plus the 14 symbols `!` `"` `#` `$` `@` `[` `\` `]` `^` `` ` `` `{` `|` `}` `~`
  and `a`–`z` (55 + 14 + 26 = 95).
- Upper and lower case are not distinguished, except inside string literals.
- Any program can be written in the 55-character set. The conversions are:
  `[` → `<<`, `]` → `>>`, `#` → `::` (see §1.4), `"` (string quote) → `''` (two apostrophes, §2.3.8),
  and each non-Basic-55 character inside a string literal → `" & 'ENUMNAME & "` (§2.3.8 rationale; the
  names come from C.15, §1.10).

### 1.2 Tokens and separators (§2.2, lexical diagrams A, B)

```ebnf
(* §2.2, lexical diagram A *)
token = reserved_word | operator_symbol | special_symbol | identifier | literal ;

(* §2.2, lexical diagram B *)
token_separator = eol | blank | comment | pragmat_token_separator ;
```

- No token or separator may span a line; end of line is a separator.
- A separator is required between two adjacent tokens unless one of them is a special symbol or an
  operator symbol that is not word-shaped. Example from §2.2: `NOT A`, `END CASE` and `WHEN A=>`
  need separators; `F(A:INT);` does not.

### 1.3 Reserved words (§2.3.1)

Transcribed from image lexicalreserved.jpg and confirmed by the OCR. There are 52:

```
ABBREV     END        LOCATION   RENAMING
ABNORMAL   EXCEPTION  NAMED      REP
ALL        EXIT       NEEDS      REPEAT
ALLOC      EXPORTS    NEW        RERAISE
ASSERT     EXPOSE     NONE       RETURN
BEGIN      EXTERNAL   OUT        SUBTYPE
BY         FOR        OF         TASK
CAPSULE    FROM       PRAG       THEN
CASE       FUNC       PROC       TO
CONST      GENERIC    PTR        TYPE
CREATE     GOTO       RAISE      VAR
DO         GUARD      READONLY   WAIT
ELSE       IF         REVERSE    WHEN
ELSEIF     IMPORTS    REGION     WHILE
```

Reserved words are case-insensitive (`end`, `End`, `END` and `enD` are equivalent) and may not be
redefined.

The word-shaped **operator symbols** `DIV MOD IN OR XOR AND NOT` (§2.3.2) and the **literal words**
`TRUE FALSE NIL` (§2.3.9, §2.3.10) are tokens of other classes. They cannot be used as identifiers
(§2.3.4).

**Contextual keywords.** These words appear as terminals in the diagrams but are *not* in the
reserved list. Treat them as identifiers with special meaning in context:

| Word(s) | Where | Diagram |
|---|---|---|
| `ENUM`, `ARRAY`, `RECORD`, `UNION`, `TYPEOF` | type | 10 |
| `ARRAY`, `RECORD`, `UNION`, `SUBTYPEOF`, `INDEXOF` | subtype | 12 |
| `STRING`, `ENUM` | value generic constraint | 75 |
| `SIZE ALIGN OFFSET RECORD UNION ARRAY NORMAL NOBOUNDS ABSENT FREE UNCHECKED ENUM STANDARD` | representational item | 79 |
| `INTERRUPT` | location specification | 80 |
| `OPTIMIZE SPACE TIME SUPPRESS OPEN CLOSED LIST ON OFF NONRECURSIVE NONREENTRANT OK ALIAS SHARE` | pragmat | 83 |

Built-in type and abbreviation names (`BOOL INT FLOAT STRING SET ACT MAILBOX DATA_LOCK LATCH FILE
ASCII`, Appendix C) are ordinary predefined identifiers. They reach the grammar through
`identifier 1` of diagrams 10 and 12.

### 1.4 Operator symbols (§2.3.2) and special symbols (§2.3.3)

Operator symbols (image lexicaloperatorsymbols.jpg):

| Symbol(s) | Meaning |
|---|---|
| `**` | exponentiation |
| `*`, `/` | multiplication, division |
| `DIV`, `MOD` | integer division, modulo |
| `+`, `-` | addition, subtraction, prefix plus and minus |
| `&` | concatenation |
| `=`, `/=`, `>`, `>=`, `<`, `<=` | relations |
| `IN` | set membership |
| `OR` | or (set union) |
| `XOR` | exclusive or (set symmetric difference) |
| `AND` | and (set intersection) |
| `NOT` | logical negation (set complement) |

Special symbols (image lexicalspecialsymbols.jpg):

| Symbol | Uses |
|---|---|
| `.` | component selection, attribute inquiry |
| `( )` | parenthesization, subscripting, parameter lists |
| `[ ]` | type properties, translation time properties, constructors |
| `,` | list separation |
| `:` | name separation, goto labels |
| `;` | statement terminator, end of compound declaration headers |
| `=>` | alternative indication, function result |
| `..` | ranges |
| `#` | constant resolution |
| `:=` | assignment |

(In the image, "declaration headers" sits on a line of its own. The OCR shows it continues the `;`
entry: "end of compound declaration headers".)

**55-character alternates** (image lexical55alternates.jpg). Of the special symbols, only `[`, `]` and
`#` are outside the 55 set:

| Alternate | Stands for |
|---|---|
| `<<` | `[` |
| `>>` | `]` |
| `::` | `#` |

Lexer consequence: in 55-character text, `<<`, `>>` and `::` must be recognised as single tokens with
longest match, ahead of `<`, `>` and `:`. The 95-character examples contain no `<<`.

Diagram 81 (definable symbol) also uses `*` and `*..*` inside `( )` as name-pattern tokens. These are
the ordinary `*`, `..` and `(` `)` tokens.

### 1.5 Identifiers (§2.3.4, lexical diagram C)

```ebnf
(* §2.3.4, lexical diagram C *)
identifier = letter { [ "_" ] ( letter | digit ) } ;
```

- The identifier must start with a letter. A single `_` may separate letters or digits. There is no
  double underscore and no trailing underscore (examples: `THIS_IS__ILLEGAL` and `AS_IS_THIS_` are
  illegal).
- Every character, `_` included, is significant. Case is ignored. There is no length limit other than
  the line.
- Reserved words and word-shaped operator symbols are excluded.

### 1.6 Literals (§2.3.5, lexical diagram D)

```ebnf
(* §2.3.5, lexical diagram D *)
literal = int_literal | float_literal | enum_literal | string_literal
        | boolean_literal | indirect_literal ;

(* §2.3.6, lexical diagram E *)
int_literal   = digit { digit } ;

(* §2.3.6, lexical diagram F *)
float_literal = digit { digit } "." digit { digit } [ "E" [ "+" | "-" ] digit { digit } ] ;

(* §2.3.7, lexical diagram G *)
enum_literal  = "'" identifier ;

(* §2.3.8, lexical diagram H *)
string_literal = '"' string_char { string_char } '"' ;   (* string_char = any character except " or ' *)

(* §2.3.9, lexical diagram I *)
boolean_literal = "TRUE" | "FALSE" ;

(* §2.3.10, lexical diagram J *)
indirect_literal = "NIL" ;
```

Integer literals:
- Decimal digits only. There are **no based literals**, **no underscores** and no break character
  (§2.3.6 rationale). Integer literals are always non-negative; `-5` is prefix minus applied to a
  literal and is folded at translation time.

Float literals:
- At least one digit is required on each side of the `.` (rationale). The exponent is optional, its
  `E` is case-insensitive, and the exponent is an unsigned digit string with an optional sign.
  Blanks are not allowed inside.
- `1E5` with no `.` is not a float literal. It would lex as `1` followed by the identifier `E5`
  (see A-11.3 in §4 for a manual example that does this).
- Default precision is the number of digits before `E`, less any leading zeros to the left of the
  point. Examples (lexicalnumlitexamples):

```
% integer literals
0
2354

% floating point literals
3.6E7          % default precision 2
1.0E5          % default precision 2
7.25           % default precision 3
6.324e-6       % default precision 4
0.0            % default precision 1
0.012          % default precision 3
```
(The zeros are printed slashed in the original. By the stated rule `0.012` has 4 digits before `E`
less 1 leading zero, which gives 3. `0.0` gives 1.)

Enum literals:
- An apostrophe immediately followed by an identifier, with no blank between. There is no closing
  apostrophe and the name may not start with a digit (examples: `'RED'` and `'4TH` are illegal).
- Case-insensitive.
- The name space is separate from identifiers (`RED` may be a variable while `'RED` is a literal).
- Characters are enum literals of `ASCII` (§1.10), so `'A` is the letter A and `'L_A` is a.

String literals:
- Must be non-empty. Diagram H has no bypass around the character loop. Writing `""` as a literal is
  impossible in any case, because `''` is the 55-character spelling of `"`.
- May not contain `"` or `'`, may not cross a line end, and are case-sensitive.
- A string literal is shorthand for `&`-catenation of enum literals: `"ABC"` ≡ `'A & 'B & 'C`, and
  `"[A#B]"` ≡ `'lbracket & "A" & 'number & "B" & 'rbracket`.
- Quotes, apostrophes and control characters are written by catenation, for example
  `"ONE LINE" & 'CR & 'LF`.

### 1.7 Comments (§2.4.1, lexical diagram K)

```ebnf
(* §2.4.1, lexical diagram K *)
comment = "%" char { char } eol ;
```

A comment runs from `%` to the end of the line. Comments do not nest and there is no block comment.
Diagram K draws at least one `char` before `eol`, so a bare `%` at the end of a line is not covered.
Accepting `"%" { char } eol` is the safe reading.

### 1.8 Pragmats (§2.4.2, lexical diagram L; Appendix B, diagrams 82–83)

```ebnf
(* §2.4.2, lexical diagram L *)
pragmat_token_separator = pragmats ;

(* Appendix B, diagram 82 *)
pragmats = "PRAG" "(" pragmat { "," pragmat } ")" ;

(* Appendix B, diagram 83 *)
pragmat = "OPTIMIZE" "(" ( "SPACE" | "TIME" ) ")"
        | "SUPPRESS" "(" identifier { "," identifier } ")"          (* exception names *)
        | ( "OPEN" | "CLOSED" )
        | "LIST" "(" ( "ON" | "OFF" ) ")"
        | ( "NONRECURSIVE" | "NONREENTRANT" )
        | "OK" "(" ( "ALIAS" | "SHARE" ) ")" ;
```

A pragmat list is a *token separator*, so it may appear between any two tokens (Appendix B rules).
Particular pragmats are restricted further:
- on a scope: immediately before the first token of the scope;
- on a variable or constant declaration, a formal parameter definition or an actual parameter:
  between the last token and the terminating `;`, `,` or `)`;
- on a deferred declaration: immediately before the `;` that ends a compound declaration header, or
  before the terminating `;` of a type or abbreviation declaration.

Semantics in brief:
- `OPTIMIZE`: applies to a scope and its nested scopes, or to the representation of a data item or
  type.
- `SUPPRESS(x, ...)`: no checks generated for the named exceptions.
- `OPEN` / `CLOSED`: inline or out-of-line compilation.
- `LIST(ON|OFF)`: source listing control.
- `NONRECURSIVE` / `NONREENTRANT`: promises about the deferred unit.
- `OK(ALIAS)` / `OK(SHARE)`: silence aliasing and sharing warnings.

Examples (Appendix B images, transcribed):

```red
PRAG (SUPPRESS (X_INIT)) BEGIN
   PRAG (OPTIMIZE (SPACE))
   ...
   PRAG (OPTIMIZE (TIME)) PROC p;
      ...
   END PROC p;
END;
```
```red
VAR x : INT(0..10) OPTIMIZE (TIME);
PROC q (VAR y : INT(0..10)
      PRAG (OK (SHARE))  IMPORTS x;
   ...
END PROC q;
...
q (x PRAG(OK(ALIAS))  );
```
```red
TYPE t : INT(0..10) PRAG (OPTIMIZE (TIME));
PROC p (v : BOOL) IMPORTS w PRAG (OPEN);
   ...
END PROC p;
FUNC q (x : t) => t PRAG (NONRECURSIVE, NONREENTRANT);
   ...
END FUNC q;
```
(The first line of the second example is printed without `PRAG ( ... )`, both in the image and in
the OCR. This is an error in the manual. In the `PROC q` header the formal parameter list is never closed:
by the placement rule the intended text is `(VAR y : INT(0..10) PRAG (OK (SHARE)))`, with one `)`
missing in print.)

### 1.9 Lexer summary

```
token        ::= keyword-or-identifier | int | float | enum | string | symbol
symbols      ::= ** := /= <= >= => .. << >> ::   (2-char, longest match first)
               | + - * / & = < > ( ) [ ] , : ; . # '
word tokens  ::= reserved words (§1.3), DIV MOD IN OR XOR AND NOT, TRUE FALSE NIL  (case-insensitive)
skip         ::= blank | eol | "%" ... eol | PRAG ( ... )   (pragmats are separators but carry information)
```
`'` begins an enum literal only when a letter follows it directly. In 55-character text, `''`
begins and ends a string literal.

### 1.10 Character literals: the ASCII abbreviation (Appendix C.15)

`ASCII` is a language-defined abbreviation (image ascii125char.jpg):

```red
ABBREV ASCII : ENUM[
 'NUL,  'SOH,  'STX,  'ETX,  'EOT,  'ENQ,  'ACK,  'BEL,     % 00-07
 'BS,   'HT,   'LF,   'VT,   'FF,   'CR,   'SO,   'SI,      % 08-0F
 'DLE,  'DC1,  'DC2,  'DC3,  'DC4,  'NAK,  'SYN,  'ETB,     % 10-17
 'CAN,  'EM,   'SUB,  'ESC,  'FS,   'GS,   'RS,   'US,      % 18-1F
 'SP,   'EXCLAIM, 'QUOTE, 'NUMBER, 'DOLLAR, 'PERCENT, 'AMPERSAND, 'APOS,      % 20-27  blank ! " # $ % & '
 'LPAREN, 'RPAREN, 'STAR, 'PLUS, 'COMMA, 'MINUS, 'PERIOD, 'SLASH,             % 28-2F  ( ) * + , - . /
 'N_0, 'N_1, 'N_2, 'N_3, 'N_4, 'N_5, 'N_6, 'N_7, 'N_8, 'N_9,                  % 30-39  0-9
 'COLON, 'SEMI, 'LESS, 'EQUAL, 'GREATER, 'QUESTION, 'AT,                      % 3A-40  : ; < = > ? @
 'A, 'B, ... 'Z,                                                              % 41-5A
 'LBRACKET, 'BSLASH, 'RBRACKET, 'CIRCUMFLEX, 'UNDERSCORE, 'GRAVE,             % 5B-60  [ \ ] ^ _ `
 'L_A, 'L_B, ... 'L_Z,                                                        % 61-7A  a-z
 'LBRACE, 'BAR, 'RBRACE, 'TILDE, 'DEL ];                                      % 7B-7F  { | } ~ DEL
```
This is condensed from the one-literal-per-line original, keeping its order. The original elides
`'C`..`'Y` and `'L_C`..`'L_Y` with `...`. The hex code of `'SUB` is printed as `'A` (should be 1A;
it is smudged in the scan). Case-insensitivity makes `'a` the same literal as `'A`, which is why the
lowercase letters are named `'L_A`..`'L_Z`.

### 1.11 Built-in subtype forms (Appendix C), for reference

| Type | Subtype form(s) |
|---|---|
| BOOL | `BOOL` (literals `FALSE`, `TRUE`; `AND`/`OR` on BOOL are short-circuit, C.1 note 1) |
| ENUM | `ENUM[el1,...,eln]`, `ENUM[el1,...,eln](min..max)` |
| INT | `INT(min..max)` |
| FLOAT | `FLOAT(prec, min..max)`, where prec is manifest INT |
| RECORD | `RECORD[id1:S1, ..., idn:Sn]`; `idi, ..., idj : S` is shorthand |
| UNION | `UNION[id1:S1, ...]`, `UNION[id1:S1, ...](exp)` with exp of type `ENUM['id1,...]`; no component may be named TAG |
| ARRAY | `ARRAY index1, ..., indexn OF comp` (each index an INT or ENUM subtype) |
| STRING | `STRING[S] (len)` |
| SET | `SET[S]` (S an INT or ENUM subtype) |
| ACT | `ACT` |
| MAILBOX | `MAILBOX[S] (len)` |
| DATA_LOCK | `DATA_LOCK` |
| LATCH | `LATCH` |
| FILE | `FILE [S] (access, use)`, access : `ENUM['SEQ,'RANDOM]`, use : `ENUM['INPUT,'OUTPUT,'UPDATE]` |

---

## 2. Grammar (EBNF), by chapter

Start symbol: a program is a set of `translation_unit`s (§3.1).

### Chapter 3 — Program Structure

```ebnf
(* §3.1, diagram 1 *)
translation_unit      = capsule_declaration ";" ;

(* §3.2, diagram 2 *)
body                  = { body_element ";" } ;

(* §3.2, diagram 3 *)
body_element          = assertion | declaration | statement ;

(* §3.3, diagram 4 *)
declaration           = immediate_declaration | deferred_declaration | generic_declaration ;

(* §3.3, diagram 5 *)
immediate_declaration = variable_declaration | constant_declaration
                      | capsule_invocation_declaration | exception_declaration ;

(* §3.3, diagram 6 *)
deferred_declaration  = abbreviation_declaration | type_declaration | compound_declaration ;

(* §3.3, diagram 7 *)
compound_declaration  = procedure_declaration | function_declaration
                      | capsule_declaration | task_declaration ;

(* §3.4, diagram 8 *)
assertion             = "ASSERT" expression ;

(* §3.7, diagram 9 *)
imports               = "IMPORTS" ( "ALL"
                                  | [ "READONLY" ] identifier { "," [ "READONLY" ] identifier } ) ;
```

Static rules (§3.2): immediate declarations must precede all statements in a body; deferred and
generic declarations may precede or follow all statements; `body` may be empty. Every element,
including the last, is followed by `;`.

### Chapter 4 — Types

Numbered occurrences ("identifier 1", "type 2", ...) are the manual's own labels, used by the RULES
text; they are kept as comments.

```ebnf
(* §4.1.5, diagram 10 *)
type = identifier [ "[" type "]" ]                               (* identifier 1, type 1: built-in type, e.g. SET[INT], STRING[ASCII] *)
     | "ENUM" "[" enum_literal { "," enum_literal } "]"
     | "ARRAY" type { "," type } "OF" type                        (* type 2 ... OF type 3 *)
     | ( "RECORD" | "UNION" ) "[" component_types { "," component_types } "]"
     | user_defined_type                                         (* 21 *)
     | "TYPEOF" "(" ( subtype | expression ) ")"
     | abbreviation_invocation                                   (* 18 *)
     | identifier ;                                              (* identifier 3: generic type parameter, §4.1.5 rules *)
component_types = identifier { "," identifier } ":" type ;       (* identifier 2 : type 4 *)

(* §4.1.5, diagram 11 *)
type_comparison = type ( "=" | "/=" ) type ;                      (* type 5, type 6 *)

(* §4.1.6, diagram 12 *)
subtype = ( identifier [ "[" subtype "]" ] | type )               (* identifier 1 = built-in type name; subtype 1; type 1 *)
              [ "(" constraint { "," constraint } ")" ]
        | "ARRAY" subtype { "," subtype } "OF" subtype            (* subtype 2 ... OF subtype 3 *)
        | "RECORD" "[" component_subtypes { "," component_subtypes } "]"
        | ( "UNION" "[" component_subtypes { "," component_subtypes } "]"
          | abbreviation_invocation )                             (* abbreviation invocation 1: must yield unconstrained UNION subtype *)
              [ "(" expression ")" ]                              (* expression 2: union tag constraint *)
        | abbreviation_invocation                                 (* abbreviation invocation 2: must yield a subtype *)
        | user_defined_subtype                                    (* 22 *)
        | "SUBTYPEOF" "(" expression ")"                          (* expression 3 *)
        | "INDEXOF" "(" expression [ "," expression ] ")"         (* expression 4, expression 5 *)
        | identifier ;                                            (* identifier 4: generic param with subtype generic constraint *)
constraint         = expression | range ;                         (* expression 1 | range *)
component_subtypes = identifier { "," identifier } ":" subtype ;  (* RECORD: identifier 2 : subtype 4; UNION: identifier 3 : subtype 5 *)

(* §4.1.6, diagram 13 *)
subtype_comparison = subtype ( "=" | "/=" ) subtype ;             (* subtype 6, subtype 7 *)

(* §4.1.7, diagram 14 *)
range = expression ".." expression ;

(* §4.2.1, diagram 15 *)
variable_declaration = "VAR" identifier { "," identifier } ":" subtype
                       [ ":=" expression ] [ location_specification ] ;   (* 80 *)

(* §4.2.1, diagram 16 *)
constant_declaration = "CONST" identifier { "," identifier } [ ":" subtype ] ":=" expression ;

(* §4.4.1, diagram 17 *)
abbreviation_declaration = "ABBREV" identifier [ formal_translation_time_properties ]   (* 66 *)
                           [ formal_parameters ]                                        (* 52 *)
                           ":" ( type | subtype ) ;

(* §4.4.1, diagram 18 *)
abbreviation_invocation = identifier [ actual_translation_time_properties ]  (* 67 *)
                          [ actual_parameters ] ;                            (* 53 *)

(* §4.4.2, diagram 19 *)
type_declaration = direct_type_declaration | indirect_type_declaration ;

(* §4.4.2, diagram 20 *)
direct_type_declaration = "TYPE" identifier [ formal_translation_time_properties ]
                          [ formal_parameters ] ":" subtype
                          [ representational_specification ] ;               (* 78 *)

(* §4.4.2, diagram 21 *)
user_defined_type = identifier [ actual_translation_time_properties ] ;

(* §4.4.2, diagram 22 *)
user_defined_subtype = identifier [ actual_translation_time_properties ] [ actual_parameters ] ;

(* §4.4.3, diagram 23 *)
indirect_type_declaration = "TYPE" identifier [ formal_translation_time_properties ]
                            [ formal_parameters ]                            (* formal parameters 1 *)
                            ":" "PTR" [ formal_parameters ]                  (* formal parameters 2 *)
                            subtype [ representational_specification ] ;

(* §4.4.3, diagram 24 *)
allocation_statement = "ALLOC" variable "PTR" [ actual_parameters ] [ ":=" expression ] ;

(* §4.5.3, diagram 25 *)
attribute_inquiry = ( subtype | expression ) "." identifier ;
```

Notes for chapter 4:
- Diagram 10 allows only one bracketed `type` after a built-in identifier (`identifier 1 [ type 1 ]`),
  e.g. `SET[INT]`, `STRING[ASCII]`. Diagram 12 likewise has a single `[ subtype 1 ]`.
- The constraint list `( ... )` in diagram 12 follows either a built-in identifier (with optional
  `[subtype]`) or a `type`; the latter path is how e.g. `ENUM['a,'b,'c]('a..'b)` is formed
  (type 1 = ENUM[...] then constraint list). Strings: `STRING[ASCII](5)` (manual prose also writes
  `STRING(ASCII) (5)` in §4.4.3 — see §4 Ambiguities).
- §4.5.1 (corrected from the OCR; the HTML text is garbled here): `SUBTYPEOF(exp)` = subtype of exp;
  `INDEXOF(exp, i)` = i'th index subtype of an n-dim array, `i` a manifest integer expression;
  `INDEXOF(exp)` ≡ `INDEXOF(exp, 1)`. §4.5.2: `TYPEOF(exp)` / `TYPEOF(st)`; evaluated at translation time.
- Static rules: only CONST formal parameters in abbreviation and type declarations (§4.4.1, §4.4.2,
  §4.4.3); an abbreviation of a *type* may have no formal parameters; abbreviations/types/indirect
  types are closed scopes and have no imports list.
- Record type sugar (§4.3): successive components with the same type may share a declaration
  (`a, b : INT`), which is what the `identifier { "," identifier }` loop expresses; §4.1.5 type
  expansion rewrites `a, b : T` into `a : T, b : T` before comparison.

### Chapter 5 — Expressions

```ebnf
(* §5.2, diagram 26 *)
expression = prefix_operator expression                  (* "operator symbol 1": + - NOT *)
           | expression infix_operator expression        (* "operator symbol 2" *)
           | type_comparison                             (* 11 *)
           | subtype_comparison                          (* 13 *)
           | primary ;                                   (* 27 *)
prefix_operator = "+" | "-" | "NOT" ;
infix_operator  = "**" | "*" | "/" | "MOD" | "DIV" | "&" | "+" | "-"
                | "=" | "/=" | "<" | "<=" | ">" | ">=" | "IN"
                | "AND" | "OR" | "XOR" ;
(* Diagram 26 is ambiguous; operand association is fixed by the precedence table, §3 below. *)

(* §5.3, diagram 27 *)
primary = variable | constant | "(" expression ")" ;

(* §5.3, diagram 28 *)
variable = referencing_form ;

(* §5.3, diagram 29 *)
constant = referencing_form
         | literal                                       (* lexical D *)
         | constructor                                   (* 31 *)
         | function_invocation_primary                   (* 51 *)
         | attribute_inquiry                             (* 25 *)
         | resolved_constant ;                           (* 35 *)

(* §5.3, diagram 30 *)
referencing_form = identifier                                         (* identifier 1 *)
                 | primary "(" subscript { "," subscript } ")"         (* primary 1: subscripting / slicing *)
                 | primary "." identifier ;                           (* primary 2 . identifier 2: dot selection, .ALL, .TAG, attributes *)
subscript = range | expression ;

(* §5.6, diagram 31 *)
constructor = record_or_union_constructor | array_constructor | set_constructor ;

(* §5.6, diagram 32 *)
record_or_union_constructor = "[" identifier { "," identifier } ":" expression
                              { "," identifier { "," identifier } ":" expression } "]" ;

(* §5.6, diagram 33 *)
array_constructor = "[" [ array_component { "," array_component } ] "]" ;
array_component   = ( expression | range ) { "," ( expression | range ) } ":" expression ;

(* §5.6, diagram 34 *)
set_constructor = "[" [ expression { "," expression } ] "]" ;

(* §5.7, diagram 35 *)
resolved_constant = primary "#" ( type | subtype ) ;
```

Notes for chapter 5:
- `.ALL` (§4.4.2) is written with the reserved word ALL in the `identifier 2` position of diagram 30;
  the diagram itself only shows `identifier`. A parser must accept `ALL` (reserved) after `.`.
  Likewise `.TAG` for unions (§4.3), and attribute names (diagram 25).
- `variable` and `constant` are syntactically identical where both reduce to `referencing_form`; the
  distinction (diagram 27 vs 29) is semantic (§5.3 rule: identifier 1 must be a variable or constant).
- Diagrams 25 (attribute inquiry: `(subtype|expression) . identifier`) and 30 (`primary . identifier`)
  overlap; the choice is semantic.
- Diagrams 32/33/34 overlap: `[x : e]` can be record/union or array constructor, `[]` array or set,
  `[a, b]` set. Resolution is by context type (§5.7), not by syntax.
- Diagram 30 `primary ( ... )` overlaps with function invocation primary (diagram 51) and
  user-defined subtype / abbreviation invocation in expression contexts (e.g. `SUBTYPEOF(...)`);
  resolution is by name binding.
- Manifest expressions (§5.5) are a semantic subset: literals, built-in operators on manifest
  operands (list in example image exmanifestoperandsexample), parenthesized manifest expressions,
  `CONST id := exp;` with manifest exp, and value generic parameters.

### Chapter 6 — Statements

```ebnf
(* §6, diagram 36 *)
statement = { identifier ":" } unlabeled_statement ;     (* identifier 1 = goto label.
                                                            The scanned diagram prints ";" here — see §4 Ambiguities, A-6.1 *)

(* §6, diagram 37 *)
unlabeled_statement = simple_statement
                    | compound_statement
                    | identifier compound_statement identifier ;   (* matching identifiers 2 and 3, must be identical; no separator *)

(* §6, diagram 38 *)
simple_statement = allocation_statement            (* 24 *)
                 | assignment_statement            (* 40 *)
                 | exit_statement                  (* 45 *)
                 | return_statement                (* 46 *)
                 | goto_statement                  (* 47 *)
                 | procedure_invocation_statement  (* 49 *)
                 | raise_statement                 (* 59 *)
                 | reraise_statement               (* 60 *)
                 | task_invocation_statement ;     (* 62 *)

(* §6, diagram 39 *)
compound_statement = begin_statement               (* 41 *)
                   | if_statement                  (* 42 *)
                   | case_statement                (* 43 *)
                   | repeat_statement              (* 44 *)
                   | guard_statement               (* 58 *)
                   | wait_statement                (* 63 *)
                   | region_statement ;            (* 65 *)

(* §6.1, diagram 40 *)
assignment_statement = variable ":=" expression ;

(* §6.2, diagram 41 *)
begin_statement = "BEGIN" body "END" ;

(* §6.3, diagram 42 *)
if_statement = "IF" expression "THEN" body
               { "ELSEIF" expression "THEN" body }
               [ "ELSE" body ]
               "END" "IF" ;

(* §6.4, diagram 43 *)
case_statement = "CASE" expression
                 case_alternative { case_alternative }
                 [ "ELSE" "=>" body ]
                 "END" "CASE" ;
case_alternative = "WHEN" value_label { "," value_label } "=>" body ;
value_label      = expression | range ;

(* §6.5, diagram 44 *)
repeat_statement = ( "FOR" identifier ":" [ "REVERSE" ] subtype
                   | "WHILE" expression )
                   "REPEAT" body "END" "REPEAT" ;

(* §6.6, diagram 45 *)
exit_statement = "EXIT" identifier ;

(* §6.7, diagram 46 *)
return_statement = "RETURN" [ expression ] ;

(* §6.8, diagram 47 *)
goto_statement = "GOTO" identifier ;
```

Notes for chapter 6:
- Matching identifiers are written with no punctuation: `search FOR i : INT(1..n) REPEAT ... END
  REPEAT search` (examples §6.6, §9.4). Goto labels take `:` (`sort : FOR ...`, §6.8).
  A parser distinguishes them by the token after the identifier (`:` vs. a compound-statement keyword).
  Since both prefixes may occur, the full form is `{ label ":" } [ match_id ] compound_statement [ match_id ]`
  with both match_ids present or both absent.
- Diagram 44 has no path without a FOR or WHILE phrase, so there is no bare `REPEAT ... END REPEAT`
  loop. The examples (§10) write endless loops as `WHILE TRUE REPEAT`, consistent with this.
- At least one WHEN alternative is required in a case statement; ELSE takes `=>` (unlike IF's ELSE).
- RETURN with expression only in functions (§6.7 rule).

### Chapter 7 — Procedures, Functions and Parameters

```ebnf
(* §7.1, diagram 48 *)
procedure_declaration = "PROC" ( identifier [ formal_translation_time_properties ]   (* identifier 1; 66 *)
                               | definable_symbol )                                  (* definable symbol 1; 81 *)
                        [ formal_parameters ] [ imports ] ";"
                        body
                        "END" "PROC" ( identifier | definable_symbol ) ;            (* identifier/definable symbol 2 = 1 *)

(* §7.1, diagram 49 *)
procedure_invocation_statement = identifier [ actual_translation_time_properties ] [ actual_parameters ] ;

(* §7.2, diagram 50 *)
function_declaration = [ "ABNORMAL" ] "FUNC" ( identifier | definable_symbol )      (* 1 *)
                       [ formal_translation_time_properties ]
                       [ formal_parameters ]
                       "=>" ( type | subtype )                                       (* result type/subtype *)
                       [ imports ] ";"
                       body
                       "END" "FUNC" ( identifier | definable_symbol ) ;             (* 2 = 1 *)

(* §7.2, diagram 51 *)
function_invocation_primary = identifier [ actual_translation_time_properties ] [ actual_parameters ] ;

(* §7.3, diagram 52 *)
formal_parameters = "(" formal_parameter_group { "," formal_parameter_group } ")" ;
formal_parameter_group = [ "CONST" | "READONLY" | "VAR" | "OUT" ]
                         identifier { "," identifier } ":" ( type | subtype ) ;

(* §7.3, diagram 53 *)
actual_parameters = "(" expression { "," expression } ")" ;
```

Notes for chapter 7:
- Diagram 48 attaches `formal translation time properties` only to the `identifier 1` branch; diagram 50
  places it after the identifier/definable-symbol choice (so it applies to both). Probably a drafting
  difference; recorded in §4.
- The closing name after `END PROC` / `END FUNC` is mandatory in both diagrams (no bypass).
- Diagrams 49/51 take only `identifier`, never a definable symbol: operator-named routines are
  invoked by operator syntax (§13.2), assignment by `:=`.
- Default binding class is CONST (§7.3). Normal (non-ABNORMAL) functions may have only CONST and
  READONLY formals (§7.2.1). Empty `()` parameter lists are not in the diagrams.
- Static: `procedure_invocation_statement` and `function_invocation_primary` overlap syntactically with
  `referencing_form` (diagram 30) and with `user_defined_subtype` (22); binding decides.

### Chapter 8 — Capsules

```ebnf
(* §8.1, diagram 54 *)
capsule_declaration = "CAPSULE" identifier [ formal_translation_time_properties ]   (* identifier 1; 66 *)
                      [ formal_parameters ] [ imports ]
                      "EXPORTS" visible_list ";"
                      body
                      "END" "CAPSULE" identifier ;                                   (* identifier 2 = identifier 1 *)

(* §8.1, diagram 55 *)
capsule_invocation_declaration = "EXPOSE" visible_list "FROM" [ "NEW" ] [ "EXTERNAL" ]
                                 identifier [ actual_translation_time_properties ]  (* identifier 1; 67 *)
                                 [ actual_parameters ]
                                 [ "RENAMING" renaming { "," renaming } ] ;
renaming = ( identifier | definable_symbol ) "TO" ( identifier | definable_symbol ) ;   (* name 2 TO name 3 *)

(* §8.2, diagram 56 *)
visible_list = "ALL" | "NONE"
             | visible_item { "," visible_item } ;
visible_item = [ "READONLY" ] identifier | definable_symbol ;
```

Notes for chapter 8:
- The EXPORTS clause is mandatory in a capsule declaration (use `EXPORTS NONE` for a main program, as
  in the §3.1 example).
- The legend under the §8.1 diagram in the HTML omits "66 - formal trans properties" but the
  diagram shows the box (numbered 66).
- Static rules: a capsule invoked as old (no NEW) or used as a translation unit may not have formal
  parameters; no OUT formals for capsules (§8.1).

### Chapter 9 — Exception Handling

```ebnf
(* §9.1, diagram 57 *)
exception_declaration = "EXCEPTION" identifier { "," identifier } ;

(* §9.2, diagram 58 *)
guard_statement = "GUARD" body "BY"                                  (* body 1 = guarded body *)
                  { "WHEN" identifier { "," identifier } "=>" body } (* body 2 = handler *)
                  [ "ELSE" "=>" body ]                               (* body 3 = handler for all others *)
                  "END" "GUARD" ;

(* §9.3, diagram 59 *)
raise_statement = "RAISE" identifier ;

(* §9.4, diagram 60 *)
reraise_statement = "RERAISE" ;
```

Notes for chapter 9:
- Diagram 58 has a bypass around the WHEN loop, so zero handlers are syntactically legal
  (`GUARD ... BY END GUARD`); compare diagram 43 (CASE), where at least one WHEN is required.
- RERAISE only inside a handler body (§9.4 rule). Language-defined exceptions (X_ASSERT, X_CASE,
  X_FREE, X_INIT, X_NIL, X_SUBTYPE, X_TERMINATE, X_UNHANDLED, ... — Appendix D) are predeclared.

### Chapter 10 — Multitasking

```ebnf
(* §10.1, diagram 61 *)
task_declaration = "TASK" identifier [ formal_translation_time_properties ]   (* identifier 1 *)
                   [ formal_parameters ] [ imports ] ";"
                   body
                   "END" "TASK" identifier ;                                  (* identifier 2 = identifier 1 *)

(* §10.1, diagram 62 *)
task_invocation_statement = "CREATE" identifier [ actual_translation_time_properties ]
                            [ actual_parameters ]
                            "NAMED" variable ;                                (* activation variable *)

(* §10.5, diagram 63 *)
wait_statement = "WAIT"
                 wait_alternative { wait_alternative }
                 "END" "WAIT" ;
wait_alternative = "WHEN" waiting_invocation { "," waiting_invocation } "=>" body ;

(* §10.5, diagram 64 *)
waiting_invocation = identifier [ actual_translation_time_properties ] [ actual_parameters ] ;

(* §10.7, diagram 65 *)
region_statement = "REGION" variable "DO" body "END" "REGION" ;
```

Notes for chapter 10:
- The HTML repeats the §10.1 diagram image (multitaskdecldiagram.jpg) under §10.2 with the same legend;
  §10.2 has no diagram of its own in the cross reference (diagrams 61/62 are §10.1).
- Built-in waiting invocations (§10.5): `SEND(m,v)`, `RECEIVE(m,v)`, `DELAY(t)`, `DELAY_UNTIL(t)`,
  `DELAY_UNTIL(t,a)`, `DELAY_UNTIL_INACTIVE(a)`; others only via low-level facilities (§14.3).
  Arbitrary procedure/function invocations are not waiting invocations (semantic restriction).
- Diagram 63 has no ELSE branch and requires at least one WHEN.
- No OUT formals for tasks (§10.1).

### Chapter 11 — Overloading and Generics

```ebnf
(* §11.1.2, diagram 66 *)
formal_translation_time_properties = "[" translation_time_property { "," translation_time_property } "]" ;

(* §11.1.2, diagram 67 *)
actual_translation_time_properties = "[" translation_time_property { "," translation_time_property } "]" ;

(* §11.1.2, diagram 68 *)
translation_time_property = type
                          | subtype
                          | ( identifier | definable_symbol ) [ actual_translation_time_properties ]
                          | expression ;

(* §11.3, diagram 69 *)
generic_declaration = "GENERIC" [ generic_parameters ] [ needs ] deferred_declaration ;

(* §11.3, diagram 70 *)
generic_parameters = generic_parameter_group { "," generic_parameter_group } ;
generic_parameter_group = identifier { "," identifier } ":" generic_constraint ;

(* §11.3, diagram 71 *)
generic_constraint = type_generic_constraint          (* 72 *)
                   | subtype_generic_constraint       (* 73 *)
                   | operation_generic_constraint     (* 74 *)
                   | value_generic_constraint ;       (* 75 *)

(* §11.3.1, diagram 72 *)
type_generic_constraint = "TYPE" [ "(" identifier { "," identifier } ")" ] ;

(* §11.3.2, diagram 73 *)
subtype_generic_constraint = "SUBTYPE" [ "(" ( type | identifier ) { "," ( type | identifier ) } ")" ] ;

(* §11.3.3, diagram 74 *)
operation_generic_constraint = ( "PROC" | "TASK" ) [ "(" type_or_subtype { "," type_or_subtype } ")" ]
                             | "FUNC" [ "(" type_or_subtype { "," type_or_subtype } ")" ] "=>" type_or_subtype ;
type_or_subtype = type | subtype ;

(* §11.3.4, diagram 75 *)
value_generic_constraint = "STRING" | "ENUM" | type | subtype ;

(* §11.4, diagram 76 *)
needs = "NEEDS" needed_item { "," needed_item } ;

(* §11.4, diagram 77 *)
needed_item = ( ( "PROC" | "TASK" | "FUNC" ) identifier | definable_symbol )
              [ formal_translation_time_properties ]
              [ "(" type_or_subtype { "," type_or_subtype } ")" ]
              [ "=>" type_or_subtype ] ;
```

Notes for chapter 11:
- Diagrams 66 and 67 are drawn identically (both lists of diagram 68); the difference is semantic
  (§11.1.2: a nested actual list after an identifier, and definable symbols, are allowed only in an
  actual generic property list).
- Diagram 69 shows no `;` between generic parameters / needs and the pattern declaration. The examples
  agree (`GENERIC t : TYPE` newline `PROC p ...`), except one §11.4 example writes `NEEDS :=(t,t);`
  with a trailing `;` while the §3.3 and §13 examples write `NEEDS := (t,t)` without one (see §4).
- Diagram 68 makes `type`, `subtype`, `identifier` and `expression` overlap heavily; classification is
  semantic. In a *formal* list, an item that is a generic parameter name is its use; a value generic
  parameter must appear in a formal translation time property list (§11.3.4).
- Diagram 75: only BOOL, INT, FLOAT, ENUM and STRING types/subtypes permitted (§11.3.4 rule).
  `STRING` and `ENUM` alone are permitted as constraint keywords; they are not reserved words.
- Needs lists are not allowed when the pattern declaration is a type (§11.4).

### Chapter 12 — Machine-Dependent Facilities

```ebnf
(* §12.2, diagram 78 *)
representational_specification = "REP" representational_item { "," representational_item } ;

(* §12.2, diagram 79 *)
representational_item = "SIZE" "(" expression ")"
                      | "ALIGN" "(" [ expression "OF" ] expression ")"
                      | "OFFSET" "(" expression ")"
                      | ( "RECORD" | "UNION" ) "["
                            component_rep { "," component_rep } "]"
                      | "ARRAY" ( "NORMAL" | "NOBOUNDS" ) { "," ( "NORMAL" | "NOBOUNDS" ) }
                            "OF" [ representational_item { "," representational_item } ]
                      | "ABSENT" "(" identifier { "," identifier } ")"
                      | "PTR" "(" "FREE" [ "UNCHECKED" ] ")"
                      | "ENUM" "(" "STANDARD" ")" ;
component_rep = identifier { "," identifier } ":" [ representational_item { "," representational_item } ] ;

(* §12.3, diagram 80 *)
location_specification = "LOCATION" "(" ( expression | "INTERRUPT" expression ) ")" ;
```

Notes for chapter 12:
- SIZE, ALIGN, OFFSET, NORMAL, NOBOUNDS, ABSENT, FREE, UNCHECKED, STANDARD, INTERRUPT appear as
  terminals in diagrams 79/80 but are not in the §2.3.1 reserved-word list (REP, LOCATION, PTR are).
  They must be treated as contextual keywords.
- In diagram 79 the `,` separates both the items inside one component's representation and the
  component groups; after `,` the parser must look ahead for `identifier {, identifier} :` to know a
  new component group starts. Each component's item list may be empty.
- ALIGN is allowed only for the whole underlying subtype; OFFSET only for record/union components;
  the union tag component is named `TAG` (§12.2 rules).
- ABSENT (text completed from OCR): identifiers must be attributes (formal parameters) of the type
  being defined; absent attributes are not represented and may not be inquired.

### Chapter 13 — Advanced Definitions

```ebnf
(* §13.1, diagram 81 *)
definable_symbol = operator_symbol                          (* minus >, <=, >= — §13.1 rule *)
                 | ":="
                 | "#"
                 | "." identifier
                 | "(" subscript_pattern { "," subscript_pattern } ")" ;
subscript_pattern = "*" | "*" ".." "*" ;
```

Semantics of the special forms (§13.2–§13.7), needed by a front end because each is a call to a
definable-symbol routine:

| Surface form | Invokes | Source |
|---|---|---|
| prefix `op x` (`+ - NOT`) | `FUNC op (x)` | §13.2 |
| `a op b` (`** * / MOD DIV & + - = < IN AND OR XOR`) | `FUNC op (a, b)`; `=`, `<`, `IN` must return BOOL | §13.2 |
| `a /= b` | `NOT (a = b)` (automatic from `=`) | §13.2 |
| `a > b` | `b<a` | §13.2 |
| `a <= b` | `a=b OR a<b` | §13.2 |
| `a >= b` | `a=b OR b<a` | §13.2 |
| `v := e` | `PROC := (target, source)` | §13.2 |
| `p.id` | `FUNC .id (p)` | §13.4 |
| `p(e)` | `FUNC (*) (p, e)` | §13.4 |
| `p(e1..e2)` | `FUNC (*..*) (p, e1, e2)` | §13.4 |
| `p(e1, e2..e3, e4..e5)` | `FUNC (*, *..*, *..*) (p, e1, e2, e3, e4, e5)` | §13.4 |
| `x # t` | `FUNC # [t] (x)` | §13.5 |
| creation / end of lifetime of a user-typed item | `PROC INITIALIZE (x)` / `PROC FINALIZE (x)` | §13.3 |

Ordering assumption (§13.2): at most one of `a=b`, `a<b`, `b<a` is true.

Associativity assumption (§13.2): `+ * AND OR XOR &` are assumed associative, so `a op b op c` may be
evaluated either way.

Case expansion (§13.6), transcribed from images advancedcaseformexample / advancedcaseexpandexample:

```red
CASE e1
   WHEN e2, e3..e4 => body1
   WHEN e5         => body 2
END CASE;
```
is expanded to
```red
BEGIN
   CONST c := e1;
   CASE TRUE
      WHEN c=e1, e3<=c AND c<=e4 => body1
      WHEN c=e5                  => body2
   END CASE;
END;
```
(`c=e1` in the expansion is printed so; `c=e2` is evidently meant.)

Repeat expansion (§13.7), images advancedrepeatformexample / advancedrepeatexpandexample:

```red
FOR i : s REPEAT
     body
END REPEAT;
```
is expanded to
```red
rep BEGIN
   VAR i : s := s.MIN;
   IF i <= s.MAX THEN
      WHILE TRUE REPEAT
         body      %i is treated as read-only within
                   % the body
         IF i = s.MAX THEN
            EXIT rep;
         END IF;
         i := SUCC(i);
      END REPEAT;
   END IF;
END rep;
```
and (advancedrepeatformexample2 / advancedrepeatexpandexample2)
```red
FOR i : REVERSE s REPEAT
     body
END REPEAT;
```
is expanded to
```red
rep BEGIN
   VAR i : s := s.MAX
   IF i >= s.MIN THEN
      WHILE TRUE REPEAT
         body      % i is treated as read-only
                   %  within the body
         IF i = s.MIN THEN
            EXIT rep;
         END IF;
         i := PRED(i);
      END REPEAT;
   END IF;
END rep;
```
(The reverse expansion lacks `;` after `VAR i : s := s.MAX` as printed.)

Note `rep BEGIN ... END rep;` — a matching identifier around a begin statement, confirming diagram 37.

### Appendix B — Pragmats

Diagrams 82 (`pragmats`) and 83 (`pragmat`) are given in §1.8, because a pragmat list is a token
separator (lexical diagram L) rather than a phrase of the grammar proper.

### Cross-reference of grammar rule numbers

| # | Rule | § | # | Rule | § | # | Rule | § |
|---|---|---|---|---|---|---|---|---|
| 1 | translation unit | 3.1 | 29 | constant | 5.3 | 57 | exception declaration | 9.1 |
| 2 | body | 3.2 | 30 | referencing form | 5.3 | 58 | guard statement | 9.2 |
| 3 | body element | 3.2 | 31 | constructor | 5.6 | 59 | raise statement | 9.3 |
| 4 | declaration | 3.3 | 32 | record or union constructor | 5.6 | 60 | reraise statement | 9.4 |
| 5 | immediate declaration | 3.3 | 33 | array constructor | 5.6 | 61 | task declaration | 10.1 |
| 6 | deferred declaration | 3.3 | 34 | set constructor | 5.6 | 62 | task invocation statement | 10.1 |
| 7 | compound declaration | 3.3 | 35 | resolved constant | 5.7 | 63 | wait statement | 10.5 |
| 8 | assertion | 3.4 | 36 | statement | 6 | 64 | waiting invocation | 10.5 |
| 9 | imports | 3.7 | 37 | unlabeled statement | 6 | 65 | region statement | 10.7 |
| 10 | type | 4.1.5 | 38 | simple statement | 6 | 66 | formal translation time properties | 11.1.2 |
| 11 | type comparison | 4.1.5 | 39 | compound statement | 6 | 67 | actual translation time properties | 11.1.2 |
| 12 | subtype | 4.1.6 | 40 | assignment statement | 6.1 | 68 | translation time property | 11.1.2 |
| 13 | subtype comparison | 4.1.6 | 41 | begin statement | 6.2 | 69 | generic declaration | 11.3 |
| 14 | range | 4.1.7 | 42 | if statement | 6.3 | 70 | generic parameters | 11.3 |
| 15 | variable declaration | 4.2.1 | 43 | case statement | 6.4 | 71 | generic constraint | 11.3 |
| 16 | constant declaration | 4.2.1 | 44 | repeat statement | 6.5 | 72 | type generic constraint | 11.3.1 |
| 17 | abbreviation declaration | 4.4.1 | 45 | exit statement | 6.6 | 73 | subtype generic constraint | 11.3.2 |
| 18 | abbreviation invocation | 4.4.1 | 46 | return statement | 6.7 | 74 | operation generic constraint | 11.3.3 |
| 19 | type declaration | 4.4.2 | 47 | goto statement | 6.8 | 75 | value generic constraint | 11.3.4 |
| 20 | direct type declaration | 4.4.2 | 48 | procedure declaration | 7.1 | 76 | needs | 11.4 |
| 21 | user-defined type | 4.4.2 | 49 | procedure invocation statement | 7.1 | 77 | needed item | 11.4 |
| 22 | user-defined subtype | 4.4.2 | 50 | function declaration | 7.2 | 78 | representational specification | 12.2 |
| 23 | indirect type declaration | 4.4.3 | 51 | function invocation primary | 7.2 | 79 | representational item | 12.2 |
| 24 | allocation statement | 4.4.3 | 52 | formal parameters | 7.3 | 80 | location specification | 12.3 |
| 25 | attribute inquiry | 4.5.3 | 53 | actual parameters | 7.3 | 81 | definable symbol | 13.1 |
| 26 | expression | 5.2 | 54 | capsule declaration | 8.1 | 82 | pragmats | B |
| 27 | primary | 5.3 | 55 | capsule invocation declaration | 8.1 | 83 | pragmat | B |
| 28 | variable | 5.3 | 56 | visible list | 8.2 | | | |

Lexical diagrams: A token, B token separator (§2.2); C identifier (§2.3.4); D literal (§2.3.5);
E int literal, F float literal (§2.3.6); G enum literal (§2.3.7); H string literal (§2.3.8);
I boolean literal (§2.3.9); J indirect literal (§2.3.10); K comment (§2.4.1);
L pragmat token separator (§2.4.2).

---

## 3. Operator precedence (§5.2)

Transcribed from image exprecedenceexample.jpg and confirmed by the OCR:

| Level | Operators | Kind |
|---|---|---|
| 1 (highest) | `+`, `-` | prefix |
| 2 | `**` | infix |
| 3 | `*`, `/`, `MOD`, `DIV`, `&` | infix |
| 4 | `+`, `-` | infix |
| 5 | `=`, `/=`, `<`, `<=`, `>`, `>=`, `IN` | infix |
| 6 | `NOT` | prefix |
| 7 | `AND` | infix |
| 8 (lowest) | `OR`, `XOR` | infix |

- "Within a precedence level, associativity is left to right." This holds for `**` too. Parentheses
  override grouping (§5.3 rationale).
- The rationale says the levels follow ALGOL 60 as described by Wirth.
- Prefix `+`/`-` bind tighter than `**`, so `-a**2` is `(-a)**2`.
- Prefix `NOT` sits below the relations, so `NOT a = b` is `NOT (a = b)`. Its operand is parsed at
  level 5 or higher; inside a level-5 operand `NOT` must be parenthesised.
- `&` is at the multiplicative level. (The §2.3.2 list puts `&` on a line of its own, but that list is
  not a precedence table.)
- Relations are left-associative per the general rule. Since `=` yields BOOL, `a = b = c` is
  `(a = b) = c`, which type-checks only if `c` is BOOL. The manual cites avoiding `X=Y=Z` as the
  reason for `:=`.
- `AND` and `OR` on BOOL are short-circuit ("conditional operations", C.1 note 1 and §7.3 rationale).
  `XOR` is not.
- Type and subtype comparisons (diagrams 11 and 13) are separate `expression` alternatives built from
  `type ( = | /= ) type`. They sit beside the operator forms in diagram 26, not inside the table.
- User-defined operators (§13.2) keep the built-in precedence. `+ * AND OR XOR &` may be reassociated
  by the translator.

Operator-precedence parser sketch for diagram 26:
```
expr     = or_expr
or_expr  = and_expr { ("OR" | "XOR") and_expr }
and_expr = not_expr { "AND" not_expr }
not_expr = "NOT" not_expr | rel_expr          (* NOT is at level 6 *)
rel_expr = add_expr { ("=" | "/=" | "<" | "<=" | ">" | ">=" | "IN") add_expr }
add_expr = mul_expr { ("+" | "-") mul_expr }
mul_expr = exp_expr { ("*" | "/" | "MOD" | "DIV" | "&") exp_expr }
exp_expr = un_expr { "**" un_expr }           (* left-assoc per §5.2 *)
un_expr  = ("+" | "-") un_expr | primary
```
This is a derived convenience; diagram 26 together with the table is normative. Type and subtype
comparisons must be recognised at `rel_expr` level by semantic lookahead (is the operand a type or
subtype name?).

---

## 4. Ambiguities, discrepancies and OCR doubts

Identifiers: A-ch.n.

### Lexical (Chapter 2)
- **A-2.1** The reserved-word list (§2.3.1) omits many words that the diagrams draw as terminals:
  `ENUM ARRAY RECORD UNION TYPEOF SUBTYPEOF INDEXOF STRING`, the representation words, `INTERRUPT`,
  and the pragmat words (table in §1.3). They have to be contextual keywords. `TRUE FALSE NIL` are
  literal tokens, and `DIV MOD IN OR XOR AND NOT` are operator symbols. Neither group is "reserved",
  but neither may be used as an identifier.
- **A-2.2** Diagram H (string) and diagram K (comment) both require at least one character inside.
  The prose never says so for comments.
- **A-2.3** The §2.3.2 rationale lists the relational symbols as "=, /, <, <=, >, >=". The `/` is a
  typo for `/=`.
- **A-2.4** §2.2 rules: a separator is required "unless one of the tokens is a special symbol or an
  operator symbol (such as <) which does not have the form of an identifier". The HTML prints
  "(such as < >)". The OCR reads "<such as <)".
- **A-2.5** The ASCII table (C.15) prints the code of `'SUB` as `'A`; it should be `1A` (scan smudge).
- **A-2.6** §2.3.6 examples: `0.012` is listed with "default precision 3". The rule ("digits preceding
  E, minus leading zeros to the left of the decimal point") gives 4 − 1 = 3. That agrees, and is
  recorded only because the rule is easy to misread as excluding all leading zeros.

### Chapter 3
- **A-3.1** §3.3: two examples are both numbered "2)" (deferred, generic).
- **A-3.2** §3.1 example (prime numbers): the inner loop assigns `numbers(i) := FALSE` where
  `numbers(j)` is meant, and `OPEN (SYS_OUT, "TTY", 'NEW)` has no `;`. Both appear so in the image and
  the OCR. Kept as printed in §5.

### Chapter 4
- **A-4.1** The HTML of §4.5.1 and §4.5.2 is garbled (`SUBTYPE(exp)`, `INDEXOF(exp, 1)` shown as
  equivalent to a TYPE declaration, `TYPE(st)`). The OCR and diagram 12 give the correct text:
  `SUBTYPEOF(exp)`; `INDEXOF(exp, i)`; `INDEXOF(exp)` ≡ `INDEXOF(exp, 1)`; `TYPEOF(exp)` and
  `TYPEOF(st)`. The grammar follows the diagrams.
- **A-4.2** The §4.4.3 prose in the HTML writes `PTR STRING(ASCII) (5)` with round brackets. The OCR
  shows square brackets (`STRINGCASCII] (5)`, where `C` = `[`), matching diagram 12:
  `STRING[ASCII] (5)`. This is an HTML transcription error.
- **A-4.3** Diagrams 10 and 12 allow only a *single* bracketed type or subtype after a built-in
  identifier (`SET[INT]`, `STRING[ASCII]`, `MAILBOX[s]`). Multi-item property lists for user generic
  types go through diagram 21/22 (`identifier actual_translation_time_properties`).
- **A-4.4** Diagram 12 includes `type` (with an optional constraint list) as a subtype alternative.
  Syntactically every `type` is therefore a `subtype`, and the many `( type | subtype )` choices in
  diagrams 17, 35, 50, 52, 68, 74, 75 and 77 cannot be separated by syntax. The §4.1.2 rule says: if a
  specification could be either, and either is allowed, it is a type. A parser should accept
  `subtype` and classify afterwards.
- **A-4.5** Diagram 12 `( identifier [ "[" subtype "]" ] | type ) [ "(" ... ")" ]`: an identifier
  followed by `(` is ambiguous between a constrained built-in subtype (`INT(1..10)`), a user-defined
  subtype (diagram 22) and an abbreviation invocation (diagram 18). Name binding decides.
- **A-4.6** Example typevarcondeclexample has `CONST z : INT(0..10) := 10` followed by a mark that looks
  like `:` in the image and `;` in the OCR. It is transcribed as `;`.
- **A-4.7** typedynvarexample allocates `"value"`, but its comments refer to `"ABCDE"` and `'C`. This is
  an error in the manual, and the image and OCR agree.

### Chapter 5
- **A-5.1** `.ALL` (§4.4.2) and `.TAG` (§4.3) use the dot-selection form of diagram 30, whose selector
  is drawn as `identifier`. `ALL` is a reserved word, so the parser must accept it explicitly after
  `.`. Attributes (`.MIN`, `.MAX`, user formal-parameter names) also use this form; diagram 25 and
  diagram 30 overlap.
- **A-5.2** Constructors (diagrams 32/33/34) are not syntactically disjoint: `[a : e]` can be a record,
  union or array constructor; `[]` can be an array or a set; `[a, b]` is a set. They are resolved by
  context type (§5.7) or by an explicit `# type`.
- **A-5.3** Diagram 33 has a bypass making `[]` a legal array constructor (an empty array). §5.6 only
  mentions the empty *set* constructor.
- **A-5.4** The HTML §5.2 notes contain transcription noise: "relational operators (infix *, ...)" and
  "only - and /= are defined" should read `=`, and "notoperands" should read "set operands" (per the
  following sentence).
- **A-5.5** In diagram 26 the prefix-operator branch is `operator symbol 1  expression`, and §5.2
  restricts this to `+ - NOT`. The infix list in §5.2 omits nothing relative to §2.3.2.
- **A-5.6** §5.7 example: `pi := 3.14149` is printed for 3.14159 (image and OCR). A declaration says
  `INT(1..5)` while its comment says `INT(0..5)`. Both kept as printed.

### Chapter 6
- **A-6.1** **Goto label separator.** Diagram 36 prints `identifier 1 ;` (checked by zooming: it is
  clearly a semicolon). The §2.3.3 special-symbol table assigns goto labels to `:`, and the §6.8 example
  is `sort : FOR i : INT(1..n-1) REPEAT`. The grammar uses `":"`. The diagram is taken to be in error;
  with `;` a label would be indistinguishable from a procedure-call statement terminated by `;`.
- **A-6.2** Matching identifiers (diagram 37) carry no punctuation: `search FOR ... END REPEAT search`,
  `rep BEGIN ... END rep`. With a label and a matching identifier together the form would be `lbl : m FOR ... END REPEAT m` (inferred from diagrams 36 and 37; there is no example).
- **A-6.3** Diagram 44 has no bare `REPEAT body END REPEAT`. The manual itself writes
  `WHILE TRUE REPEAT` for endless loops (§10 examples, §13.7 expansion).
- **A-6.4** The ELSE arm of CASE (diagram 43) and of GUARD (diagram 58) take `=>`; the ELSE of IF
  (diagram 42) does not. WAIT (diagram 63) has no ELSE.

### Chapter 7
- **A-7.1** Diagram 48 attaches `formal translation time properties` to the identifier branch only
  (not to a definable-symbol procedure name). Diagram 50 places it after the identifier/definable
  choice. Probably a drafting difference: `PROC := [t] (...)` is not drawn as legal, but
  `FUNC # [t] (...)` is, which §13.5 requires.
- **A-7.2** The HTML heading of §7.2.1 is "DECLARING AND USING A NEW TYPE", a copy-paste error. The OCR
  shows the true title, "NORMALITY AND SIDE-EFFECTS". The §5 corpus labels follow the HTML for
  traceability.
- **A-7.3** procnewtypeexample5 declares `look_up` and calls `lookup (s)`. The image and OCR agree.
- **A-7.4** No diagram allows `()` (an empty parameter list).

### Chapter 8
- **A-8.1** The HTML legend under diagram 54 omits "66 - formal trans properties", but the diagram has
  the box.

### Chapter 9
- **A-9.1** Diagram 58 permits zero WHEN handlers. The diagram is followed as drawn.

### Chapter 10
- **A-10.1** The §10.1 diagram image (61/62) is repeated under §10.2 in the HTML, together with its
  legend. Appendix F assigns no diagram to §10.2.
- **A-10.2** The HTML caption above multiacteveryintervalexample.jpg repeats the "Delayminsec ..."
  caption of the previous example. The OCR has the true caption: "3) Performing an action every i
  seconds of real time".
- **A-10.3** §10.4 every-interval example: the `;` after `t := t+i*SECONDS` is missing in print.

### Chapter 11
- **A-11.1** Diagram 69 has no `;` between `needs` and the pattern declaration. The §3.3 and §13
  examples agree (`GENERIC t : TYPE NEEDS := (t,t)` followed directly by `PROC swap ...`), but the §11.4
  example prints `NEEDS :=(t,t);`. Treat the `;` as an error, or tolerate an optional `;` there.
- **A-11.2** §11.3.4 example: `FUNC + (x,y : float [i]) float [i];` lacks `=>`, and `VAR z := float[i]
  (r..r);` uses `:=` where diagram 15 requires `: subtype`. Both are errors in the manual, confirmed
  in the image.
- **A-11.3** §11.3.3 example: `FLOAT(20, -10E10 ..1.0E10)` has `10E10`, which by diagram F is not a
  float literal (no `.`). Strictly it lexes as `10` followed by identifier `E10`. Read as `-1.0E10`.
  The same example compares `a(j)` but swaps `a(i)`.
- **A-11.4** The rule in §11.1.2 restricts `identifier [actual list]` and `definable_symbol` in
  diagram 68 to *actual* lists, although diagrams 66 and 67 are drawn identically.

### Chapter 12
- **A-12.1** In diagram 79 RECORD/UNION, `,` separates both items inside a component's
  representation and successive component groups; the inner item list may even be empty. A new group
  is recognised by `identifier {, identifier} :` lookahead.
- **A-12.2** The HTML text for ABSENT is truncated. Completed from the OCR in §2 (Chapter 12 notes).

### Chapter 13
- **A-13.1** §13.1 says `>`, `<=` and `>=` are not definable symbols. §13.2 says `/=` cannot be
  user-defined either (it is derived from `=`). An implementation should exclude all four.
- **A-13.2** The §13.6 case expansion prints `WHEN c=e1, ...`; `c=e2` is meant. The §13.7 reverse
  expansion lacks a `;` after `VAR i : s := s.MAX`.

### Appendix B
- **A-B.1** Placement rule: "between the last token and the terminating ';' or ',' or '/'". The HTML
  has `/` and the OCR has `T`; read `)`.
- **A-B.2** Example `VAR x : INT(0..10) OPTIMIZE (TIME);` lacks `PRAG ( )`, and the `PROC q` header
  example lacks a `)`. Both are errors in the manual.

### Glyph doubts (all examples)
- Slashed zero `Ø` is transcribed as `0`.
- Digit `1` and letter `l` are nearly identical in the example typeface, and the OCR always reads `l`.
  Identifiers were decided from sibling names (`s1/s2`, `t1/t2`, `side1`, `file1`, `action1`). Names
  still in doubt are `search1` (§4), `ml` (§10.5), `l` (§11.1.1) and `ABBREV I10` (§4.4.1, which could
  also be `l10`). Each is flagged under its block.
- No character in any image was unreadable, so the corpus contains no `⟨?⟩` marks.

---

## 5. Examples corpus (Chapters 3–11)

Transcribed from the EXAMPLES images (105 distinct image files) and cross-checked against the OCR.
Keyword case, indentation and line breaks are as printed. Errors in the manual are kept and noted
under their blocks. Section labels follow the HTML headings. Examples printed as plain text in the
HTML (for example §9.1 `EXCEPTION stack_overflow, stack_underflow;`, or the §4.4.2 prose
fragments) are not repeated here.

### Chapter 3 — Program Structure

#### §3.1 Program — programprogramexample.jpg
```red
CAPSULE prime EXPORTS NONE;
   CONST max := 100;
    % this program prints all prime numbers that are
    %  less than or equal to max
   VAR numbers : ARRAY INT(2..max) OF BOOL
                 := [2..max : TRUE];

   FOR i : INT(2..max) REPEAT
      IF numbers(i) THEN
         VAR j : INT(2*i .. max+i) := 2*i;
         WHILE j <= max REPEAT
            numbers(i) := FALSE;
            j := j+i;
         END REPEAT;
      END IF;
   END REPEAT;

   OPEN (SYS_OUT, "TTY", 'NEW)
   WRITELN ("PRIME NUMBERS");
   FOR i : INT(2..max) REPEAT
      IF numbers(i) THEN
         WRITELN  (i);
      END IF;
   END REPEAT;
   CLOSE (SYS_OUT, 'SAVE);

END CAPSULE prime;
```
Notes: transcribed as printed. The inner loop reads `numbers(i) := FALSE;` (logically should be `numbers(j)`), and the `OPEN (...)` line has no terminating `;` — both are errors in the original, preserved. i vs 1 distinguished from the image (OCR cannot tell them apart).

#### §3.2 Body — programbodyex1.jpg (inline form, not a full example)
```red
IF expression THEN body1 ELSE body2 END IF
```

#### §3.3 Declarations — programimmexample.jpg ("1) Immediate declarations.")
```red
VAR flag : BOOL := TRUE;
CONST pi := 3.14159;
EXCEPTION stack_underflow, stack_overflow;
EXPOSE ALL FROM compool;
```

#### §3.3 Declarations — programdefexample.jpg ("2) Deferred declarations.")
```red
ABBREV max_int : INT(min..max);

TYPE complex (n,m : FLOAT) : RECORD[r,i : FLOAT(10, n..m)];

PROC complex_complement (VAR x : complex);
   x.i := -x.i;
END PROC complex_complement;

FUNC even (i : INT) => BOOL;
   RETURN (i MOD 2) = 0;
END FUNC even;

TASK reader;
   ...
END TASK reader;

CAPSULE compool EXPORTS ALL;
   % variable declarations
   ...
END CAPSULE compool;
```

#### §3.3 Declarations — programgenexample.jpg ("2) Generic declaration." — numbered 2 twice in the source)
```red
GENERIC t : TYPE NEEDS := (t,t);            % needs assignment
                                            %  operator
   % swap for any type
   PROC swap(VAR a,b : t);
      CONST c := a;
      a := b;
      b := c;
   END PROC swap;
```

#### §3.4 Assertions — programassertexample.jpg
```red
FUNC sqrt (a : FLOAT) => FLOAT;
   ASSERT a > 0.0;
   ...
END FUNC sqrt;

PROC full_divide (a,b : INT, OUT c,d : INT);

   ASSERT a>=0 AND b>0;

   VAR x : INT(0..a) := 0;
   VAR y : INT(0..a) := a;

   ASSERT b*x+y = a;

   WHILE y >= b REPEAT
      ASSERT b*x+y = a;
      x := x+1;
      y := y-b;
   END REPEAT;

   ASSERT (b*x+y = a) AND  y<b;

   c := x ;
   d := y ;

   ASSERT (b*c+d = a) AND 0<=d AND  d<b;

END PROC full_divide;
```
Notes: zeros are printed slashed (Ø) in the original; transcribed as 0 throughout this file.

#### §3.5 Names and Scopes — programscopeexample.jpg
```red
sample BEGIN                            % definition 1
         VAR a, b : INT(1..10);  % definition 2 and 3
         CONST c := 4;           % definition 4
         ...
         BEGIN
           % begin statement is an open scope
           VAR b : BOOL;          % definition 5

           ...sample...           % refers to definition 1
           ...a...                % refers to definition 2
           ...b...                % refers to definition 5
           ...c...                % refers to definition 4
           ...p...                % refers to definition 6
           ...x...                % illegal

         END;
         ...
         PROC p (VAR x : INT);    % definition 6 and 7
           % procedure is a closed scope

           ...sample...           % illegal
           ...a...                % illegal
           ...b...                % illegal
           ...c...                % refers to definition 4
           ...p...                % refers to definition 6
           ...x...                % refers to definition 7

         END PROC p;

END sample;
```
Notes: matching identifier `sample` precedes BEGIN with no colon (confirmed by OCR line "sample  BEGIN"). Comment column alignment approximated.

#### §3.6 Forward References to Names — programforwardrefxample.jpg ("1) Legal forward reference to a deferred declaration.")
```red
BEGIN
   p;
   ...
   PROC p;
      ...
   END PROC p;
END;
```

#### §3.6 Forward References to Names — programforwardrefxample2.jpg ("2) Correct uses and incorrect forward references to immediate declarations.")
```red
VAR a : INT(1..10) := b + 3;   % incorrect, b has not been
                               % elaborated
VAR b : INT(1..5) := 2;        % correct
VAR c : INT(1..20) := b;       % correct, b has been elaborated
```

### Chapter 4 — Types

Conventions: the manual's typewriter font uses a slashed zero (rendered here as `0`). In that font the digit `1` and lowercase `l` are hard to tell apart; identifiers such as `s1`, `a1`, `b1`, `comp1`, `search1` are transcribed with the digit `1` where context (sibling names `s2`, `comp2`, `b2`...) makes it clear. The OCR (DTIC_ADA219453) also reads them as `l`, so it cannot settle the question.

#### §4.1 TYPES AND SUBTYPES (Examples 1: Types) — typestypeexample.jpg
```red
INT
FLOAT
STRING[ASCII]
```

#### §4.1 TYPES AND SUBTYPES (Examples 2: Subtypes) — typessubtypeexample.jpg
```red
INT(1 .. 10)
FLOAT(5, -100.0 .. 100.0)
STRING[ASCII] (5)
```

#### §4.1.1 USE OF TYPES AND SUBTYPES — typetypeexample.jpg
```red
VAR i : INT(1..10);
VAR s : STRING[ASCII] (5);
   ...
p(i);
q(i);
p(s); % illegal - type of s is not INT
   ...
PROC p (x : INT);
   ...
END PROC p;

PROC q (x : INT(1..10));
   ...
END PROC q;
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (types whose only property is their name) — typetypenameexample.jpg
```red
BOOL
INT
FLOAT
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (type property list) — typeproplistexample.jpg
```red
ENUM['a, 'b, 'c]   % values of an enumeration type are always
                   %  known at translation time
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (subtype with no constraints) — typenoconstraintsexample.jpg
```red
BOOL
ENUM['a, 'b, 'c]   % a variable of this subtype may take all listed
                   % values
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (constraint property list) — typeconstraintsexample.jpg
```red
INT(0..10)                      % a single range constraint
FLOAT(10, 0.0 .. 50.0)          % 2 constraints, precision and range
ENUM['a, 'b, 'c] ('a .. 'b)     % a variable of this subtype may only
                                %  take on the constrained range of
                                %  values
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (types containing types) — typeintypeexample.jpg
```red
RECORD[a : INT, b : BOOL]
STRING[ENUM['a, 'b, 'c]]        % the characters of which a STRING is
                                %  composed must be known at
                                %  translation time
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (types based on other types) — typebasedontypeexample.jpg
```red
RECORD[a : INT,
       b : UNION[w : BOOL,
                 x,y : RECORD[m,n : FLOAT],
                 z : ENUM['red, 'green]],
       c : ENUM['yes, 'no, 'maybe]]
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (subtype constraints on nested types) — typesubtypeconstraintexample.jpg
```red
RECORD[a : INT(-5..5), b : BOOL]
STRING[ENUM['a, 'b, 'c] ('a .. 'b)] (10)   % this is a string
                                           %  of length 10 made up
                                           %  only of A's and B's
```

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (array form) — typearrayformexample.jpg
```red
ARRAY INT OF FLOAT                    % a one-dimensional array type.
ARRAY INT, ENUM['a, 'b, 'c]           % a two-dimensional array type
                                      %  where the first dimension
      OF FLOAT                        %  is subscripted by integers
                                      %  and the second by enum
                                      %  literals.
ARRAY INT(1..10) OF                   % a one-dimensional array
      FLOAT(10, -5.0 ..5.0)           %  subtype.
ARRAY INT(1..10), ENUM['a, 'b, 'c]    % a two-dimensional array
      OF FLOAT(10, -5.0 .. 5.0)       %  subtype where the first
                                      %  dimension has size 10 and
                                      %  is indexed by integers
                                      %  and the second has size 3
                                      %  and is indexed by enum
                                      %  literals (e.g, x(5, 'b))
```
Note: in the image, the comment column of the second example has a blank line between `ARRAY INT, ENUM['a, 'b, 'c]` and `OF FLOAT`; `-5.0 ..5.0` (no space after `..`) is as printed.

#### §4.1.2 SPECIFYING TYPES AND SUBTYPES (Rules example: type vs subtype interpretation) — typespecificationexample.jpg
```red
VAR x : ENUM['a, 'b];                          % ENUM['a, 'b] is a subtype

PROC p(x : ENUM['a, 'b]);                      % ENUM['a, 'b] is a type
   ...
END PROC p;

PROC q(y : STRING[ENUM['a, 'b]] (5));% ENUM['a, 'b] is a subtype
   ...
END PROC q;
```

#### §4.1.3 RELATIONSHIP BETWEEN TYPES AND SUBTYPES — typerelationshipexample.jpg
Two-column table in the image (left column headed "Subtype", right column "Type"); rows correspond.
```red
-- Subtype                          -- Type
BOOL                                BOOL
INT(0..10)                          INT
ENUM['a, 'b, 'c] ('a .. 'b)         ENUM['a, 'b, 'c]
RECORD[a : INT(-5 .. 5),            RECORD[a : INT,
       b : BOOL]                           b : BOOL]
STRING[ENUM['a, 'b, 'c]             STRING[ENUM['a, 'b, 'c]]
       ('a .. 'b)] (10)
ARRAY INT(1..10),                   ARRAY INT,
      ENUM['a, 'b, 'c]                    ENUM['a, 'b, 'c]
   OF FLOAT(10,0.0..100.0)             OF FLOAT
```
Note: the `-- Subtype` / `-- Type` header line is mine (the image has underlined column headings "Subtype" and "Type", not code); `--` is not RED comment syntax.

#### §4.1.5 TYPES, TYPE EQUIVALENCE AND TYPE COMPARISON (component form before expansion) — typecomponents.jpg
```red
comp1, comp2, ..., compi : type
```

#### §4.1.5 TYPES, TYPE EQUIVALENCE AND TYPE COMPARISON (component form after expansion) — typecomponentsreplaced.jpg
```red
comp1 : type,
comp2 : type,
...
compi : type
```

#### §4.1.5 TYPES, TYPE EQUIVALENCE AND TYPE COMPARISON (Examples 1: Expanding abbreviations) — typeexpandabbrevexample.jpg
```red
ABBREV a : BOOL;
TYPE   b : BOOL;

VAR m : a;
VAR n : b;
VAR o : BOOL;     % the types of m and o are the same but both
                  %  are different from the type of n
```

#### §4.1.5 TYPES, TYPE EQUIVALENCE AND TYPE COMPARISON (Examples 2: Expanding components) — typeexpandcompexample.jpg
```red
VAR a : RECORD[x,y : INT(1..10)];
VAR b : RECORD[x : INT(5..8),
               y : INT(12..15)];      % the types of a and b are
                                      %  the same since round
                                      %  bracketed information
                                      %  is removed to obtain
                                      %  the type.
VAR c : RECORD[y,x : INT(1..10)];     % the type of c is not the
                                      %  same as the type of a,
                                      %  since component names
                                      %  are in a different
                                      %  order.
```

#### §4.1.7 RANGE — typerangeexample.jpg
```red
VAR w : ENUM[ 'one, 'two, 'three, 'four, 'five,
              'six, 'seven, 'eight, 'nine, 'ten] ('one .. 'five);
VAR x,y : INT(1..10) := 10;
VAR z : FLOAT(10,1.0 .. 100.0);
VAR a : ARRAY INT(1..x) OF BOOL;
...
FOR i : INT(x..y) REPEAT
   ...
END REPEAT;
CASE x
   WHEN 1.. 5 => ...
   WHEN 6..10 => ...
END CASE;

...a(x..y)...
```

#### §4.2.1 VARIABLE OR CONSTANT DECLARATION — typevarcondeclexample.jpg
```red
VAR x : INT(1..100) := 5;
CONST y := TRUE;

CONST z : INT(0..10) := 10;
VAR a : FLOAT(10,1.0 .. 100.0);
```
Note: the terminator after `CONST z : INT(0..10) := 10` looks like `:` in the image; the OCR reads `;`. Transcribed as `;` (a `:` there would be a printing defect).

#### §4.3 OVERVIEW OF BUILT-IN TYPES (Record: successive components of the same type; same image reused for Union) — typerecordexample.jpg
```red
comp1, comp2,...,compn:typej
```
Note: the final letter after `type` reads as `j` (possibly a subscript-like `j` meaning "type j"); it is not a typo for `typen` as far as the image shows. The image appears twice in §4.3 (under Record and under Union).

#### §4.3 OVERVIEW OF BUILT-IN TYPES (Union subtype constraint) — typeunionexample.jpg
```red
UNION[a : INT(0..10), b : BOOL] ('b);
```

#### §4.4.1 ABBREVIATION — typeabbrevdeclxample.jpg
```red
ABBREV I10 : INT(1..10); % This is equivalent to
VAR y : I10;             % VAR y : INT(1..10);

ABBREV flags(n : INT) :
       ARRAY INT(1..n) OF BOOL; % This is equivalent to
VAR b : flags(10);              % VAR b : ARRAY INT(1..10) OF BOOL;

ABBREV ASCII : ENUM[...];       % see Appendix C for a complete
                                %  definition
VAR x : ASCII;                  % ASCII is a subtype here
PROC p(x : STRING[ASCII]);      % ASCII is a type here
   ...
END PROC p;
```
Note: the abbreviation name's first character looks like capital `I` (`I10`); OCR gives `110`. Could conceivably be `l10`.

#### §4.4.2 DECLARING AND USING A NEW TYPE (Examples 1: New string types) — typenewstringexample.jpg
```red
TYPE strng10 : STRING[ASCII] (10);

GENERIC i : INT
   TYPE mstrng[i] : STRING[ASCII] (i);

TYPE strng (j : INT) : STRING[ASCII] (j);

VAR x : strng10;        % underlying variable is a string
                        %  with length 10
VAR y : mstrng [k];     % underlying variable is a string with
                        %  length k where the value of k must
                        %  be known at translation time
VAR z : strng (m);      % underlying variable is a string with
                        %  length m where the value of m need
                        %  not be known until run time.
```

#### §4.4.2 DECLARING AND USING A NEW TYPE (Examples "1" [sic, = 2]: An abstract data type -- stacks) — typestacksexample.jpg
```red
CAPSULE stackcap EXPORTS stack, init, push, pop;
   CONST size := 100;
   ABBREV elemtype : FLOAT(10, -1000.0 .. 1000.0);
   TYPE stack : RECORD[ top : INT(0..size),
                        elem : ARRAY INT(1..size) OF
                                  elemtype];

   PROC init (VAR s : stack);
      s.top := 0;
   END PROC init;

   PROC push (VAR s : stack, e :elemtype);
      s.top := s.top + 1;
      s.elem(s.top) := e;
   END PROC push;

   PROC pop (VAR s : stack, OUT e : elemtype);
      e := s.elem(s.top);
      s.top := s.top - 1;
   END PROC pop;

END CAPSULE stackcap;
```

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (dereferencing) — typedynvarexample.jpg
```red
VAR s1,s2 : t;
ALLOC s2 PTR := "value";    % create dynamic variable
...

...s1.ALL...        % illegal since s1 is nil
...s1(i)...         % illegal since s1 is nil
...s2.ALL...        % the dynamic variable pointed to
                    %  by s2, having the value "ABCDE"
...s2(3)...         % a component of the dynamic
                    %  variable pointed to by s2,
                    %  having the value 'C

...
ALLOC s1 PTR;       % create dynamic variable 2
s1.ALL := s2.ALL;   % sets the value of dynamic variable 2
                    %  to be equal to the value of dynamic
                    %  variable 1 ("value")
```
Note: source inconsistency, not a transcription doubt: the code allocates `"value"`, but the comments say `"ABCDE"` / `'C` (left over from the preceding text example `ALLOC y PTR := "ABCDE";`). OCR agrees with the image.

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (sharing assignment) — typedynvarlifetimeexample.jpg
```red
VAR a1,a2,b1,b2,b3 : t;
ALLOC b1 PTR := "VWXYZ" ;     % creates dynamic variable 1
ALLOC b3 PTR := "abcde";      % creates dynamic variable 2
a1 := NIL;                    % sets a1 to nil
a2 := a1;                     % sets a2 to nil
b2 := b1;                     % b2 now points to dynamic
                              %  variable 1
b1.ALL := b3.ALL;             % changes value of dynamic
                              %  variable 1
... b1.ALL ...                % has value "abcde"
... b2.ALL ...                % has value "abcde"
... b3.ALL ...                % has value "abcde"
```

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (equality) — typeequalityeexample.jpg
```red
...a1 = a2...          % true, both are nil
...b1 = b2...          % true, both point to same dynamic variable
...b2 = b3...          % false, each points to different
                       %  dynamic variable
...b2.ALL = b3.ALL..   % true, both dynamic variables have the
                       %  value "abcde"
```
Note: `b3.ALL..` has two dots in the image (vs. three elsewhere).

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (allocation property list) — typeallocexample.jpg
```red
TYPE vstring : PTR(len : INT) STRING[ASCII] (len);

VAR v1,v2 : vstring;

ALLOC v1 PTR(3) := "abc";     % (3) is the allocation
                              %  property list
ALLOC v2 PTR(4) := "abcd";
```

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (recursive structures) — typerecursiveexample.jpg
```red
TYPE list : PTR RECORD[ val : INT(0..100),
                        next : list];
VAR lst : list;

% create a singly linked list with 3 elements
ALLOC lst PTR := [val : 3, next : NIL];
ALLOC lst PTR := [val : 2, next : lst];
ALLOC lst PTR := [val : 1, next : lst];

% now make the list circular
lst.next.next.next := lst;
```

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (Examples 1: Indirect string types) — typeindirectstringexample.jpg
```red
TYPE str10 : PTR STRING[ASCII] (10);

GENERIC i : INT
   TYPE mstr [i] : PTR STRING[ASCII] (i);

TYPE str(j : INT) : PTR STRING[ASCII] (j);

TYPE vstr : PTR(u : INT) STRING[ASCII] (u);

VAR w : str10;          % w can point only to strings
                        %  of length 10
VAR x : mstr [m];       % x can point only to strings
                        %  of length m where the value of
                        %  m must be known at translation
                        %  time
VAR y : str(n);         % y can point only to strings
                        %  of length n where the value of
                        %  n need not be determined until
                        %  run-time
VAR z : vstr;           % z can point to strings of any
                        %  length.  The length of the
                        %  string is determined when the
                        %  string is allocated.
```

#### §4.4.3 DECLARING AND USING A NEW INDIRECT TYPE (Examples 2: symbol tables holding symbols of different lengths) — typesymboltableexample.jpg
```red
CAPSULE sym_tab_cap EXPORTS sym_tab, init, insert, look_up;

     TYPE sym : PTR (len : INT) STRING[ASCII](len);

     TYPE sym_tab (size : INT) : RECORD[top : INT(0..size),
                                        syms : ARRAY
                                               INT(1..size)
                                               OF sym];

     PROC init (VAR s : sym_tab);
        s.top := 0;
     END PROC init;

     FUNC look_up (READONLY s   : sym_tab,
                            val : STRING[ASCII])
                 => INT(0..s.top);
        FOR i : INT(1 .. s.top) REPEAT
           IF s.syms(i).ALL = val THEN
              RETURN i;
           END IF;
        END REPEAT;
        RETURN 0;
     END FUNC look_up;

     PROC insert (VAR s     : sym_tab,
                      val   : STRING[ASCII],
                  OUT index : INT);
        index := look_up (s, val);
        IF index=0 THEN
           s.top := s.top + 1;
           ALLOC s.syms(s.top) PTR (val.LEN) := val;
           index := s.top;
        END IF;
     END PROC insert;

END CAPSULE sym_tab_cap;
```

#### §4.5.1 SUBTYPE INQUIRY — typesubtypeinquiryexample.jpg
```red
EXCEPTION not_found;
...
FUNC f (x : INT) =>  SUBTYPEOF(x);
   ...
END FUNC f;

PROC q (VAR a,b : ARRAY INT OF FLOAT);
   ASSERT INDEXOF(a) = INDEXOF(b);
   ...
END PROC q;

FUNC search (a : ARRAY INT OF FLOAT, v : FLOAT) => INDEXOF(a);
   FOR i : INDEXOF(a) REPEAT
      IF a(i) = v THEN
         RETURN i;
      END IF;
   END REPEAT;
   RAISE not_found;
END FUNC search;

PROC r (VAR x,y : FLOAT);
   ASSERT SUBTYPEOF(x) = SUBTYPEOF(y);
   ...
END PROC r;
```

#### §4.5.3 ATTRIBUTES — typeattributeinquiryexample.jpg
```red
INT(1..10).MAX                 % 10
FLOAT(5, 0.0 .. 10.0).PREC %  5
STRING[ASCII](8).LEN       %  8


TYPE matrix (first, second : INT) : ARRAY INT(1..first),
                                          INT(1..second)
                                    OF FLOAT(10, -100.0 .. 100.0);
matrix(5,8).first          % 5
matrix(5,8).second         % 8


PROC s (VAR x : FLOAT);
   ASSERT x.PREC <= 10;
   ...
END PROC s;


FUNC search1 (a : ARRAY INT OF FLOAT, v : FLOAT)
      => INT(-1 .. INDEXOF(a).MAX);
   ASSERT INDEXOF(a).MIN = 0;
   FOR i : INDEXOF(a) REPEAT
      IF a(i) = v THEN
         RETURN i;
      END IF;
   END REPEAT;
   RETURN -1;
END FUNC search1;


PROC sort (VAR a : ARRAY INT OF STRING[ASCII]);
   ABBREV x : INDEXOF(a);
   FOR i : INT(x.MIN .. PRED(x.MAX)) REPEAT
      FOR j : REVERSE INT(i .. PRED(x.MAX)) REPEAT
         CONST k := j + 1;
         IF a(j) < a(k) THEN
            CONST t := a(j);
            a(j) := a(k);
            a(k) := t;
         END IF;
      END REPEAT;
   END REPEAT;
END PROC sort;
```
Note: `search1` vs `searchl` is ambiguous (font, and OCR reads `searchl`). In the image the comment column of the first three lines is ragged (`% 10` is set further right than `%  5` / `%  8`); kept as printed.

### Chapter 5 — Expressions

#### §5.2 Operators and Operands — exprecedenceexample.jpg (TABLE: built-in operator precedence)
```
highest precedence
   +, -                              (prefix)
   **
   *, /, MOD, DIV, &
   +, -
   =, /=, <, <=, >, >=, IN
   NOT                               (prefix)
   AND
   OR, XOR
lowest precedence
```
Notes: this is the precedence table, not code. Text follows: "Within a precedence level, associativity is left to right."

#### §5.2 Operators and Operands — exoperatorsexample.jpg
```red
int_var                         % produces integer
3+4 = (7 DIV 3)+2               % produces boolean
'red > enum_var                 % produces boolean
array1(2..4) & array2(3..7)     % produces array
set1 AND set2                   % produces set
(3+i) DIV (7-j)                 % produces integer
```

#### §5.4 Built-in and User-defined Literals and Constructors — exvariousliteralsexamples.jpg
```red
TRUE                      % a BOOL literal
'red                      % an ENUM literal
32                        % an INT literal
4.53E6                    % a FLOAT literal
"This is a string."       % a STRING literal
```

#### §5.4 — exconstructorsexample.jpg
```red
VAR a : ARRAY  INT(1..10) OF BOOL;
VAR r : RECORD[ re,im : FLOAT(10, -100.0 .. 100.0)];

a := [1 : FALSE, 2..10 : TRUE];

r := [re : 3.6, im : -5.7];
```

#### §5.4 — exdefliteralconsexample.jpg
```red
% suppose MILES, COMPLEX, and VSTRING are user-defined types
%    for which user-defined constructors are available

CONST d := 10.3#MILES;
VAR c : COMPLEX;
VAR v : VSTRING;

c := [re : 0.0, im : 2.3]#COMPLEX;
v := "This is the value"#VSTRING;
```

#### §5.5 Manifest Expressions and Conditional Translation — exmanifestoperandsexample.jpg (TABLE: built-in operators that yield manifest results on manifest operands)
```
BOOL, INT, FLOAT operations   --  all, except :=
ENUM operations               --  =, /=, &
STRING operations             --  &, =, /=, component selection
```
Notes: a list/table, not code; printed in proportional font in the original.

#### §5.5 — exocondtransexample.jpg ("1) Conditional translation")
```red
CONST machine := 'PDP11;
...
ABBREV word : UNION[ S360, S370 : bits(32),
                     PDP11      : bits(16),
                     CDC6600    : bits(60)] (machine);

...

IF machine = 'PDP11 THEN
   ...
END IF;
...
CASE machine
   WHEN 'S360, 'S370 => ...
   WHEN 'PDP11       => ...
   WHEN 'CDC6600     => ...
END CASE;
```

#### §5.6 Built-in Constructors — exconstructingvaluesexample.jpg
```red
VAR r1,r2 : RECORD[w,x : INT(1..10),
                   y : BOOL,
                   z : ENUM['a, 'b, 'c]];
VAR u1, u2 : UNION[w,x : INT(1..10),
                   y : BOOL,
                   z : ENUM['a, 'b, 'c]];
VAR s1, s2 : SET[ENUM['red, 'blue, 'yellow, 'green]];
VAR a1, a2 : ARRAY INT(1..3), ENUM['a, 'b, 'c]
                   OF INT(0..10);
VAR x : RECORD[a : BOOL,
               b : SET[INT(1..10)],
               c : UNION[d : INT(0..5),
                         e : BOOL]];

r1 := [w, x : 1, y : FALSE, z : 'a];
r2 := [w : 1, x : 2, y : TRUE, z : 'b];
u1 := [z : 'b];
u2 := [w : 3];
s1 := ['red, 'green];
s2 := [];
a1 := [1,'a : 0,  1,'b : 1,  1,'c : 2,
       2,'a : 3,  2,'b : 4,  2,'c : 5,
       3,'a : 6,  3,'b : 7,  3,'c : 8];
a2 := [1..3, 'a..'c : 10];
x := [a : FALSE, b : [2,3], c : [d : 3]];
```

#### §5.7 Value Resolution and User-defined Values — extyperesolutionexample1.jpg
```red
VAR color : ENUM[ 'red, 'orange, 'blue];
VAR fruit : ENUM[ 'apple, 'banana, 'orange];

color := 'orange;    % the subtype of 'orange is
                     %   ENUM[ 'red, 'orange, 'blue]
fruit := 'orange;    % the subtype of 'orange is
                     %   ENUM[ 'apple, 'banana, 'orange]
```

#### §5.7 — extyperesolutionexample2.jpg
```red
VAR r : RECORD[ b : INT(1..10)];
VAR u : UNION[ a,b,c : INT(1..5)];

r := [b : 3];        % the subtype of [b : 3] is
                     %   RECORD[ b : INT(1..10)]
u := [b : 3];        % the subtype of [b : 3] is
                     %   UNION[ a,b,c : INT(0..5)]
```
Notes: declaration says `INT(1..5)` but the comment says `INT(0..5)` — inconsistency in the original, preserved.

#### §5.7 — exspecifytypesubtypeexample3.jpg
```red
PROC p (c : color);                     % definition 1
   ...
END PROC p;

PROC p (f : fruit);                     % definition 2
   ...
END PROC p;

p ('orange);                            % illegal, ambiguous
...
p ('orange#color);                      % legal, invokes def 1
```

#### §5.7 — exspecifytypesubtypeexample4.jpg
```red
ABBREV order1 : ENUM['a, 'b, 'c];
ABBREV order2 : ENUM['c, 'b, 'a];

VAR x : order1;
VAR y : order2;

...   'a < 'c     ...                   % illegal, ambiguous
...   'a#order1 < 'c#order1   ...       % legal, true
...   'a#order2 < 'c#order2   ...       % legal, false
...   x < 'b   ...                      % legal, context resolves 'b to
                                        %   order1
```

#### §5.7 — exspecifytypesubtypeexample5.jpg
```red
VAR s : STRING[ASCII] (5);
VAR x : FLOAT(3, 0.0 .. 100.0);
VAR y : FLOAT(5, 0.0 .. 100.0);
CONST pi := 3.14149;

s := "ABC" & 'CR & 'LF;   % legal, subtype of right-
                          %   hand side is resolved to subtype of
                          %   left hand side
x := pi;                  % subtype of pi is FLOAT(3, 0.0 .. 100.0)
y := pi;                  % subtype of pi is FLOAT(5, 0.0 .. 100.0)
```
Notes: `3.14149` (not 3.14159) is as printed; confirmed by OCR line 5203.

### Chapter 6 — Statements

General transcription notes for Ch 6-9: the images use a typewriter font with slashed zero (rendered here as `0`). In that font the digit `1` and the letter `l` are close to identical; where it matters (identifiers like `side1`, `file1`, `action1`) the choice comes from context and the prose, and is noted. Inside literals like `INT(1..10)` the character is clearly the digit.

#### §6.1 Assignment Statement — stassignmentexample.jpg
```red
VAR x,y : INT(1..10);
VAR a1,a2 : ARRAY INT(1..10) OF BOOL;

a1 := f(a1);
a2 := a1;
a1(1..5) := a2(3..7);
x := 3;
y := x + 1;
```

#### §6.2 Begin Statement — stbeginexample.jpg
```red
BEGIN
   % swap record components
   VAR x : RECORD [a,b : INT(1..10)];
   READ (infile, x);
   BEGIN
      CONST t := x.a;
      x.a := x.b;
      x.b := t;
   END;
   WRITE (outfile, x);
END;
```

#### §6.3 If Statement — stifexample.jpg
```red
IF x < y THEN
   CONST t := x;
   x := y;
   y := t;
END IF;

IF i < j THEN
   k := i;
ELSE
   k := j;
END IF;

IF flag THEN
   i := i + 1;
ELSEIF j < 0 THEN
   i := 1;
ELSEIF k < 0 THEN
   i := 2;
ELSE
   i := i - 1;
END IF;
```

#### §6.4 Case Statement — stcaseexample.jpg
```red
VAR i : INT(-10..10);
...
CASE i
   WHEN     0    => s := "ZERO";
   WHEN -10..-1  => s := "NEG";
   WHEN     1..5 => s := "SMALL";
   ELSE          => s := "LARGE";
END CASE;

VAR u : UNION [
            a : INT(1..10),
            b : BOOL,
            c : INT(-5..5) ]   ;

CASE u.TAG
   WHEN 'a => u.a := u.a + 1;
   WHEN 'b => u.b := NOT u.b;
   WHEN 'c => u.c := -u.c;
END CASE;

CASE TRUE
   WHEN i>=j => max := i;
   WHEN j>=i => max := j;
END CASE;
```
Note: column alignment of the first CASE reproduced approximately; the closing quote of `"ZERO"` is smudged in the scan but legible.

#### §6.5 Repeat Statement — strepeatexample.jpg
```red
r := 0;
q := 0;
WHILE y <= r REPEAT
   r := r - y;
   q := q + 1;
END REPEAT;

VAR a : ARRAY INT(1..n) OF INT(1..n);
FOR i : INT(1..n) REPEAT
   a(i) := i;
END REPEAT;
```

#### §6.6 Exit Statement — stexitexample.jpg
```red
j := 0;
search FOR i : INT(1..n) REPEAT
   IF a(i) = v THEN
      j := i;
      EXIT search;
   END IF;
END REPEAT search;
```
Note: `search` is a matching identifier written before `FOR` with no colon (confirmed by OCR line 5793); contrast the goto label `sort :` in §6.8.

#### §6.7 Return Statement — streturnexample.jpg
```red
FUNC search (a : ARRAY INT OF INT, v : INT) => INDEXOF(a);
   FOR i : INDEXOF(a) REPEAT
      IF a(i) = v THEN
         RETURN i;
      END IF;
   END REPEAT;
   RAISE search_failure;
END FUNC search;
```

#### §6.8 Goto Statement — stgotoexample.jpg
```red
sort : FOR i : INT(1..n-1) REPEAT
   IF a(i) > a(i+1) THEN
      CONST t := a(i);
      a(i) := a(i+1);
      a(i+1) := t;
      GOTO sort;
   END IF;
END REPEAT;
```

### Chapter 7 — Procedures, Functions and Parameters

#### §7.1 Procedure Declaration and Invocation — procprocexample.jpg
```red
PROC swap (VAR x,y : INT);
   CONST t := x;
   x := y;
   y := t;
END PROC swap;
```

#### §7.2 Function Declaration and Invocation — procfuncexample.jpg
```red
FUNC hypot(side1, side2 : FLOAT) => FLOAT;
   RETURN sqrt (side1**2 + side2**2);
END FUNC hypot;
```
Note: `side1` is read as digit 1 by analogy with `side2`; the glyph could also be `l` (OCR reads `sidel`).

#### §7.2.1 Declaring and Using a New Type — procnewtypeexample1.jpg (a normal function with no side-effects)
```red
FUNC fact (i : INT) => INT(1..10000);
   IF i = 0 THEN RETURN 1;
           ELSE RETURN i * fact(i-1);
   END IF;
END FUNC fact;
```

#### §7.2.1 Declaring and Using a New Type — procnewtypeexample2.jpg (fact plus abnormal function factcnt)
```red
CAPSULE c EXPORTS fact, factcnt;
   VAR cnt : INT(0..10000) := 0;

   FUNC fact(i : INT) => INT(1..10000) IMPORTS cnt;
   % The result depends only on the value of
   % the parameter, i.
      VAR r : INT(1..10000) := 1;
      cnt := cnt + 1;
      FOR j : INT(1..i) REPEAT
         r := r * j;
      END REPEAT;
      RETURN r;
   END FUNC fact;

   ABNORMAL FUNC factcnt => INT(0..10000) IMPORTS cnt;
   % The result, r, is not computed based only upon the
   % parameters (of which there are none).
      RETURN cnt;
   END FUNC factcnt;
END CAPSULE c;
```

#### §7.2.1 Declaring and Using a New Type — procnewtypeexample3.jpg (memo function)
```red
CAPSULE fmemo EXPORTS f;

   VAR oldx : INT(1..100) := 1;
   VAR oldy : INT(1..100) := realf (oldx);

   FUNC f (x : INT(1..100)) => INT(1..100) IMPORTS oldx, oldy;
      IF x /= oldx THEN
         oldx := x;
         oldy := realf (oldx);
      END IF;
      RETURN oldy;
   END FUNC f;

   FUNC realf (x : INT(1..100)) => INT(1..100);
      ...
   END FUNC realf;

END CAPSULE fmemo;
```

#### §7.2.1 Declaring and Using a New Type — procnewtypeexample4.jpg (abnormal random number generator)
```red
CAPSULE randcap (initial_seed : INT) EXPORTS random;
   VAR seed : INT(-1000..1000) := initial_seed;
   ABNORMAL FUNC random => INT(-1000..1000) IMPORTS seed;
      seed := next(seed);
      RETURN seed;

      FUNC next (i : INT(-1000..1000)) => INT(-1000..1000);
         % computes next random number
      END FUNC next;
   END FUNC random;
END CAPSULE randcap;
```

#### §7.2.1 Declaring and Using a New Type — procnewtypeexample5.jpg (symbol table)
```red
CAPSULE symtab EXPORTS look_up;
   CONST size := 500;
   ABBREV sym : STRING[ASCII] (8);

   VAR limit : INT(0..size) := 0;

   VAR table : ARRAY INT(1..size) OF sym;

   ABNORMAL FUNC look_up (s : sym) => INT(0..size)
      IMPORTS READONLY limit, READONLY table;

      FOR i : INT(1..size) REPEAT
         IF table(i) = s THEN
            RETURN i;
         END IF;
      END REPEAT;
      RETURN 0;
   END FUNC look_up;

   FUNC insert (s : sym) => INT(1..size)
     IMPORTS limit, table;

      CONST i := lookup (s);
      IF i /= 0 THEN
         RETURN i;
      ELSE
         limit := limit + 1;
         table (limit) := s;
         RETURN limit;
      END IF;
   END FUNC insert;
END CAPSULE symtab;
```
Note: the source is inconsistent, `look_up` in the declaration but `lookup (s)` in `insert` (OCR line 6274 agrees). Transcribed as printed. `IMPORTS limit, table;` under `insert` is indented 5 spaces in the image (one less than the matching line in `look_up`).

### Chapter 8 — Capsules

#### §8.1 Capsule Declaration and Invocation — capgroupexample.jpg (common group of declarations)
```red
CAPSULE device_tables (ntty : INT, nprint : INT) EXPORTS ALL;

   CONST console := 1;

   VAR tty_tab     : ARRAY INT(1 .. ntty)  OF tty_info;
   VAR printer_tab : ARRAY INT(1 .. nprint) OF print_info;

   FOR i : INT(1 .. ntty) REPEAT
      init_tty (tty_tab(i), i);
   END REPEAT;

   FOR i : INT(1 .. nprint) REPEAT
      init_printer (printer_tab(i), i);
   END REPEAT;

END CAPSULE device_tables;

...
% Typical use
EXPOSE ALL FROM NEW device_tables (10,2);
```

#### §8.1 Capsule Declaration and Invocation — capabstractexample.jpg (abstract data type)
```red
CAPSULE queues EXPORTS queue, init_queue, enter, remove;

   ABBREV elem : INT(0..255);

   TYPE queue (n : INT) : RECORD[ first,last :  INT(0 .. n-1),
                                  num       :  INT(0 .. n),
                                  items : ARRAY INT(0 .. n-1)
                                          OF elem];

   PROC init_queue (VAR q : queue);
      ASSERT q.n > 0;
      q.first := 0;
      q.last  := 0;
      q.num   := 0;
   END PROC init_queue;

   PROC enter (VAR q : queue, r : elem);
      ASSERT q.num < q.n;
      q.items(q.last) := r;
      q.last := (q.last + 1) MOD q.n;
      q.num := q.num + 1;
   END PROC enter;

   PROC remove (VAR q : queue, OUT r : elem);
      ASSERT q.num > 0;
      r := q.items(q.first);
      q.first := (q.first + 1) MOD q.n;
      q.num := q.num - 1;
   END PROC remove;

END CAPSULE queues;
```

#### §8.1 Capsule Declaration and Invocation — capexportexample.jpg (exposing a definition to export it)
```red
CAPSULE c EXPORTS x;
   ...
   VAR x ...
   ...
END CAPSULE c;

CAPSULE b EXPORTS x,y;          % only locally known definitions
                                % can be exported.
   VAR y ...
   EXPOSE x FROM c;             % makes x locally
                                % known in b
END CAPSULE b;
```

### Chapter 9 — Exception Handling

#### §9.2 Guard Statement — exceptnamesexample.jpg
```red
GUARD
   OPEN(infile, "file1", 'OLD);
BY
   WHEN X_FILENAME =>
         report( "Bad name-file1" );
   WHEN X_NOFILE =>
         report( "File1 does not exist" );
   WHEN X_FILE =>
         report( "Attempt to open infile twice" );
   ELSE =>
         report( "Unknown error when opening infile" );
END GUARD;
```
Note: `file1` / `File1` could also be `filel` / `Filel` (same glyph; OCR line 6891 reads `filel`). The image file is named "exceptnames" but sits at the end of §9.2 in the HTML.

#### §9.3 Raise Statement — exceptinvokedfuncexample.jpg (handling an exception raised in an invoked function)
```red
FUNC sqrt (x : FLOAT) =>  FLOAT;
   ASSERT x >= 0.0;
   ...
END FUNC sqrt;
...
GUARD
   q := sqrt (r);
BY
   WHEN X_ASSERT =>  q := 0.0;
END GUARD;
...
```

#### §9.3 Raise Statement — excepttryinorderexample.jpg (try action1, then action2)
```red
GUARD
   action1;
BY
   ELSE => action2;
END GUARD;
```
Note: `action1` follows the prose ("action1 and action2"); the glyph is the ambiguous 1/l.

#### §9.3 Raise Statement — exceptmoremeaningfulexample.jpg (changing to a more meaningful exception)
```red
GUARD
   insert (table, new_entry);
BY
   WHEN X_ASSERT => RAISE table_error;
END GUARD;
```

#### §9.4 Reraising Exceptions — exceptlocalcleanupexample.jpg (local cleanup when an exception is raised)
```red
BEGIN
   OPEN (infile, "XYZ", 'NEW);
   GUARD
      % Process infile
      ...
   BY
      ELSE =>
         CLOSE (infile, 'DELETE);
         RERAISE;
   END GUARD;
   CLOSE (infile, 'SAVE);
END;
```

#### §9.4 Reraising Exceptions — exceptretryntimesexample.jpg (retry an action n times before failing)
```red
retry FOR i : INT(1 .. n) REPEAT
   GUARD
      action;
      EXIT retry; % successful completion
   BY
      ELSE =>
         IF i = n THEN
            RERAISE;
         END IF;
   END GUARD;
END REPEAT retry;
```

### Chapter 10 — Multitasking

General note on glyphs: in the typeface used for the examples, digit `1` and lowercase `l` look almost the same. Zero is printed as a slashed `Ø`; it is written here as `0`. Names that come in pairs (`t1`/`t2`, `a1`/`a2`, `s1`/`s2`, `c1`..`c5`) are written with the digit `1`, because the second name of each pair is clearly `2`. The names `ml` (§10.5) and `l` (§11.1.1) are written with the letter `l`; see the notes under those blocks.


#### §10.1 Task declaration, task creation, and activation variables — multiactnamedexample.jpg
```red
TASK t (i : INT);
...
END TASK t;

VAR av : ACT;                % an activation variable
...
CREATE t(3) NAMED av;        % invokes t with actual parameter 3
                             % and associates activation
                             % variable av with this
                             % activation of t
```

#### §10.1 Task declaration, task creation, and activation variables — multischedulerexample.jpg
```red
TASK t;
   ...
END TASK t;

VAR arr : RR_ACT;

CREATE t NAMED arr;
```

#### §10.2 The ACT priority scheduler — multisettingpriorityexample.jpg
```red
TASK t;
   ...
   IF important THEN
      SET_PRIORITY( ME, PRIORITY(ME) + 10 );
   ELSE
      SET_PRIORITY( ME, 10);
   END IF;
   ...
END TASK t;

VAR ta : ACT;
...
SET_PRIORITY( ta, 10 );
CREATE t NAMED ta;
```

#### §10.3 Message passing using mailbox variables — multiproducerexample.jpg
```red
VAR m : MAILBOX[s] (5);

TASK produce IMPORTS m, infile,  READONLY sdone;
   VAR data : s;
   WHILE NOT EOF(infile)  REPEAT
      READ(infile, data);
      SEND(m, data);
   END REPEAT;
   SEND(m, sdone);
END TASK produce;

TASK consume IMPORTS m, outfile,  READONLY sdone;
   VAR data : s;
   WHILE TRUE REPEAT
      RECEIVE(m,data);
      IF data = sdone THEN
         RETURN;
      END IF;
      WRITE(outfile, data);
   END REPEAT;
END TASK consume;

VAR pr, cs : ACT;

CREATE produce NAMED pr;
CREATE consume NAMED cs;
```
Note: the brackets in `MAILBOX[s]` print poorly (OCR reads `MAILBOXLsJ`), but they are square brackets, as in the translation-time property list. In the image, `READONLY sdone` is in bold in both task headers.

#### §10.4 Clocks and delays — multirealtimewaitexample.jpg
(Caption: "Delayminsec waits for i minutes plus j seconds of real time.")
```red
PROC delayminsec (i,j : INT);
   DELAY (i*MINUTES+j*SECONDS);
END PROC delayminsec;
```

#### §10.4 Clocks and delays — multirunningtimeexample.jpg
(Caption: "Measuring the total time in seconds spent in running a procedure p.")
```red
CAPSULE c EXPORTS p,ptime;
   VAR total_time : INT(0..1000000) := 0;
   PROC p IMPORTS total_time;
      VAR enter : INT(0..1000000) := TIME(ME);
      ...
      total_time := total_time + (TIME(ME) - enter) DIV
                                             SECONDS;
   END PROC p;

   ABNORMAL FUNC ptime => INT(0..1000000)
         IMPORTS total_time;
      RETURN total_time;
   END FUNC ptime;
END CAPSULE c;
```

#### §10.4 Clocks and delays — multiacteveryintervalexample.jpg
(The HTML caption repeats "Delayminsec waits ..." by mistake. The OCR caption is "3) Performing an action every i seconds of real time".)
```red
VAR t : INT(0..1000000) := TIME;
WHILE TRUE REPEAT
   action;
   t := t+i*SECONDS
   DELAY_UNTIL (t);
END REPEAT;
```
Note: the semicolon after `t := t+i*SECONDS` is missing in both the image and the OCR, so this is an error in the manual itself. It is kept as printed.

#### §10.4 Clocks and delays — multireuseactvarexample.jpg
(Caption: "Reusing an activation variable.")
```red
BEGIN
   TASK t;
      ...
   END TASK t;

   VAR a : ACT;

   WHILE NOT done REPEAT
      CREATE t NAMED a;
      ...
      DELAY_UNTIL_INACTIVE(a);
   END REPEAT;
END;
```

#### §10.5 Waiting — multibuiltinwaits.jpg
(Built-in waiting invocations.)
```red
SEND(m,v)
RECEIVE(m,v)
DELAY(t)
DELAY_UNTIL(t)
DELAY_UNTIL(t,a)
DELAY_UNTIL_INACTIVE(a)
```

#### §10.5 Waiting — multiwaitonmailboxexample.jpg
```red
% wait on two mailboxes
TASK consume2 IMPORTS m, ml, outfile;
   VAR data : s;
   WHILE TRUE REPEAT
      WAIT
         WHEN RECEIVE(m,data),
              RECEIVE(ml,data) =>
                 WRITE(outfile, data);
      END WAIT;
   END REPEAT;
END TASK consume2;
```
Note: `ml` has the same glyph as the `l` in `outfile`, and the OCR also reads `ml`. It could still be `m1` (letter and digit look alike in this font).

#### §10.6 Shared variables — multimutualexclusionwmailboxesexample.jpg
```red
VAR common : INT(0 .. 10);
VAR m : MAILBOX[ INT(0 .. 0) ](1);

TASK t1 IMPORTS m, common;
   VAR local : INT(0 .. 10);
   VAR right : INT(0..0);
   ...
   RECEIVE( m, right );
      common := local;
   SEND( m, right );
   ...
END TASK t1;

TASK t2 IMPORTS m, READONLY common;
   VAR local : INT(0 .. 10);
   VAR right : INT(0..0);
   ...
   RECEIVE( m, right );
      local := common;
   SEND( m, right );
   ...
END TASK t2;

VAR a1, a2 : ACT;
CREATE t1 NAMED a1;
CREATE t2 NAMED a2;
SEND( m, 0 );
```

#### §10.7 Region statement and data lock variables — multisimplemutualexclusionexample.jpg
```red
VAR common : INT(0 .. 10);
VAR d : DATA_LOCK;

TASK t1 IMPORTS d, common;
   VAR local : INT(0 .. 10);
   ...
   REGION d DO
      common := local;
   END REGION;
   ...
END TASK t1;

TASK t2 IMPORTS d, READONLY common;
   VAR local : INT(0 .. 10);
   ...
   REGION d DO
      local := common;
   END REGION;
   ...
END TASK t2;

VAR a1, a2 : ACT;

CREATE t1 NAMED a1;
CREATE t2 NAMED a2;
```

### Chapter 11 — Overloading and Generics

#### §11 (chapter introduction) — genmatchingsigsexample.jpg
```red
BEGIN
   FUNC iszero (a : INT) => BOOL;       % iszero 1
      RETURN a=0;
   END FUNC iszero;

   FUNC iszero (a : FLOAT) => BOOL;     % iszero 2
      CONST delta := 1.0E-5;
      RETURN a < delta AND a > -delta;
   END FUNC iszero;

   VAR i : INT(-10..10);
   VAR f : FLOAT(10,-10.0 .. 10.0);

   ...iszero (i)...                     % invokes iszero 1
   ...
   ...iszero (f)...                     % invokes iszero 2
   ...
END;
```

#### §11 (chapter introduction) — genoverloadednameresexample.jpg
```red
BEGIN
   FUNC zero [INT] => INT(0..0);                     % zero 1
      RETURN 0;
   END FUNC zero;

   FUNC zero [FLOAT] => FLOAT(10,0.0 .. 0.0);   % zero 2
      RETURN 0.0;
   END FUNC zero;

   ...zero [INT]...       % invokes zero 1
   ...
   ...zero [FLOAT]...     % invokes zero 2
   ...
END;
```

#### §11.1 Interfaces — genericnosignotranslexample.jpg
(No signature and no translation time property list)
```red
PROC p; ... END PROC p;              % definition 1
...
p;                                   % invocation 1
```

#### §11.1 Interfaces — genericsignotranslexample.jpg
(Signature and no translation time property list)
```red
PROC p (x : INT); ... END PROC p;    % definition 2
...
p (3);                               % invocation 2
```

#### §11.1 Interfaces — genericnosigtranslexample.jpg
(Translation time property list but no signature)
```red
PROC p [INT]; ... END PROC p;        % definition 3
...
p [INT];                             % invocation 3
```

#### §11.1 Interfaces — genericsigtranslexample.jpg
(Both a signature and a translation time property list)
```red
PROC p [INT] (x : INT); ... END PROC p;   % definition 4
...
p [INT] (3);                              % invocation 4
```

#### §11.1.1 Signatures — gensignaturesexample.jpg
```red
FUNC sign => BOOL;                    % sign 1
   RETURN FALSE;
END FUNC sign;

FUNC sign (i : INT) => BOOL;          % sign 2
   RETURN i>=0;
END FUNC sign;

FUNC sign (i,j : INT) => BOOL;        % sign 3
   RETURN i+j >= 0;
END FUNC sign;

FUNC sign (x : FLOAT) => BOOL;        % sign 4
   RETURN x>=0.0;
END FUNC sign;

FUNC sign (x,y : FLOAT) => BOOL;      % sign 5
   RETURN x+y >= 0.0;
END FUNC sign;

VAR c1, c2, c3, c4, c5 : BOOL;
VAR k,l : INT(-50..50);
VAR q,r : FLOAT(10, -50.0 .. 50.0);

c1 := sign;           % invokes sign 1
c2 := sign (k);       % invokes sign 2
c3 := sign (k,l);     % invokes sign 3
c4 := sign (q);       % invokes sign 4
c5 := sign (q,r);     % invokes sign 5
```
Note: in `k,l`, the `l` is read as the letter, following the pattern of `q,r`. The digit `1` cannot be ruled out from the glyph alone.

#### §11.1.2 Translation time property list — gentranstimeplexample.jpg
```red
BEGIN
   FUNC zero [INT] => INT(0..0);                          % zero 1
      RETURN 0;
   END FUNC zero;

   FUNC zero [FLOAT, 5] => FLOAT(5,0.0 .. 0.0);       % zero 2
      RETURN 0.0;
   END FUNC zero;

   FUNC zero [FLOAT, 10] => FLOAT(10,0.0 .. 0.0); % zero 3
      RETURN 0.0;
   END FUNC zero;

   ...zero [INT]...           %invokes zero 1
   ...
   ...zero [FLOAT, 5]...      %invokes zero 2
   ...
   ...zero [FLOAT, 10]...     %invokes zero 3
   ...
END;
```

#### §11.2 Explicit overloading — genexplicitoverexample.jpg
```red
BEGIN
   CAPSULE stackcap EXPORTS stack, insert, remove;
      TYPE stack : ... ;

      PROC insert (VAR s : stack, i : INT);              % insert 1
         ...
      END PROC insert;

      PROC remove (VAR s : stack, OUT r : INT);       % remove 1
         ...
      END PROC remove;
   END CAPSULE stackcap;

   CAPSULE queuecap EXPORTS queue, insert, remove;
      TYPE queue : ... ;

      PROC insert (VAR s : queue, i : INT);              % insert 2
         ...
      END PROC insert;

      PROC remove (VAR s : queue, OUT r : INT);       % remove 2
         ...
      END PROC remove;
   END CAPSULE queuecap;

   EXPOSE stackcap;
   EXPOSE queuecap;

   VAR s : stack;
   VAR q : queue;
   VAR j : INT(0..10);

   insert (s, 3);       % invokes insert 1
   ...
   insert (q, 4);       % invokes insert 2
   ...
   remove (s, j);       % invokes remove 1
   ...
   remove (q, j);       % invokes remove 2
   ...
END;
```
Note: in the second `remove`, the `s` in `VAR s : queue` has a print blot, but it is legible as `s`.

#### §11.3.1 Type generic constraints — gentypegenericconstraintexample.jpg
```red
GENERIC t : TYPE
   PROC p (VAR x : t) ; ... END PROC p;

GENERIC t : TYPE
   CAPSULE c[t]; ... END CAPSULE c;

GENERIC i : TYPE (INT, ENUM), t : TYPE(INT,FLOAT)
   PROC q (x : ARRAY i OF t); ... END PROC q;
```

#### §11.3.2 Subtype generic constraints — gensubtypegenericconstraintexample.jpg
```red
% x and y have the same type, but not necessarily the same subtype
GENERIC t : TYPE
    PROC p (VAR x : t, VAR y : t); ... END PROC p;

% x and y have the same subtype, which can be referred to as s
%    within the body
GENERIC s : SUBTYPE
    PROC p (VAR x : s, VAR y : s); ... END PROC p;

% x and y have the same type but not necessarily the same subtype,
%    the subtype of x can be referenced as s1 while the subtype
%    of y can be referenced as s2
GENERIC t : TYPE, s1 : SUBTYPE(t), s2 : SUBTYPE(t)
   PROC p (VAR x : s1, VAR y : s2); ... END PROC p;

GENERIC s1 : SUBTYPE (ENUM), s2 : SUBTYPE (ENUM)
   FUNC f (a : ARRAY s1 OF s2, READONLY b : s2) => s1; ... END FUNC f;

GENERIC  s : SUBTYPE (ENUM)
   TYPE vstring [s] : PTR (n :INT) STRING [s] (n);
```

#### §11.3.3 Operation generic constraints — genopgenericconstraintexample.jpg
```red
GENERIC f : FUNC(FLOAT) => FLOAT
   FUNC integrate [f] (low,high : FLOAT)
                     => FLOAT(20, -10E10 ..1.0E10);
      CONST delta := 1.0E-5;
      VAR r : FLOAT(20, -10E10 .. 1.0E10) := 0.0;
      VAR index : FLOAT(10, -1.0E10 .. 1.0E10) := low;
      WHILE index < high REPEAT
         r := r + delta * f(index);
         index := index + delta;
      END REPEAT;
      RETURN r;
END FUNC integrate;


GENERIC t : TYPE, less_than : FUNC(t,t)=>BOOL
   NEEDS :=(t,t);
      PROC sort [less_than] (VAR a : ARRAY INT OF t);
         CONST min := INDEXOF(a).MIN;
         CONST max := INDEXOF(a).MAX;
         FOR i : INT(1..max-min) REPEAT
            FOR j : REVERSE INT(max-i..max-1) REPEAT
               IF less_than(a(j), a(j+1)) THEN
                  CONST temp := a(i);
                  a(i) := a(i+1);
                  a(i+1) := temp;
               END IF;
            END REPEAT;
         END REPEAT;
      END PROC sort;

ABBREV r : RECORD[p,q,s : INT(0..100)];
VAR a : ARRAY INT(1..100) OF INT(0..100);
VAR b : ARRAY INT(0..500) OF r;

SORT[<] (a);       % sort in ascending order
SORT[>] (a);       % sort in descending order
...
SORT[p] (b);       % sort ascending based on field p
SORT[pq] (b);      % sort ascending on primary key p
                   %  and descending on secondary key q

FUNC p (x,y : r) => BOOL;
   RETURN x.p < y.p;
END FUNC p;

FUNC pq (x,y : r) => BOOL;
   CASE TRUE
      WHEN x.p < y.p => RETURN TRUE;
      WHEN x.p = y.p => RETURN x.q > y.q;
      WHEN x.p > y.p => RETURN FALSE;
   END CASE;
END FUNC pq;
```
Notes:
- The magnitude in `-10E10` is printed without a decimal point in both places, while the other bounds are `1.0E10`. This was confirmed on a cropped close-up and matches the OCR, so it is kept as printed.
- `NEEDS :=(t,t);` ends with a semicolon in the image. In §11.4 the same clause appears as `NEEDS :=(t,t)` with no semicolon.
- `SORT` is in upper case at the call sites, while the declaration is `sort`.
- The body uses `a(i)`/`a(i+1)` in the swap but `a(j)`/`a(j+1)` in the test. This is printed that way and is apparently a bug in the manual.

#### §11.3.4 Value generic constraints — genvaluegenericconstraintexample.jpg
```red
CAPSULE fcap EXPORTS float, :=, +, ...;

   GENERIC i : INT(1..30)
      TYPE float [i] (a,b : FLOAT) : FLOAT (i, a..b);

   GENERIC i : INT(1..30)
      FUNC + (x,y : float [i]) float [i];
         CONST r := x.ALL + y.ALL;
         VAR z := float[i] (r..r);
            z.ALL := r;
      RETURN z;
      END FUNC +;
   ...
END CAPSULE fcap;
```
Note: `FUNC + (x,y : float [i]) float [i];` has no `=>` before the result type, in both the image and the OCR. This is a misprint in the manual. The indentation of `z.ALL := r;` and `RETURN z;` is reproduced as printed.

#### §11.4 Needs list — genneedslistexample.jpg
```red
BEGIN
   GENERIC t : TYPE NEEDS :=(t,t)
      PROC swap (VAR a,b : t);
         CONST c := a;
         a := b;
         b := c;
      END PROC swap;

   VAR i,j : INT(1..10);
   VAR f,g : FLOAT(10, 1.0 .. 10.0);
   ...
   swap (i,j);
   ...
   swap (f,g);
   ...
END;
```
