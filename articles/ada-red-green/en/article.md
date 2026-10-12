# Two Adas: I resurrected both finalists of the Pentagon's 1979 language competition and wrote an OS and Kubernetes in the one that lost

On May 2, 1979, a small working group at the US Department of Defense voted for a language that was announced as Ada that same evening. The program had run for four years and drawn some fifteen proposals, but only two made it to the final, and right up until the announcement they were known by colors: Green and Red. Green won. It was built by Jean Ichbiah's French-American team. Red, the work of the Boston company Intermetrics, lost and was all but forgotten. And yet, according to its authors, Red had a working translator. Under the terms of the contract it couldn't be taken into account in the selection, and it has never turned up since.

I had long wanted to know what exactly lost that day. Not from secondhand accounts, but with my own hands: take the 1979 documents, rebuild both languages from them, write a self-compiling compiler in each, and see what these languages can do when you write real programs in them. In September and October 2026 I did just that. Along the way the red language grew a small operating system in the spirit of Tandem NonStop, the machine that in the seventies knew how not to crash, and a Kubernetes control plane. In one of its variants that control plane gets by without etcd and without a quorum: it's built as a Tandem process pair, a primary and a backup, and it survives the death of the API server in the middle of an application rollout. But the most instructive find wasn't in the code: the Ada that won then spent decades, slowly and expensively, winning back what the loser had from the very beginning.

This is the third part of my series on paleocomputing. In [the first](https://habr.com/ru/articles/1087928/) I ran Niklaus Wirth's processor in a browser, in QEMU and in Kubernetes; in the second I built Kubernetes on Oberon machines that call to each other over radio. You don't need to read them first; this story stands on its own.

I'm interested in the ideas that lived inside technologies that lost: what we threw away along with them, and which of the things we threw away came back later under other names. Ada is especially good material for that. Its requirements were written over years, in public, by the whole world; dozens of review teams picked the finalists apart; and the whole story is well documented.

The article came out long. First, briefly, how the competition came about, why the Greens won, and what was left of the losers. Then a tour of both languages, the story of the compilers, and how a 1979 program ran for the first time. After that come the operating system, Kubernetes, a comparison with classic Ada and labs, and at the end an alternative history: what the industry might have become if different hands had gone up in May 1979.

I'll say up front that almost all of the code in the project was written not by me but by AI agents, just as in the earlier parts of the series. My part was the idea, the decisions, the checking, and an endless stream of questions along the lines of "are you sure that's what the Reference Manual says?" Some of the work ran in parallel: one agent reconstructed the grammar of the red language from images of syntax diagrams, another went through the green documents, a third ported the competition's contract problems, a fourth dug into the history, and yet another, while I was busy with the red language, built the whole toolchain for the green one. Wherever "agents" show up in the text, that's who they are.

All the sources, notes and instructions are in the repository [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), under `impl/ada-colors`.

# How the Pentagon chose a language

In the mid-seventies the US Department of Defense had a problem that today we'd call a technology zoo. Embedded software for aircraft, ships and command systems was written in hundreds of languages and dialects, every contractor brought its own, and maintaining the whole menagerie cost billions. In January 1975 the High Order Language Working Group, HOLWG, was formed, and its chairman, Air Force Lieutenant Colonel William Whitaker, proposed something strange for a military agency: first agree, in public, on the requirements for the language, and only then go looking for the language.

The requirements took several years to write, and you can watch them harden in the names of the revisions: Strawman in April 1975, then Woodenman, Tinman, Ironman and finally Steelman in June 1978. Tinman went out to more than a thousand people in industry and academia, and even earlier, for Strawman, Dijkstra, Hoare and Wirth sent in comments. Twenty-three existing languages were checked against the requirements, and the conclusion was that none of them fit and that a new one should be built on the basis of one of three: Pascal, PL/I or Algol 68. One amusing detail from Whitaker's recollections: Bell Labs asked that C not be included in the evaluation, and the group honored the request.

In the spring of 1977 the competition was announced. Fourteen proposals came in, and in August four teams were funded. So that reviewers would judge on substance rather than brand names, the designs were anonymized by color: Green went to CII-Honeywell-Bull, Red to Intermetrics, Blue to SofTech and Yellow to SRI International. According to Whitaker, the colors meant nothing beyond that. Funnily enough, all four teams independently started from Pascal.

In February 1978 the four preliminary designs went out for evaluation, and some eighty teams from military and civilian organizations pored over them. Dijkstra spent the whole of March on them and wrote a review of each. He called Yellow a hopeless mess, faulted Blue for a 160-page chapter on types, ended his review of Green with a phrase about "technical incompetence, probably enhanced by dishonesty," and confessed to being baffled by Red: the design was at once advanced and backward, and he couldn't see how the two went together. He advised Whitaker not to continue with any of the four. The advice wasn't taken: in April 1978 Green and Red went through to the second round.

The second round lasted a year. And here is what matters most for this story. The Red team threw out its first design entirely. The chief designer, John Nestor, rewrote the language from scratch, so there are actually two "red" languages. The first, REDL, was built on monitors and events. The second, RED, the one that reached the final, rested on mailboxes and critical sections. Red's consultants included Barbara Liskov, William Wulf, Paul Abrahams and Robert Dewar, the future head of the GNAT project. On March 15, 1979, both teams handed in a complete specification, a rationale for their decisions, solutions to the same set of contract problems, and a test translator.

Red's translator worked. It was built by Mark Davis's group, and in the recollections of Mary Van Deusen, co-author of the RED manual, it comes across as a small feat: a compiler for a language that kept changing under it, ready on time. But the second-round contract stated that the translator would not be considered in the selection. Whitaker, for his part, explains it differently: both translators turned out to be too incomplete, and possibly too slow, to influence the evaluation.

On May 2, 1979, the group chose Green. That same day Whitaker sent out three thousand green postcards reading "Green is Ada!" The vote was unanimous, like every vote this group ever took: Whitaker admits he only put a question to a formal vote once everyone already agreed. Van Deusen tells a story from the losing side about a young Air Force representative who had been ordered to vote for Green, discuss nothing and not change his mind. I found no confirmation of this, so let it stand as one side's account.

Why Green won is written, in the documents available, mostly between the lines. The reviewers' reports, as far as I could find out, exist only on microfiche and aren't online. Tucker Taft, who joined Intermetrics in 1980 and later led the design of Ada 95, says Green reached stability and completeness earlier than the others, and that Ichbiah was remarkably good at presenting it to the reviewers. Van Deusen recalls that the Green team had a very fine sense of politics from day one, and that its first design decision was the length of the book. And a popular Time-Life book on programming languages from 1986 has what I think is the most accurate line of all, put in the mouth of one of the competitors: in the final, both languages changed, with Red growing bolder and Green more conservative.

Then came a long polishing period. The Preliminary Ada Reference Manual was published in June 1979 in SIGPLAN Notices; it was picked apart and reworked, and only in February 1983 did the ANSI/MIL-STD-1815A standard appear, the one we now call Ada 83. The standard's number comes from the year Ada Lovelace was born. Intermetrics buried the red language quickly and, according to Van Deusen, completely. But this story has a sequel that I'll come back to.

# What was left of the losers

When I first took up this story, I was sure almost nothing of the red language had survived. The opposite was true, and that's a common story in paleocomputing: "nothing survived" is almost never the case. What survived is simply lying somewhere other than where people look.

The RED manual of March 8, 1979, was retyped in full as HTML by Mary Van Deusen, its co-author, for the competition's thirtieth anniversary. Next to it sits the complete Rationale, with its discussion of rejected alternatives, solutions to the ten contract problems and an example of a library capsule. Van Deusen writes that after the competition these documents were unavailable to the public. That's true for 1979–1990, but in March 1990 the manual went into the Defense Technical Information Center archive, DTIC, marked "approved for public release," and it's still there under the number AD-A219453.

The syntax of RED is given in the manual not as text but as diagrams, and every one of them is an image. One of the agents redrew the eighty-three language diagrams and twelve lexical ones as an ordinary grammar, examining each image, and along the way transcribed 105 code examples that were also images. Nothing was left illegible. What did turn up were inconsistencies within the manual itself. For example, the diagram puts a semicolon after a goto label, while the table of special characters and the examples use a colon.

With the green language I expected the opposite: Ada won, after all, so its documents should be everywhere. Ada 83 is everywhere, but the green language as it stood in the spring of 1979, before all the rework, was harder to find. The DTIC mirror on the Internet Archive came to the rescue. It had the "Informal Introduction to the Green Language," its formal definition, the Green team's solutions to the same contract problems and, most valuable of all, two documents I hadn't known about: the "Preliminary Ada Reference Manual" of May 1979, with a letter attached from the Deputy Secretary of Defense dated May 14 announcing the choice of language, and the complete Rationale of the Green design dated March 15, 1979, the day the final materials were due. All of it is scans with poor text recognition, in places nightmarish, but readable.

The contract problems deserve a word of their own. These are ten problems the DoD handed to every team: polling keyboards through a shared ring buffer, an interrupt system with four priority levels, a file package, dynamic graphics with joysticks, protecting a database from concurrent access, process control, adaptive routing, a real-time scheduler, distributed broadcast, and unpacking bit-level message headers. Both teams worked from the same problem text, so for the first time in forty-seven years the red and green solutions can be laid side by side. An agent transcribed all twenty solutions from images and scans into source files. The Red team got by in 815 lines of code without comments, the Green team needed 1660, twice as many. Three quarters of the difference comes from three problems where the Green team had to write server tasks in places where Red has built-in mailboxes, critical sections and deferred activation.

What I couldn't find. The Blue and Yellow designs, judging by a 2023 thread on the systemsafety mailing list, are inside a huge 4575-page volume of first-round reports in the same DTIC, but the DTIC site refuses to serve it to scripts, and that's a job for a separate evening in a browser. And Red's translator itself. All that remains of it is a bibliographic reference in a 1981 article by Van Deusen ("M. Davis and D. Levine, RED Translator, Intermetrics, Inc., March 1979"), a couple of paragraphs in the Rationale about what input/output it supported and how the syntax of the contract problems was run through it, and Van Deusen's own recollections. No source code. So we won't see the compiler that existed in 1979, but we can write a new one, and it's probably the first publicly available RED compiler in the language's entire history.

# A tour of RED

At first glance RED looks like Pascal that has spent a long time at the gym. Here's a fragment from the examples in the Rationale: a matrix arithmetic package from its appendix, whose examples were written by Paul Abrahams, Bruce Knobe, David Levine and others (I've substituted the constants and removed the comments):

