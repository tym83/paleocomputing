# GREEN / Preliminary Ada (1979): implementation digest

What this covers: the GREEN language (CII Honeywell Bull, design team led by Jean D. Ichbiah) as
published in spring 1979, when it won the DoD-1 competition and was renamed "Preliminary Ada".
That is **before** the 1980 revision (MIL-STD-1815) and the 1983 revision (ANSI/MIL-STD-1815A).

Conventions used in this file:

- `RM79 x.y` is a section of the Preliminary Ada Reference Manual (DTIC ADA071761, part A).
- `RAT79 x.y` is a section of the Rationale bound into the same volume (DTIC ADA071761, part B).
- `INTRO x.y` is a section of "The Green Language: An Informal Introduction" (DTIC ADA070753).
- `RM83 x.y` is a section of ANSI/MIL-STD-1815A-1983 (DTIC ADA131511).
- `⟨?⟩` marks a spot where the OCR is unreadable and could not be checked against a scan.
  `⟨recon: ...⟩` marks a reconstruction of mine, with the reason given.
- All sources are noisy OCR. Every rule below was read in two places: the per-chapter syntax boxes
  in the RM body and Appendix E (Syntax Summary). Where they disagree, the RM body wins, because
  Appendix E is the worse OCR.

---

## 1. Sources

| DTIC id | Title | Date | Pages / state | What it covers |
|---|---|---|---|---|
| ADA071761 | *Preliminary Ada Reference Manual* (part A) + *Rationale for the Design of the Ada Programming Language* (part B). Reprinted as SIGPLAN Notices 14(6) A/B | May 1979. The Secretary of Defense cover letter is dated 14 May 1979 | OCR only, no PDF in the folder. Part A is lines 1–11 450 of the .txt, part B is lines ~11 450–28 616 | **Primary source.** RM chapters 1–14, Appendix A (attributes), B (pragmas), C (package STANDARD), D (glossary), E (syntax summary), index. The Rationale has a design discussion for every chapter, plus an implementation sketch for tasking (RAT79 11.5) |
| ADA070753 | *The Green Language: An Informal Introduction*. Honeywell SRC and CII Honeywell Bull. "Supplement to the Green Reference Manual presented here in draft form" | April 1979 | OCR + PDF. The zero is slashed in the scan, so the OCR shows it as `k)`, `id`, `fc)`, `U`, `lu` | Tutorial built from example programs. Ch. 1 has four small programs; 2 data; 3 expressions and statements; 4 program structure; 5 packages; 6 tasks; 7 exceptions; 8 representation and pragmas; 9 separate compilation. Source of the §6 test corpus |
| ADA073714 | *The Green Language: A Formal Definition* (Preliminary Draft) | April 1979 | OCR + PDF (118 pp.) | Denotational definition (static and dynamic semantics, written as typed procedures over an abstract syntax tree). It embeds a copy of the RM text. Concurrency has no formal dynamic semantics ("pending a scientific breakthrough"). Used here for the **reserved-word table** (PDF p. 21, "2.8 Reserved Words"), which is unreadable in ADA071761 |
| ADA073662 | *Rationale for the Design of the Green Programming Language* | 15–16 March 1979 | OCR | The earlier (pre-award) issue of the Rationale. Content matches part B of ADA071761. Not cited separately below |
| ADA070752 | *Set of Sample Problems for DoD High Order Language Program: Green* | April 1979 | OCR + PDF | Seven worked problems: polled asynchronous interrupt, priority interrupt system, small file package, dynamic picture, database protection module, process control, adaptive routing. Not in the brief. A further test corpus if needed |
| ADA131511 | *Reference Manual for the Ada Programming Language*, ANSI/MIL-STD-1815A-1983 | Feb 1983 | OCR | Comparison baseline only |

Design team (RM79 Foreword): J. D. Ichbiah (lead), B. Krieg-Brueckner, B. A. Wichmann, H. F. Ledgard,
J.-C. Heliard, J.-R. Abrial, J. G. P. Barnes, O. Roubine; contributions from G. Ferran, I. C. Pyle,
S. A. Schuman, S. C. Vestal. Test translator: K. Ripken, P. Boullier, J. F. Hueras, R. G. Lange.
Formal definition: V. Donzeau-Gouge, G. Kahn, B. Lang.

---

## 2. Complete syntax (EBNF transcription of RM79 Appendix E, checked against the chapter boxes)

Notation, as in RM79 1.4: `[x]` is optional, `{x}` is zero or more, `|` is alternation, and **bold**
keywords are written here in lower case. An italic prefix such as `type_name`, `task_name` or
`static_expression` is semantic only: it is the same as the unprefixed category (RM79 1.4(e)). So
`discriminant ::= constant_component_name` means "a name (of a constant component)". It does not
mean the keyword `constant` followed by a name, which is how the OCR reads it.

Terminal delimiters (RM79 2.2): `& ' ( ) * + , - . / : ; < = > |` and the compound delimiters
`=> .. ** := =: :=: /= >= <= << >>`.

### 2.1 Lexical (RM79 2.3–2.7)

```ebnf
(* 2.3 *) identifier       ::= letter { [underscore] letter_or_digit }
          letter_or_digit  ::= letter | digit
          letter           ::= upper_case_letter | lower_case_letter

(* 2.4 *) number             ::= integer_number | approximate_number
          integer_number     ::= integer | based_integer
          integer            ::= digit { [underscore] digit }
          based_integer      ::= base # extended_digit { [underscore] extended_digit }
          base               ::= integer
          extended_digit     ::= digit | letter
          approximate_number ::= integer . integer [ E exponent ]
                               | integer E exponent
          exponent           ::= [ + ] integer | - integer

(* 2.5 *) character_string ::= " { character } "

(* 2.7 *) pragma   ::= pragma identifier [ ( argument { , argument } ) ] ;
          argument ::= identifier | character_string | number
```

### 2.2 Declarations and types (RM79 3)

```ebnf
(* 3.1 *) declaration ::= object_declaration      | type_declaration
                        | subtype_declaration     | private_type_declaration
                        | subprogram_declaration  | module_declaration
                        | entry_declaration       | exception_declaration
                        | renaming_declaration

(* 3.2 *) object_declaration ::= identifier_list : [ constant ] type [ := expression ] ;
          identifier_list    ::= identifier { , identifier }

(* 3.3 *) type            ::= type_definition | type_mark [ constraint ]
          type_definition ::= enumeration_type_definition | integer_type_definition
                            | real_type_definition        | array_type_definition
                            | record_type_definition      | access_type_definition
                            | derived_type_definition
          type_mark       ::= type_name | subtype_name
          constraint      ::= range_constraint | accuracy_constraint
                            | index_constraint | discriminant_constraint
          type_declaration    ::= type identifier [ is type_definition ] ;   (* "type T;" = incomplete *)
          subtype_declaration ::= subtype identifier is type_mark [ constraint ] ;

(* 3.4 *) derived_type_definition ::= new type_mark [ constraint ]

(* 3.5 *) range_constraint ::= range range
          range            ::= simple_expression .. simple_expression

(* 3.5.1 *) enumeration_type_definition ::= ( enumeration_literal { , enumeration_literal } )
            enumeration_literal         ::= identifier | character_literal
            (* character_literal = a character_string of length 1, e.g. "A"  (2.5, 3.5.1) *)

(* 3.5.4 *) integer_type_definition ::= range_constraint

(* 3.5.5 *) real_type_definition ::= accuracy_constraint
            accuracy_constraint  ::= digits simple_expression [ range_constraint ]
                                   | delta  simple_expression [ range_constraint ]

(* 3.6 *) array_type_definition ::= array ( index { , index } ) of type_mark [ constraint ]
          index            ::= discrete_range | type_mark
          discrete_range   ::= [ type_mark range ] range
          index_constraint ::= ( discrete_range { , discrete_range } )

(* 3.6.2 *) aggregate             ::= ( component_association { , component_association } )
            component_association ::= [ choice { | choice } => ] expression
            choice                ::= simple_expression | discrete_range | others

(* 3.7 *) record_type_definition ::= record component_list end record
          component_list ::= { object_declaration } [ variant_part ] | null ;
          variant_part   ::= case discriminant of
                               { when choice { | choice } => component_list }
                             end case ;
          discriminant   ::= constant_component_name

(* 3.7.3 *) discriminant_constraint ::= aggregate

(* 3.8 *) access_type_definition ::= access type
```

### 2.3 Names and expressions (RM79 4)

```ebnf
(* 4.1 *) name ::= identifier | indexed_component | selected_component | predefined_attribute
          indexed_component    ::= name ( expression { , expression } )
          selected_component   ::= name . identifier
          predefined_attribute ::= name ' identifier

(* 4.2 *) literal ::= number | enumeration_literal | character_string | null

(* 4.3 *) variable ::= name [ ( discrete_range ) ] | name . all       (* slice; .all dereference *)

(* 4.4 *) expression ::= relation { and relation }
                       | relation { or  relation }
                       | relation { xor relation }
          relation   ::= simple_expression [ relational_operator simple_expression ]
                       | simple_expression [ not ] in range
                       | simple_expression [ not ] in type_mark [ constraint ]
          simple_expression ::= [ unary_operator ] term { adding_operator term }
          term    ::= factor { multiplying_operator factor }
          factor  ::= primary [ ** primary ]
          primary ::= literal | aggregate | variable | allocator
                    | subprogram_call | qualified_expression | ( expression )

(* 4.5 *) logical_operator        ::= and | or | xor
          relational_operator     ::= = | /= | < | <= | > | >=
          adding_operator         ::= + | - | &
          unary_operator          ::= + | - | not
          multiplying_operator    ::= * | / | mod
          exponentiating_operator ::= **

(* 4.6 *) qualified_expression ::= type_mark ( expression ) | type_mark aggregate

(* 4.7 *) allocator ::= new qualified_expression
```

The factor rule is reconstructed: Appendix E reads `factor primary |** primary|` (OCR `|»* primaryl`),
and the RM79 4.4 box reads `factor primary |*« primaryl`. The rule only makes sense as `[ ** primary ]`,
because `Y**(-3)` "parentheses are necessary" (RM79 4.5).

### 2.4 Statements (RM79 5, 9.3, 9.5–9.7, 9.10, 11.3, 13.8)

```ebnf
(* 5 *) sequence_of_statements ::= { statement }
        statement ::= simple_statement | compound_statement | << identifier >> statement
        simple_statement ::= assignment_statement | subprogram_call_statement
                           | exit_statement       | return_statement
                           | goto_statement       | assert_statement
                           | initiate_statement   | delay_statement
                           | raise_statement      | abort_statement
                           | code_statement       | null ;
        compound_statement ::= if_statement | case_statement
                             | loop_statement | accept_statement
                             | select_statement | block

(* 5.1 *) assignment_statement ::= variable := expression ;

(* 5.2 *) subprogram_call_statement ::= subprogram_call ;
          subprogram_call ::= subprogram_name [ ( parameter_association { , parameter_association } ) ]
          parameter_association ::= [ formal_parameter :=  ] actual_parameter    (* in     *)
                                  | [ formal_parameter =:  ] actual_parameter    (* out    *)
                                  | [ formal_parameter :=: ] actual_parameter    (* in out *)
          formal_parameter ::= identifier
          actual_parameter ::= expression

(* 5.3 *) return_statement ::= return [ expression ] ;

(* 5.4 *) if_statement ::= if condition then sequence_of_statements
                           { elsif condition then sequence_of_statements }
                           [ else sequence_of_statements ]
                           end if ;
          condition ::= expression { and then expression }
                      | expression { or else expression }

(* 5.5 *) case_statement ::= case expression of
                               { when choice { | choice } => sequence_of_statements }
                             end case ;

(* 5.6 *) loop_statement ::= [ iteration_specification ] basic_loop
          basic_loop     ::= loop sequence_of_statements end loop [ identifier ] ;
          iteration_specification ::= for loop_parameter in [ reverse ] discrete_range
                                    | while condition
          loop_parameter ::= identifier

(* 5.7 *) exit_statement   ::= exit [ identifier ] [ when condition ] ;
(* 5.8 *) goto_statement   ::= goto identifier ;
(* 5.9 *) assert_statement ::= assert condition ;

(* 9.3 *) initiate_statement ::= initiate task_designator { , task_designator } ;
          task_designator    ::= task_name [ ( discrete_range ) ]

(* 9.5 *) accept_statement ::= accept entry_name [ formal_part ]
                                 [ do sequence_of_statements end [ identifier ] ] ;

(* 9.6 *) delay_statement ::= delay simple_expression ;

(* 9.7 *) select_statement ::= select
                                 [ when condition => ] select_alternative
                               { or [ when condition => ] select_alternative }
                               [ else sequence_of_statements ]
                               end select ;
          select_alternative ::= accept_statement [ sequence_of_statements ]
                               | delay_statement  [ sequence_of_statements ]

(* 9.10 *) abort_statement ::= abort task_designator { , task_designator } ;
(* 11.3 *) raise_statement ::= raise [ exception_name ] ;
(* 13.8 *) code_statement  ::= qualified_expression ;
```

