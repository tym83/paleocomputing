[Русская версия](08-ada-red.ru.md)

# Ada RED (Intermetrics): source reconnaissance

Checked on 2026-09-21.

## History of the competition (refined)

Colonel Bill Whitaker set the task of a common language for the US Department of Defense;
David Fisher gathered requirements across the branches of the armed forces. The series of requirements
documents: **Strawman → Woodenman → Tinman → Ironman → Steelman** (June 1978).

The first phase of the "DoD-1" competition produced **16 language proposals**. Four of them were funded,
anonymized by colors:

| Color | Organization | Lead |
|---|---|---|
| **Red** | Intermetrics | Ben Brosgol |
| **Blue** | SofTech | John Goodenough |
| **Green** | CII-Honeywell-Bull | Jean Ichbiah |
| **Yellow** | Stanford Research International (SRI) | Jay Spitzen |

April 1978: Blue and Yellow are eliminated, Red and Green go on.
May 1979: Green wins → becomes Ada.

**An important detail:** in the second phase Intermetrics did not refine its first design
(it was called **REDL**) but did a **radical redesign**, which produced a new language, **RED**.
So there are two "red" languages, and the target is RED, March 1979.

## ⚠ Correction: there WAS a compiler

Earlier I said that nobody had ever run anything in this language. That is wrong.

**Intermetrics brought a RED translator to a working state** (led by Mark Davis).
But under the terms of the contract the translator **could not be considered in the language selection**, so
it served only as an internal prototype and operational definition. After Green won,
Intermetrics backed the common language, and both "red" languages disappeared.

The correct wording for the article: **a language that had a working compiler which
was shown to nobody and which has not survived.** This is stronger and more accurate than "never
compiled".

## What is available

### RED Reference Manual (March 1979)
- **Full HTML transcription:** https://www.iment.com/maida/computer/redref/
- Transcribed by **Mary Van Deusen**, one of the authors of the original manual
  (written together with **John Nestor**). Posted for the 30th anniversary of the competition.
- Before that, the documents **were not publicly available** after the competition ended.
- **PDF at DTIC:** ADA219453, https://apps.dtic.mil/sti/tr/pdf/ADA219453.pdf
  ⚠ DTIC returns 403 to scripted access (bot protection); from a browser it will probably open
- **Mirror on the Internet Archive:** identifier `DTIC_ADA219453`
  ("DTIC ADA219453: Red Language Reference Manual"), a clean downloadable PDF
- Contract MDA903-77-C-0330, copyright 1979 Intermetrics

**Table of contents (complete, everything is there):**
0 Acknowledgments · 1 Introduction · 2 Lexical Structure · 3 Program Structure ·
4 Types · 5 Expressions · 6 Statements · 7 Procs, Funcs & Parameters · 8 **Capsules** ·
9 Exception Handling · 10 **Multitasking** · 11 Overloading & Generics ·
12 Machine-Dependent Facilities · 13 Advanced Definitions · 14 Low-Level Facilities ·
A High-Level I/O · B Pragmats · C Built-In Types · D Exceptions · E Glossary ·
F Diagram Xref · G Index

**The syntax is given by flow diagrams** (section 1.6: for lexical elements and for
language constructs) → the grammar is effectively given, there is something to write a parser from.

### RED Language Design Rationale (March 1979, Ben Brosgol)
- **Full HTML transcription:** https://www.iment.com/maida/computer/redrat/
- Explains WHY decisions were made, with the rejected alternatives discussed
  (type equivalence: purely name-based / structural / single-instance generators /
  extended name-based; parameter binding classes; type opacity)
- **Appendix B: Contract Test Problems**
- **Appendix C: Sample RED Programs** ← examples by Abrahams (NYU), Hubbard, Knobe,
  Levin (Boston College), Smith (Rutgers)

**This is the main de-risking of the project:** there are contract test problems and ready sample
programs, so a corpus for testing the compiler exists from day one.

### Steelman
Freely available: dwheeler.com/steelman, adahome.com, Wikisource. Serves as the reference wherever
the RED specification turns out to be incomplete: all four designs were required to satisfy it.

### Blue and Yellow: not found publicly

Checked methodically: searching titles and all metadata fields in the DTIC mirror on the
Internet Archive, plus a general web search. The control query for "red language" finds
ADA219453, so the method works; "blue language" and "yellow language" combined with DTIC
return nothing.

I also tried browsing neighboring DTIC numbers; useless: AD numbers are assigned
by date of receipt, not by topic, and the neighbors of the Green documents are unrelated.