```
CAPSULE matrix_vector_package EXPORTS ALL;
CONST maxdim := 100;
ABBREV mvfloat : FLOAT(6, -1.0E99 .. 1.0E99);
ABBREV dim : INT(2 .. maxdim);
TYPE matrix(m : dim, n : dim) : ARRAY INT(1 .. m), INT(1 .. n) OF mvfloat;
TYPE vector(n : dim) : ARRAY INT(1 .. n) OF mvfloat;

FUNC *(READONLY b : matrix, READONLY c : vector) => vector(b.m);
    ASSERT b.n = c.n;
    VAR a : vector(b.m);
    FOR i : INT(1 .. b.m) REPEAT
        a(i) := 0.0;
        FOR j : INT(1 .. b.n) REPEAT
            a(i) := a(i) + b(i,j) * c(j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC *;
```

Look closer, though, and these fifteen-odd lines already contain a lot of things the mainstream would only get much later. Dimensions live in the type: `vector(n)` is a type with a parameter, and `b.m` and `c.n` read like ordinary attributes of a value. The result type is computed from the arguments: the function promises to return `vector(b.m)`. The `*` operator is overloaded on operand types: scalar times vector, matrix times scalar, matrix times vector, matrix times matrix. And the cross product is declared as `*` for `vector(3)`: the constraint on the dimension is written right into the parameter type, and a call with a vector of a different length raises a subtype exception. In Rust you'd express that constraint with const generics, `Vector<3>`. And there's `ASSERT` right in the function body, as part of the language.

Below I'll go through what struck me as most interesting in RED. Almost none of this is a summary of the Reference Manual; it's the stuff I personally tripped over while writing a compiler, an operating system and Kubernetes in RED.

## Capsules and abstract types without the word private

A module in RED is called a capsule. A capsule exports exactly what is listed after `EXPORTS`, and whoever uses it explicitly opens up what they need with `EXPOSE`:

```
CAPSULE stackcap EXPORTS stack, init, push, pop;
   TYPE stack : RECORD[top : INT(0 .. 100), elem : ARRAY INT(1 .. 100) OF INT];
   ...
END CAPSULE stackcap;

EXPOSE stack, push, pop FROM stackcap;
```

In Ada an abstract type is made with a `private` section in the package specification. RED has no such section, but it does have a rule that I skipped at first and later got caught by myself: when a capsule exports a type, it exports neither selection of its components nor assignment. From outside you can declare a variable of type `stack` and pass it to `push`, but you can't write `s.top := 0`. If you want to expose the insides, the simplest way is to export everything with `EXPORTS ALL`. In other words, whether a type is abstract is determined not by how it's declared but by what the capsule lets out. When you think about it, that's a very honest model: the type itself hides nothing; the module boundary does the hiding.

## Closed scopes and IMPORTS

This rule turned out to be the one I felt most in day-to-day work. A procedure in RED is a closed scope: it can see constants, types and other procedures from outside, but not variables, unless it imports them explicitly:

```
VAR hits : INT := 0;
VAR limit : INT := 3;
PROC hit IMPORTS hits, READONLY limit;
   IF hits < limit THEN
      hits := hits + 1;
   END IF;
END PROC hit;
```

An import can be read-only. Essentially it's the same thing as a lambda capture list in C++, except mandatory and for every procedure. For a language meant for maintaining enormous programs over decades, that's sensible: the procedure header tells you at a glance what state it can mess up.

Next to it is the distinction between normal and abnormal functions. A normal function depends only on its arguments, and the translator is allowed to drop a repeated call with the same arguments. If a function's result depends on more than its arguments, say it reads outside variables, you have to put `ABNORMAL` in front of it. A normal function is allowed side effects only on its own capsule's variables, such as a call counter or a memo table. The word looks funny, but the idea is close to what we now call pure functions.

Parameters are passed in four ways: `CONST` copies, `READONLY` passes by reference without the right to modify, `VAR` passes by reference with modification, and `OUT` copies back on normal completion. To be honest, my compiler doesn't do that copying: for it, `OUT` works like `VAR`. The Red team justifies the split between copying and by-reference reading separately: "it doesn't matter how" won't do, because then behavior depends on the implementation, and copying alone is too expensive for large objects.

## Exiting a loop by name

A small thing I really liked. `EXIT` in RED must name the statement it exits from:

```
outer WHILE p /= NIL REPEAT
   ...
   IF found THEN
      EXIT outer;
   END IF;
END REPEAT outer;
```

The justification takes one sentence: if `EXIT` left the nearest loop, then wrapping a new loop around it would silently change the meaning of the program. I've seen that bug in production more times since then than I'd like.

## Mailboxes, WAIT and REGION