### 2.5 Declarative parts, subprograms, blocks (RM79 6)

```ebnf
(* 6.1 *) declarative_part ::= { use_clause } { declaration } { representation_specification } { body }
          body      ::= [ visibility_restriction ] unit_body | body_stub
          unit_body ::= subprogram_body | module_specification | module_body

(* 6.2 *) subprogram_declaration ::= subprogram_specification ;
                                   | subprogram_nature designator is generic_instantiation ;
          subprogram_specification ::= [ generic_clause ]
                                       subprogram_nature designator [ formal_part ]
                                       [ return type_mark [ constraint ] ]
          subprogram_nature ::= function | procedure
          designator        ::= identifier | character_string        (* "+" etc. for operators *)
          formal_part ::= ( parameter_declaration { ; parameter_declaration } )
          parameter_declaration ::= identifier_list : mode type_mark [ constraint ] [ := expression ]
          mode ::= [ in ] | out | in out

(* 6.4 *) subprogram_body ::= subprogram_specification is
                                declarative_part
                              begin
                                sequence_of_statements
                              [ exception { exception_handler } ]
                              end [ designator ] ;

(* 6.7 *) block ::= [ declare declarative_part ]
                    begin sequence_of_statements
                    [ exception { exception_handler } ]
                    end [ identifier ] ;
```

`procedure P ... return T` is legal. It is a **value-returning procedure** (RM79 6.5).

### 2.6 Modules: packages and tasks (RM79 7, 9.1)

```ebnf
(* 7.1 *) module_declaration ::= [ visibility_restriction ] module_specification
                               | module_nature identifier [ ( discrete_range ) ] is generic_instantiation ;
          module_specification ::= [ generic_clause ]
                                   module_nature identifier [ ( discrete_range ) ]
                                   [ is declarative_part
                                     [ private declarative_part ]
                                     end [ identifier ] ] ;
          module_nature ::= package | task
          module_body ::= module_nature body identifier is
                            declarative_part
                          [ begin sequence_of_statements ]
                          [ exception { exception_handler } ]
                          end [ identifier ] ;

(* 7.4 *) private_type_declaration ::= [ restricted ] type identifier is private ;
```

A `( discrete_range )` after the module identifier is only legal for tasks, and declares a **task family**
(RM79 7.1, 9.1). `task T;` with no `is ... end` is legal ("a task with no visible part", RM79 9.1).

### 2.7 Visibility and renaming (RM79 8)

```ebnf
(* 8.3 *) visibility_restriction ::= restricted [ visibility_list ]
          visibility_list ::= ( unit_name { , unit_name } )
(* 8.4 *) use_clause ::= use module_name { , module_name } ;
(* 8.5 *) renaming_declaration ::= identifier : type_mark renames name ;
                                 | identifier : exception renames name ;
                                 | subprogram_nature designator renames [ name . ] designator ;
                                 | module_nature identifier renames name ;
(* 9.5 *) entry_declaration ::= entry identifier [ ( discrete_range ) ] [ formal_part ] ;
```

### 2.8 Compilation units (RM79 10)

```ebnf
(* 10.1 *) compilation      ::= { compilation_unit }
           compilation_unit ::= [ visibility_restriction ] [ separate ] unit_body
(* 10.2 *) body_stub ::= subprogram_specification is separate ;
                       | module_nature body identifier is separate ;
```

### 2.9 Exceptions (RM79 11)

```ebnf
(* 11.1 *) exception_declaration ::= identifier_list : exception ;
(* 11.2 *) exception_handler ::= when exception_choice { | exception_choice } => sequence_of_statements
           exception_choice  ::= exception_name | others
```

### 2.10 Generics (RM79 12)

```ebnf
(* 12.1 *) generic_clause    ::= generic [ ( generic_parameter { ; generic_parameter } ) ]
           generic_parameter ::= parameter_declaration
                               | subprogram_specification [ is [ name . ] designator ]
                               | [ restricted ] type identifier
(* 12.2 *) generic_instantiation ::= new name [ ( generic_association { , generic_association } ) ]
           generic_association   ::= parameter_association
                                   | [ formal_parameter is ] [ name . ] designator
                                   | [ formal_parameter is ] type_mark
```

### 2.11 Representation specifications (RM79 13)

```ebnf
(* 13 *)   representation_specification ::= packing_specification | length_specification
                                          | record_type_representation | address_specification
                                          | enumeration_type_representation
(* 13.1 *) packing_specification ::= for type_name use packing ;
(* 13.2 *) length_specification  ::= for name use static_expression ;
(* 13.3 *) enumeration_type_representation ::= for type_name use aggregate ;
(* 13.4 *) record_type_representation ::= for type_name use
                                            record [ alignment_clause ; ]
                                              { component_name location ; }
                                            end record ;
           location         ::= at static_expression range range
           alignment_clause ::= at mod static_expression
(* 13.5 *) address_specification ::= for name use at static_expression ;
```

### 2.12 Remaining OCR doubts in the grammar

- The Appendix E `generic_association` reads `| IformaLparameter 1st Iname. Idesignator`. The RM79 12.2 box
  reads `| Itormal. parameter is | (name. (designator`. Both are read here as `[ formal_parameter is ] [ name . ] designator`,
  which the example `ELEM is INTEGER` (RM79 12.2, 12.3) supports.
- `parameter_declaration`: the colon after `identifier_list` and the `:=` before the default expression are lost in both
  OCR copies. They are restored from every example in RM79 6.3 and 5.2.2.
- No other spot in the grammar remains unreadable.

---

## 3. Lexical rules

**Character set (RM79 2.1).** The basic set is: upper-case letters, digits, the special characters `" # & ' ( ) * + , - . / : ; < = > _ |`,
and space. The OCR of the special-character list is partly lost. That list is ⟨recon: the union of
the characters used by the delimiters in RM79 2.2 plus `" # _`⟩. Lower case and other ASCII characters
are an optional extension. Lower case is equal to upper case everywhere except inside strings.

**Replacements (RM79 2.1).** `!` may replace `|` as the choice separator. `%` may replace `"` as the string bracket.
`:` may replace `#` in a based number.

**Spacing (RM79 2.2).** End of line counts as a space. A lexical unit cannot span lines. Adjacent identifiers
or numbers need at least one space between them.

**Identifiers (RM79 2.3).** `letter {[_] letter_or_digit}`. Single underscores are allowed and **are significant**
("all characters are significant, including underscores"). Case is insensitive. RM83 2.3 also makes
every character significant, so this matches.

**Numbers (RM79 2.4).**
- An integer is `digit {[_] digit}`. Underscores between digits are ignored.
- A based integer is `base#extended_digits`. Bases run 2..16 and the digits A–F stand for 10–15.
  **There is no closing `#`**, and **based literals are integer-only**. Examples: `2#1011_0101` (= 181),
  `16#FFFF` (= 65535), `8#8060` (INTRO 6.6).
- An approximate (real) number is `int.int [E exp]` or `int E exp`. So `1E6` is a **real** literal.
  Examples: `12.0`, `0.456`, `1E6`, `1.0E-6`, `3.14e+3`.
- Spaces are not allowed inside numbers.

**Character strings (RM79 2.5).** A string is written `"..."`, and an embedded `"` is doubled. A string of length 1
is also the **character literal**, as in `"A"`. There is no `'A'` form. The apostrophe is used only for attributes.
A string longer than a line has to be built with `&`. Characters outside the basic set can be written by
catenating identifiers from STANDARD, for example `"AB" & DOLLAR & "CD"` or `"AB" & LC_C & LC_D`.

**Comments (RM79 2.6).** `--` up to end of line. A comment "may only appear following a lexical unit or at the
beginning or end of a program unit."

**Pragmas (RM79 2.7).** `pragma NAME [(arg {, arg})];`. Arguments are positional only, and each one is an
identifier, a string or a number. A pragma is allowed before a program unit and anywhere a declaration
or statement is allowed.

**Reserved words (RM79 2.8; read from the scan of the identical table in ADA073714, PDF p. 21; RAT79 2.1 says
"there are 62 such words").** The count below is 62.

```
abort     declare    generic    of          select
accept    delay      goto       or          separate
access    delta      if         others      subtype
all       digits     in         out         task
and       do         initiate   package     then
array     else       is         packing     type
assert    elsif      loop       pragma      use
at        end        mod        private     when
begin     entry      new        procedure   while
body      exception  not        raise       xor
case      exit       null       range
constant  for                   record
          function              renames
                                restricted
                                return
                                reverse
```

Against RM83 2.9 (63 words): Ada 83 **removed** `assert`, `initiate`, `packing`, `restricted` and **added**
`abs`, `limited`, `rem`, `terminate`, `with`.

Predefined attribute names are not reserved, because they always follow `'` (RAT79 2.1).

---

## 4. Semantics essentials for an implementer

### 4.1 Types and subtypes (RM79 3)

- **Type equivalence is by name, applied strictly.** Every type definition creates a distinct type, even when two
  definitions are textually identical (RM79 3.3). A type definition may appear **anonymously in an object
  declaration**, for example `C, D : (WHITE, GREY, BLACK);` (one type shared by C and D) or `A : (ON, OFF);`.
  The same holds inside record components (`STATUS : (OPEN, CLOSED);`, RM79 3.7.2).
- **Constants must have a type.** `object_declaration` requires `type`. There are no named-number declarations.
  An integer literal whose type is unknown from context is taken to be INTEGER (RM79 3.6).
- **Deferred constants.** These are a record component declared `constant` with no initializer (RM79 3.7.1), or a
  constant of a private type in a visible part that is redeclared in full in the private part (RM79 7.4).
- **Incomplete declaration** `type T;`. The full declaration must follow in the same declarative part (RM79 3.3, 3.8).
- **Derived types** `new T [constraint]` (RM79 3.4). The new type inherits the values, the literals, all visible
  subprogram attributes and the representation spec. Explicit conversion with the parent is allowed.
  `new T C` is equivalent to an anonymous derived type plus a subtype.
- **Scalar.** These are discrete types (enumeration, integer) and real types. Attributes: `FIRST`, `LAST`, and for
  discrete types `SUCC`, `PRED`, `ORD`. **`T'ORD(T'FIRST) = 1`, so positions count from 1.** `SUCC(LAST)` and
  `PRED(FIRST)` raise RANGE_ERROR (RM79 3.5, App. A).
- **Enumeration** (RM79 3.5.1). A literal is an identifier or a 1-character string. Literals may be overloaded across
  types, and qualification resolves the ambiguity. CHARACTER is the full 128-character ASCII set, and
  BOOLEAN is `(FALSE, TRUE)` (RM79 3.5.2–3.5.3).
- **Integer** (RM79 3.5.4). `type T is range L..R` means `new <predefined integer type> range L..R`, where the
  implementation picks one of SHORT_INTEGER, INTEGER or LONG_INTEGER. Machine limits are `SYSTEM'MIN_INT`
  and `SYSTEM'MAX_INT`.
