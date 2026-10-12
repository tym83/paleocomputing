# A compiler that compiles itself

The goal I set myself was this: each language should have a compiler written in that language. That's not just a nice tradition. A compiler is an honest test of a language: if you can write several thousand lines of parsing, symbol tables, type checking and code generation in it, the language is fit for real work, and all its awkward spots will surface on their own.

## A shared runtime and predictable time

Both compilers translate a program into C and build it against a shared runtime written in C, about thirteen hundred lines. It holds strings, exceptions, checked arithmetic, I/O, RED's mailboxes and locks, the green language's rendezvous, and the task scheduler.

With the scheduler I did one thing that paid for itself many times over. Every task in the runtime is an operating system thread, but the threads pass a baton to one another, and at any moment exactly one of them is running. Thanks to that, RED's scheduling rules hold to the letter: the task with the highest priority runs, among equals the one that has waited longest goes first, and a task that becomes ready with a higher priority preempts the current one. Time is virtual: when every task is waiting for something, the clock jumps straight to the nearest wake-up. And if there's nobody left to wake, the runtime doesn't hang; it prints that all tasks are blocked. The upshot is that any program prints exactly the same thing on every run, even with a dozen tasks, timeouts and processes being killed, and the expected output can sit next to the test. For an operating system and for Kubernetes, where the whole point is what happens when something fails at a bad moment, this is priceless: the bad moment is reproducible down to the millisecond.

## Bootstrapping

You can't build a compiler written in language X until you have a compiler for language X. The classic way out is bootstrapping. First I made a small translator in Python, around two and a quarter thousand lines including the parser, that understands only the subset of RED the real compiler would be written in. Then I wrote the real compiler, `redc`, in that subset and ran it through the Python bootstrap. The resulting compiler translated its own source, that result translated itself once more, and the two C files matched byte for byte. That's the fixed point: the compiler reproduces itself, and the bootstrap is no longer needed.

This is where it gets interesting. From then on, all you need to build it is a "seed" C file that the latest compiler produced from itself, and the language grows inside the compiler. Every new feature is added to `redc` in such a way that `redc` itself doesn't use it yet; then the compiler is built with the previous version, the fixed point is checked, and only after that may the new feature be used in its own source. That's how capsules, exports and nested procedures with static links arrived first, then multitasking, then overloading with parameterized types, two-dimensional arrays and sets, and finally generics. Today the compiler is about five thousand lines of RED and translates itself in hundredths of a second. On every change, CI rebuilds it twice from the seed and compares the results, and a separate target repeats the very first step, from the Python bootstrap, so the chain can be verified from scratch.

## What RED did to me

Five thousand lines in a 1979 language are a good test not only of the language but of your patience. Here are the places where RED argued with me, and almost every time, on reflection, it was right.

The very first thing the compiler did was refuse to translate its own lexer. The `upper` function turned a lowercase letter into an uppercase one via `POS(c)`, and the compiler insisted that `POS` wasn't a function. The culprit was a global variable of mine, `pos`, the position in the token stream, and names in RED are case-insensitive, and built-in names like `POS` aren't reserved. My variable had dutifully hidden the built-in function. Later the same thing happened with a record field `len`, which collided with the `.LEN` attribute, and later still with a task parameter `me` that hid the built-in function `ME`, which returns the current activation. Each time the compiler did exactly what the scoping rules said, and each time it took me about five minutes to believe it.

RED has more than fifty reserved words, and some of them are unexpected: `TO`, `CAPSULE`, `EXPOSE`, `IMPORTS`, `READONLY`, `SUBTYPE`. The parser function `subtype` had to be renamed, and the variable `to` in the operating system's client became `dest`.

RED has no null statement. An empty body is written as empty space, so `WHEN DELAY(20) => ;` is a syntax error. Later I found the same mistake in the Red team's 1979 solution to the eighth benchmark problem.

Fixed-length strings annoyed me at first, but they're really not scary: anything that lives longer than a single expression the compiler keeps in pointer strings, and the expressions themselves concatenate strings to their heart's content. The real nuisance was something else: you can't write a double quote in a string literal, and a compiler that generates C writes double quotes constantly.

But the most valuable rule is `IMPORTS`. While the compiler didn't check it, I naturally wrote any old way. Once the check appeared, I had to go through the compiler's source honestly, once, and after that the header of any procedure tells you at a glance which global tables it touches. In a program of this size that genuinely helps, and for the first time I understood why the authors of the language requirements insisted so hard on explicit interfaces.

It's also worth talking about what the compiler finds in other people's code. That's the next chapter.