The main difference between RED and the future Ada is concurrency, and here a short digression is in order for those who haven't written Ada. In both languages a task is what today we'd call a thread: a piece of the program that runs at the same time as the rest. The question is how tasks come to terms with each other. In Ada, and in the green language before it, the only way is the rendezvous. A server task has entries that look like procedures. The client calls an entry and waits; the server reaches an `accept` statement for that entry in its own code and waits too; and when both are there, the body of the `accept` runs, after which each goes its own way. It's a meeting, hence the name. RED works differently: tasks exchange messages through mailboxes and protect shared data with critical sections:

```
VAR m : MAILBOX[msg](3);         % a mailbox for three messages
VAR d : DATA_LOCK;

TASK consumer IMPORTS m;
   VAR data : msg;
   WHILE TRUE REPEAT
      RECEIVE(m, data);
      ...
   END REPEAT;
END TASK consumer;

VAR c : ACT;
CREATE consumer NAMED c;
SEND(m, x);

REGION d DO
   shared := shared + 1;          % the lock is released however the body ends
END REGION;
```

A mailbox is typed and bounded. A mailbox of size zero is a rendezvous: the sender can't get ahead of the receiver. The `WAIT` statement waits for the first of several events: a receive from any mailbox, a send, or a timeout:

```
WAIT
   WHEN RECEIVE(ports(me), m) => handle(m);
   WHEN DELAY(35) => take_over;
END WAIT;
```

And here's a detail that shows how carefully the language was thought through. A `SEND` to a zero-size mailbox inside `WAIT` is forbidden: the attempt raises the `X_EMPTY_MAILBOX` exception. The reasoning: otherwise tasks waiting on each other to send to zero-size mailboxes could end up in a circular wait, and the only way to prevent it would be global scheduling.

`REGION` acquires a data lock and is guaranteed to release it no matter how the body ends: normally, by an exception, by exiting a loop, or by returning from a procedure. Ada 83 has nothing like it; there a lock is built as a separate task with two entries, and if an exception strikes between acquire and release, the lock simply stays held. More on that in the comparison chapter.

Tasks are started explicitly, `CREATE task NAMED variable`, and every activation has a name, a variable of type `ACT`. You can ask it whether the task is alive, change its priority, wait for it to finish, or kill it with `EXTERMINATE`. The built-in scheduler is priority-based: higher priority goes first, and among equals whoever has waited longest goes first. And at the language's lowest level, in chapter fourteen of the Reference Manual, a systems programmer can describe their own scheduler and their own synchronization mechanisms. I didn't get down to that level in the compiler, but the very fact that a 1979 language invited the user to write schedulers, not just use the one provided, says a lot to me.

## Generics that instantiate themselves

A generic procedure in RED looks like this:

```
GENERIC t : TYPE NEEDS :=(t, t)
   PROC swap(VAR a, b : t);
      CONST c := a;
      a := b;
      b := c;
   END PROC swap;

swap(i, j);       % i and j are integers
swap(s, r);       % s and r are strings
```

Notice what isn't there. In Ada you first have to create an instance explicitly, `procedure SWAP_INT is new SWAP(INTEGER)`, and only then call it. RED has no instantiation statement at all: each call tells the translator which types it needs, and the translator creates an instance or reuses one it already has. That's how C++ templates work, only eleven years earlier. And the `NEEDS` list spells out which operations the type parameter must have, assignment in this case. C++ got that in 2020, as concepts. My compiler so far only reads this list and doesn't check it. Generic parameters can be types, values, procedures and even tasks. In its solution to the scheduler contract problem, the Red team passes a task as a parameter to a generic wrapper task that launches it on schedule.

## Strings that remember their length

The string type in RED is `STRING[ASCII](n)`, and the length is fixed for each object. You can't assign a string of a different length; that's a subtype error. For variable-length text you need a pointer type with a parameter, and the Reference Manual has exactly such an example, a symbol table:

```
TYPE sym : PTR (len : INT) STRING[ASCII](len);
ALLOC s.syms(s.top) PTR (val.LEN) := val;
```

The RED compiler written in RED stores all its names and chunks of generated code exactly this way. ASCII characters in RED are named enumeration values, so a lowercase a is written `'L_A`, an apostrophe `'APOS`, a double quote `'QUOTE`. You can't put a double quote inside a string literal at all; you can only concatenate the string with the character. In the source of a compiler that generates C, this looks rather funny: `"rt_str(" & q & "TRUE" & q & ", 4)"`, where `q` is a function that returns a double quote.

## A FREE that refuses to free

One last thing in the Reference Manual impressed me, although I didn't implement it in the compiler. A dynamic variable in RED lives as long as there are references to it, which means that by default the language assumes garbage collection. But for those who can't afford it, there's a `FREE` procedure. If other pointers to the variable being freed still exist, `FREE` doesn't free it; it raises the `X_FREE` exception. A dangling pointer becomes impossible by construction, and the cost of the check can be switched off with a pragma if you really must. In 1979.

# GREEN in the spring of 1979

It's easy to take the green language for early Ada, but that's deceptive. The preliminary manual of May 1979 describes a language that looks like Ada 83 in its syntax and yet in places is something else entirely. A separate agent built a compiler for the green language in the green language itself while I was busy with the red one, and along the way the language showed as much character as RED did.

## What a program looks like

Here's one of the programs from the "Informal Introduction," a change counter:

```
restricted (TEXT_IO)
procedure COUNT_YOUR_CHANGE is
   use TEXT_IO;
   ...
begin
   ...
      PUT("CHANGE IS $");
      PUT(NUM_DOLLARS);
      PUT(".");
      PUT(NUM_CENTS);
   end if;
end;
```

Several differences from Ada 83 are visible right away. Instead of `with TEXT_IO`, the procedure is preceded by `restricted(TEXT_IO)`: in the green language every compilation unit is by default restricted to an empty visibility list, and libraries have to be named explicitly. What's more, `restricted` can go in front of any nested module, not just a compilation unit, narrowing its visibility inside the program. There's no `PUT_LINE` procedure: a line break is the string constant `NEWLINE`, printed with `PUT(NEWLINE)`. This program, by the way, doesn't print one at all. And under the 1979 I/O rules, every number printed anywhere other than the start of a line gets a space in front of it. So this program from the 1979 introduction literally prints `CHANGE IS $ 2. 53`, and apparently nobody noticed at the time.

A character literal in the green language is a string of length one, `"A"`; there's no apostrophe for characters, it's only for attributes. Enumeration positions count from one, so `CHARACTER'ORD("A")` is 66. The `mod` operation takes the sign of the left operand, which means it behaves like `rem` in Ada 83, and there's no `abs` operator, only an `ABS` function. The branches of a `case` come after `of`, not `is`.

## Rules that shape the compiler

The main thing the agent tripped over was the function purity rules in section 6.5 of the manual. A function in the green language may not assign to anything nonlocal, modify objects through pointers, allocate memory, or, since input/output and external procedures can have side effects, call them. For generators like "give me the next unique number" there are value-returning procedures: `procedure NEXT return INTEGER`. They're allowed to change global variables, but they may be called only in an assignment, an initialization or a procedure call, and only where those global variables are out of scope.

That sounds like a formality until you start writing a parser. An ordinary recursive descent parser works like this: there's a pointer to the current token, and an `EXPR` function parses an expression, advancing the pointer and returning a tree. In the green language you can't do that. A function can't advance the pointer, and a value-returning procedure can't be called where the pointer is visible, and inside a parser it's visible everywhere. So the entire parser of the green-language compiler is written as procedures with out parameters: `EXPR(X)` instead of `X := EXPR`. The compiler checks these rules for other people's programs too, and its own source passes them.

Interestingly, the red language solved the same problem the opposite way. In RED a function is normal by default: its result depends only on its arguments, and the only things it may change are the hidden variables of its own capsule. If it needs more, it's marked `ABNORMAL`, and then anything goes. The green language forbids; the red language makes you label it. For military code the green approach is probably safer. For someone writing a compiler, the red one is more convenient, and I suspect places like this are exactly what got softened in 1980–1983.