- **Real** (RM79 3.5.5). `digits P [range L..R]` is floating point, mapped onto SHORT_FLOAT, FLOAT or LONG_FLOAT.
  `delta D range L..R` is fixed point, and the range is mandatory. P, D and the fixed-point bounds must be static.
  A subtype may tighten the accuracy: `subtype S_VOLT is VOLT delta 0.5;` or `subtype COEFF is COEFFICIENT digits 8;`.
  Attributes: `DIGITS`, `SMALL`, `LARGE`, `EXPONENT_MIN`, `EXPONENT_MAX` (float); `DELTA`, `SMALL` (the
  largest power of 2 not above delta) and `LARGE` (fixed); `BITS`; `RADIX`.
- **Arrays** (RM79 3.6). Each index is given **either** as a discrete range (bounds fixed for every object of the
  type) **or** as a type mark (an "unconstrained" index: each object supplies its bounds through an index
  constraint, its initial value, or the actual parameter). The two forms cannot be mixed within one type.
  Examples are `type MATRIX is array (INTEGER, INTEGER) of REAL;` and `BOARD : MATRIX(1..8, 1..8);`.
  There is no `range <>`. Bounds may be dynamic ("dynamic arrays", RM79 3.6.1). Inside a record, a dynamic
  bound must be a discriminant. An n-dimensional array is treated as an array of (n−1)-dimensional
  subarrays, so `GRID(2)` is a subarray and `GRID(2)(1..10)` is a slice of it (RM79 4.1.1, 4.3).
- **Aggregates** (RM79 3.6.2). Positional associations come first, then named ones. `others` must come last.
  Choices may be discrete ranges, and each choice must be static except `others`. `others` cannot be used
  in an aggregate that supplies the bounds of an object. A positional aggregate for a type-mark index starts at
  `T'FIRST`. **An expression of a component type also counts as a 1-component aggregate** (RM79 4.4, 4.5.3).
- **Strings** (RM79 3.6.3). `subtype NATURAL is INTEGER range 1..INTEGER'LAST;` and
  `type STRING is array (NATURAL) of CHARACTER;`. **NATURAL starts at 1.** `&` catenates 1-D arrays whose
  index is given by a type mark. STRING is packed (RM79 13.1).
- **Records** (RM79 3.7). Components are object declarations. **A component's default initializer is evaluated
  once, when the record type definition is elaborated** (RM79 3.7), and the same value is then used for
  every object. Recursion is only possible through an access type.
- **Discriminants** (RM79 3.7.1–3.7.3). Green has **no discriminant part**. A discriminant is any deferred-constant
  component that is used as a dynamic array bound or as the selector of a variant part:

  ```ada
  type BUFFER is record
     LENGTH : constant INTEGER range 1 .. MAX_LENGTH;   -- the discriminant
     POS    : INTEGER range 0 .. MAX_LENGTH := 0;
     IMAGE  : array (1 .. LENGTH) of CHARACTER;
  end record;
  CARD : BUFFER(LENGTH => 80);                          -- discriminant_constraint ::= aggregate
  subtype DISK_DEVICE is PERIPHERAL(UNIT => DISK);
  ```
  A discriminant can only change through a complete record assignment, and the discriminant of an object
  designated by an access value can never change (RM79 5.1.2). In a record aggregate, the discriminant
  value must be static and must come before the variant's components (RM79 3.7.3). Selecting a component
  of the wrong variant raises DISCRIMINANT_ERROR (RM79 4.1.2).
- **Access types** (RM79 3.8). `access type`, where `type` may itself be a full type definition:
  `type LIST_ITEM is access record ... end record;`. **Access-to-access is forbidden.** Each access type
  has an implicit collection. `null` belongs to every access type. A **constant** access object can be neither
  reassigned nor used to modify the designated object, and it cannot be assigned to a variable. A constraint
  on an access type applies to the designated object. Dereferencing is implicit for `.component` and
  `(index)`, and `X.all` names the whole object (RM79 4.3). A null dereference raises ACCESS_ERROR. There is no
  deallocation.
- **User-defined attributes** (RM79 3.3, 4.1.2(d)). "Any subprogram with a parameter or result of the type is an
  attribute of the type" and can be named with the type as a prefix, for example `STACK.MAX_SIZE`.
- **Static expressions** (RM79 4.8) are built from literals, static aggregates, constants with static initializers,
  predefined operators, functions and attributes, qualified static expressions, and components of constants.

### 4.2 Expressions (RM79 4.4–4.7)

- Precedence, lowest to highest: logical (`and or xor`, which cannot be mixed without parentheses);
  relational and membership; adding (`+ - &`); unary (`+ - not`); multiplying (`* / mod`); `**`.
- **There is no `rem` and no `abs` operator.** `ABS` is an ordinary function declared in STANDARD (App. C). Its use
  in INTRO 7.1 is `if ABS(DETERMINANT) < EPSILON then`.
- **`mod` has the sign of the left operand:** `A = (A/B)*B + (A mod B)`, `|A mod B| < |B|`, and `(-A)/B = -(A/B) = A/(-B)`
  (RM79 4.5.5). This is Ada 83's `rem`.
- **Short-circuit forms exist only in `condition`** (`if`, `elsif`, `while`, `exit when`, select guards, `assert`).
  They are not allowed in a general expression (RM79 5.4.1).
- Evaluation is left to right (or in any order that gives the same result), and all primaries are evaluated
  (RM79 4.5).
- `=` and `/=` are defined for every type except restricted types. For real types, comparing two values that
  differ by less than `SMALL` or `DELTA` gives an implementation-defined result (RM79 4.5.2). Access equality
  is identity.
- Membership is `x [not] in range` or `x [not] in T [constraint]`, as in `TODAY in DAY range MON..FRI` (RM79 4.5.2).
- Fixed point: fixed\*integer and fixed/integer keep the fixed type. **fixed\*fixed and fixed/fixed produce
  "universal fixed", which must be qualified**, as in `FRAC(F*G)` (RM79 4.5.5).
- `**`: integer ** non-negative integer, or float ** integer (a negative exponent gives the reciprocal) (RM79 4.5.6).
- **Qualification and conversion share one syntax, `T(expr)`.** It states the type of an overloaded literal or
  aggregate, constrains a value to a subtype, or converts numeric types, derived types, and arrays with the same
  or derived index and component types (RM79 4.6). `T aggregate` (no apostrophe) qualifies an aggregate.
- An allocator is `new T(expr)` or `new T aggregate`, which initializes from a qualified expression (RM79 4.7).
- Run-time errors in operators: RANGE_ERROR (outside the type's range), OVERFLOW and UNDERFLOW (implementation
  limits), DIVIDE_ERROR (division or `mod` by zero, RM79 4.5.3–4.5.6).

### 4.3 Statements (RM79 5)

- Assignment checks constraints at run time, raising RANGE_ERROR, INDEX_ERROR or DISCRIMINANT_ERROR.
  **An assignment between overlapping slices of the same array raises OVERLAP_ERROR** (RM79 5.1.1).
- **A label is `<<L>>` and serves both `goto` and `exit L`.** A labeled loop must repeat the label after `end loop`
  (RM79 5.6), and a labeled block must repeat it after `end` (RM79 6.7). Labels within one subprogram or module
  body must be distinct (RM79 5).
- A `for` parameter is an implicitly declared constant. The range is evaluated once (RM79 5.6).
- `case` must cover every value exactly once, and `others` comes last (RM79 5.5).
- `exit` and `goto` cannot leave a subprogram, module, accept statement or handler (RM79 5.7, 5.8).
- `assert condition;` raises ASSERT_ERROR. The check may be suppressed (RM79 5.9).
- `return` cannot appear inside an accept statement (RM79 5.3).

### 4.4 Subprograms (RM79 5.2, 6)

- Modes are `in` (the default, acting as a local constant), `out` and `in out`. Copy or reference passing is up to
  the implementation, and a program that depends on which one is used is erroneous. After an exception,
  `out` and `in out` actuals are undefined (RM79 6.3).
- **The mode is written at the call site in named associations:** `F := x` (in), `F =: v` (out), `F :=: v` (in out).
  A positional actual carries no mark (RM79 5.2.1). Examples are
  `PRINT_HEADER(PAGES := 128, HEADER := TITLE, CENTER := TRUE);` and
  `REORDER_KEYS(NUM_OF_ITEMS, KEY_ARRAY :=: RESULT_TABLE);`.
- Positional associations come before named ones. **Only `in` parameters take defaults**, and once a default is used
  the remaining actuals must be named (RM79 5.2.2). A default is evaluated when the specification is elaborated
  (RM79 6.3).
- **Static anti-aliasing rule:** a variable passed as `out` or `in out` cannot appear as any other actual of the same
  call. Globals the subprogram reads count as implicit `in` parameters, and globals it updates count as implicit
  `in out` parameters (RM79 5.2.3).
- **Functions** take `in` parameters only and **may not have side effects**: no assignment to non-locals, directly
  or through calls. An access-type parameter makes the whole collection an implicit `in` parameter, so nothing
  it designates may be modified, and **allocators cannot appear in a function body**. Falling off the end raises
  NO_VALUE_ERROR (RM79 6.5).
- **Value-returning procedures** (`procedure GENERATOR return INTEGER;`) take `in` parameters only and may
  update globals. They may be called only where those globals are not in scope, and only in an assignment, an
  initialization or a procedure call. Evaluation order follows the text (RM79 6.5).
- Overloading (RM79 6.6). A redeclaration hides an earlier one only if parameter order, names, modes and types and
  the result type all match. Calls are resolved by type, mode and parameter names. Operators are overloaded with
  a string designator (`function "*" (X, Y : MATRIX) return MATRIX;`). **`/=` cannot be overloaded explicitly,
  because it follows `=`**, and a relational operator must return BOOLEAN (RM79 6.6.1).
- All subprograms are reentrant and recursive. `pragma INLINE;` goes **inside the body's declarative part and
  takes no arguments** (RM79 6.4, App. B).
- A subprogram declaration is required only if the subprogram is in a visible part or is called before its body
  (RM79 6.4).

### 4.5 Packages, private and restricted types (RM79 7)

- The specification is `package P is <visible part> [private <private part>] end [P];`. The body is
  `package body P is ... [begin ...] [exception ...] end;`. A package with nothing but data needs no body
  (RM79 7.1–7.2).
- Elaborating a package body runs its statements. Module variables are "own" variables (RM79 7.3).
- `type T is private;` gives clients assignment, predefined `=` and `/=`, and the visible operations.
  **`restricted type T is private;` removes assignment and equality** (RM79 7.4). The full type is declared in the
  private part. A deferred constant of the private type is completed in the private part.
- A user-defined `=` hides the predefined one and with it `/=` (RM79 7.4).

### 4.6 Visibility, separate compilation (RM79 8, 10)

- **Visibility restriction:** `restricted [(U1, U2, ...)]` may prefix **any** subprogram or module, not only a
  compilation unit. With no list, only the predefined identifiers are visible. The first name in the list may
  be an enclosing unit, whose declarations then stay visible. The other names are outer modules, typically library
  modules, which become nameable and usable in `use` (RM79 8.3). A nested restriction may supersede an outer one.
- **Every compilation unit is implicitly restricted with an empty list** (RM79 10.1). So library dependencies are
  declared with `restricted(MATH_LIB, TEXT_IO) procedure QUADRATIC_EQUATION is ...`. This is the 1979 equivalent of
  Ada 83 `with`.
- `use` clauses appear only at the start of a declarative part. An identifier made visible through `use` never hides
  another and is used only if exactly one used module declares it (RM79 8.4). The set of used modules extends up to
  the innermost restricted unit.
- Subunits are written `restricted(TOP [, others]) separate procedure Q(...) is ...` and
  `restricted(TOP) separate package body D is ...`. The first name in the list must be the enclosing compilation
  unit. The stub is `procedure Q(...) is separate;` or `package body D is separate;` (RM79 10.2).
- Order of compilation follows the visibility lists: a specification comes before its body, a parent before its
  subunits (RM79 10.3). The library file carries symbol tables (RM79 10.4). Library modules are elaborated in an
  order consistent with the visibility lists (RM79 10.5).
