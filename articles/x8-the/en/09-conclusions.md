# What I took from it

First, how well Dijkstra wrote. Reports sixty years old about a machine that no longer exists turned out to be enough to build a working system from. In places they are nearly a specification: EWD 113 lists the bits of a segment variable, and EWD 149 warns about a race with the I/O processor that a programmer is bound to fall into. Where Dijkstra describes in words, the words are precise, and one can hold on to them.

Second, what negative zero meant to those who wrote for the X8. It isn't an arithmetic curiosity but something to think about after every subtraction: any counter that reaches zero may turn out "negative".

Third, the levels work, and that can be checked rather than just read. Less memory, and the system is merely slower, without the programs noticing. A loop between levels, and the system stops. Dijkstra claimed this in 1968 on six pages, and almost sixty years later the claim survives an experiment on a machine that had to be built again.

THE itself has not survived, and what is in the repository is not THE but a reconstruction from its description. But the reconstruction behaves the way Dijkstra said the system behaves. For history this is perhaps the best one can do with a lost program: write it again by the same rules and check whether the rules hold.