## Tasks without task types

Multitasking in the green language is built on the rendezvous, as in Ada, but it looks different. There are no task types. You declare a task and it exists, but it starts only with an `initiate` statement. If the task is already running, a second `initiate` raises the `INITIATE_ERROR` exception, while a task that has finished can be started again, with fresh variables. To get many identical tasks there are families: `task KUBELET(INTEGER range 1 .. 3)`, and inside its body a task learns its number through `KUBELET'INDEX`. There are entry families too.

A `select` has guards, delays and `else`, but no `terminate` alternative, and if all the alternatives are closed and there's no `else`, `SELECT_ERROR` is raised. The calling side can't choose between waits at all: no timed call, no conditional call. An exception raised in the body of an `accept` reaches both sides of the rendezvous. And the only exception you can raise in another task is called `FAILURE`: `raise T.FAILURE`. There are fifteen predefined exceptions, and their names speak for themselves: `RANGE_ERROR`, `INDEX_ERROR`, `ACCESS_ERROR`, `DIVIDE_ERROR`, `NO_VALUE_ERROR` for reading an uninitialized variable or for a function that ended without `return`, and so on. Ada 83 replaced them with five more general ones: of the green names only `TASKING_ERROR` survived, and the rest merged into `CONSTRAINT_ERROR`, `NUMERIC_ERROR`, `PROGRAM_ERROR` and `STORAGE_ERROR`.

# A compiler that compiles itself

The goal I set myself was this: each language should have a compiler written in that language. That's not just a nice tradition. A compiler is an honest test of a language: if you can write several thousand lines of parsing, symbol tables, type checking and code generation in it, the language is fit for real work, and all its awkward spots will surface on their own.

## A shared runtime and predictable time

Both compilers translate a program into C and build it against a shared runtime written in C, roughly fourteen hundred lines. It holds strings, exceptions, checked arithmetic, I/O, RED's mailboxes and locks, the green language's rendezvous, and the task scheduler.

With the scheduler I did one thing that paid for itself many times over. Every task in the runtime is an operating system thread, but the threads pass a baton to one another, and at any moment exactly one of them is running. Thanks to that, RED's scheduling rules hold to the letter: the task with the highest priority runs, among equals the one that has waited longest goes first, and a task that becomes ready with a higher priority preempts the current one. Time is virtual: when every task is waiting for something, the clock jumps straight to the nearest wake-up. And if there's nobody left to wake, the runtime doesn't hang; it prints that all tasks are blocked. The upshot is that any program prints exactly the same thing on every run, even with a dozen tasks, timeouts and processes being killed, and the expected output can sit next to the test. For an operating system and for Kubernetes, where the whole point is what happens when something fails at a bad moment, this is priceless: the bad moment is reproducible down to the millisecond.

## Bootstrapping

You can't build a compiler written in language X until you have a compiler for language X. The classic way out is bootstrapping. First I made a small translator in Python, around two and a quarter thousand lines including the parser, that understands only the subset of RED the real compiler would be written in. Then I wrote the real compiler, `redc`, in that subset and ran it through the Python seed. The resulting compiler translated its own source, that result translated itself once more, and the two C files matched byte for byte. That's the fixed point: the compiler reproduces itself, and the seed is no longer needed.

This is where it gets interesting. From then on, all you need to build it is a "seed" C file that the latest compiler produced from itself, and the language grows inside the compiler itself. Every new feature is added to `redc` in such a way that `redc` itself doesn't use it yet; then the compiler is built with the previous version, the fixed point is checked, and only after that may the new feature be used in its own source. That's how capsules, exports and nested procedures with static links arrived first, then multitasking, then overloading with parameterized types, two-dimensional arrays and sets, and finally generics. Today the compiler is about five thousand lines of RED and translates itself in hundredths of a second. On every change, CI rebuilds it twice from the seed and compares the results, and a separate target repeats the very first step, from the Python seed, so the chain can be verified from scratch.

## What RED did to me

Five thousand lines in a 1979 language are a good test not only of the language but of your patience. Here are the places where RED argued with me, and almost every time, on reflection, it was right.

The very first thing the compiler did was refuse to translate its own lexer. The `upper` function turned a lowercase letter into an uppercase one via `POS(c)`, and the compiler insisted that `POS` wasn't a function. It turned out I had a global variable `pos`, the position in the token stream, and names in RED are case-insensitive, and built-in names like `POS` aren't reserved. By every rule, my variable had hidden the built-in function. Later the same thing happened with a record field `len`, which collided with the `.LEN` attribute, and later still with a task parameter `me` that hid the built-in function `ME`, which returns the current activation. Each time the compiler did what the scoping rules told it to, and each time it took me about five minutes to believe it.

RED has more than fifty reserved words, and some of them are unexpected: `TO`, `CAPSULE`, `EXPOSE`, `IMPORTS`, `READONLY`, `SUBTYPE`. The parser function `subtype` had to be renamed, and the variable `to` in the operating system's client became `dest`.

RED has no null statement. An empty body is written as empty space, so `WHEN DELAY(20) => ;` is a syntax error. Later I found the same construct, `DELAY_UNTIL (next) => ;`, in the solution to the eighth contract problem, even though, according to the Red team, their translator had checked the syntax of all the solutions. Apparently the 1979 translator was more forgiving about this than the diagrams.

Fixed-length strings annoyed me at first, but turned out not to be scary at all: anything that lives longer than a single expression the compiler keeps in pointer strings, and the expressions themselves concatenate strings to their heart's content.

But the most valuable rule is `IMPORTS`. While the compiler didn't check it, I naturally wrote any old way. Once the check appeared, I had to go through the compiler's source once from top to bottom and declare in every subprogram what it imports. For the small functions of the lexer and the tables these are real lists, but for the parser and the code generator, which touch almost all of the global state, I wrote `IMPORTS ALL`, and they turned out to be three quarters of the code. That's an honest signal too: the header tells you at a glance that the procedure touches everything. And in the smaller programs, the operating system and Kubernetes, where the lists are short and real, the same check caught my mistakes twice. For the first time I understood why the authors of the language requirements insisted so hard on explicit interfaces.

## And the same for Green

The green-language compiler written in the green language is about six and a half thousand lines. Its bootstrap went exactly the same way: a Python seed, a first version, a fixed point, and then growth, each version built by the previous one. It has packages with private types, overloading on parameter types, their modes, their names and the result type, operators as function names, all fifteen exceptions, tasks with `initiate`, rendezvous and `select`, task and entry families, and generics with explicit instantiation via `is new`. The programs from the 1979 introduction work, and in two of them the compiler found errors it can't let through: a comparison of the real `NET_RISE` with an integer literal, and the octal number `8#8060`, which contains the digit 8.

What the compilers find in other people's code deserves its own mention. That's the next chapter.

# A 1979 program runs for the first time

The most touching moment of the whole project came when the compiler learned overloading and parameterized types. I took the matrix arithmetic package from the RED Rationale, the same one I quoted at the start of the tour, added a small main program, and tried to translate it.

It didn't work. The compiler stopped at the line `ASSERT b.n : c.m`, a colon instead of an equals sign. The package had four such assertions. Next it turned out that the capsule opens under the name `matrix_vector_package` and closes under the name `vector_matrix_package`. Then, that the transpose function uses variables `m` and `n` that aren't declared anywhere in it, and two more procedures inside the matrix inversion refer to the same undeclared `m`. Then `a(p.r)`, `x(k.p)` and `x(i.p)` showed up, with a period instead of a comma. And the type `integer`, which RED doesn't have. On top of that came noise from the HTML retyping itself: stray backquotes, non-breaking spaces, a digit one instead of a letter in `1NT`, `SUBT_1OOP` and `realmultip1y`.

