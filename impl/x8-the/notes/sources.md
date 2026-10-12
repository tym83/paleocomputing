# Sources: the X8 and THE

What exists, what we used it for, and what we had to invent.

## The machine

| Source | What it gives | Used for |
|---|---|---|
| D. Grune, *X8S*, Algol 60 simulator of the EL X8, Mathematisch Centrum, 17-12-71: [dickgrune.com/Old_Computers/EL-X8](https://dickgrune.com/Old_Computers/EL-X8/index.html) (`X8S.zip`), also [github.com/cwi-software-archive/EL-X8](https://github.com/cwi-software-archive/EL-X8) | the whole instruction set of the central processor, memory protection, the control state, the interrupt mechanism, parity, the cycle counts, written as executable Algol 60 | `emu/x8.c` is a transliteration, label by label |
| D. Grune, *Beschrijving van de X8-simulator X8S*, MR 141/72, Mathematisch Centrum, 1972 ([CWI 9135](https://ir.cwi.nl/pub/9135)) | why X8S does what it does; shifts (5.7), the -0 preference (5.5), interrupts (5.9), the device list of the MC installation (10.4), experiments on the real X8 (chapter 10) | shifts on bit patterns, device numbers |
| *X8Stest.elan*, the test program in the same zip | 375 tests of almost all instructions, interrupts, protection and parity, in ELAN | the only sample of ELAN notation we have; the assembler is built to take it unchanged, and it is the acceptance test of the emulator (`tests/x8stest.sh`) |
| E.W. Dijkstra, EWD 149, *Documentatie over de communicatie apparatuur aan de EL X8*, 7 January 1966 ([transcription](https://www.cs.utexas.edu/~EWD/transcriptions/EWD01xx/EWD149.html)) | CHARON: AF/IF/LVIF, AR0..AR3, start orders, AFT/IFT, the keyboard, teleprinter, reader, punch, the clock, the tooth brush, IP loading | `emu/charon.c` |
| EWD 145, *Globale beschrijving van de drijvende arithmetiek van de EL X8*, 6 December 1965 | the floating point numbers and their rounding | `fop` in `emu/x8.c`; the layout in F is ours |
| F.J.M. Barning, *X8-simulator ... met behulp van de X1*, R 917, 1964 ([CWI 8850](https://ir.cwi.nl/pub/8850)) | an earlier simulator on the X1 | not used |
| The EL X8 Reference Manual (Dutch, 240 page images, kept by D. Grune, not online) | everything else | not available to us |

## THE

| Source | Content |
|---|---|
| EWD 196, *The structure of the "THE"-multiprogramming system*, CACM 11(5), 1968 | the configuration (32K core, 2.5 us; drum of 512K words, 1024 words a track, 40 ms a revolution; 3 readers, 3 punches, 2 teleprinters, plotter, line printer), the five levels |
| EWD 113, *Segment control*, 9 December 1964 | pages and segments, segment variables (four states and their bit layout), core table entries, the Victim, holiness, the drum page table, drum page addresses (1025 n mod 2^19), the segment controller loop, the buffer of N + 1 messages |
| EWD 126, *The multiprogramming system for the EL X8 THE*, 14 June 1965 | programmable machines and constant machines, information streams, documents, the console messages M1..M16, the store inequalities |
| EWD 118, *Communicatiebuffering voor de EL-X8 - T.H.E.*, 3 February 1965 | buffering of transput in segments, moving segment variables instead of data |
| EWD 123, *Cooperating sequential processes*, 1965 | semaphores, P and V, private semaphores, the deadly embrace, the banker |
| EWD 51, 54, 57, *Multiprogrammering en de X8*, 1962-63 | the first ideas: the coordinator, IF as a hardware semaphore, wait chains |
| EWD 232, *Pretentie en doelstelling van het THE multiprogrammeringsproject* | why |

The program text of THE (plain X8 machine code, EWD 196: "the construction stage
has been rather traditional, perhaps even old-fashioned: plain machine code") is
not known to survive: none of the archives above holds it, and we found no other
reimplementation of the system. Our THE is a reconstruction from the documents.

## What is reconstructed, not documented

- The ELAN notation beyond what the test program uses (strings, the `'text'`
  directive), and the meaning of the bare `count` and `repp`: the test program
  only works if they are count register 7, not 0, because its subroutine tests
  write links into locations 0 and 1.
- The floating point layout in F (from hints in X8S, see `emu/x8.c`).
- The 6-bit code of the teleprinter and the line printer.
- The drum start order (EWD 149 calls the drum a normal device and stops there):
  label[1] is a code word like the punch's (count, core address - 1), label[2]
  has the direction in d25 and the drum address in d18..d0.
- The speed of the line printer.
- Punch 18 punches eight holes (EWD 149 says seven; the test program's parity
  bit is the eighth hole).
