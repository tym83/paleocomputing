# Blue and Yellow

Everything I've told so far concerned two languages out of four. SofTech's Blue design and SRI International's Yellow design dropped out in the spring of 1978, after the first round, and when I started on this story their documents seemed out of reach. Then it turned out they're sitting in one book together with the whole first round, and that book can be reached after all.

## A book made for microfiche

That same 2023 thread on the systemsafety mailing list mentioned a DTIC volume numbered ADB950587, "DoD Common High Order Language, Phase 1," 4575 pages long. While I was busy with Red and Green, the DTIC site first went down for maintenance and then started answering requests with a refusal. The Wayback Machine came to the rescue. In September 2023 someone saved the whole PDF there, all 4575 pages with a text layer, and it carries the same marking as the RED manual: approved for public release.

The book's preface is a small historical document in its own right. The compilers write that the book was made for microfiche and no bound version ever existed, and that the two hundred copies of the designs handed out to reviewers were all used up, so this volume is the only set that can be distributed at all. The colors are revealed there too: Green is CII Honeywell Bull, Red is Intermetrics, Yellow is SRI International, Blue is SofTech. Nobody tried very hard to hide the authors, and the compilers admit that people who had followed the program closely recognized the teams by their style, but most reviewers praised the color disguise. And the preface ends with a sentence I reread several times. The losing designs will not be continued and should be of interest only to researchers; the goal of the program is convergence, and it is not appropriate at this time to foster alternatives.

Inside are the four preliminary designs as they were delivered on February 15, 1978: Green, Red in its first edition, that is, the very REDL the Red team later threw out, Yellow in three hundred pages and Blue in almost five hundred. After them come the analyses sent in by some eighty teams, from universities to defense contractors, the report of the so-called Pittsburgh Panel, which spent two weeks reading those analyses and questioning the authors, and at the very end Steelman. The 1979 final-round reports that decided between Red and Green aren't here; the book is about the first round only. The recognized text is awful in places, a zero for the letter O and a lowercase l for the percent sign, so every program was checked against the page image, and the Blue ones were simply retyped from the pictures.

Two more agents took on these two languages, in parallel and along the same path Red and Green had taken.

## BLUE: a language held together by types

Of the four, the blue language looks the strangest. Here's a piece from one of the labs, a generic swap of two values:

```
TYPE COLOR = ENUM (\RED, \GREEN, \BLUE);

PROCEDURE SWAP (# X, Y: ?T) WHERE T NEEDS (STORE_ (T ## T));
   VAR TMP: T;
   TMP := X;
   X := Y;
   Y := TMP;
END PROCEDURE SWAP;

SWAP (# I, J);       % integers
SWAP (# A, B);       % strings
SWAP (# K, M);       % colors
```

Enumeration literals are written with a backslash, `\GREEN`, which is why one and the same literal can comfortably belong to two types at once. A hash mark in a parameter list separates the input parameters from the modifiable ones, and a second hash mark separates the outputs, so `(# X, Y)` means there are no inputs and both parameters are modifiable. The type `?T` is derived from the argument, and the instance is created at the point of call, as in RED. The `WHERE T NEEDS` list names the operations the body needs and takes them from wherever the procedure was called. And `STORE_` isn't a typo: in the blue language every operator is a call of a function with a fixed name, `ADD_`, `LESS_THAN_`, `CONCATENATE_`, and so is assignment, so an abstract type defines both its addition and its assignment the same way. Fixed-point numbers are given by scale, radix and precision, and an integer is simply `FIXED` with a scale of zero. The machine-dependent parts of a program live inside `SELECT OBJECT_MACHINE`, where the bits of a register can be read as an enumeration value. One of the 1978 reviewers wrote that Blue came closest to using the concept of type as a unifying force in the language, and that, I think, is the best short description of Blue there is.

Parallelism is stricter. There's a parallel block, `PAR_BLOCK`, with paths inside it, `PATH`, and there are semaphores. No mailboxes, no rendezvous. But semaphores come in two kinds, and the difference between them is thought through very carefully. A `SYNCH` semaphore is a signal: one path releases it, another waits, exactly like Dijkstra's P and V. A `REGION` semaphore is a lock around shared data, and if the path holding it dies, the lock is released by itself. A signal semaphore is not released when a path dies, and SofTech's justification explains why: a dying path must not send false signals.

## YELLOW: Pascal, told to satisfy Ironman