Every one of these errors is something any RED translator would reject on the spot. So the example in the Rationale was never compiled; it was typed up and sent to the printer. That's not surprising: the Red team's translator was ready by the same deadline as the documents, and there apparently wasn't time to run the appendix examples through it. I recorded every fix in a separate file, one line with an explanation per fix, so you can see that I corrected only what the translator wouldn't accept.

After those fixes the package translated and ran. Matrix-vector multiplication, cross product, dot product, determinant, and matrix inversion by raising to the power of minus one, and every number matched what I'd worked out by hand:

```
005.000 004.000 006.000
000.000 009.000 -006.000
dot = 031.000
det = 008.000
001.000 002.000 003.000
```

The logic errors that the translator lets through I left as they are, because by now they're part of the history. In the matrix inversion, rows are swapped under the condition `IF i = j`, when it should be `IF i /= j`, so pivot selection never actually kicks in. The determinant ignores the sign change on row swaps and multiplies the diagonal inside the elimination loop rather than after it. And the helper exponentiation function runs its loop up to an outside variable `k` instead of its own parameter. None of these errors show up on my test matrix, and most likely they wouldn't have shown up in 1979 either.

Next on the plan were the contract problems. The first to work was number six, "process control": task `a` reads punched cards into a double buffer, task `b` processes them, task `c` prints the result, and procedure `d` talks to the operator and, on the operator's `DONE` command, cleanly stops `a` and `b` without losing data. Once again the translator found things in the original that it can't let through. A new type with no parameters has a subrange taken from it, `mes('b0..'b1)`, while in RED such a type has exactly one subtype. The buffer array is declared as a type but used as a variable that doesn't exist. The activations are declared under the names `aa`, `ba` and `ca`, while the tasks are created under the names `cc` and `bb`. Task `b` sends its results to mailbox `mc` but, for some reason, imports `mr`. And the loop name at the end is spelled with one t instead of two. The input device and the processing, which the problem statement "assumes to be present," I filled in with stubs, and the operator issues commands on eighty-column punched cards, as befits 1979.

The most interesting part began after everything translated. The operator issues `DONE`, and task `a` keeps reading cards forever. It waits in a `WAIT` on two events at once: a returned buffer and a stop command. A buffer always comes back, and my runtime picked the first ready alternative in textual order. The stop command simply never got a chance. The RED manual says that the choice among ready alternatives is unspecified, so the 1979 solution is correct only if the implementation chooses fairly. I switched to round-robin selection, and `DONE` started working. And in the process my own Kubernetes broke, but more on that in its chapter. One more property of the 1979 solution surfaced on its own: if task `a` dies, the operator's console hangs forever on a send to a zero-size mailbox that nobody is left to read.

The remaining problems touch interrupts at specific addresses, buffers in memory and the bit layout of a word, so they needed hardware. I replaced it with device tasks on the virtual clock: keyboards send characters, joysticks report velocities, buttons are pressed at given milliseconds, and interrupt entries and mailboxes at fixed addresses became ordinary entries and mailboxes. The agents ported the remaining nineteen programs, and now all twenty solutions of the competition run, ten red and ten green, plus the matrix package.

Not one of them translated as printed. What's interesting is which errors each team made. Red's are mostly carelessness: undeclared names, an `OCTAL` function the language doesn't have, a parameter named `rep` although `REP` is a reserved word. But there are design errors too, ones a translator would let through. In the moving-objects problem, positions are kept as pointers, and the collision test compares pointers that are never equal: the objects on the screen simply cannot collide. In the database protection problem, every procedure finds a record, changes a copy of it and returns, so no reservation ever reaches the database.

Green has fewer typos but breaks the rules of its own language more often. Four solutions start tasks, leave a loop or return from a procedure right inside the body of an `accept`, which the 1979 manual forbids. In the file problem, a record is written one byte further on than it is later read from, so every record comes back shifted. In database protection, a release is accepted only after a new reservation, so `FREE` hangs forever, and a task waiting for exclusive access can deadlock with another. In the scheduler, a request whose deadline is earlier than the head of the list is simply lost, and the operator's requests are the first to disappear.

In 1979 dozens of reviewer teams read these texts. They read them by eye: the Red team, by its own account, ran only the syntax through its translator. I wrote down every change in a file next to the solution, one line with an explanation each, so the whole difference between what was printed and what runs is in plain view.

The texts also show the main difference between the two languages. The red solutions are half as long, and three quarters of the difference sits in three problems. In the real-time scheduler problem, the Red team doesn't write a scheduler at all: they have `DELAY_UNTIL` and a generic wrapper task whose parameter is another task, 44 lines in total. The Green team builds a full-blown scheduler task, woken by the clock interrupt, with a list of pending launches and a family of entries, 234 lines. In the database protection problem, the Red team puts in a critical section and retries in a loop, while the Green team lines users up in queues at the entries of a server task. Where Red has a lock, Green has a server. That is the whole 1979 dispute, and it's where we're headed next.

# An operating system in the spirit of Tandem

While I was reading RED's chapter on multitasking, one machine kept running through my head: the Tandem NonStop. Its operating system, Guardian, appeared in 1976 and was built in a strikingly similar way. Processes don't share memory and talk only through messages, and every important service runs as a pair of processes on different processors: the primary serves requests and, before every reply, sends the backup a checkpoint, a description of what has changed. If the primary's processor dies, the backup learns about it from the system that watches the processors' heartbeats, and carries on from where the last checkpoint left off. Joel Bartlett described this kernel at SOSP in 1981, and in 1985 Jim Gray wrote his famous paper on why computers stop and what can be done about it.

RED has everything you need to reproduce this: mailboxes are very nearly Guardian's message system, `WAIT` with a timeout is a missing-heartbeat detector, and `EXTERMINATE` does a fine impression of a processor losing power. That's how a small operating system called PAIRS came about, around three hundred lines.

It has three processors; process ports are mailboxes; and a name table says which port the `$BANK` service currently lives on. The bank runs as a process pair: the primary on processor 0, the backup on processor 1. Two clients each make six transfers between accounts. Every request is numbered, and if no reply arrives within 50 milliseconds, the client asks the name table again and repeats the request with the same number.

I staged the failure at the worst possible moment. The primary processed the second client's third request and sent the backup a checkpoint, but didn't get to reply to the client, because at that moment its processor lost power. Here's what happens next:

```
[0 ms] $BANK primary on CPU 0 (port 3), backup on CPU 1 (port 4)
[6 ms] $BANK primary checkpointed request 3 of client 2 and has not replied yet
[6 ms] CPU 0 loses power
[41 ms] $BANK backup on CPU 1 hears no heartbeat: takes over as primary
[41 ms] $BANK backup started on CPU 2, port 5
[56 ms] client 2: no reply to request 3, retrying
[56 ms] client 1: no reply to request 3, retrying
[56 ms] $BANK: request 3 of client 2 is a retry, answered from the checkpoint
...
[68 ms] audit: every confirmed transfer is in the books exactly once
```

For 35 milliseconds the backup hears no heartbeat; then it takes the name `$BANK`, starts a new backup for itself on a free processor, and ships it the entire state. The clients get no replies and retry. The first client's request burned up in the dead process's mailbox, so the new primary executes it for the first time. The second client's request, though, the new primary recognizes by its number: the checkpoint got through, so the transfer has already been made, and the client simply gets the saved reply back. At the end the clients hand in a log of everything that was confirmed to them, and it's reconciled against the bank's books. Every confirmed transfer is accounted for exactly once.

