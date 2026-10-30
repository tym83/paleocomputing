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
- Every type has a layout, given to the runtime: the bits of its scalars (unpacked, packed,
  a length specification, a biased representation when the values need it, enumeration
  codes), and where the components of arrays and records lie (packing, record
  representations, variants overlaying one another, `at mod` alignment). STRING is packed,
  as App. C specifies. SIZE, POSITION, FIRST_BIT and LAST_BIT report that layout.
- Whatever observes storage sees that layout. The machine has SYSTEM'MEMORY_SIZE storage
  units of SYSTEM'STORAGE_UNIT bits (pragma STORAGE_UNIT: 8, 16, 32 or 64). An object with
  an address specification is a view of the memory, kept in agreement with it after every
  statement that may change it, so objects at one address overlay (an INTEGER and a STRING
  at 200 show each other's bits). Every other object gets an address above the memory, a
  window, when 'ADDRESS first asks; a window shows the object in its layout and what is
  written there goes back into the object. Address specifications take arrays of any rank.
- Code statements: MACHINE_CODE.INSTRUCTION (OP, R, A) on eight registers of one word (64
  bits): NOP, LDI, LD, ST, ADD, SUB, MUL, DIV, NEG, OUTC, OUTN, INTR. LOW_LEVEL_IO: device 0
  the interrupt controller, 1 the console, 2 the clock, 3 a memory address, 4 the storage
  unit at that address (read and written, the address moving on), 5 a hexadecimal dump
  from that address, 6 .. 15 data registers.
- Interrupts (13.5.1): "an interrupt acts as an entry call"; "if control information is
  supplied by the interrupt, then this must appear as an in parameter of the entry". The
  hardware task fills the in parameters from the data registers (devices 6 .. 15, or R1 ..
  R7 for INTR), each in the layout of its type; out and in out parameters are rejected
  with that rule. Interrupts queue on their entry.
- UNSAFE_CONVERSION reads the storage of the value, in the layout of S, as a value of T in
  its layout; access values are stored as the address of what they designate.
- pragma INTERFACE(C) calls the runtime, INTERFACE(FORTRAN) a table of host mathematical
  routines (SQRT, SIN, ..., ALOG10); 13.9 lets an implementation restrict the languages.
- INPUT_OUTPUT stores each element in the layout of its type, so arrays, STRING and records
  with arrays are files of their values; for an unconstrained element type each element is
  kept after its length, and READ of an element of another length raises INVALID_DATA
  ("not of the proper type", 14.1.2). RM79 14.2 declares the six exceptions inside the
  generic package, so each instance has its own; TEXT_IO declares its own set (14.4).
  CREATE replaces an existing file: 14.1.1 raises FILE_NAME_ERROR only when "creation is
  prohibited", which the host does not do.
- TEXT_IO: NEWLINE is LF, which ends the line. The layout operations take a file, as in the
  specification of 14.4: `COL` alone is rejected, `COL(STANDARD_OUTPUT)` is not. SET_LINE or
  SET_COL backwards on a sequential file raises FILE_USE_ERROR; SET_COL backwards on output
  writes BS, which 14.3.2 counts back.
- DEFAULT_MANTISSA is FLOAT'DIGITS - 1 (page 14-11 of the scan); FLOAT has DIGITS 15. In
  FIXED_IO, DEFAULT_DECIMALS is `DELTA_REP'LENGTH - 2` with
  `DELTA_REP = REP(DECIMALS - INTEGER(DECIMALS))`, as on that page. The image of a fixed
  value has the digits its SMALL needs (SMALL is a power of two, RM79 3.5.5), so a type
  with DELTA 0.01 (SMALL 2**-7) is written with 7 decimals by default; the subtraction on
  the formal type is done by the runtime on the image.

## Implementation decisions the RM leaves open
- pragma SUPPRESS: 11.8 says "no run time checks need be provided ... the pragma is merely
  a recommendation to the compiler". greenc keeps the checks; it checks that the arguments
  are exceptions and that the pragma stands in a declarative part.
- pragma CREATION: 9.2 says "it is possible to influence the implementation"; storage of a
  task is allocated when it is initiated (a fresh frame each time), whatever the pragma.
  The argument is checked.
- pragma OPTIMIZE: App. B "specifies whether time or space is the primary optimization
  criterion"; OPTION'TIME and OPTION'SPACE report it; the C translation is the same.
- pragma INLINE expands the body at each call (an always-inline C function; a recursive one
  as far as the C compiler goes). pragma LIST and PAGE shape the listing greenc writes to
  the file GREEN_LISTING names.
- LONG_INTEGER has the range of INTEGER (64 bits); SHORT_INTEGER has 32 bits. GET of a real
  accepts an integer literal too.