With the yellow design everything was clear from the first page. SRI says outright that it was required to design its language by modifying Pascal to comply with Ironman, and so the language report is built parallel to Wirth's Pascal Report, chapter for chapter. To Pascal's statements, which are closed here with `ENDIF` and `ENDWHILE`, it adds Modula's modules, monitors and signals:

```
MONITOR ReadersAndWriters
  IMPORT INTEGER64;
  EXPORT StartRead, EndRead, StartWrite, EndWrite;
  VAR readers: INTEGER64 := 0;
      busy: BOOLEAN := FALSE;
      okToRead, okToWrite: SIGNAL;

  PROCEDURE StartRead ()
    IF busy OR AWAITED(okToWrite) THEN WAIT(okToRead) ENDIF;
    readers := readers + 1;
    SEND(okToRead);
    RETURN
  ENDPROCEDURE StartRead;
  ...
ENDMONITOR ReadersAndWriters;
```

This is Hoare's monitor from his 1974 paper, and the yellow language's semantics are Hoare's: `SEND` hands the monitor straight to the woken process, and the sender waits. That's why the woken process tests its condition with `IF` rather than `WHILE`, as it would have to in the monitors of later languages.

Then SRI's own ideas begin. Type and representation are different things in the yellow language: `INTEGER` is a type, `INTEGER [1..10]` is its representation, and you can't declare a variable without a representation. Overloading is only explicit, through `EXTENDS`, which adds another definition, and `REPLACES`, which overrides the old one. Exceptions aren't declared, and `PROPAGATE_EXCEPTION` leaves its own block, so the handler of that same block doesn't see it. Functions are pure, and for everything else there are value-returning procedures. And there are two rules about expressions that trip you up on the very first day. Subtraction isn't associative, so `a - b - c` is a syntax error, and the language makes you say with parentheses which subtraction comes first. And comparisons bind loosest of all, so `x > 0 AND b` reads as `x > (0 AND b)`. Two symbols in the printed text have no ASCII form at all, the not-equal sign and the dereferencing arrow, and in the implementation they became `#` and `^`, as in Modula. The arrow in `CASE` branches came out of text recognition as `->`, but the page image shows it's `=>`, and the 1978 reviewers wrote it that way too in their own Yellow examples.

## Two compilers, and programs nobody had ever compiled

The path was a familiar one: a Python bootstrap, a compiler in the language itself, a fixed point, growth. Both compilers reproduced themselves byte for byte on their very first self-translation. The blue translator grew to about nine and a half thousand lines of Blue, the yellow one to about six thousand lines of Yellow.

Each language showed its character, of course. In Blue, `FROM`, `TO`, `MODULE`, `TAG`, `ANY`, `REP` and `NEEDS` are reserved, and parameters with those names had to be renamed, and a function may not have modifiable parameters. Yellow has no strings as values, not even concatenation, and all the text in its compiler lives in one big pool of characters where every string is a number. That's roughly how Pascal compilers lived in the same seventies.

The programs in the documents made a more interesting story than Red's and Green's. There was no implementation at all in the first round; the book's preface says so plainly: the first phase was meant as an extensive feasibility study. That means nobody ever translated a single program from the blue and yellow designs, not in 1978 and not since.

The blue document has seventeen programs. Once you fill in what the original replaces with an ellipsis, seven of them translate as printed. The rest have errors like `BUFF` for `BUF`, the arguments of `INTEGRATE` in the wrong order, and a matrix product that, because of one letter, multiplies the first matrix by itself. The biggest and most interesting program is Appendix C, the standard input/output library, about thirteen hundred and fifty lines: a safe teletype, an ordinary teletype, binary and textual I/O, and device-driver paths tied to the PDP-11's interrupts. To translate it, I had to rename a procedure called `IN`, though `IN` is a reserved word; remove a constant exported by two modules at once, though a module exports only types and routines; and add imports to closed scopes that imported nothing. After that the library ran on a simulated PDP-11 with two LT33 teletypes. The first is the console, the second prints alongside, and when asked to rewind a file on a teletype, the 1978 library politely replies that a teletype does not rewind.

The yellow tutorial has fifteen programs, and five of them translate as printed. The rest collected the errors any text collects when nobody runs it through a translator: the name at the end of a module drifts away from the name at the start, so `ConvexHullFinder` is closed as `ComplexHullFinder`; one name is spelled two ways; and the sorting example writes `IMPORTS` and `EXPORTS` from some other language. But most often the authors forgot the rules of their own language. In a scheduler for SIFT, the fault-tolerant flight computer SRI was working on at the time, the condition `ept > 0 AND enabled[pri]` means, by the yellow language's rules, something quite different from what was intended. And the track-reservation procedure, though it translates, falls out of its own bottom without a `RETURN`, which by the language's rules is an error on the very first call.