Now for the most instructive part. If you swap two lines in the primary, so that the reply to the client goes out first and the checkpoint after it, and the processor dies in between, here's what you get:

```
[68 ms] account 2: 40   clients were told: 10
[68 ms] account 4: 160   clients were told: 190
[68 ms] total 400
[68 ms] audit: 2 accounts disagree with what the clients were told
```

The client was told a transfer of thirty units went through, and the books have no record of it. And note: the total amount of money is still 400, so if that's all you look at, you see no error at all. That's exactly what the "checkpoint before reply" rule is for, and it's very easy to break with the best of intentions, for the sake of speed. This became one of the labs.

# Kubernetes on mailboxes

For those who haven't worked with Kubernetes, three sentences. In Kubernetes you don't command "start three copies of the service"; you write the desired state into a store, a deployment with three replicas, and a set of independent controllers compares desired with actual over and over and closes the gap: they create pods, that is, instances of the application, assign them to nodes, evict pods from nodes that have stopped responding, and during a version upgrade roll out new pods in place of the old ones. All of them read and write through a single API server.

In the previous part of the series I built Kubernetes on Oberon, and the main discovery there was that a Kubernetes controller maps naturally onto a background task of the operating system. In RED the picture is even more direct, because many parts of Kubernetes simply go by other names here.

The API server is a task that alone owns the object store. A subscription to changes, a watch, is a mailbox: the API server sends every change to the mailboxes of the controllers subscribed to objects of that kind. Each controller keeps its own copy of the objects, what Kubernetes calls the informer cache, and reconciles desired against actual state in a `WAIT` loop: either an event has arrived, or the timeout has expired and it's time for a full resync. A write carries the version number it's based on, and a stale write is rejected; that's optimistic locking. The replica controller remembers how many pods it asked to create but hasn't seen yet. These are expectations, and without them it would create extra pods. Node agents, the kubelets, renew leases, and a node that stops renewing is declared not ready and its pods move elsewhere. The tasks share nothing among themselves except mailboxes.

In the main run, a deployment with three replicas is created and scaled to five, a second client tries to write a stale copy and gets rejected, then node 2 loses power, its pods move to live nodes, and at the end a second version is rolled out. All of that is about five hundred lines of RED.

## The control plane as a process pair

And then comes the crazy part, the whole reason it was worth joining the two previous chapters. In Kubernetes, the reliability of the control plane comes from etcd: several replicas of the store agree with one another via the Raft protocol, and as long as a quorum is alive, the cluster can be managed. What if we did it the Tandem way? The API server runs as a pair: after every change, before sending out any events, the primary sends the backup a checkpoint, and the backup watches the heartbeat and takes over the name when it disappears. No consensus, no quorum, just a pair of processes.

The problem is that, unlike with the bank, nobody here retries requests. A controller sends a write to the API server and moves on; it doesn't wait for a reply. If the primary dies, everything sitting in its mailbox vanishes, and nobody will ever know. I was almost sure it wouldn't work, and I made the failure as nasty as I could: the primary API server loses power in the middle of rolling out a new version, right after storing the first pod of that version.

```
[60 ms] replicaset 10: 0 of 4 pods, creating 4
[60 ms] api server primary loses power right after storing pod 11; the writes still in its mailbox are gone
[60 ms] scheduler: pod 11 -> node 1
[80 ms] replicaset 10: 1 of 4 pods, creating 3
[95 ms] api server backup: no heartbeat, taking over the name API
[95 ms] scheduler: pod 11 -> node 1
[95 ms] kubelet 1: pod 11 (version 2) running
[115 ms] replicaset 10: 1 of 4 pods, creating 3
[115 ms] scheduler: pod 12 -> node 2
...
[210 ms]   pod 14  rs 10  version 2  node-id 1  phase 1
```

Three pod creations and one binding of a pod to a node vanished along with the dead server's mailbox. At 80 milliseconds the replica controller, whose expectations have expired, asks for the pods again, and again into the void, because the name still belongs to the dead server. At 95 milliseconds the backup takes the name and sends every controller the full list of objects. The scheduler sees that pod 11 isn't actually bound and binds it. At 115 milliseconds the replica controller creates whatever is still missing. The cluster gets where it's supposed to be, with no consensus and no human involved. It works because Kubernetes controllers compare states rather than react to events: a lost write is just one more discrepancy for the next reconciliation to catch.

## Two real Kubernetes failures, found by accident

What was really interesting wasn't what ended up working but how it broke along the way. In the first run of the pair, after the API server failover, the node controller declared all three nodes not ready at once and evicted every single pod. While the backup spent 35 milliseconds waiting out the silence, the kubelets were renewing their leases with the dead primary, and after the failover every node's lease looked stale. This is a well-known Kubernetes problem, and its fix is well known too: if all the nodes go quiet at once, it was the control plane that was missing, not the nodes, and nobody should be evicted. In Kubernetes, a zone where every node has gone quiet enters a state of full disruption, FullDisruption, and if that happens to every zone, the eviction controller stops. I added the same check.

In the second run the nodes were evicted one at a time. Node 3 managed to renew its lease first after the failover, the "everyone is silent" condition stopped holding, and nodes 1 and 2 got evicted. There were two causes, and both, once again, matched how real Kubernetes does it. You can't measure a lease's freshness by the time written in the lease itself; you have to measure it by the time the controller itself saw the change. And decisions should be made not on every event but on the full picture: first drain everything that has already piled up in the mailbox. The real node lifecycle controller works much like this: every few seconds it walks all the nodes in its cache, and when it leaves full disruption it also resets every node's freshness clock, so that the first node to renew its lease doesn't throw the others under the bus. After these two fixes an API server failover costs the cluster exactly zero evictions. Incidentally, my first attempt at draining the backlog used a `WAIT` with a receive and a zero delay, on the assumption that the receive would win. Once the runtime started choosing among ready alternatives fairly, the zero delay sometimes won, and nodes were evicted again. The right way in RED is to ask the mailbox for `FULL_SLOTS` and keep taking messages while there are any.

I love that a six-hundred-line model in a 1979 language, all by itself and with no hints, stepped on the same rakes Kubernetes kept stepping on for years, and that the way out was the same. It's a good sign that the rakes aren't random: they grow out of the very idea of managing things by reconciling state.

## The same thing in the green language

For a fair comparison I wrote the same control loop in the green language. The structure is the same: an API server, controller caches, optimistic writes, node leases. In size the two versions are nearly equal, 522 lines of RED and 517 of GREEN, but they're built differently, and the difference is exactly the one people argued about in 1979.

The green language has no mailboxes, only the rendezvous. That means the event stream for each controller becomes a buffer task, a family `INBOX(1 .. 8)` with entries `PUT_EVENT` and `GET_EVENT`, and about forty lines go into what in RED was a single variable declaration. It gets worse. A controller needs to wait for either an event or a timeout for its periodic resync, and the 1979 green language has no timed entry call. I had to move the timeout inside the mailbox: if nothing arrives for 20 milliseconds, the mailbox itself puts a tick event in the queue.

And there's a trap that I described in the file header in advance and then verified. The API server sends out events by calling `INBOX(P).PUT_EVENT`, and if the mailbox is full, the server waits. But the mailbox's owner may at that very moment be waiting for the server, having called `API.WRITE`. The server waits for the controller, the controller waits for the server. With mailboxes of 256 events this doesn't happen, but with mailboxes of four the cluster locks up solid. What's more, the runtime can't even call it a deadlock, because the other mailboxes' timers keep ticking and virtual time runs forward forever. The same trap is possible in RED, but in the green world it's built into the very shape of the solution: where RED has a mailbox, GREEN has a server task, and two server tasks calling each other are a classic way to hang.

