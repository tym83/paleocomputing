# If Blue or Yellow had won

In the article about the finalists I tried to imagine a world where the red language won in May 1979. In short: Ada would have separated messages and shared data from day one, generic instances would have been created without declarations, and PL/SQL in every Oracle database would have been written in a language with mailboxes. Here the fork comes earlier, in April 1978, when Green and Red were taken into the second round. Let's imagine the panel had decided otherwise.

First, what wouldn't have changed in any of the worlds. The DoD's Ada mandate held from 1987 to 1997 and ended not because of rendezvous or monitors but because the commercial market went to C and C++, and the requirement cost more than it gave. Those economics didn't depend on the colour of the language. So any winner would have become the language of avionics, railways and space, and almost certainly not the language of everything else. The differences below are differences inside that niche, and in which ideas leaked from it into the mainstream.

## A world where Blue won

The first thing that would have happened is delay. Ada compilers were late as it was: the first one to pass the conformance check appeared only in 1983. The blue language is the heaviest of the four to implement. Inferring generic instances from arguments, checking imports along the whole call chain, computing fixed-point scales: all of this costs years of work. The pressure towards language subsets, which the DoD prohibited, would have been stronger.

The second is a culture of strict specification. Even in our world Goodenough built the test suite for Ada compilers. In the blue world the same strictness would have been visible in the language itself: every procedure in every DoD project would declare what it touches and what it can throw, and the compiler would check it mechanically.

The third is generic programming. Alexander Stepanov, having started with Scheme, built a library of generic algorithms for Ada with David Musser in the late eighties, and only then moved to C++, where he missed constraints on template parameters. He pushed for concepts for many years, until they made it into C++20. The blue language had type constraints from the very beginning, in `WHERE T NEEDS`, and instances were created by themselves. In the blue world, generic algorithms with type constraints could have appeared in a military language in the mid-eighties.

The fourth is concurrency. A parallel block that doesn't lose its branches' errors would have become the norm for onboard software forty years before Trio and Swift. And locks that are released when their owner dies would have entered the textbooks along with the language. The blue world has no messages, but in ours too military software lived on shared memory and Ada tasks, not on messages. Message-based languages, from Erlang to Go, would have reached them by their own path, so here the blue world is neither worse nor better than ours.

And the fifth, quite down to earth. PL/SQL in Oracle is largely built on Ada because Ada was the DoD's language. In the blue world, procedures in every Oracle database would begin with `PROCEDURE P (# X, Y: ?T)`, and enumeration values would be written with a backslash. I'm not sure database administrators would have survived it.

## A world where Yellow won

The yellow world is arranged quite differently, because Yellow is Pascal. In 1979 Pascal was already taught everywhere, Wirth was finishing Modula-2, and a few years later Turbo Pascal would make Pascal the language of personal computers. Of the four, the yellow compiler is the smallest, and it would have been built on the ready base of Pascal compilers, so a yellow Ada would most likely have come out earlier than ours. Add to that the DoD's seal: the language of textbooks, the language of PCs and the language of military systems would have turned out to be one family. The school of Wirth and Hoare, which in our world lost to C, would have gained an industrial ally with an enormous budget. Would it have beaten C? Hardly; C had Unix. But the eighties would have passed as a contest between two equal families rather than as the slow displacement of Pascal.

Hoare's monitors would have become standard in 1980, together with his semantics, in which the woken process gets the monitor handed over directly. In our world monitors reached the mainstream through Mesa and Java, with the mandatory loop around `wait`. Mesa chose its semantics for practical reasons, and Java might well have chosen the same in the yellow world too. But a generation of programmers trained on military monitors would have known both variants and the price of each. And Ada 95 wouldn't have needed protected objects: the language would already have had the monitor. Instead, yellow Ada would have had to add what it lacked for me: a timeout on waiting, process names and arrays of monitors. The panel wrote plainly in 1978 that Yellow had no way to identify a process, and in the second round this would, of course, have been fixed.

The yellow world would have had its own traps too. Comparisons that bind more weakly than `AND`, the very ones the authors themselves tripped over in the SIFT scheduler, would have lived in aircraft code until they were fixed in the second round or analysers started catching them.

The most interesting difference of the yellow world is `SIMULATED_TIME`. Any piece of an onboard system could have been wrapped in a block with artificial time and run reproducibly. That wouldn't have solved every problem: you'd still have had to enumerate different process orderings yourself, as today's deterministic simulation systems do, and the language doesn't model hardware failures. But timing bugs could have been reproduced on the bench from 1980 on, instead of being chased for years at the customer's site. In our world we got there in the 2010s.

And there would have been a different Hoare lecture. In 1980 he received the Turing Award, and in his lecture "The Emperor's Old Clothes" he told how he had been giving advice to the Ada project since 1975, and warned that the language was too complex to be trusted with people's lives. In the yellow world Ada would have grown out of a language that, by all accounts, he himself had advised on.

## Four worlds

Put all four variants together and you get this.

| Winner | What military software would have become | What would have reached the mainstream sooner |
|---|---|---|
| GREEN, our world | rendezvous, explicit generic instances, later protected objects | exceptions and generics that influenced C++ |
| RED | mailboxes, `REGION` locks, custom schedulers | the separation of messages and shared data, generic instances without declarations |
| BLUE | strict types, two kinds of semaphores, the parallel block | structured concurrency, constraints on generic parameters, locks with owners |
| YELLOW | Pascal with monitors and simulated time | simulation with controlled time, Hoare's monitors, side-effect-free functions |

The strangest thing about this table is that every row except the first describes something the industry arrived at anyway, only later and piecemeal. Almost none of the losers' ideas disappeared. They came back under other names: protected objects, concepts, structured concurrency, deterministic simulation. The 1978 competition wasn't choosing between good and bad ideas, but between which of them we would get in the eighties and which in the twenties.
