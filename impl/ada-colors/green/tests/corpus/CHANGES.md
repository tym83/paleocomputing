# GREEN 1979 corpus: what it took to run the originals

Programs from *The Green Language; An Informal Introduction* (April 1979, DTIC ADA070753),
as transcribed in `notes/green-digest.md` §6 (`orig_*.txt` keep that text). Each `.grn`
here is run by `tests/run.sh` against its `.out`, with its `.in` as standard input.

## Rejected by greenc as written (errors in the 1979 text)

| Program | greenc says | Why it is an error |
|---|---|---|
| 1.4 target practice (`orig_6_4_target.txt`) | `line 27: type mismatch: INTEGER where FLOAT is required` | `NET_RISE > 0`: NET_RISE is REAL and `0` is an integer literal; RM79 has no implicit conversion. |
| 6.3 message decoding (`orig_6_9_decoding.txt`) | `line 15: digit 8 is not valid in base 8 (RM79 2.4)` | `for STOP use at 8#8060;` |

The digest's transcription already repairs two further slips of 6.3 that a translator would
reject (`;` instead of `do` after `accept RECEIVE_CHAR(...)`, and `BUFFER`/`BUFFER_SIZE` for
`STORAGE_AREA`/`STORAGE_SIZE`).

## Changes

- `temperature.grn`, `change.grn`, `change_enum.grn`: none.
- `target.grn`: `NET_RISE > 0` became `NET_RISE > 0.0`.
- `decoding.grn` (marked `CHANGE n` in the file):
  1. `END_OF_TRANSMISSION`, `PRINT` and the message text are "declared elsewhere" in the
     original; they are declared in the main procedure.
  2. `8#8060` became `8#6060` (the representation specification is read and ignored).
  3. The comment "code for receiving data and generating NEXT_CODE" is filled in: the data is a
     message string; at its end the generator leaves its loop, as it would on the STOP interrupt
     (interrupts are not simulated).
  4. The comment "statements for decoding" is filled in with the identity `CHAR := CODE;`.
- `printer.grn`: two `PUT`s with `SYSTEM'CLOCK` inside the task to make it observable, and a
  main program `PRINT_THREE` that initiates the driver, prints three lines and aborts it.

## What the outputs show

- `change`: `CHANGE IS $ 2. 53` -- RM79 14.4 puts one space before every numeric item not at
  column 1, so the 1979 example prints its dollars and cents with spaces in them.
- `temperature`: floating output is `d.ddddd E+ddd` style with a three-digit exponent (RM79 14.4).
- `printer`: the first line starts the chain (1 s), the second is accepted at once, and the
  chain stops after 10 s with no line -- the delay alternative as a timeout, on the virtual clock.
- `decoding`: three tasks and a guarded select with a 500-character buffer pass the message through.

## Accepted although RM79 would reject

- `temperature.grn` uses `PUT(REAL)` where TEXT_IO offers only FLOAT. greenc maps every real
  type onto FLOAT (and every integer type onto INTEGER), so it accepts this; under the strict
  name equivalence of RM79 3.3 it is an error.

Later, when greenc came to enforce visibility restrictions (RM79 8.3, 10.1): every compilation
unit is restricted, with an empty list by default, so a unit that uses TEXT_IO names it and
says `use TEXT_IO`, as the examples of RM79 10.1 do; the introduction leaves both out:
- `decoding.grn`: 5. `restricted (TEXT_IO)` and `use TEXT_IO;`.
- `printer.grn`: 3. `restricted (TEXT_IO)` before the task and `use TEXT_IO;` in its body;
  `restricted (PRINTER_DRIVER)` before the main program.
