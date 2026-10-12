# GREEN 1979: findings from writing a GREEN compiler in GREEN

Sources: Preliminary Ada Reference Manual (RM79, DTIC ADA071761), Informal Introduction
(DTIC ADA070753). Implementation: green/ (greenboot.py, greenc in GREEN, fixed point).

## The language shapes the compiler (RM79 6.5)
- A function may not assign anything non-local, may not change objects designated by access
  values, may not allocate, and (since I/O and outside procedures may have side effects) does
  neither. Everything that builds a tree or advances a scanner is therefore a procedure.
- A value-returning procedure (`procedure GENERATOR return INTEGER`) may assign globals, takes
  in parameters only, may be called only in an assignment, an initialization or a procedure
  call -- and only "at points of the program where the corresponding variables are not within
  the scope of their declaration". So a recursive-descent parser over a global token position
  cannot use value-returning procedures at all: inside the parser the position is in scope.
  greenc's parser is written as procedures with out parameters (`EXPR(X)`, not `X := EXPR`).
  The RM79 example UNIQUE_NUMBER_GENERATOR shows the intent: the state hides in a package body.
- greenc enforces these rules and its own source passes them (the fixed point holds with the
  checks on). RED had the opposite design: ABNORMAL marks impure functions, which may do anything.

## Small rules that bite
- `case X of` (not `is`); `CHARACTER'ORD("A") = 66`: positions count from 1; NATURAL starts at 1.
- `mod` has the sign of the left operand (Ada 83's `rem`); there is no `abs` operator.
- TEXT_IO puts a space before every numeric item not at column 1, so the 1979 change-counting
  example prints `CHANGE IS $ 2. 53`. There is no PUT_LINE or GET_LINE: `PUT(NEWLINE)`.
- An allocator always gives the initial value: `new T(...)`.
- A C keyword (`default`) as a record component broke the first bootstrap's output.

## Errors in the 1979 texts that greenc rejects
- INTRO 1.4: `NET_RISE > 0` (integer literal against a REAL).
- INTRO 6.3: `for STOP use at 8#8060;` (digit 8 in base 8).
- (repaired in the digest's transcription: `;` for `do` after an accept, BUFFER/BUFFER_SIZE
  for STORAGE_AREA/STORAGE_SIZE.)

## Tasking as implemented
- No task types: tasks start only on `initiate`; re-initiating an active one raises
  INITIATE_ERROR; a terminated task may be initiated again (fresh frame each time).
- Rendezvous only; select on the server side with guards, delay, else; no terminate
  alternative; SELECT_ERROR when every alternative is closed and there is no else.
- `raise T.FAILURE` is the only exception raised in another task; `abort` cannot be handled.
- Task families (F(I).E, F'INDEX, initiate F(lo .. hi)) and entry families (E(I)(args)).

## Deviations
- Integer types map onto INTEGER and real types onto FLOAT (RM79 3.3 makes each a distinct
  type), so `PUT(REAL)` (INTRO 1.1) is accepted.
- STRING objects and slices count from 1 whatever their bounds.
- Generic bodies bind non-local names at the instantiation, not at the generic body.
- Representation specifications are read and ignored; no interrupts.
- Visible procedures of a task, families of families, entry families in task families,
  `separate`, renaming, record default values, multi-dimensional arrays: not handled.