- `pragma ENVIRONMENT(M, ...)` adds installation modules to the default environment (RM79 8.6, App. B).
- Renaming applies to objects, exceptions, subprograms (**an entry can be renamed as a procedure**) and modules,
  **including tasks:** `task LC renames LINK_CONTROLLER(6);` (RM79 8.5). Renaming a type is done with a subtype.

### 4.7 Exceptions (RM79 11)

**Predefined exceptions (RM79 11.1), 15 in all:**

| Name | Raised when |
|---|---|
| ACCESS_ERROR | dereferencing `null` |
| ASSERT_ERROR | an `assert` condition is false |
| DISCRIMINANT_ERROR | accessing a variant not selected by the discriminant |
| DIVIDE_ERROR | division by zero |
| FAILURE | "for general use", and the **only** exception that can be raised in another task |
| INDEX_ERROR | an index is out of range |
| INITIATE_ERROR | initiating a task that is already active |
| NO_VALUE_ERROR | reading an uninitialized variable, or a function returning without a value |
| OVERFLOW | a result exceeds the implementation limits |
| OVERLAP_ERROR | assigning overlapping slices |
| RANGE_ERROR | exceeding the declared range of a variable or type |
| SELECT_ERROR | every alternative of a select without `else` is closed |
| STORAGE_OVERFLOW | a task's storage or an access collection is exhausted |
| TASKING_ERROR | an error in inter-task communication |
| UNDERFLOW | a floating-point result is too small |

The STANDARD listing in App. C omits INDEX_ERROR from its alphabetical exception list, probably because of the
OCR. The 11.1 table includes it.

- An exception declaration is resolved at compile time: one exception even inside a recursive procedure (RM79 11.1).
- Handlers attach to a block, subprogram body or module body. `others` also catches exceptions whose names are not
  visible. A handler replaces the rest of the unit and may `return` on behalf of a function (RM79 11.2).
- `raise;` re-raises, and is legal only inside a handler (RM79 11.3).
- Propagation (RM79 11.3.1). A block or subprogram propagates to the enclosing or calling point. **A task with no
  handler terminates silently**, and the exception is not propagated. An exception raised inside a handler
  terminates the unit and propagates.
- Exceptions raised during elaboration of the declarations are handled by the unit's own handler, so the handler
  cannot assume the declarations were elaborated (RM79 11.2).
- Tasking (RM79 11.4). Calling an entry or procedure of an inactive task raises TASKING_ERROR in the caller. An
  unhandled exception inside an accept body propagates **both** into the acceptor and into the caller. If the
  acceptor is aborted, the caller gets TASKING_ERROR. If the caller is aborted during the rendezvous, the acceptor
  gets TASKING_ERROR. If a task terminates in the middle of a procedure called from outside, the caller gets
  TASKING_ERROR.
- **`raise T.FAILURE;` raises FAILURE asynchronously in task T** (RM79 11.5). The effects:
  - A delay is cancelled.
  - A queued entry call of T is cancelled.
  - If T is in the middle of a rendezvous as caller, the acceptor gets TASKING_ERROR.
  - If FAILURE is received inside an accept body and not handled there, the caller gets TASKING_ERROR.
  - FAILURE supersedes any other exceptions that have not yet been handled.
- `pragma SUPPRESS(exception_name {, exception_name});` names **exceptions**, not checks (RM79 11.6).

### 4.8 Tasks (RM79 9)

- **A task is a module** (`module_nature = task`) with a specification and a body (RM79 9.1).
  - The **visible part may contain entries, procedures, types (including private types, completed in the task's
    private part), constants and exceptions**. It may not contain variables or modules (RM79 9.1).
  - **Entries may also be declared in the outermost declarative part of the task body** (local entries), for
    example as interrupt entries or entries reached only through visible procedures (RM79 9.5, 9.7 example,
    13.5.1).
- **There are no task types.** The three ways to get several tasks:
  1. **Task families:** `task LINK_CONTROLLER(INTEGER range 1..200) is ... end;`. A member is named
     `LINK_CONTROLLER(I)`, and its entries and procedures as `F(I).E`. Types, constants and exceptions belong to
     the family as a whole: `F.T` (RM79 9.2). Inside the body, the member index is `F'INDEX` (RM79 9.9).
  2. **Generic tasks:** `generic task KEYBOARD is ... end;` then `task MY_KEYBOARD is new KEYBOARD;` (RM79 9.1, 12).
  3. Declaring the task inside a subprogram, which gives one thread of control per call (RM79 9.2).

  There are no access-to-task values and no task objects as components.
- **Lifecycle** (RM79 9.2–9.4):
  - Elaborating a task declaration creates a *potentially active* thread. Its **parent** is the elaborating thread.
  - **The body is elaborated and executed only on `initiate T1, T2, F(3..N);`.** Several tasks in one `initiate`
    become active simultaneously.
  - Initiating an active task raises INITIATE_ERROR. **A terminated task may be initiated again**, giving a fresh
    execution, and its body's declarative part is re-elaborated on every initiation (RAT79 11.4.3).
  - A task cannot be initiated while its parent is inactive. Calls to an inactive task raise TASKING_ERROR.
  - The main program is implicitly a task.
  - A task terminates normally at the end of its body once all its local tasks have terminated. No unit with
    local tasks can be left until they terminate.
  - Storage may be allocated statically (at declaration) or dynamically (at initiation), selectable with
    `pragma CREATION(STATIC|DYNAMIC);`.
- **Rendezvous** (RM79 9.5):
  - An entry is called like a procedure. The accept statement repeats the formal part.
  - There is one FIFO queue per entry, and a task can be on only one queue.
  - Entries can be overloaded with each other and with procedures.
  - Entry families: `entry TRANSFER(TRACK'FIRST..TRACK'LAST)(I : in ITEM);` is called as `TRANSFER(TRACK_A)(J)`.
  - A task may accept only its own entries. Accept statements cannot appear in its visible procedures or in anything
    those procedures call.
  - An accept body cannot initiate a task. Accept statements may nest.
- **`delay e;`** (RM79 9.6). `e` is of the predefined **floating-point** type TIME, measured in basic clock units.
  `SECONDS` is the predefined constant giving the number of units per second, so one writes `delay 3.0*SECONDS;`.
- **Select** (RM79 9.7, RAT79 11.4.10). This is a server-side selective wait only.
  - Alternatives start with `accept` or `delay`, each optionally guarded. Guards are evaluated once, in textual
    order, at the start.
  - When several alternatives are open, the choice is random. Among delays only the shortest counts.
  - `else` runs if nothing can be selected immediately. **`else` and delay alternatives cannot be combined.** At least
    one accept alternative is required.
  - **If every alternative is closed and there is no `else`, SELECT_ERROR is raised.**
  - **There is no terminate alternative, no conditional entry call and no timed entry call.** This is deliberate:
    "There is no corresponding mechanism for a caller to choose between the first of several calls ... a task can
    only be on at most one queue at a time" (RAT79 11.4.10).
- **Priorities** (RM79 9.8). `subtype PRIORITY is INTEGER range SYSTEM'MIN_PRIORITY .. SYSTEM'MAX_PRIORITY;`.
  An initiated task takes its **initiator's** current priority. A task changes its own priority at run time with
  `SET_PRIORITY(P);`. Scheduling is highest priority first, FIFO within a level.
- **Attributes** (RM79 9.9, App. A): `T'ACTIVE`, `T'PRIORITY`, `T'CLOCK` (cumulative CPU time, of type TIME),
  `F'INDEX`, `E'COUNT` (body only), `SYSTEM'CLOCK` (real-time clock). INTRO 8.4 uses `DECODE'TIME` for the
  cumulative time. That is a pre-RM draft name, and the RM says `CLOCK`.
- **Abort** (RM79 9.10). `abort T, F(1..10);` terminates the tasks and all their descendants unconditionally. A
  queued caller is dequeued. The partner of an aborted task in a rendezvous gets TASKING_ERROR. RAT79 11.4.4
  recommends `raise T.FAILURE; delay 20.0*SECONDS; abort T;` as a graceful shutdown sequence.
- **Predefined generic tasks SIGNAL** (entries `SEND` and `WAIT`) **and SEMAPHORE** (entries `P` and `V`). Their
  semantics are given in Green, but implementations may map them to native primitives (RM79 9.11, App. C).
- **Interrupts** (RM79 13.5.1). `for E use at <address>;` binds an entry to a hardware interrupt, which then acts as
  an entry call. Control data arrives as `in` parameters, and interrupts queue.

### 4.9 Generics (RM79 12)

- Subprograms **and modules (packages and tasks)** can be generic. A generic unit is a specification prefixed by
  `generic [( params )]`, and the parameters are separated by `;` (RM79 12.1).
- **Formal parameters** come in three kinds:
  - Objects. Any parameter declaration with mode `in`, `out` or `in out` and an optional default.
  - Types. **`[restricted] type T` is the only formal type kind.** Inside the body the type is private, so every
    other operation has to be passed in as a parameter.
  - Subprograms. A subprogram specification with an optional default: `function "*"(X, Y : T) return T is T."*"`.
    The default may be an attribute of a formal type, prefixed by the type name.
- A later formal may refer to an earlier formal only if the earlier one is a type. Expressions are evaluated when
  the clause is elaborated, unless they depend on a formal type (RM79 12.1).
- **Instantiation** uses `new G(actuals)` inside an ordinary declaration:
  `procedure SWAP is new EXCHANGE(ELEM is INTEGER);`, `package STACK_INT is new STACK(SIZE := 200, ELEM is INTEGER);`,
  `task SEMA is new SEMAPHORE;` (RM79 12.2).
  - Associations are positional or named. Object actuals use the parameter-association arrows, and
    type and subprogram actuals use `is`.
  - A restricted actual type does not match an unrestricted formal.
  - Subprograms match on order, mode, type and constraint of parameters and on the result. Names and defaults are
    ignored.
  - Recursive instantiation is forbidden. A formal used where a static value is needed requires a static actual.
- Non-local names in a generic body are bound when the generic body is elaborated (RM79 12.1).

### 4.10 Representation specifications and machine dependence (RM79 13)

- Representation specs come right after the declarations of a declarative part and must be static. There is one
  representation per type, and a change of representation is done through a derived type plus conversion
  (RM79 13, 13.6).
- `for T use packing;` asks for storage minimization (RM79 13.1).
- `for N use static_expr;` is the **length specification**, and its meaning depends on N (RM79 13.2):
  - For a non-access type, it is the maximum number of **bits** per object, which permits biased representations.
  - For an access type, it is the number of bits reserved for the **collection**.
  - For a task, it is the number of bits per activation.
  - Exceeding the space raises STORAGE_OVERFLOW.
- Enumeration representation (RM79 13.3). A static array aggregate `array (T) of INTEGER` with distinct codes that
  preserve the order. `SUCC`, `PRED` and `ORD` keep their logical meaning.
- Record representation (RM79 13.4). `C at <storage unit> range <bit>..<bit>;`. Storage units and bits are numbered
  from 0, bit order is machine dependent, and `at mod N` sets the alignment. Variants may overlap.
- Address specification (RM79 13.5). `for X use at addr;` applies to a variable, a subprogram or module (code
  address), or an entry (interrupt).
- Configuration pragmas `SYSTEM(name)`, `STORAGE_UNIT(n)` and `MEMORY_SIZE(n)`. Configuration values are read as
  attributes of the predefined name SYSTEM, and compiler options as attributes of OPTION (RM79 13.7).
- Machine code (RM79 13.8). An inline procedure whose statements are all `code_statement`s, each a record aggregate
  from a predefined machine package, as in `SI_FORMAT(CODE => SSM, B => M'BASE, D => M'DISP);`.
- Foreign code (RM79 13.9). A skeleton body whose statement part is only `pragma INTERFACE(FORTRAN);`.
- Unchecked conversion (RM79 13.10). `package UNSAFE_PROGRAMMING is generic(type S; type T) function UNSAFE_CONVERSION(X : S) return T; end;`.
  It is available only to units that name UNSAFE_PROGRAMMING in their visibility list.

### 4.11 Predefined environment

**Package STANDARD (RM79 App. C)**, implicitly visible and unaffected by visibility restrictions (RM79 8.6):

