# A compiler that compiles itself

The goal I set myself was this: each language should have a compiler written in that language. That's not just a nice tradition. A compiler is an honest test of a language: if you can write several thousand lines of parsing, symbol tables, type checking and code generation in it, the language is fit for real work, and all its awkward spots will surface on their own.

## A shared runtime and predictable time

Both compilers translate a program into C and build it against a shared runtime, also written in C. It's about eight and a half thousand lines, and it holds everything the languages need at run time: strings, exceptions, checked arithmetic, I/O, RED's mailboxes and locks, the green language's rendezvous, and the task scheduler.

With the scheduler I did one thing that paid for itself many times over. Every task in the runtime is an operating system thread, but the threads pass a baton to one another, and at any moment exactly one of them is running. Thanks to that, RED's scheduling rules hold to the letter: the task with the highest priority runs, among equals the one that has waited longest goes first, and a task that becomes ready with a higher priority preempts the current one.

[Time is virtual](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/notes/red-implementation.md#time-the-virtual-clock-and-activation-clocks): when every task is waiting for something, the clock jumps straight to the nearest wake-up. And if there's nobody left to wake, the runtime doesn't hang; it prints that all tasks are blocked. The upshot is that any program prints exactly the same thing on every run, even with a dozen tasks, timeouts and tasks being killed, and the expected output can sit next to the test. For an operating system and for Kubernetes, where the whole point is what happens when something fails at a bad moment, this is priceless: the bad moment is reproducible down to the millisecond.

## Bootstrapping

You can't build a compiler written in language X until you have a compiler for language X. The classic way out is bootstrapping. First I made a small seed translator in Python, around two and a quarter thousand lines including the parser, that understands only the subset of RED the real compiler would be written in. Then I wrote the real compiler, [`redc`](https://github.com/tym83/paleocomputing/tree/main/impl/ada-colors/red), in that subset and ran it through the Python seed. The resulting compiler translated its own source, that result translated itself once more, and the two C files matched byte for byte. That's the fixed point: the compiler reproduces itself, and the seed is no longer needed.

This is where it gets interesting. From then on, all you need to build it is the C file that the latest compiler produced from its own source, and the language grows inside the compiler itself. Every new feature is added to `redc` in such a way that `redc` itself doesn't use it yet; then the compiler is built with the previous version, the fixed point is checked, and only after that may the new feature be used in its own source. That's how capsules, exports and nested procedures with static links, that is, pointers to the frame of the enclosing procedure, arrived first, then multitasking, then overloading with parameterized types, two-dimensional arrays and sets, and finally generics. Today the compiler is about eleven thousand lines of RED and translates itself in a couple of tenths of a second. On every change, CI rebuilds it twice from that C file and compares the results, and a separate build target repeats the very first step, from the Python seed, so the chain can be verified from scratch.

![The bootstrap and growth of the RED compiler. The Python seed is needed only for the first step; after that each version of `redc` is built by the previous one from the stored C file](../img/en-scheme-boot.png)

## What RED did to me

Eleven thousand lines in a 1979 language are a good test not only of the language but of your patience. Here are the places where headstrong RED argued with me, and almost every time, on reflection, it was right.

The very first thing the compiler did was refuse to translate its own lexer. The `upper` function turned a lowercase letter into an uppercase one via `POS(c)`, and the compiler insisted that `POS` wasn't a function. It turned out I had a global variable `pos`, the position in the token stream, and names in RED are case-insensitive, and built-in names like `POS` aren't reserved. By every rule, my variable had hidden the built-in function. Later the same thing happened with a record field `len`, which collided with the `.LEN` attribute, and later still with a task parameter `me` that hid the built-in function `ME`, which returns the current activation. Each time the compiler did what the scoping rules told it to, and each time it took me about five minutes to believe it.

RED has more than fifty reserved words, and some of them are unexpected: `TO`, `CAPSULE`, `EXPOSE`, `IMPORTS`, `READONLY`, `SUBTYPE`. The parser function `subtype` had to be renamed, and the variable `to` in the operating system's client became `dest`.

RED has no null statement. An empty body is written as empty space, so `WHEN DELAY(20) => ;` is a syntax error. Later I found the same construct, `DELAY_UNTIL (next) => ;`, in the solution to the eighth contract problem, even though, according to the Red team, their translator had checked the syntax of all the solutions. Apparently the 1979 translator was more forgiving about this than the diagrams.

Fixed-length strings annoyed me at first, but turned out not to be scary at all: anything that lives longer than a single expression the compiler keeps in pointer strings, and the expressions themselves concatenate strings to their heart's content.

But the most valuable rule is `IMPORTS`. While the compiler didn't check it, I naturally wrote any old way. Once the check appeared, I had to go through the compiler's source once from top to bottom and declare in every subprogram what it imports. For the small functions of the lexer and the tables these are real lists, but for the parser and the code generator, which touch almost all of the global state, I wrote `IMPORTS ALL`, and those subprograms turned out to be four fifths of the code. And that's honest too: the header tells you at a glance that the procedure touches everything. And in the smaller programs, the operating system and Kubernetes, where the lists are short and real, the same check caught my mistakes twice. For the first time I understood why the authors of the language requirements insisted so hard on explicit interfaces.

## And the same for Green

[The green-language compiler](https://github.com/tym83/paleocomputing/tree/main/impl/ada-colors/green), written in the green language itself, is about fourteen thousand lines, and it was bootstrapped exactly the same way: a Python seed, a first version, a fixed point, and then growth, each version built by the previous one. It has packages with private types and overloading that tells apart parameter types, their modes, their names and the result type, and operators can be declared as function names. It has all fifteen exceptions, tasks with `initiate`, rendezvous and `select`, task and entry families, and generics with explicit instantiation via `is new`. The programs from the 1979 introduction [work](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/notes/green-findings.md), and in two of them the compiler found errors it can't let through: a comparison of the real `NET_RISE` with an integer literal, and the octal number `8#8060`, which contains the digit 8.

What the compilers found in other people's code deserves a chapter of its own.