**Conclusion:** Blue and Yellow are absent from the open web. Remaining options: a direct search on
apps.dtic.mil from a browser (scripted access is blocked), a request through a library,
reaching out to the community of Ada historians and personally to the participants (Mary Van Deusen posted
RED; she may know about the others too).

Low priority: Red is the finalist, fully documented, and it is the interesting one.

### 🎁 But something else turned up: GREEN before it became Ada

The DTIC mirror on the Internet Archive has three documents under the color name, that is,
BEFORE the renaming to Ada:

| Identifier | Document |
|---|---|
| `DTIC_ADA070753` | The Green Language; An Informal Introduction |
| `DTIC_ADA073714` | The Green Language. A Formal Definition |
| `DTIC_ADA070752` | Set of Sample Problems for DOD High Order Language Program. **GREEN Solutions** |

The third is the most valuable. The title directly implies that the same set of problems was solved
by every team, and this matches **appendix B of the RED rationale, "Contract Test
Problems"**.

**Hence an episode that needs not a single line of code:** take the same contract
problems and put the RED solution and the GREEN solution side by side. A comparison of two Adas on
identical material, both in their pre-final form. As far as I can see, nobody has published such
a comparison.

Plus the "formal definition" of Green is a rare thing in itself: the formal semantics of a
language before it became a standard.

### One more source
Mary Van Deusen's article on the RED type system, published later in SIGPLAN Notices.

## What RED actually is

From the introduction: a language for embedded US DoD applications per the Steelman requirements, combining
the usual capabilities of high-level languages with new facilities for abstract data
types, exception handling, multitasking, generic definitions and access to
machine-dependent facilities. The stated goals are modularity, abstraction, reliability,
efficiency, and separately: **"the use of assembly language should not be necessary"**.

### How it differs from Ada

| RED | Ada |
|---|---|
| **Capsule** | package |
| **Mailbox-based multitasking** (mailbox variables), Act priority scheduler, region statement, data lock variables | rendezvous (entry/accept) |
| **Guard statement** | handler block |
| **Indirect types** | access types |
| **Interfaces / signatures / translation-time property lists** | generic formal parameters |
| **Manifest expressions and conditional translation** | — |
| Union types, set types as aggregate types | variant records |
| Ordered and **unordered** enumerations | — |
| **ASSERT** at the declaration level and in the body | appears only in Ada 2012 as contracts |

The concurrency model is the key divergence: **RED is message passing, Ada is
rendezvous**. For a Tandem NonStop-style kernel, mailboxes fit better than rendezvous.

### What it looks like (from appendix C)

```
CAPSULE matrix_vector_package EXPORTS ALL;
CONST mvprec := 6;
CONST maxdim := 100;
ABBREV mvfloat : FLOAT(mvprec, mvmin .. mvmax);
ABBREV dim : INT(2 .. maxdim);
TYPE matrix(m : dim, n : dim) : ARRAY INT(1 .. m), INT(1 .. n) OF mvfloat;
TYPE vector(n : dim) : ARRAY INT(1 .. n) OF mvfloat;

FUNC *(READONLY b : matrix, READONLY c : matrix) => matrix(b.m, c.n);
    ASSERT b.n = c.n;
    VAR a : matrix(b.m, c.n);
    % Compute a := bc
    ...
END FUNC *;

FUNC *(READONLY b,c : vector(3)) => vector(3);   % overloading by SIZE
```

What is striking here for 1979:

- **The result type is computed from the argument values**: `=> matrix(b.m, c.n)`.
  Dimensions live in the type.
- **Overloading on the value of a type parameter**: a separate implementation of `*` for `vector(3)`
  (the cross product). Today Rust does this with const generics.
- **ASSERT right in the signature/body** as part of the language.
- **Parameter binding classes** are explicit: `CONST`, `READONLY`, `VAR`.
- Precision AND range as part of the float type.
- A comment is `%`, a pragma is `PRAGMAT INLINE`.

## What this means for the project

**The "there is no spec" risk is removed completely.** There is a manual, there is a rationale explaining the
alternatives, there are syntax diagrams, there are test problems and sample programs,
there is Steelman as a reference.

**The amount of work has not changed**: it is still three to six months of part-time work to a
usable subset with a frontend on LLVM or C.

**The story got better:** not "a language that never worked" but "a language that worked
exactly once inside one company, lost under rules that forbade considering its
compiler, and disappeared".

**Legally:** the manual is under a 1979 Intermetrics copyright, and the transcription was posted by one
of the authors. Implementing the language from the specification raises no questions; extensive
quoting/republishing of the document would, and that needs to be checked separately.