- `type BOOLEAN is (FALSE, TRUE);` with the functions `"not"`, `"and"`, `"or"` and `"xor"`.
- `SHORT_INTEGER`, `INTEGER`, `LONG_INTEGER` (`range` implementation defined). The operations are unary `+` and `-`,
  the function **`ABS`**, binary `+ - * /`, `"mod"`, and `"**"(X : INTEGER; Y : INTEGER range 0 .. INTEGER'LAST)`.
- `SHORT_FLOAT`, `FLOAT`, `LONG_FLOAT` (`digits` implementation defined). The operations are unary `+` and `-`,
  `ABS`, binary `+ - * /`, and `"**"(X : FLOAT; Y : INTEGER)`.
- `type CHARACTER is (NUL, SOH, ..., US, " ", "!", ..., "~", DEL);` with all 128 ASCII characters. Graphic characters
  are 1-character strings, and control characters are identifiers.
  - It is followed by named constants for characters outside the basic set: `EXCLAM`, `DOLLAR`, `QUESTION`, `AT_SIGN`,
    `L_BRACKET`, `BACK_SLASH`, `R_BRACKET`, `CIRCUMFLEX`, `GRAVE`, `LC_A` .. `LC_Z`, `L_BRACE`, `R_BRACE`, `TILDE`.
    The OCR of this list is partial ⟨?⟩: entries for `#`, `%`, `&`, `|` and others may exist and cannot be read.
  - `for CHARACTER use (0, 1, 2, ..., 126, 127);` gives the ASCII codes.
- `subtype NATURAL is INTEGER range 1 .. INTEGER'LAST;`, `type STRING is array (NATURAL) of CHARACTER;`, and
  `for STRING use packing;`.
- `type TIME is digits <impl> range <impl>;` and `SECONDS : constant TIME := <impl>;`.
- `SYSTEM` and `OPTION` (predefined names), `subtype PRIORITY is INTEGER range <impl>;`, and
  `procedure SET_PRIORITY(P : PRIORITY);`.
- The 15 exceptions (§4.7). `generic task SEMAPHORE` and `generic task SIGNAL`.

**Pragmas (RM79 App. B):**

| Pragma | Meaning |
|---|---|
| CREATION(STATIC\|DYNAMIC) | task storage allocation |
| ENVIRONMENT(modules) | before a compilation unit; adds modules to the default environment |
| INCLUDE("file") | textual inclusion |
| INLINE | no arguments, in the body |
| INTERFACE(lang) | foreign body |
| LIST(ON\|OFF) | listing control |
| MEMORY_SIZE(n) | configuration |
| OPTIMIZE(TIME\|SPACE) | optimization criterion |
| PAGE | listing page break |
| STORAGE_UNIT(n) | configuration |
| SUPPRESS(exceptions) | omit run-time checks |
| SYSTEM(name) | target system |

`DEBUG(ON)` appears only as an example of an implementation-defined pragma (RM79 2.7). `TRACE` and `PROFILE` appear
as implementation examples (INTRO 8.3).

**Input-output (RM79 14).** Exact names follow.

`generic (type ELEMENT_TYPE) package INPUT_OUTPUT is` (RM79 14.2):

- `restricted type IN_FILE is private;`, `restricted type OUT_FILE is private;`, `restricted type INOUT_FILE is private;`.
- `CREATE(FILE : in out OUT_FILE|INOUT_FILE; NAME : in STRING)`. There is no CREATE for IN_FILE.
- `OPEN(FILE : in out IN_FILE|OUT_FILE|INOUT_FILE; NAME : in STRING)`.
- `CLOSE(FILE : in out <any file type>)`.
- `IS_OPEN(FILE) return BOOLEAN`, `NAME(FILE) return STRING`, `SIZE(FILE) return INTEGER`.
- `READ(FILE : in IN_FILE|INOUT_FILE; ITEM : out ELEMENT_TYPE)` and `WRITE(FILE : in OUT_FILE|INOUT_FILE; ITEM : in ELEMENT_TYPE)`.
- `NEXT(FILE) return INTEGER` and `SET_NEXT(FILE; POS : in INTEGER := 1)`. File positions count from 1, and
  SET_NEXT rewinds, backspaces or seeks to end.
- `DELETE` is described in 14.1.1 ("breaks the association ... The external file is deleted"), but it does not
  appear in the OCR of the 14.2 specification ⟨?⟩.
- Exceptions `FILE_NAME_ERROR`, `FILE_USE_ERROR`, `FILE_OPEN_ERROR`, `INVALID_DATA`, `MALFUNCTION`, `END_OF_FILE`.
- Usage is `package INT_IO is new INPUT_OUTPUT(INTEGER);`.

`package TEXT_IO is` (RM79 14.3–14.4) is **not generic**:

- `package CHARACTER_IO is new INPUT_OUTPUT(CHARACTER); type IN_FILE is new CHARACTER_IO.IN_FILE; type OUT_FILE is new CHARACTER_IO.OUT_FILE;`
- Overloaded `GET(FILE : in IN_FILE; ITEM : out T)` and `GET(ITEM : out T)`, and `PUT(FILE : in OUT_FILE; ITEM : in T ...)`
  and `PUT(ITEM : in T ...)`, for T = CHARACTER, STRING, INTEGER, FLOAT and BOOLEAN.
  - INTEGER and BOOLEAN PUT take `WIDTH : in INTEGER := DEFAULT_WIDTH` (or `DEFAULT_ENUM_WIDTH`), where both
    constants are 0.
  - FLOAT PUT takes `WIDTH := DEFAULT_FLOAT_WIDTH` (= 0) and `FRACT := DEFAULT_MANTISSA` (= `FLOAT'DIGITS - 1` ⟨?⟩).
- **Generic** `FIXED_IO`. Its parameters are `type FIXED_TYPE`, `REP` and `VAL` defaulting to `FIXED_TYPE'REP` and
  `FIXED_TYPE'VAL`, and ⟨?⟩ a `DECIMALS` default. It provides GET and PUT with `WIDTH` and `FRACT`.
- **Generic** `ENUM_IO` (`type ENUM_TYPE` plus REP and VAL defaults), instantiated as
  `package COLOR_IO is new ENUM_IO(COLOR);`.
- Layout: `LINE(FILE) return NATURAL`, `COL(FILE) return NATURAL`, `SET_LINE(FILE; TO : in NATURAL)`,
  `SET_COL(FILE; TO : in NATURAL)` and `SET_LINE_LENGTH(FILE; N : in NATURAL)`, each overloaded for IN_FILE and
  OUT_FILE. **`NEWLINE : constant STRING := <impl>;` is a string, used as `PUT(NEWLINE);`.** There is no
  NEW_LINE procedure, no PUT_LINE and no GET_LINE.
- `STANDARD_INPUT return IN_FILE`, `STANDARD_OUTPUT return OUT_FILE`, `SET_INPUT(FILE)`, `SET_OUTPUT(FILE)`.
- Exceptions: the six from INPUT_OUTPUT plus `INVALID_LAYOUT`.
- Semantics:
  - CR, LF, BS and TAB (next multiple of 8) adjust the line and column counters.
  - Numeric and enumeration items are lexical units. **Every PUT of a non-character item is preceded by one space,
    except at column 1.** Numbers are right-justified and enumeration items left-justified within WIDTH.
  - If the item does not fit on the line, a new line is started.
  - Floating output is `d.ddd E±ddd`, with a three-digit exponent.
  - Conversions use the `T'REP` and `T'VAL` attributes.

`package LOW_LEVEL_IO` contains overloaded `SEND_CONTROL(DEVICE; DATA : in out ...)` and
`RECEIVE_CONTROL(DEVICE; DATA : in out ...)`, with implementation-defined types (RM79 14.6).

### 4.12 Attributes (RM79 App. A plus chapter text)

| Applies to | Attributes |
|---|---|
| any object or subprogram | `ADDRESS` (integer index in linear memory) |
| any type or subtype (or object) | `SIZE` (bits) |
| scalar | `FIRST`, `LAST`, `REP(X)` (value to string: minimal, upper case, characters in quotes, float with one leading digit and signed 3-digit exponent), `VAL(S)` (string to value, raises RANGE_ERROR) |
| discrete | `SUCC(X)`, `PRED(X)`, `ORD(X)` (1-based, independent of representation), `VAL(I)` (I-th value) |
| numeric | `RADIX` |
| real | `BITS` (mantissa bits) |
| floating | `DIGITS`, `SMALL`, `LARGE`, `EXPONENT_MIN`, `EXPONENT_MAX` |
| fixed | `DELTA`, `SMALL` (power of 2 at or below delta), `LARGE` |
| array object, or array type with bounds | `FIRST`, `LAST`, `LENGTH`, `FIRST(i)`, `LAST(i)`, `LENGTH(i)` |
| access type or object | `ACCESS_SIZE` (size of the pointer itself) |
| record component (as `X.C'...`) | `POSITION` (storage units), `FIRST_BIT`, `LAST_BIT` |
| task | `ACTIVE`, `CLOCK` (cumulative CPU time), `INDEX` (family member), `PRIORITY` |
| entry | `COUNT` |
| `SYSTEM` | `CLOCK`, `MEMORY_SIZE`, `NAME`, `STORAGE_UNIT`, `MAX_PRIORITY`, `MIN_PRIORITY`, `MAX_INT`, `MIN_INT` |
| `OPTION` | `SPACE`, `TIME` |
| implementation-specific examples | `M'BASE`, `M'DISP` (RM79 13.8) |

`VAL` is overloaded: the string form applies to scalars, and the integer form to discrete types.

---

## 5. GREEN / Preliminary Ada (1979) vs Ada 83

Citations are RM79 (or RAT79 / INTRO) on the left and RM83 on the right.

### 5.1 Lexical

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| L1 | Reserved words | 62; includes `assert initiate packing restricted` (RM79 2.8; RAT79 2.1) | 63; drops those four, adds `abs limited rem terminate with` (RM83 2.9) |
| L2 | Character literal | 1-character **string**: `"A"`; `'` is used only for attributes (RM79 2.5, 3.5.1) | `'A'` (RM83 2.5) |
| L3 | Based literals | `16#FFFF`: **no closing `#`, integers only** (RM79 2.4) | `16#FFFF#`, `16#F.F#E2`: closing `#`, based reals allowed (RM83 2.4.2) |
| L4 | `1E6` | approximate (**real**) number (RM79 2.4) | integer literal; an exponent is allowed on integers if non-negative (RM83 2.4.1) |
| L5 | Compound delimiters | include `=:` and `:=:` (named out / in out association); no `<>` (RM79 2.2) | `<>` box; no `=:` or `:=:` (RM83 2.2) |
| L6 | Pragma arguments | identifier, string or number, positional (RM79 2.7) | argument associations, may be named (RM83 2.8) |
| L7 | Comments | allowed only after a lexical unit or at the beginning or end of a unit (RM79 2.6) | anywhere (RM83 2.7) |

