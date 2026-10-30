[Русская версия](red-implementation.ru.md)

# How redc realizes the implementation-dependent parts of RED

The RED Reference Manual (Intermetrics, March 1979) leaves a number of things
to the implementation: the target machine, its memory, its clock, its files.
redc translates RED to C for a simulated machine that runs on the host. This
note records the decisions taken where the manual leaves a choice, and why.

## The machine

- **INT and FLOAT.** INT is 64-bit two's complement, with the range
  -(2^63 - 1) .. 2^63 - 1; FLOAT is an IEEE double, 15 decimal digits, radix
  2, exponents -1021 .. 1024 (what ACTP, RADIX, EMIN and EMAX answer). A
  subtype outside these limits raises X_MAXRANGE (C.3, C.4).
- **Memory.** The machine has 1 MiB of memory, numbered in bits as 12.2
  prescribes: bit 0 is the high-order bit of byte 0. LOW_IO device 3 reads and
  device 4 writes a byte of it; devices 1 and 2, the teletype and the
  interrupt line, are those of the shared runtime.

## Time: the virtual clock and activation clocks

Time is virtual. Computation takes no time; the clock moves only when every
activation waits, and then jumps to the next wake-up. This makes every run of
a program print the same thing, which the tests rely on.

An activation's clock (10.4, `TIME(a)`, `DELAY_UNTIL(t, a)`) measures the
time the activation has been running. On this clock, an activation runs
while it is ready or delayed by the clock (`DELAY`, `DELAY_UNTIL`), and not
while it waits for other activations (mailboxes, regions, WAIT on them). An
activation that never delays therefore has a clock of 0. Counting CPU work
instead would need the real clock to move with computation, which would make
the output of every timed program depend on the host's speed.

## Representations are observable through LOCATION

Representational specifications (12.2) are parsed and checked in full when
the type is declared: sizes against the subtypes, ALIGN and OFFSET where
and with the values allowed, RECORD, UNION and ARRAY items against the
type. The bit layout they describe matters where a program can observe it:
a variable placed in memory with LOCATION (12.3). Such a variable is laid out
bit by bit as its representation says, and LOW_IO and other located
variables see exactly those bits. Everywhere else a variable keeps the C
layout, which no RED program can tell from the specified one, and which
keeps component access fast. PTR(FREE UNCHECKED) is honoured: FREE does
not look for other pointers. A variable of a type without a representation
can be located too; it then has the host's layout, at a byte boundary.

## Separate translation: the library keeps source text

A translation unit marked `PRAG(LIBRARY)` is kept in the library, the
directory of physical files (`$RED_FILES`, else the current directory), and
`EXPOSE ... FROM EXTERNAL x` takes a unit `x` the program does not contain
from there (3.1, 8.1). What is kept is the unit's source text: a RED unit
has no separate specification, and its whole text is its interface. A
program is translated into one C file, so units from the library are
translated again together with it; the result is the same as linking
separately translated objects, and generics and NEW invocations of library
capsules, which must be instantiated where they are used, need no special
object format.

## Other decisions

- **X_INIT.** Uninitialized INT, FLOAT, ENUM and BOOL values hold a value
  outside their type, and string characters hold 0xFF; reading one raises
  X_INIT (5.1). Under `PRAG(SUPPRESS(X_INIT))` storage starts zeroed and
  blank instead, which is how redc itself is translated.
- **Files.** A physical file name is a file of `$RED_FILES` (else the
  current directory); names with directories are refused with X_FILENAME.
  Text files end lines with CR LF, as A.3 describes; a host file whose lines
  end with LF alone reads too. A standard file keeps each component deeply,
  after its length in bytes. SYS_IN and SYS_OUT are the teletype.
- **Sets.** A set over a range keeps a bitmap; a set of INT without a range
  keeps the sorted list of its elements, or of those it lacks once
  complemented.
- **Configuration.** A capsule named `configuration` may carry translation
  time values (`configuration ["PDP11"]`); the invoked one sets the ticks of
  MILLISECONDS, SECONDS, MINUTES and HOURS.
- **Foreign code.** `PRAG(FOREIGN)` on a procedure or function with an empty
  body makes it the C function of the same name, in lower case (12.4).
- **Pragmats.** SUPPRESS turns off the checks for X_FREE, X_RANGE,
  X_SUBSCRIPT, X_NIL and X_INIT; NONRECURSIVE and NONREENTRANT are checked
  while the subprogram runs; OPTIMIZE, OPEN, CLOSED, LIST and OK are
  accepted (Appendix B).