The green version, by the way, found a bug in my shared runtime. When a node loses power, its kubelet is terminated with `abort`, and at that moment it's standing in the queue at an entry of its mailbox. The runtime made the aborted task ready but forgot to remove its record from the entry queue, and a moment later the mailbox "accepted" a call from a task that had already finished and woke the dead. Section 9.10 of the 1979 manual says plainly that an aborted caller is removed from the queue, so this was my bug, not the language's.

# Ada 83, and what came back later

The winning Ada didn't become the Ada everyone knows right away. Four years of revisions separate the green language of spring 1979 from the 1983 standard, and I compare both of them with the red language.

To keep the comparison from being just talk, I took three situations from the RED labs and wrote them in Ada 83, and the project's CI builds these programs with the GNAT compiler in Ada 83 mode and checks their output.

The first situation is a bounded buffer between a producer and a consumer. In RED it's one line, `VAR m : MAILBOX[INT](3)`, plus calls to `SEND` and `RECEIVE`. Ada 83 has no mailboxes, so the buffer is a server task with two entries that, in a loop, picks which entry it can accept right now: `PUT` while there's room, and `GET` while there's something to hand out. It comes to about thirty lines, which anyone who has written Ada has written hundreds of times.

The second is waiting for a reply with a timeout on the caller's side. In RED it's a `WAIT` with two branches. Ada 83 has a timed entry call for this, `select ... or delay ... end select`. But the green language of 1979 didn't have one at all, neither the timed call nor the conditional call. The Green Rationale explains this as a matter of principle: a task can be in only one queue at a time, so a caller doesn't choose among several waits. Four years later Ada partly abandoned that principle.

The third is a critical section. In RED it's `REGION`, which releases the lock however the body ends. In Ada 83 a lock is a task with entries `SEIZE` and `RELEASE`, and if an exception occurs between them, nobody will ever release the lock. You have to remember to do it in the handler, and the line `LOCK.RELEASE; -- forget this line and the next SEIZE waits forever` in my program is about exactly that.

## What changed between the green language and Ada 83

I've already shown almost everything that sets the green language apart from Ada 83 in its own chapter: an explicit `initiate` instead of task types, `select` without `terminate`, fifteen exceptions instead of five, `restricted` instead of `with`, functions without side effects. I'll add two things that didn't come up there. In named association, the green language writes the parameter mode right at the call site: `F := x` passes a value in, `F =: v` takes the result out, and `F :=: v` does both. And the language had an `assert` statement, whose fate is described below. A detailed table of differences is in the project notes.

## What Ada won back later

And now the part that I think made the whole article worth writing. Put RED from 1979 next to the history of Ada up to the present day, and you get a strange picture: for decades Ada slowly picked up what the loser had from the very beginning.

Both finalists had assertions; Steelman required them. Ada 83 dropped the `assert` statement; the word "assert" doesn't appear anywhere in the 1983 standard. The `Assert` pragma came back only in Ada 2005, twenty-six years later.

The rendezvous proved too heavy for protecting shared data. The Ada 95 Rationale says so in as many words: the very generality of the rendezvous means relatively high overhead, so protected objects are introduced, a lightweight, data-oriented synchronization mechanism. In essence that's the very same separate primitive construct for shared data that RED proposed. An important caveat: the Ada 95 Rationale names Hoare's conditional critical regions, monitors and the Orca language as the ancestors of protected objects, and doesn't mention RED once. So this isn't borrowing but convergence. Telling convergence, though.

I checked how heavy the rendezvous was where it was cheapest of all: on the Rational R1000, a machine built for Ada, whose tasks lived right in its microcode. The Danish computer museum brought one back to life and wrote an emulator that runs the real microcode cycle by cycle. I booted the Rational Environment in it from the museum's disks, compiled a small Ada 83 test through the operator console and counted cycles. A procedure call cost the machine 2.75 microseconds, a rendezvous 55, about twenty calls. The same text built by GNAT on a server of today calls a procedure in a little over a nanosecond and completes a rendezvous in 13.5 microseconds: ten thousand calls. Over those years a call became two thousand times cheaper, a rendezvous four times. The rendezvous didn't become heavy; it stayed what it was, and everything around it got cheap. Ada 95's protected objects arrived in a world where tasks no longer lived in microcode but in operating-system threads.

It goes further. The Ravenscar profile for high-integrity systems bans task entries outright, `Max_Task_Entries => 0`, which means the most safety-critical Ada simply has no rendezvous. Ada 2012 added bounded synchronized queues to the standard library, which functionally are a typed, bounded mailbox.

Another line is even more striking. Chapter thirteen of the RED manual describes user definitions for the language's special forms: your own assignment, automatic initialization and finalization, your own component selection and indexing operations, your own loop over a user-defined type, and your own literals. User-defined assignment and finalization came to Ada in 1995, user-defined indexing and iterators in 2012, user-defined literals in 2022. All that's missing is a user-defined `case`.

And one last thing that genuinely surprised me. The revision of Ada began in 1988, and around 1990 the design competition was won by an Intermetrics team, beating, among others, a team that included Ichbiah himself. The technical lead was Tucker Taft, and the consultants included, among others, Ben Brosgol, who had led the Red project in 1979. Ichbiah took part as a reviewer and eventually left the project, disagreeing with the object model. So Ada 95 was designed by people from the company that lost in 1979. Taft himself joined Intermetrics in September 1980 and was never on the Red team, so there's no direct line of descent here. But the company, the culture and some of the people are the same.

# If different hands had gone up

Alternative history is a dangerous genre; it's easy to dream up anything at all. So I tried to stick to forks in the road that really existed and to mechanisms that can actually be traced. That gives two scenarios: the red language wins in May 1979, and the green language is frozen in the form it was handed in that March, without four years of polishing.

## A world where RED won

Let's start with what certainly wouldn't have changed. The DoD's Ada mandate lasted from 1987 to 1997, first as a directive and later even as a line in an appropriations act, and it was dropped not because of rendezvous or mailboxes but because the commercial market had moved to C and C++, and the requirement cost more than it delivered. Those economics didn't depend on the color of the language. So a red Ada would most likely have become the language of avionics, railways and space in exactly the same way, and in exactly the same way failed to become the language of everything else.

Inside that niche, though, a lot would have changed.

First and foremost, concurrency. In the red world there are two distinct mechanisms from day one: messages for tasks to talk to each other and critical sections for shared data. Ada spent sixteen years arriving at the same split, and another ten to drop the rendezvous entirely in its most high-integrity version. In the red world, the 1987 book by Burns, Lister and Wellings, "A Review of Ada Tasking," would have been about something else. A different trouble would have taken its place, one Brinch Hansen had already warned about: critical sections scattered all over the code, with no monitor to gather access to the data in one place. My guess is that by the mid-eighties red Ada would have gotten its own version of protected objects, only arriving from the other side, as a way of gathering scattered regions into a module.

Second, generics. Implicit instantiation at the call site, as in RED, was very convenient when I was writing a compiler in it. But it has a well-known price, which the world learned through C++ templates: errors that surface deep inside an instance, and code bloat. In the red world these problems would have shown up a decade earlier, in military projects with their certification requirements, and it may well have been there that someone first came up with what later became concepts. Especially since the `NEEDS` list was already a ready-made draft of concepts.

Third, the language industry itself. In his history of C++, Stroustrup writes plainly that after 1985 C++ was influenced by ideas from Ada, Clu and ML, that he compared parameterized types and exceptions with Ada's, and that part of the inspiration for I/O streams came from the last page and a half of the 1979 Ada Rationale, which argued that type-safe and concise I/O was impossible. That was the Rationale of the Green design, printed in SIGPLAN Notices. In the red world, the RED Rationale would have been sitting there instead, and C++ templates would have been compared with a language where instances create themselves, just as theirs do. C++ templates might even have turned out simpler, with no need to argue against Ada's explicit `new`.