### 5.2 Types, declarations, expressions

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| T1 | Named numbers | none; every constant needs a type (RM79 3.2) | `N : constant := 10;`, universal types (RM83 3.2.2, 4.10) |
| T2 | Anonymous types in object declarations | any type definition: `C, D : (WHITE, GREY, BLACK);` (RM79 3.3) | only constrained array definitions (RM83 3.2.1, 3.3.1) |
| T3 | Access to anonymous record | `type L is access record ... end record;` (RM79 3.8) | designated type must be a subtype indication (RM83 3.8) |
| T4 | Unconstrained array syntax | `array (INTEGER) of T` (index given by a type mark) (RM79 3.6) | `array (INTEGER range <>) of T` (RM83 3.6) |
| T5 | NATURAL / STRING | `NATURAL is INTEGER range 1..LAST`; `STRING is array (NATURAL)` (RM79 3.6.3) | `NATURAL` is 0..; `POSITIVE` is 1..; `STRING is array (POSITIVE range <>)` (RM83 8.6 / Annex C, 3.6.3) |
| T6 | Discriminants | no discriminant part; a discriminant is a `constant` component without initializer, used as a bound or variant selector (RM79 3.7.1) | discriminant part `type R (D : T) is record` (RM83 3.7.1) |
| T7 | Record component defaults | evaluated once, when the **type** is elaborated (RM79 3.7) | evaluated for each object, at object creation (RM83 3.7, 3.2.1) |
| T8 | Discrete position | `T'ORD`, 1-based: `T'ORD(T'FIRST) = 1`; `T'VAL(I)` (RM79 3.5, App. A) | `T'POS`, 0-based; `T'VAL` (RM83 3.5.5) |
| T9 | Image / value | `T'REP(X)`, `T'VAL(S)` (string) (App. A) | `T'IMAGE`, `T'VALUE`, discrete types only (RM83 3.5.5) |
| T10 | Other attributes | `BITS`, `RADIX`, `ACCESS_SIZE`, `EXPONENT_MIN`/`_MAX`, `ACTIVE`, `CLOCK`, `INDEX`, `PRIORITY`; `SYSTEM'...`, `OPTION'...` (App. A) | `MANTISSA`, `EMAX`, `EPSILON`, `MACHINE_*`, `CALLABLE`, `TERMINATED`, `STORAGE_SIZE`, `CONSTRAINED`, `BASE`, `WIDTH`, `AFT`, `FORE`, ...; configuration values live in package SYSTEM (RM83 Annex A, 13.7) |
| T11 | `rem` / `abs` | no `rem`; `mod` has the **sign of the left operand** (= Ada 83 `rem`); `ABS` is a function in STANDARD (RM79 4.5.5, App. C) | both `rem` (sign of left) and `mod` (sign of right); `abs` is an operator (RM83 4.5.5, 4.5.6) |
| T12 | Short-circuit | `and then` / `or else` only in `condition` (RM79 5.4) | in any expression (RM83 4.4, 4.5.1) |
| T13 | Qualification vs conversion | one form, `T(expr)` / `T aggregate`, for both (RM79 4.6) | qualification `T'(expr)` (RM83 4.7) is distinct from conversion `T(expr)` (RM83 4.6) |
| T14 | Allocator | `new T(expr)`, `new T aggregate` (RM79 4.7) | `new T`, `new T'(expr)` (RM83 4.8) |
| T15 | Membership | `x in T constraint` allowed: `TODAY in DAY range MON..FRI` (RM79 4.5.2) | `x in range` or `x in type_mark` only (RM83 4.4) |
| T16 | Component-type value as aggregate | an expression of the component type is a 1-component aggregate (RM79 4.4) | 1-component aggregate must be named; `&` accepts a component explicitly (RM83 4.3, 4.5.3) |
| T17 | Uninitialized variable | read raises NO_VALUE_ERROR (RM79 11.1) | erroneous; no exception required (RM83 3.2.1) |
| T18 | Overlapping slice assignment | raises OVERLAP_ERROR (RM79 5.1.1) | well defined, as if copied via a temporary (RM83 5.2.1) |
| T19 | User-defined attributes | any subprogram with a parameter or result of type T is "an attribute" of T, nameable as `T.F` (RM79 3.3, 4.1.2(d)) | none |
| T20 | Private types | `private` (assignment, `=`) and **`restricted ... private`** (neither) (RM79 7.4) | `private` and **`limited private`** (RM83 7.4.1, 7.4.4) |

### 5.3 Statements and subprograms

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| S1 | `assert` | `assert condition;` raises ASSERT_ERROR (RM79 5.9) | none (it returns only in Ada 2005 as a pragma) |
| S2 | Loop and block names | `<<L>>` label, serving both goto and exit; repeated after `end loop` or `end` (RM79 5.6, 6.7) | `L: loop` / `L: declare` names (RM83 5.5, 5.6); `<<L>>` only for goto (RM83 5.1) |
| S3 | Named association | mode-specific: `:=` in, `=:` out, `:=:` in out (RM79 5.2) | `=>` for every mode (RM83 6.4) |
| S4 | Aliasing | statically forbidden; globals count as implicit parameters (RM79 5.2.3) | not forbidden; a mechanism-dependent result is erroneous (RM83 6.2) |
| S5 | Functions | **no side effects**, no allocators; access parameters freeze the collection (RM79 6.5) | side effects allowed (RM83 6.5) |
| S6 | Value-returning procedures | `procedure P return T;` may update globals, with call-site restrictions (RM79 6.5) | none |
| S7 | Missing return | NO_VALUE_ERROR (RM79 6.5) | PROGRAM_ERROR (RM83 6.5) |
| S8 | pragma INLINE | no arguments, inside the body (RM79 6.4, App. B) | `pragma INLINE(names)` in the declarative part (RM83 6.3.2) |
| S9 | Declarative part order | fixed: `use` clauses, declarations, rep specs, bodies (RM79 6.1) | basic items (including use and rep clauses) then later items (RM83 3.9) |

### 5.4 Program structure, visibility, compilation

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| P1 | Library dependency | **`restricted(M1, M2)`** visibility restriction prefixing the unit; every compilation unit implicitly `restricted` with an empty list (RM79 8.3, 10.1) | `with M1, M2;` context clause (RM83 10.1.1) |
| P2 | Restriction on nested units | any nested subprogram or module may carry `restricted(...)` to *narrow* its visibility (RM79 8.3) | no equivalent |
| P3 | Subunit header | `restricted(TOP) separate procedure Q ... is` (RM79 10.2) | `separate (TOP) procedure Q ... is` (RM83 10.2) |
| P4 | `use` placement | only at the start of a declarative part (RM79 6.1, 8.4) | also in context clauses and anywhere among basic declarative items (RM83 8.4, 10.1.1) |
| P5 | Default environment extension | `pragma ENVIRONMENT(...)` (RM79 8.6) | none (STANDARD only) |
| P6 | Task renaming | `task LC renames LINK_CONTROLLER(6);` (RM79 8.5) | tasks are objects and are renamed as objects (RM83 8.5) |
| P7 | Elaboration order control | implicit partial order from the visibility lists (RM79 10.5) | adds `pragma ELABORATE` (RM83 10.5) |
| P8 | Textual inclusion | `pragma INCLUDE("file")` (App. B) | none |

### 5.5 Tasking

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| K1 | Multiple tasks | **no task types.** Single tasks, **task families** `task F(INTEGER range 1..200)`, and **generic tasks** (RM79 9.1, 9.2, 12) | `task type`, task objects, arrays, records, access-to-task (RM83 9.1, 9.2) |
| K2 | Start | explicit **`initiate T, F(3..N);`** (RM79 9.3; RAT79 11.4.4 explains why automatic activation was rejected) | automatic activation at the `begin` of the declaring unit, or on allocation (RM83 9.3) |
| K3 | Restart | a terminated task may be re-initiated; INITIATE_ERROR if it is already active (RM79 9.3) | not possible |
| K4 | Task specification contents | entries, **procedures**, **types (with a private part)**, constants, exceptions (RM79 9.1, 9.7) | entries and representation clauses only (RM83 9.1) |
| K5 | Entry declarations | allowed in the specification **or in the outermost declarative part of the body** (RM79 9.5) | specification only (RM83 9.5) |
| K6 | Selective wait alternatives | `accept`, `delay`, `else`; **no `terminate`**; `else` and `delay` are mutually exclusive (RM79 9.7) | `accept`, `delay`, `terminate`, `else`; at most one of `else`, `terminate` or delay (RM83 9.7.1) |
| K7 | All guards closed, no `else` | SELECT_ERROR (RM79 9.7) | PROGRAM_ERROR (RM83 9.7.1) |
| K8 | Caller-side select | **none**, by design: "a task can only be on at most one queue" (RAT79 11.4.10) | conditional entry call and timed entry call (RM83 9.7.2, 9.7.3) |
| K9 | Delay type | `TIME` is **floating point**, in clock units; `delay 3.0*SECONDS;` (RM79 9.6, App. C) | `DURATION` is fixed point, in seconds; `delay 3.0;`; package CALENDAR (RM83 9.6) |
| K10 | Priorities | **dynamic**: `SET_PRIORITY(P)`; an initiated task inherits the initiator's priority (RM79 9.8) | static `pragma PRIORITY` (RM83 9.8) |
| K11 | Task attributes | `ACTIVE`, `PRIORITY`, `CLOCK` (CPU time), `INDEX`; `E'COUNT`; `SYSTEM'CLOCK` (RM79 9.9) | `CALLABLE`, `TERMINATED`, `STORAGE_SIZE`; `E'COUNT` (RM83 9.9) |
| K12 | Asynchronous exception | `raise T.FAILURE;` (RM79 11.5) | none; only `abort` (RM83 9.10, 11.5) |
| K13 | Predefined synchronizers | generic tasks `SIGNAL` (SEND/WAIT) and `SEMAPHORE` (P/V) in STANDARD (RM79 9.11) | none |
| K14 | Task storage | `pragma CREATION(STATIC|DYNAMIC)`; length spec `for T use n;` in bits (RM79 9.2, 13.2) | `for T'STORAGE_SIZE use n;` in storage units (RM83 13.2) |
| K15 | Parent and termination | parent = the elaborating thread; a unit cannot be left until its local tasks terminate (RM79 9.2, 9.4) | master/dependence model plus terminate alternative for collective termination (RM83 9.4) |
| K16 | Task procedures | a visible procedure of task T executes in the **caller's** thread, may call T's local entries, and raises TASKING_ERROR if T terminates during the call (RM79 9.5, 11.4) | none |

### 5.6 Exceptions

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| E1 | Predefined exceptions | 15 fine-grained ones (RM79 11.1; table in §4.7) | 5: CONSTRAINT_ERROR, NUMERIC_ERROR, PROGRAM_ERROR, STORAGE_ERROR, TASKING_ERROR (RM83 11.1) |
| E2 | Nearest mapping (my reading, not stated in either RM) | RANGE_ERROR, INDEX_ERROR, DISCRIMINANT_ERROR, ACCESS_ERROR → CONSTRAINT_ERROR; OVERFLOW, UNDERFLOW, DIVIDE_ERROR → NUMERIC_ERROR; SELECT_ERROR, NO_VALUE_ERROR (function end) → PROGRAM_ERROR; STORAGE_OVERFLOW → STORAGE_ERROR; TASKING_ERROR → TASKING_ERROR; ASSERT_ERROR, OVERLAP_ERROR, INITIATE_ERROR, FAILURE → no counterpart | — |
| E3 | SUPPRESS argument | exception names (RM79 11.6) | check names: RANGE_CHECK, INDEX_CHECK, OVERFLOW_CHECK, ... (RM83 11.7) |

### 5.7 Generics

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| G1 | Generic header | `generic (SIZE : INTEGER; type ELEM)` as a parenthesized list, part of the specification (RM79 12.1) | `generic SIZE : INTEGER; type ELEM is private;` as a sequence of declarations (RM83 12.1) |
| G2 | Formal types | only `[restricted] type T` (private semantics) (RM79 12.1) | `private`, `limited private`, `(<>)`, `range <>`, `digits <>`, `delta <>`, array, access (RM83 12.1.2) |
| G3 | Formal subprograms | specification `[is [T.]designator]` default; no `with` (RM79 12.1) | `with function ... [is name | is <>]` (RM83 12.1.3) |
| G4 | Actuals | `SIZE := 200, ELEM is INTEGER` (RM79 12.2) | `SIZE => 200, ELEM => INTEGER` (RM83 12.3) |
| G5 | Generic units | subprograms, packages **and tasks** (RM79 12, 9.1) | subprograms and packages only (RM83 12.1) |

