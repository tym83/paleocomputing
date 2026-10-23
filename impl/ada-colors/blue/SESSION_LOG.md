# Session log — BLUE side (started 2026-10-16)

## Goal
BLUE (SofTech, 15 Feb 1978) like RED and GREEN: Python bootstrap -> bluec written in BLUE ->
fixed point -> grow to the language of the 1978 specification -> tests and 1978 corpus.

## Current state
- bluec (~9.6k lines BLUE, blue/bluec/) at its fixed point; seed refreshed; `make genesis`
  reproduces the Python bootstrap step.
- tests/run.sh: 25 pass. corpus/run.sh: 17 pass, including Appendix C.
- Phase 2 (2026-10-23, branch feat/ada-blue-os, not pushed): os/the.blu (prints os/the.out
  exactly), os/the_kube_blue.blu, kube/kube_blue.blu, os/contrast/{timeout,failure,readers}_blue.blu;
  os/run.sh runs .blu (23 pass); labs/blue b1..b7 with solutions, check.sh/verify.sh wired
  (57 ok); notes/blue-digest.md section 11; rt fix: TERMINATE before a path first runs.

## Next step
Done for this round. Open: record/array representation clauses, aliasing and
side-effect checks, a RANDOM_FILE device for Appendix C; the top-level README's os/ line
does not mention BLUE yet; web/ toolchain needs a rebuild for the rt fix.

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
### v2: the whole grammar
- Parser for all of Appendix A (REP specs parsed, RECORD_REP skipped).
- Reserved words bit me again: MODULE, TAG, ANY, REP, NEEDS, PAR_BLOCK cannot be names.
- A function may not have inout parameters: UNIFY keeps bindings behind a list head.
- rt batch 2: fixed point with __int128, bitstrings as '0'/'1' strings, conversions,
  semaphores (priority-ordered release), path activations (rt_b_act, trampoline sets a
  thread-local self), virtual clock in microseconds.
### tests per feature (2026-10-17)
- Enum literals of a TYPE declaration must stay in that scope (RESOLVE_IN_DECL opened one).
- Abstract types: the module's operations see the underlying type; parameterized abstract
  types compare by underlying type (STACK(INTEGER,10) vs STACK(COLOR,3)).
- ? for a TYPE formal: the instance takes the argument's type; a hidden binding keys it.
- A call node was rewritten to N_APPLY on first translation; a generic body translated
  twice then failed. Nodes are not mutated by translation any more.
- PAR_BLOCK used rt_taskdecl where the runtime wanted rt_b_par.
### corpus (2026-10-17)
- Each entry: orig/ as printed (page numbers in a header comment), fix/NAME.sed for every
  forced change with its reason, main/NAME.blu driver, NAME.out.
- Misprints met: missing ; and colons, BUFF for BUF, M1(1,J) for M2(1,J) in the matrix
  product, LOOP FOR ...; for DO, VAR_CHAR_SET for VAR_CHAR_STR, record
  fields without VAR, MAX with one argument, BOUNDS(1) where BOUNDS is ARRAY [0:n],
  INTEGER (14,2,STD) for FIXED, INTEGRATE arguments in the wrong order, string assignments
  of unequal length in VSTR (SIZE by 3.7.5).
- Compiler changes the corpus forced: parameters of a generic routine unified together;
  abbreviations of arrays unified through their definition; derived bounds of array
  parameters are extents ([1:?M] fits any array of that extent); derived range bounds
  are the widest values; CHAR_STR generic over its character set; TARGET is a predefined
  name, not reserved; SUBSTRING_STORE_ target may be out (##) or inout.
- MAX/MIN are key words for attributes only; examples that call MAX get it from the driver.
### Appendix C (2026-10-17)
- Transcribed from the page images (the OCR is unusable); misprints and broken rules
  in fix/appendix-c.sed: IN is reserved (FILE_IN), constants exported from modules,
  closed scopes without imports, ; before IMPORTS, BIN(''), then, END LOOP without I.
- Compiler work it forced: USES-ordered segments; objects before routine headers;
  record definitions in their module; DEFINES of modules and of NEW; MODULES imports;
  START_IO as the machine's cases; substrings as output arguments; I in CONNECT;
  ?T REP ?R; literals typed by parameters; WHERE templates with TYPE, built-ins
  behind overloads, types from the generic's module; T$NAME of bound routines; an
  instance per string length; X.SCALE manifest; S[I:I] of length one.
- A bug of mine committed once (BASE_NAME of a short alias cut past the end):
  fixed in the next commit.
- The drivers run forever (C-5); the application ends with WAIT (1); STOP (0).

## Phase 2 (2026-10-23): BLUE under THE, Kubernetes, contrasts, labs
Worktree paleo-blue-os, branch feat/ada-blue-os. Plan: os/the.blu, os/the_kube_blue.blu,
kube/kube_blue.blu, os/contrast/*_blue.blu, labs/blue/ + solutions, os/run.sh and
labs/check.sh, labs/verify.sh wired for .blu.
### findings before code
- No timed REQUEST: the BLUE idiom is two racing paths that TERMINATE each other
  (evaluation example A 2.8.1, DTIC ADB950587 PDF 4300).
- REGION semaphores are released when a path terminates abnormally (3.11.1, J3.11-1).
- CLOCK is per activation (4.6.5); there is no time of day.
- A PAR_BLOCK may not be inside a routine (4.6.1).
### THE in BLUE (2026-10-23)
- Paths of one PAR_BLOCK started at 0 = THE's processes; CLOCK is then system time.
- Generic MAILBOXES module (REGION + two SYNCH semaphores) for the queues between levels.
- Each level's state a module; routines using own variables must be imported: IMPORTS
  show the hierarchy. Output identical to os/the.out at the first run.
- A module body has no statements: DRUM_FREE became DRUM_USED (zero default).
### contrasts, THE/KUBE, KUBE (2026-10-23)
- Timeout = race GET/TIMER; GET needs the higher priority or a taken token is lost.
- failure_blue: REGION released at abnormal path end. readers_blue: writer sem must be SYNCH.
- the_kube_blue: the user TERMINATEs kubelet 2 while it holds STORE (REGION): survives.
- rt bug found: a path TERMINATEd before it first ran still waited out WAIT / took a free
  semaphore (term_pending checked only after block()). Fix in rt_b_request/rt_b_wait,
  test tests/terminate_early.blu. All RED/GREEN/BLUE/YELLOW tests still pass.
- kube_blue: TERMINATED does not say who sent it; the kubelet reads POWERED.
- My mistake: BLOCK ... EXCEPT ... END BLOCK attaches the handler to the last statement
  ([4-80]); handlers moved after END PAR_BLOCK.
### labs (2026-10-23)
- b1 enums, b2 ?T generics, b3 IMPORTS, b4 REP/ENUM_VAL_REP + OBJECT_MACHINE, b5 REGION vs
  SYNCH, b6 THE, b7 race. check.sh: compiler by extension; verify.sh: *.blu solutions.
- bluec does not translate a manifest-FALSE IF arm, so REPORT_DUMPS=FALSE hides the
  missing import; lab b6 break uses that (noted in the digest).
