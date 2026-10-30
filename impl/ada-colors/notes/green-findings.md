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
- Contract problem 10: both record representations give LGTH the bits 0 .. 7, but LENGTH is
  0 .. 256 and needs nine bits (RM79 13.4); the run script adds bit 8.
- Contract problem 1: the representation of ITEM stands in POLLING, not in the declarative
  part that declares ITEM (RM79 13); the run script moves it next to ITEM.
- (repaired in the digest's transcription: `;` for `do` after an accept, BUFFER/BUFFER_SIZE
  for STORAGE_AREA/STORAGE_SIZE.)

## Tasking as implemented
- No task types: tasks start only on `initiate`; re-initiating an active one raises
  INITIATE_ERROR; a terminated task may be initiated again (fresh frame each time).
- Rendezvous; select on the server side with guards, delay, else; SELECT_ERROR when every
  alternative is closed and there is no else. A select needs an accept alternative.
- `raise T.FAILURE` is the only exception raised in another task; `abort` cannot be handled;
  a caller whose partner fails or is aborted gets TASKING_ERROR.
- Task families (F(I).E, F'INDEX, initiate F(lo .. hi)), entry families (E(I)(args)), entry
  families in task families, families declared in members of families; visible subprograms
  of tasks; SEMAPHORE and SIGNAL are predefined generic tasks (RM79 9.11).
- T'CLOCK counts the turns the task was given the processor: time is virtual.
- An entry with an address is an interrupt (RM79 13.5.1): LOW_LEVEL_IO's interrupt
  controller (device 0) or the INTR instruction makes an entry call from a hardware task of
  the highest priority, so interrupts queue on the entry.

## Chapters 13 and 14 on a simulated machine
- Representation specifications are checked and reported by SIZE, POSITION, FIRST_BIT and
  LAST_BIT; the data keep the host's C layout. A length specification of an access type is
  the budget of its collection (STORAGE_OVERFLOW), of a task the bits of one activation.
- The machine has SYSTEM'MEMORY_SIZE storage units of 8 bits; an object with an address
  specification lives there (an array keeps its descriptor and has its components there),
  and 'ADDRESS gives that address. 'ADDRESS of other objects is a host address.
- MACHINE_CODE.INSTRUCTION (OP, R, A) on eight one-word registers: NOP, LDI, LD, ST, ADD, SUB,
  MUL, DIV, NEG, OUTC, OUTN, INTR. LOW_LEVEL_IO: SEND_CONTROL and RECEIVE_CONTROL on device 0
  (interrupt controller), 1 (console), 2 (clock), 3 .. 15 (registers).
- pragma INTERFACE(C) calls the runtime, INTERFACE(FORTRAN) a table of host mathematical
  routines (SQRT, SIN, ..., ALOG10); other languages are rejected.
- UNSAFE_CONVERSION copies the storage of the value; enumeration codes are its storage.
- pragma SUPPRESS permits omitting checks (RM79 11.8): the checks stay.
- INPUT_OUTPUT and TEXT_IO files are host files; CREATE replaces an existing file.
  INPUT_OUTPUT stores the storage of each element, so elements with arrays or access values
  are not meaningful in another program. A STRING element (unconstrained) cannot be used.
- TEXT_IO: NEWLINE is LF, which ends the line (RM79 makes CR reset the column and LF advance
  the line). The layout operations take a file, as in the RM79 specification: `COL` alone
  is rejected, `COL(STANDARD_OUTPUT)` is not. SET_LINE or SET_COL backwards on a sequential
  file raises FILE_USE_ERROR; SET_COL backwards on output writes BS.
- The exceptions of TEXT_IO and of every instance of INPUT_OUTPUT are one set: END_OF_FILE of
  one instance is END_OF_FILE of all.

## Deviations
- DEFAULT_MANTISSA is 5, not FLOAT'DIGITS - 1 (the OCR of RM79 14.4 is unclear here, and
  FLOAT is a double with DIGITS 15): PUT of a FLOAT shows five decimals unless FRACT says.
- GET of a real accepts an integer literal too.
- LONG_INTEGER has the range of INTEGER (64 bits); SHORT_INTEGER has 32 bits.
- pragma CREATION, OPTIMIZE, LIST, PAGE and INLINE are checked and have no effect.