### 5.8 Representation, unsafe features, configuration

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| R1 | Packing | `for T use packing;` (RM79 13.1) | `pragma PACK(T);` (RM83 13.1) |
| R2 | Length specification | `for N use expr;`, meaning depends on N (bits per object, bits per collection, bits per task activation) (RM79 13.2) | attribute designators: `for T'SIZE use`, `for T'STORAGE_SIZE use`, `for T'SMALL use` (RM83 13.2) |
| R3 | Configuration | pragmas `SYSTEM(name)`, `STORAGE_UNIT`, `MEMORY_SIZE`; values read as `SYSTEM'NAME`, `SYSTEM'MAX_INT`, ...; options as `OPTION'TIME` / `OPTION'SPACE` (RM79 13.7) | pragmas `SYSTEM_NAME`, `STORAGE_UNIT`, `MEMORY_SIZE`; constants in **package SYSTEM** (`SYSTEM.MAX_INT`, ...) (RM83 13.7) |
| R4 | Unchecked conversion | `UNSAFE_PROGRAMMING.UNSAFE_CONVERSION`, generic `(type S; type T)` (RM79 13.10) | `UNCHECKED_CONVERSION` plus `UNCHECKED_DEALLOCATION` (RM83 13.10) |
| R5 | Deallocation | none (RM79 3.8) | `UNCHECKED_DEALLOCATION`, `pragma CONTROLLED` (RM83 13.10.1, 4.8) |
| R6 | Foreign language | skeleton body whose statements are `pragma INTERFACE(FORTRAN);` (RM79 13.9) | `pragma INTERFACE(FORTRAN, GAUSS);` with no body (RM83 13.9) |
| R7 | Unchanged | record representation syntax (`at ... range`, `at mod`), address specification `for X use at`, interrupt entries, enumeration aggregates, change of representation through a derived type (RM79 13.3–13.6) | same constructs (RM83 13.3–13.6) |

### 5.9 Input-output

| # | Topic | Green 1979 | Ada 83 |
|---|---|---|---|
| I1 | Binary I/O | one generic `INPUT_OUTPUT` with three restricted file types `IN_FILE`, `OUT_FILE`, `INOUT_FILE`; `NEXT` / `SET_NEXT` positioning (RM79 14.1–14.2) | `SEQUENTIAL_IO` and `DIRECT_IO` with one `FILE_TYPE` and a `FILE_MODE` (RM83 14.2) |
| I2 | Text I/O | non-generic GET/PUT for INTEGER, FLOAT, BOOLEAN; generic `FIXED_IO`, `ENUM_IO`; `NEWLINE` is a **string constant** (RM79 14.4) | generic `INTEGER_IO`, `FLOAT_IO`, `FIXED_IO`, `ENUMERATION_IO` nested in TEXT_IO; `NEW_LINE`, `PUT_LINE`, `GET_LINE`, pages (RM83 14.3) |
| I3 | I/O exceptions | FILE_NAME_ERROR, FILE_USE_ERROR, FILE_OPEN_ERROR, INVALID_DATA, MALFUNCTION, END_OF_FILE, INVALID_LAYOUT (RM79 14.2, 14.4) | NAME_ERROR, USE_ERROR, STATUS_ERROR, MODE_ERROR, DATA_ERROR, DEVICE_ERROR, END_ERROR, LAYOUT_ERROR in IO_EXCEPTIONS (RM83 14.4–14.5) |
| I4 | Low level | `LOW_LEVEL_IO.SEND_CONTROL` / `RECEIVE_CONTROL` (RM79 14.6) | same names (RM83 14.6) |

---

## 6. Test corpus

Sources: the Informal Introduction (INTRO), with four additional programs from RM79 at the end.
OCR fixes made in transcription: the slashed zero is restored (`k)`, `id`, `fc)` → `0`), `-` read for `*` is
corrected where the meaning is certain, and `;` is restored where it was dropped. Anything not certain is
marked. Comments are kept verbatim.

### 6.1 Temperature conversion (INTRO Example 1.1)

```ada
restricted (TEXT_IO)
procedure TEMPERATURE_CONVERSION is
   use TEXT_IO;
   -- A comment.
   -- This program reads a value representing a
   -- fahrenheit temperature and converts it to a
   -- value representing its centigrade equivalent.
   type REAL is digits 7;
   FAHRENHEIT_TEMP, CENTIGRADE_TEMP : REAL;
begin
   GET(FAHRENHEIT_TEMP);
   CENTIGRADE_TEMP := (5.0/9.0) * (FAHRENHEIT_TEMP - 32.0);
   PUT(CENTIGRADE_TEMP);
end;
```

`PUT(REAL)` is not declared in TEXT_IO, which provides only FLOAT. The introduction overlooks this.
A test should either expect an error here or instantiate an equivalent package.

### 6.2 Counting change (INTRO Example 1.2)

```ada
restricted (TEXT_IO)
procedure COUNT_YOUR_CHANGE is
   use TEXT_IO;
   -- This program reads in 6 integer values, respectively
   -- representing the number of pennies, nickels, dimes, quarters,
   -- half dollars, and silver dollars in coinage.
   -- The program outputs the total value of the coins in dollars
   -- and cents.
   COIN_COUNT,
   TOTAL_CHANGE,
   NUM_CENTS,
   NUM_DOLLARS : INTEGER;
   COIN_VALUE : constant array (1..6) of INTEGER :=
                (01, 05, 10, 25, 50, 100);
begin
   TOTAL_CHANGE := 0;
   for NEXT_COIN in 1..6 loop
      GET(COIN_COUNT);
      TOTAL_CHANGE := TOTAL_CHANGE + COIN_VALUE(NEXT_COIN)*COIN_COUNT;
   end loop;
   if TOTAL_CHANGE = 0 then
      PUT("NO CHANGE");
   else
      NUM_DOLLARS := TOTAL_CHANGE/100;
      NUM_CENTS   := TOTAL_CHANGE mod 100;
      PUT("CHANGE IS $");
      PUT(NUM_DOLLARS);
      PUT(".");
      PUT(NUM_CENTS);
   end if;
end;
```

### 6.3 Counting change with an enumeration type (INTRO Example 1.3)

```ada
restricted (TEXT_IO)
procedure COUNT_YOUR_CHANGE is
   use TEXT_IO;
   type COIN is (PENNY, NICKEL, DIME, QUARTER, HALF_DOLLAR, DOLLAR);
   COIN_COUNT,
   TOTAL_CHANGE,
   NUM_CENTS,
   NUM_DOLLARS : INTEGER;
   COIN_VALUE : constant array (PENNY .. DOLLAR) of INTEGER :=
                (PENNY => 01, NICKEL => 05, DIME => 10,
                 QUARTER => 25, HALF_DOLLAR => 50, DOLLAR => 100);
begin
   TOTAL_CHANGE := 0;
   for NEXT_COIN in PENNY .. DOLLAR loop
      GET(COIN_COUNT);
      TOTAL_CHANGE := TOTAL_CHANGE + COIN_VALUE(NEXT_COIN)*COIN_COUNT;
   end loop;
   if TOTAL_CHANGE = 0 then
      PUT("NO CHANGE");
   else
      NUM_DOLLARS := TOTAL_CHANGE/100;
      NUM_CENTS   := TOTAL_CHANGE mod 100;
      PUT("CHANGE IS $");
      PUT(NUM_DOLLARS);
      PUT(".");
      PUT(NUM_CENTS);
   end if;
end;
```

### 6.4 Target practice, a nested procedure with in/out parameters (INTRO Example 1.4)

```ada
restricted (TEXT_IO)
procedure TARGET_PRACTICE is
   use TEXT_IO;
   -- This program reads in four values, respectively representing
   -- the X and Y velocities of a projectile, the distance to a
   -- target, and the height of the target.
   -- It prints a message indicating whether the projectile will
   -- hit the target or not.
   type REAL is digits 7;
   X_VELOCITY, Y_VELOCITY,
   TARGET_DISTANCE, TARGET_HEIGHT, NET_RISE : REAL;
   G : constant REAL := 32.2;

   procedure COMPUTE_RISE (V_X, V_Y, DISTANCE : in REAL; RISE : out REAL) is
      TIME : REAL;
   begin
      TIME := DISTANCE/V_X;
      RISE := V_Y*TIME - (G/2.0)*(TIME**2);
   end;

begin
   GET(X_VELOCITY);
   GET(Y_VELOCITY);
   GET(TARGET_DISTANCE);
   GET(TARGET_HEIGHT);
   COMPUTE_RISE(X_VELOCITY, Y_VELOCITY, TARGET_DISTANCE, NET_RISE);
   if NET_RISE > 0 and NET_RISE < TARGET_HEIGHT then
      PUT("HIT");
   else
      PUT("MISS");
   end if;
end;
```

Two notes. The original prints `NET_RISE > 0` with an integer literal against a REAL, which is a type error under
RM79 4.2/4.5.2; a test can treat it as a negative case. The `;` after `32.2` is missing in the scan and has been
restored.

### 6.5 Unconstrained array parameter (INTRO 2, "arrays of arbitrary size")

```ada
NUM_APPLICANTS : constant INTEGER := 20;
NUM_EMPLOYEES  : constant INTEGER := 1000;
MAX_SCORE, MAX_WAGE : INTEGER;
type ANY_INTEGER_ARRAY is array (INTEGER) of INTEGER;
SCORE_TABLE : ANY_INTEGER_ARRAY(1 .. NUM_APPLICANTS);
WAGE_TABLE  : ANY_INTEGER_ARRAY(1 .. NUM_EMPLOYEES);

procedure GET_MAX (A : in ANY_INTEGER_ARRAY; MAX : out INTEGER) is
begin
   MAX := A(A'FIRST);
   for I in A'FIRST + 1 .. A'LAST loop
      if A(I) > MAX then
         MAX := A(I);
      end if;
   end loop;
end;

-- GET_MAX(SCORE_TABLE, MAX_SCORE);
-- GET_MAX(WAGE_TABLE, MAX_WAGE);
```

### 6.6 Package with private type (INTRO 5.4)

```ada
package SIMPLE_INPUT_OUTPUT is
   type FILE_NAME is private;      -- or: restricted type FILE_NAME is private;
   procedure OPEN  (F : out FILE_NAME);
   procedure READ  (ITEM : out INTEGER; F : in FILE_NAME);
   procedure WRITE (ITEM : in INTEGER;  F : in FILE_NAME);
private
   type FILE_NAME is new INTEGER range 0 .. 50;   -- verified against the scan (PDF p. 65)
end;

package body SIMPLE_INPUT_OUTPUT is
   -- implementation of file handling procedures
end;
```

### 6.7 Table manager package (INTRO 5.3 and Example 5.1; same as RM79 7.5)

```ada
package TABLE_MANAGER is
   type ITEM is
      record
         ORDER_NUM : INTEGER;
         ITEM_CODE : INTEGER;
         ITEM_TYPE : CHARACTER;
         QUANTITY  : INTEGER;
      end record;
   NULL_ITEM : constant ITEM :=
      (ORDER_NUM | ITEM_CODE | QUANTITY => 0, ITEM_TYPE => " ");
   procedure INSERT   (NEW_ITEM : in ITEM);
   procedure RETRIEVE (FIRST_ITEM : out ITEM);
end;

package body TABLE_MANAGER is
   SIZE : constant INTEGER := 2000;
   subtype INDEX is INTEGER range 0 .. SIZE;
   type INTERNAL_ITEM is
      record
         CONTENT   : ITEM;
         NEXT_ITEM : INDEX;
         PREV_ITEM : INDEX;
      end record;
   TABLE : array (INDEX) of INTERNAL_ITEM;
   FIRST_FREE_ITEM : INDEX := 0;    -- INTRO prints 0 here; RM79 7.5 has FIRST_BUSY_ITEM := 0, FIRST_FREE_ITEM := 1
   FIRST_BUSY_ITEM : INDEX := 1;
   function FREE_LIST_EMPTY return BOOLEAN is ... end;
   function BUSY_LIST_EMPTY return BOOLEAN is ... end;
   procedure EXCHANGE (FROM, TO : in INDEX) is ... end;
   procedure INSERT   (NEW_ITEM : in ITEM) is ... end;
   procedure RETRIEVE (FIRST_ITEM : out ITEM) is ... end;
begin
   -- code for initialization of the table linkages
end TABLE_MANAGER;
```

The `...` bodies are elisions in the source. RM79 7.5 adds `TABLE_FULL : exception;` and shows the start of INSERT:
`if FREE_LIST_EMPTY then raise TABLE_FULL; end if;`.