Three programs translate and work incorrectly. The distance example, on the example's own points, overflows the representation that the square of the difference has to fit into. The exchange sort compares strings in such a way that ordinary names are never swapped, and if a pair does qualify, the index runs off the end of the string. And the convex hull for eight points whose hull has five marks only two. At first I naturally assumed the translator was wrong, so the same algorithm was rewritten in Python. It marked the same two points. One more program, a real-time clock, translates and runs, but shows a consequence of the chosen monitor semantics: because `SEND` hands the monitor straight to the waiter, a pause of five ticks ends after one.

## THE and Kubernetes without messages

Then the same things I'd written in Red and Green were written in both languages: the THE system, Kubernetes on top of it, the Kubernetes control loop and three small problems for comparison. And it immediately became clear how these two languages resemble each other and how they differ from the finalists. Neither has messages. Neither can wait for two things at once. Neither has a timeout on a wait.

THE in the blue language turned out to be almost native. Blue's semaphores are Dijkstra's P and V with no layer in between, and the program prints exactly what the RED version prints, character for character. The queue between levels, which the language doesn't have, became a generic module of thirty lines: one `REGION` semaphore and two `SYNCH` ones. And then came the thing that, it seems, made it worth restoring the whole blue language. Remember how in Kubernetes on THE a kubelet died with the store's semaphore in its hands and took the whole control plane with it? In Red and Green I had to move the power cut into the gap between two of the kubelet's passes. In Blue the store's semaphore is declared `REGION`, and a node can lose power at any moment, even in the middle of a write. The path's death releases the semaphore, and the control plane lives on. SofTech's justification honestly admits that the data under the lock may then be left half-written, but Kubernetes controllers compare states, and the next pass fixes it. The distinction between the two semaphores, which in the 1978 document looks like pedantry, in practice solves exactly the problem Dijkstra named as his group's first big mistake.

Timeouts are harder. `REQUEST` has none, and the blue language has no way to say "wait for an item, but not longer than thirty milliseconds." The answer turned up in the same book, from the reviewers. One of the teams wrote an input-with-timeout problem in all four languages, and here's the blue version, with the text recognition corrected:

```
REQUEST (# TTY);
WRITES ('FUEL FLOW?' \CR \LF);
PAR_BLOCK
   PATH PATH1
      INPUT (## RATE);
      TERMINATE (PATH2);
   END PATH PATH1;
   PATH PATH2
      WAIT (30);
      TERMINATE (PATH1);
      WRITES ('5 GALLS/SEC ASSUMED' \CR \LF);
      RATE := 5;
   END PATH PATH2;
END PAR_BLOCK;
RELEASE (# TTY);
```

Two paths race, and whichever finishes first kills the other. If the operator hasn't answered within thirty seconds, the fuel flow is taken to be five gallons per second. I love that this example holds a whole era: a military console, a teletype, a sensible default. Every wait in the blue Kubernetes is built this way, and the price of the idiom shows at once. Every wait takes a parallel block of two paths. A parallel block can't be placed inside a routine, so the waiting loop can't be hidden in a procedure, and it had to be written out twice, for the controllers and for the kubelets. The race is safe only if the waiting path has a higher priority than the timer. Otherwise the timer can kill it at the moment it has already taken an item from the queue but hasn't yet said so, and the item is lost; that became one of the labs. Finally, the termination exception doesn't say who sent it, so a kubelet whose power was cut can't tell that from a lost race. It had to be left a note. And one small thing that turned out not to be small: the clock in the blue language shows the running time of a particular path, and there is no time of day at all. To print timestamps, every process in the system had to be made a path of one parallel block started at time zero.

The yellow language builds everything on monitors, and THE fits onto them in its own way. Yellow only has binary semaphores, so Dijkstra's counting semaphores became monitors with a counter and two signals, the very bounded buffer Hoare invented monitors for. The segment controller became a monitor too: the process that needs a segment does the work itself under mutual exclusion, and the queue at the monitor's entrance is the queue of requests. The console answers strictly in ticket order, because each process waits with a rank equal to its ticket, and `SEND` wakes the smallest. Kubernetes on THE in Yellow prints the same as in Red, byte for byte.