Fourth, Oracle. Oracle's documentation still says outright that PL/SQL is based on Ada and stores programs in the database as DIANA trees, Ada's intermediate representation. DIANA was devised in January 1981 at a meeting whose participants included Nestor and Brosgol from the Red team. In the red world PL/SQL would have been built on RED, and every Oracle database today would hold procedures with capsules and `EXPOSE`. Maybe even with `DATA_LOCK` for row locking, who knows.

Fifth, VHDL. The Air Force commissioned the hardware description language in 1983 from a consortium of Intermetrics, TI and IBM, and Intermetrics were the language experts there. VHDL ended up looking a lot like Ada. The irony is that the losers' company built a hardware language modeled on the winning Green one. In the red world they would have been copying their own language, and VHDL processes might have communicated through mailboxes rather than signals.

And sixth, the one I least expected. Erlang. In the mid-eighties Ericsson compared languages for telephone exchanges, and Ada was on the list. Joe Armstrong writes that he tried pipes first, threw them out and built mailboxes. It's tempting to say that in the red world Erlang would never have been needed. But that's not true: Erlang rests on process isolation, asynchronous copying message passing and failure handling, whereas RED has shared variables, and its mailboxes are bounded and blocking. The honest version is more modest: a red Ada would have been closer to Erlang than the green one, and might have shown the military and the railway people sooner that message-based systems outlive shared-memory systems. My three-hundred-line PAIRS operating system is about exactly that.

## A world where the green language was frozen in 1979

The second scenario is more modest, but more interesting than it looks. Imagine there had been no four years of polishing after the selection, and Ada 83 were simply Preliminary Ada from the spring of 1979.

Then Ada would have had an `assert` statement from the start, and a culture of assertions in code would have reached military software a quarter of a century earlier. There would have been fifteen specific exceptions instead of five, and programs would tell a range violation from an array bounds violation rather than catching everything with a single `CONSTRAINT_ERROR`. And there would have been the strict function purity rules, the very ones that forced the green compiler's parser to be written as procedures with out parameters.

There would have been no task types. You couldn't make an array of tasks or put a task inside a record, only task families and generic tasks. There'd be no timed entry call. There'd be no `terminate` alternative, so server tasks would have to be stopped explicitly. I think that's the first thing users would have demanded be fixed, and rightly so.

## What seems to me the main point

Setting the details aside, the difference between the red and green languages is the difference between two answers to the question of how many mechanisms a language needs. The Green team chose one universal mechanism, the rendezvous, and explained at length, and beautifully, why it was enough for everything. The Red team chose several specialized ones: messages, locks, user-defined schedulers, user-defined language forms. The green answer was easier to demonstrate and easier to learn. The red one proved closer to where everyone ended up later.

And this, I think, is a lesson not about 1979 but about any technological fork in the road, including today's. The winner isn't the design that holds up better under real load; it's the one that becomes understandable and stable first. And what lost doesn't go anywhere: fifteen to forty years later it comes back under a different name, and this time it's the winner who pays.

# Labs, and how to get your hands on all this

As in the earlier parts, I wanted readers to be able not just to read about the language but to break something with their own hands. The `impl/ada-colors/labs` directory holds eleven RED exercises and a `check.sh` script that translates your version of a program, runs it and tells you whether you've completed the task. The tasks follow the same levels as before: look, change, break, measure and build. And since time in the programs is virtual and the scheduler is deterministic, you can compare your output with someone else's character for character.

Here's what's there:

- a capsule with a stack: add an exported function `peek`, then try to reach into the `top` field from outside and watch the compiler explain that the type is exported but its components aren't;
- a closed scope: remove a variable from `IMPORTS` and get rejected, then try assigning to a variable imported read-only;
- a mailbox: set its size to zero and see that the sender can no longer run ahead; that's a rendezvous;
- `WAIT`: lose a race to a timeout, then try waiting on a send to a zero-size mailbox and find out why RED forbids it;
- `REGION`: remove the exception handler and see how the runtime reports that all tasks are blocked;
- priorities: give tasks equal priorities and see first-come, first-served ordering;
- generics: write your own `max` for numbers and strings without instantiating anything by hand;
- a process pair: move the primary's death to a different request, then swap the reply and the checkpoint and catch the missing transfer with the audit;
- Kubernetes with a process-pair control plane: remove the queue draining in the node controller and get healthy nodes evicted after a failover;
- the compiler itself: add a built-in `MAX` function to `redc`, rebuild it and make sure the fixed point still holds;
- the 1979 program: drop one fix from the list and see which error in the original stops the translator.

To run all of this, you only need a C compiler and make:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing/impl/ada-colors
make                     # builds redc from the seed and checks the fixed point
red/tests/run.sh         # language tests
os/run.sh                # the operating system and all three Kubernetes variants
labs/check.sh 03 look    # the mailbox lab
```

You can also translate and run a RED program without the labs:

```sh
build/redc < program.red > program.c
cc -std=gnu11 -Irt program.c rt/paleo.c -lpthread -lm -o program
./program
```

If you have Cozystack at hand, you don't need to install anything. The series' application catalog has an environment for languages, and RED and GREEN arrived there as a separate image: you specify the `ada-colors-run` image, put in a source file, and the program runs as a one-off job whose output becomes its log. When the image is built, both compilers go the whole way from their seeds again and check that they reproduce themselves.

None of this runs in the browser yet. The RED compiler is written in RED and translates into plain C, so building it for WebAssembly isn't hard. The catch is that a RED program is itself translated into C, so the browser also needs a C compiler. That's a job for next time.

# What I'm taking with me

At the end of each part of the series I ask myself what's worth carrying over from what I found into today's infrastructure. This time there turned out to be a surprising number of such things.

First, keeping mechanisms separate. Messages for communication, locks for shared data, and neither pretends to be the other. Ada spent sixteen years arriving at the same place, and in the Kubernetes world we constantly see people trying to cover everything with one mechanism: a queue used as a database, or a database used as a queue. The Red team understood perfectly well in 1979 why that won't do.

Second, explicit interfaces to state. `IMPORTS` in RED annoyed me at first and then started helping me read and check my own code, even though in the compiler itself the most honest thing turned out to be writing `IMPORTS ALL` in most procedures. In infrastructure code, where controllers, operators and hooks all touch the same store, a list like that would be priceless, and in places it's effectively already being introduced through access rights and field-level restrictions.

Third, process pairs. This is probably the result I least expected. A Kubernetes control plane built as a Tandem-style pair, with no consensus, survived the death of the API server in the middle of a rollout, because the controllers compare states rather than react to events. For a single site, where there's often simply nowhere to get a three-node etcd quorum from, this is a serious alternative, and I want to test it not on a model but on a real cluster.

Fourth, deterministic time. Almost everything interesting in this article was found because any failure is reproducible down to the millisecond. The fairness of `WAIT`, the bug with the aborted entry call, both traps in the node controller. With real threads and real clocks I'd have spent weeks hunting for half of these, and the other half I'd never have found at all. For testing distributed infrastructure, I think this is the main lesson: first make time controllable, then go looking for bugs.

And fifth, not technical at all. Studying the losers is useful not out of nostalgia but so that you know in advance which ideas will come back, and don't pay for them a second time.

What's next. The Blue and Yellow designs are apparently in that 4575-page DTIC volume, and I'll download it from a browser as soon as the DTIC site comes back from maintenance. I'd like to put the RED compiler in the browser, like Wirth's machine in the first part.

The sources, tests, labs and all the notes are in the repository [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), under `impl/ada-colors`. If you find a mistake in my reading of the 1979 manuals, let me know; I'm genuinely curious.