### 6.8 Exceptions: matrix inversion (INTRO Example 7.1, with the `others` variant from 7.3)

```ada
procedure INVERT_MATRICES is
   SINGULAR : exception;
   type REAL is digits 10;
   type MATRIX is array (NATURAL, NATURAL) of REAL;

   procedure INVERT (M : in out MATRIX) is
      DETERMINANT : REAL;
      EPSILON : constant REAL := 1E-10;
   begin
      -- compute the determinant of the matrix;
      if ABS(DETERMINANT) < EPSILON then
         raise SINGULAR;
      end if;
      -- complete computation of the inverse;
   end;

   procedure TREAT_ONE_MATRIX is
      M : MATRIX;                     -- sic: needs an index constraint (RM79 3.6)
   begin
      READ(M);
      INVERT(M);
      PRINT(M);
   exception
      when SINGULAR => PUT("MATRIX IS SINGULAR");
      when others   => PUT("UNEXPECTED ERROR");     -- variant from INTRO 7.3
   end;

begin
   for I in 1 .. 20 loop
      PUT("ITERATION");
      PUT(I);
      TREAT_ONE_MATRIX;
   end loop;
end;
```

The program uses READ, PRINT and PUT without declaring them or giving a visibility list, so it is a sketch.

### 6.9 Tasking: message decoding, final version (INTRO Example 6.3)

This shows `initiate`, a guarded select, `else`, a local interrupt entry and the address specification.

```ada
procedure MESSAGE_DECODING is

   task GENERATE_MESSAGES;

   task DECODE is
      entry SEND_CHAR    (C : in CHARACTER);
      entry RECEIVE_CHAR (C : out CHARACTER);
   end;

   task PRINT_MESSAGES;

   task body GENERATE_MESSAGES is
      NEXT_CODE : CHARACTER;
      entry STOP;
      for STOP use at 8#8060;          -- physical address of interrupt (scan, PDF p. 79; sic: digit 8 is not octal)
   begin
      loop
         select
            accept STOP;
            exit;
         else
            -- code for receiving data and
            -- generating NEXT_CODE
            DECODE.SEND_CHAR(NEXT_CODE);
         end select;
      end loop;
      DECODE.SEND_CHAR(END_OF_TRANSMISSION);
   end;

   task body DECODE is
      STORAGE_SIZE : constant INTEGER := 500;
      COUNT : INTEGER range 0 .. STORAGE_SIZE;
      IN_INDEX, OUT_INDEX : INTEGER range 1 .. STORAGE_SIZE;
      CODE, CHAR : CHARACTER;
      STORAGE_AREA : array (1 .. STORAGE_SIZE) of CHARACTER;
   begin
      COUNT := 0;
      IN_INDEX := 1;
      OUT_INDEX := 1;
      loop
         select
            when COUNT < STORAGE_SIZE =>
               accept SEND_CHAR(C : in CHARACTER) do
                  CODE := C;
               end;
               -- statements for decoding the value of CODE
               -- and producing the decoded value in CHAR
               STORAGE_AREA(IN_INDEX) := CHAR;
               COUNT := COUNT + 1;
               IN_INDEX := (IN_INDEX mod STORAGE_SIZE) + 1;
         or
            when COUNT > 0 =>
               accept RECEIVE_CHAR(C : out CHARACTER) do   -- sic: the scan (PDF p. 81) has ";" here, a slip; "do" restored
                  C := STORAGE_AREA(OUT_INDEX);    -- source says BUFFER(OUT_INDEX): a slip in the original
               end;
               COUNT := COUNT - 1;
               OUT_INDEX := (OUT_INDEX mod STORAGE_SIZE) + 1;  -- source: BUFFER_SIZE (same slip)
         end select;
         exit when CHAR = END_OF_TRANSMISSION and COUNT = 0;
      end loop;
   end DECODE;

   task body PRINT_MESSAGES is
      NEXT_CHAR : CHARACTER;
      INDEX : INTEGER;
      LINE  : STRING(1 .. 120);
   begin
      INDEX := 1;
      loop
         DECODE.RECEIVE_CHAR(NEXT_CHAR);
         LINE(INDEX) := NEXT_CHAR;
         if INDEX < 120 then
            INDEX := INDEX + 1;
         else
            PRINT(LINE);
            INDEX := 1;
         end if;
         if NEXT_CHAR = END_OF_TRANSMISSION then
            PRINT(LINE);
            exit;
         end if;
      end loop;
   end;

begin -- main program
   initiate GENERATE_MESSAGES, DECODE, PRINT_MESSAGES;
end MESSAGE_DECODING;
```

`END_OF_TRANSMISSION` and `PRINT` are assumed to be declared elsewhere.

### 6.10 Tasking: a delay alternative as a timeout (INTRO 6.5)

```ada
task PRINTER_DRIVER is
   subtype LINE_IMAGE is STRING(1 .. 120);
   entry LINE_PRINT(L : LINE_IMAGE);
end;

task body PRINTER_DRIVER is
   BUFFER : LINE_IMAGE;
   CHAIN_GOING : BOOLEAN := FALSE;
begin
   loop
      select
         accept LINE_PRINT(L : LINE_IMAGE) do
            BUFFER := L;
         end;
         if not CHAIN_GOING then
            -- start the chain
            delay 1.0*SECONDS;
            CHAIN_GOING := TRUE;
         end if;
      or
         when CHAIN_GOING =>
            delay 10.0*SECONDS;
            -- stop the chain
            CHAIN_GOING := FALSE;
      end select;
   end loop;
end;
```

### 6.11 Additional RM programs (RM79)

**Bounded buffer (RM79 9.12)**

```ada
task BUFFER is
   entry READ  (C : out CHARACTER);
   entry WRITE (C : in CHARACTER);
end;

task body BUFFER is
   POOL_SIZE : constant INTEGER := 100;
   POOL : array (1 .. POOL_SIZE) of CHARACTER;
   COUNT : INTEGER range 0 .. POOL_SIZE := 0;
   IN_INDEX, OUT_INDEX : INTEGER range 1 .. POOL_SIZE := 1;
begin
   loop
      select
         when COUNT < POOL_SIZE =>
            accept WRITE(C : in CHARACTER) do
               POOL(IN_INDEX) := C;
            end;
            IN_INDEX := IN_INDEX mod POOL_SIZE + 1;
            COUNT := COUNT + 1;
      or when COUNT > 0 =>
            accept READ(C : out CHARACTER) do
               C := POOL(OUT_INDEX);
            end;
            OUT_INDEX := OUT_INDEX mod POOL_SIZE + 1;
            COUNT := COUNT - 1;
      end select;
   end loop;
end BUFFER;
```

**Reader-writer with a procedure in the task specification and local entries (RM79 9.7)**

```ada
task READER_WRITER is
   procedure READ (V : out ELEM);
   entry WRITE (E : in ELEM);
end;

task body READER_WRITER is
   RESOURCE : ELEM;
   READERS  : INTEGER := 0;
   entry START;
   entry STOP;
   procedure READ (V : out ELEM) is
      -- READ is a procedure, not an entry, hence concurrent calls of READ are possible
      -- READ synchronizes such calls with the entry calls START and STOP
   begin
      START; V := RESOURCE; STOP;
   end;
begin
   accept WRITE(E : in ELEM) do
      RESOURCE := E;
   end;
   loop
      select
         accept START;
         READERS := READERS + 1;
      or
         accept STOP;
         READERS := READERS - 1;
      or when READERS = 0 =>
         accept WRITE(E : in ELEM) do
            RESOURCE := E;
         end WRITE;
      end select;
   end loop;
end READER_WRITER;
```

**Generic package and its instantiation (RM79 12.3)**

```ada
generic (SIZE : INTEGER; type ELEM)
package STACK is
   procedure PUSH (E : in ELEM);
   procedure POP  (E : out ELEM);
   OVERFLOW, UNDERFLOW : exception;
end STACK;

package body STACK is
   SPACE : array (1 .. SIZE) of ELEM;
   INDEX : INTEGER range 0 .. SIZE := 0;
   procedure PUSH (E : in ELEM) is
   begin
      if INDEX = SIZE then
         raise OVERFLOW;
      end if;
      INDEX := INDEX + 1;
      SPACE(INDEX) := E;
   end PUSH;
   procedure POP (E : out ELEM) is
   begin
      if INDEX = 0 then
         raise UNDERFLOW;
      end if;
      E := SPACE(INDEX);
      INDEX := INDEX - 1;
   end POP;
end STACK;

package STACK_INT  is new STACK(SIZE := 200, ELEM is INTEGER);
package STACK_BOOL is new STACK(100, BOOLEAN);
-- STACK_INT.PUSH(I);  STACK_BOOL.PUSH(TRUE);
```

The predefined exception OVERFLOW is hidden here by the package's own OVERFLOW, as written in the RM.

**Text I/O dialogue with a generic ENUM_IO instance (RM79 14.5)**

```ada
type COLOR is (WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, BROWN);
TARGET : array (WHITE .. BROWN) of INTEGER := (20, 17, 43, 10, 28, 173, 87);
package COLOR_IO is new ENUM_IO(COLOR);

procedure DIALOGUE is
   use COLOR_IO;
   CHOICE : COLOR;
   procedure READLN is
      CH : CHARACTER;
   begin
      loop
         GET(CH);
         exit when CH = LF;
      end loop;
   end;
   procedure ENTER_COLOR return COLOR is      -- value-returning procedure
      CHOICE : COLOR;
   begin
      loop
         begin
            PUT("Color selected: ");
            GET(CHOICE);
            READLN;
            return CHOICE;
         exception
            when INVALID_DATA =>
               READLN;
               PUT("Invalid color, try again.");
         end;
      end loop;
   end;
begin -- body of DIALOGUE
   CHOICE := ENTER_COLOR;
   PUT(NEWLINE);
   PUT(CHOICE); PUT("items available:");
   SET_COL(STANDARD_OUTPUT, 25);
   PUT(TARGET(CHOICE), WIDTH := 5);
   PUT(";" & NEWLINE);
end DIALOGUE;
```

Expected interaction from the RM: `Color selected: black` / `Invalid color, try again. Color selected: blue` /
`BLUE items available:  173;`.

**A complete program with library visibility (RM79 10.1, Example 2)**

```ada
restricted (MATH_LIB, TEXT_IO)
procedure QUADRATIC_EQUATION is
   use TEXT_IO;
   A, B, C, D : FLOAT;
begin
   GET(A); GET(B); GET(C);
   D := B**2 - 4.0*A*C;
   if D < 0.0 then
      PUT("IMAGINARY ROOTS");
   else
      declare
         use MATH_LIB;   -- note: SQRT is defined in MATH_LIB
      begin
         PUT("REAL ROOTS : ");
         PUT((B - SQRT(D))/(2.0*A));
         PUT((B + SQRT(D))/(2.0*A));
         PUT(NEWLINE);
      end;
   end if;
end QUADRATIC_EQUATION;
```

In the 9.1 example PROTECTED_ARRAY, the scan has lost the lines between the declaration of TABLE and the first
`accept`, and between the two accepts. Those lines are almost certainly `begin loop select ... or ... end select;`.
The example is therefore left out of the corpus rather than reconstructed.

---

## 7. Known gaps

1. ADA071761 is available only as OCR, with no PDF in the folder. Spots that could not be checked against a scan:
   the basic special-character list in RM79 2.1; the full list of non-basic character constants in STANDARD;
   the `DELETE` entry in the 14.2 specification; the exact defaults of FIXED_IO and FLOAT PUT (`DEFAULT_MANTISSA`,
   `DEFAULT_DECIMALS`); part of the RM79 9.1 PROTECTED_ARRAY example. All are marked ⟨?⟩. A scan of
   SIGPLAN Notices 14(6) Part A would settle all of them.
2. The reserved-word table was taken from the copy embedded in the Formal Definition (April 1979). It was checked by
   count against "62 such words" (RAT79 2.1) and against the legible fragments in ADA071761. It matches.
3. The Formal Definition's abstract syntax and denotational equations were not transcribed, only consulted.
4. The exception mapping in §5 E2 is my reading. Neither manual states it.