What Yellow lacks shows in the workarounds. Every timeout is a separate watchdog process that watches the clock and sends a signal at the right moment. Unlike THE, where the watchdog had to slip a fake item into the buffer, the woken process in Yellow sees that its condition is still false and decides by itself to stop waiting. There can be no array of monitors, because a monitor is a module, not a value, so eight event streams are eight named instances of one template, and the right one is picked with a `SELECT` on its number. Starting a process returns nothing, no name or number for it, so to cut power to the second node, the kubelet itself writes its identity where the user will find it. You can't end a program while processes are running: a scope ends when its processes end, and there's no stop statement. And an exception leaves a monitor just as reliably as `REGION` in Red releases its lock, but it doesn't release a binary semaphore. That's why in the yellow Kubernetes on THE, where the store is guarded by just such a semaphore, the power is cut between passes, as in Red.

Along the way two places turned up where the yellow translator fell short of SRI's report: arrays of signals inside a monitor weren't tied to it, so a wait on an element of such an array didn't release the monitor, and modules could import only from modules declared earlier, though the report doesn't require that. Both were my mistakes, and both are fixed.

Readers and a writer, the third comparison problem, now has four answers instead of three. In RED an exclusive `REGION` lines everyone up in a queue. In GREEN a server hands out copies. On the semaphores of THE and of Blue, readers read together, but a late reader overtakes a waiting writer, and in Blue the writer's semaphore must be a signal one, because the reader who releases it is often not the one who took it. And Hoare's monitor in the yellow language gives what none of the others did: readers read together, and nobody overtakes a waiting writer.

## Why they lost

The Pittsburgh Panel boiled the analyses down into tables, and its conclusion came out simple. The reviewers rated Green the best, Blue the worst, and saw almost no difference between Red and Yellow. If you read the analyses themselves, though, the picture is far more colorful. Some teams put Yellow first, others last. One recommended continuing Green and Blue, another Red and Blue. Yet another wrote that Yellow was much the worst designed and should not be carried further, and the next that Yellow seemed to be on the safe side from a systems programmer's point of view and might well be the cheapest of all to implement. And the summary of comments holds my favorite piece of advice: the best next move the DoD can make is to ask the Red team to implement the Yellow language. That, the compilers write, came from a number of analysts independently. Well, the yellow language is implemented now.

On Blue the panel was briefest of all: reject it. The design is careful and complete, but overwhelmed by a pervasive complexity, and the simple underlying semantic model claimed by its designers is not evident. One team admitted that Blue suffered from its own presentation and that this doubtless affected its overall view; another hoped the designers would clean up the syntax enough that it stopped overshadowing the design's virtues. In one of the comparison tables, Blue and Yellow are rated severe for typographic volatility, that is, for their profusion of symbols, while Red and Green are rated good. The restoration confirmed both halves of the verdict. The care is real: the I/O library with its drivers ran after a dozen typos, and the two kinds of semaphores turned out to be more precise than anything the finalists had. But the complexity is real too: the blue translator came out the largest of the four, nearly twice the size of Red's, and the backslashes, hash marks, double hash marks and double exclamation marks read worse than any of its neighbors.

Yellow lost by a hair. The panel wrote that the choice between Red and Yellow was not clear-cut, and the majority of its members only slightly preferred Red. But in the section on Yellow itself the words are harsh: type and representation are confused, there's no workable way to identify a process, monitors have not been used for significant systems, and on the whole the attempt to build on Pascal and its cousin Modula has not been successful. Here my experience agrees with the panel by half. On process identification it's right in exactly the spot where I tripped myself, when the kubelet wrote down its own number for the user. But monitors turned out to be the most convenient part of the yellow language for THE and Kubernetes, and by 1978 Brinch Hansen had already, two years earlier, described the Solo operating system, written on the monitors of Concurrent Pascal. There's a further irony: the red design that beat Yellow by a hair was thrown out a year later by the Red team itself.

Put the four languages side by side and you see four answers to one question: how many synchronization mechanisms does a language need? Green chose the rendezvous, Blue semaphores, Yellow monitors, and only Red offered several mechanisms at once. Three designs out of four bet on a single mechanism, and in none of the three, as I restored them, can the one who waits limit the wait by time on its own. And in the chapter on Ada you'll see that Ada eventually won the monitor back too, under the name of the protected object. The book's compilers wrote that the losing designs should be of interest only to researchers. It seems they were right; it's just that the researchers showed up forty-eight years later.
