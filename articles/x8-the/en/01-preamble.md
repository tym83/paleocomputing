# No machine, no code: I rebuilt the Electrologica X8 and wrote Dijkstra's THE system on it again

In May 1968 Communications of the ACM printed a short paper by Edsger Dijkstra, "The structure of the 'THE'-multiprogramming system". Six pages without a single line of code, and yet every operating systems course still covers it: it describes a system built in levels, each using only the ones below, and its appendix gives semaphores, P and V. THE ran at the Technische Hogeschool Eindhoven on a Dutch machine, the Electrologica X8.

The system is gone. Dijkstra writes that it was programmed "in plain machine code", and as far as I could find out, that code has not survived. The machine is gone too: Electrologica built the X8 from 1964 to 1968, and today you can see one in Museum Boerhaave in Leiden, behind glass. What is left of both is text: Dijkstra's reports, an X8 simulator that the Mathematisch Centrum in Amsterdam wrote in Algol in 1971 so that programs could be debugged outside machine time, and the test program that came with it.

That was enough to build both again. First the machine: an X8 emulator with its I/O processor CHARON, and an assembler for ELAN, the language X8 system programs were written in. Then the system: THE in X8 machine code, as Dijkstra described it, with the same segment controller, the same Victim, the same holiness counter and the same message interpreter he described between 1964 and 1968. This article is about what came out of it and what experiments taught me on a system that until now one could only read about.

<cut />

This is the next part of my series on paleocomputing, about technologies that lost or disappeared and what we threw away with them. You don't need the earlier parts.

As before, almost all the code was written not by me but by AI agents. My part was the idea, the decisions, the checking, and the constant question "where does Dijkstra say that?". The sources are in [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), in `impl/x8-the`.
