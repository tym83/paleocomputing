# Blue and Yellow

Everything I've described so far concerned two languages out of four. SofTech's Blue design and SRI International's Yellow design dropped out in the spring of 1978, after the first round, and when I started on this story their documents seemed out of reach. Then it turned out that they sit in a single book together with the whole first round, and that the book can be reached.

## A book made for microfiche

That same 2023 thread on the systemsafety mailing list mentioned a DTIC volume numbered ADB950587, "DoD Common High Order Language, Phase 1," 4575 pages long. While I was busy with Red and Green, the DTIC site first went down for maintenance and then started refusing requests. The Wayback Machine came to the rescue: in September 2023 someone had saved the whole PDF there, and it carries the same marking as the RED manual, "approved for public release."

The book's preface is a small historical document in its own right. The compilers write that the book was made for microfiche and no bound version ever existed, and that all two hundred copies of the designs were used up in the analysis, so this volume is the only set that can be distributed at all. The colors are revealed there too, and the preface ends with a sentence I read several times over. The losing designs are not to be continued and should be of interest only to researchers; the goal of the program is convergence, and it is not appropriate at this time to foster alternatives.

Inside are the four preliminary designs as delivered on February 15, 1978, including Red in its first edition, the very REDL the Red team later threw out. After them come the analyses of more than eighty teams, from universities to defense contractors, and the report of the so-called Pittsburgh Panel, which spent two weeks studying those analyses and questioning the designers. The recognized text is awful in places, so every program was checked against the page image, and the Blue ones were simply retyped from the pictures. Two more agents took these languages on, in parallel and along the same path Red and Green had taken.

## BLUE: a language held together by types

Of the four, Blue is the strangest to look at. Here is a generic swap of two values from one of the labs:

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

Enumeration literals are written with a backslash, `\GREEN`, and that is why one literal can happily belong to two types at once. A hash mark in a parameter list separates the input parameters from the modifiable ones, so in `(# X, Y)` both are modifiable. The type `?T` is derived from the argument, the instance is made at the point of call, as in RED, and the operations the body needs are listed in `WHERE T NEEDS` and taken from wherever the procedure was called. And `STORE_` is not a typo. In Blue every operator, assignment included, is a call of a function with a fixed name, so an abstract type defines its addition and its assignment in exactly the same way. One of the 1978 reviewers wrote that Blue came closest to using the concept of type as a unifying force in the language, and I know no better short description of it.

Parallelism is stricter. There is a parallel block, `PAR_BLOCK`, with paths inside it, and there are semaphores, but no mailboxes and no rendezvous. The semaphores, though, come in two kinds, and the difference between them is very carefully thought out. A `SYNCH` semaphore is a signal, just like Dijkstra's P and V. A `REGION` semaphore is a lock around shared data, and if the path holding it dies, the lock is released by itself. A signal semaphore is not released when a path dies, and SofTech's justification explains why: a dying path must not send false signals.

## YELLOW: Pascal, told to satisfy Ironman

SRI says outright that it was required to design its language by modifying Pascal to comply with Ironman, and the Yellow language report keeps the section numbering of Wirth's Pascal Report, down to an empty section kept only to preserve it. To Pascal's statements, closed here with `ENDIF` and `ENDWHILE`, it adds Modula's modules, monitors and signals:

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

This is Hoare's monitor from his 1974 paper, and Yellow's semantics are Hoare's too: `SEND` hands the monitor straight to the woken process, and the sender waits. That is why the woken process tests its condition with `IF` rather than `WHILE`, as it would have to with the monitors of later languages.

Then come SRI's own ideas. Type and representation are different things here: `INTEGER` is a type, `INTEGER [1..10]` is a representation of it, and you can't declare a variable without one. Overloading is only explicit, exceptions are not declared, functions are pure, and for everything else there are value-returning procedures. And two rules about expressions trip you up on the very first day. Subtraction is not associative, so `a - b - c` is a syntax error and the order has to be spelled out with parentheses. And comparisons bind loosest of all, so `x > 0 AND b` reads as `x > (0 AND b)`.

## Two compilers, and programs nobody had ever compiled

The path was a familiar one: a Python bootstrap, a compiler in the language itself, a fixed point, growth. Both compilers reproduced themselves byte for byte on the first try. The Blue translator grew to about nine and a half thousand lines, the Yellow one to about six thousand. Yellow has no string values, not even concatenation, and all the text in its compiler lives in one big pool of characters where every string is a number. That is roughly how Pascal compilers lived in the same seventies.

The programs in the documents made a more interesting story than Red's and Green's. There was no implementation at all in the first round, so nobody had ever translated a single program from the Blue and Yellow designs.

The Blue document has seventeen programs. Once the parts the original replaces with an ellipsis are filled in, seven of them translate and run as printed. Three more translate but run wrong. The matrix product, for one, multiplies the first matrix by itself because of a single letter. The remaining seven are rejected by the translator for errors like `BUFF` for `BUF` or arguments in the wrong order. The largest program is Appendix C, the standard I/O library, over thirteen hundred lines with teletype drivers tied to the PDP-11's interrupts. To translate it, I had to rename a procedure called `IN`, though that is a reserved word, and remove a constant exported by two modules, though a module exports only types and routines. After that the library ran on a simulated PDP-11 with two LT33 teletypes.

The Yellow tutorial has fifteen programs, and five of them translate as printed. The rest carry the errors any text collects when nobody runs it through a translator: `ConvexHullFinder` is closed as `ComplexHullFinder`, and the sorting example writes `IMPORTS` and `EXPORTS` borrowed from some other language. More often, though, the authors forgot the rules of their own language. In a scheduler for SIFT, the fault-tolerant flight computer SRI was working on at the time, the condition `ept > 0 AND enabled[pri]` means something quite different from what was intended. Three programs still run wrong once the errors are fixed. The exchange sort never swaps ordinary names, and the convex hull of eight points, five of which are on the hull, marks only two. My first thought, naturally, was that the translator was wrong, so the same algorithm was rewritten in Python. It marked the same two points.

## THE and Kubernetes without messages

Then both languages were given what Red and Green had been given: the THE system, Kubernetes on top of it, the Kubernetes control loop and three small problems for comparison. It became clear at once what these two languages share and how they differ from the finalists. Neither has messages, neither can wait for two things at once, and neither has a timeout on a wait.

THE in Blue turned out to be almost native. Blue's semaphores are Dijkstra's P and V, and the program prints exactly what the RED version prints, character for character. And then came the thing that, I think, made restoring the whole of Blue worthwhile. Remember how in Kubernetes on THE a kubelet died holding the store's semaphore and took the whole control plane with it? In Red and Green I had to move the power cut into the gap between two passes of the kubelet. In Blue the store's semaphore is declared `REGION`, and a node can lose power at any moment, even in the middle of a write. The path's death releases the semaphore, and the control plane carries on. SofTech's justification admits that the data under the lock may be left inconsistent, and answers that in an embedded system fresh sensor readings will soon refresh it. In Kubernetes the next pass of a controller plays that part. The distinction between the two semaphores, which looks like pedantry in the 1978 document, solves exactly the problem Dijkstra named as his group's first big mistake.

Timeouts are harder. `REQUEST` has none, and Blue has no way to say "wait for an item, but no longer than thirty milliseconds." The answer turned up in the same book, among the reviewers. One team solved an input-with-timeout problem in all four languages, and here is their Blue version, with the text recognition corrected:

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

Two paths race, and whichever finishes first kills the other. If the operator hasn't answered within thirty seconds, the fuel flow is taken to be five gallons per second. I love that this example holds a whole era: a military console, a teletype and a sensible default. Every wait in the Blue Kubernetes is built this way, and the cost of the idiom shows at once. A parallel block can't stand inside a routine, so the waiting loop can't be hidden in a procedure, and it had to be written out twice. The race is safe only if the waiting path has a higher priority than the timer; otherwise the timer can kill it after it has taken an item from the queue, and the item is lost. That became one of the labs. And Blue has no time of day at all, its clock shows how long a particular path has run, so to print timestamps every process in the system had to become a path of one parallel block.

Yellow builds everything on monitors. Its semaphores are only binary, so Dijkstra's counting semaphores became monitors with a counter and two signals, the very bounded buffer Hoare invented monitors for. Kubernetes on THE in Yellow prints the same as in Red, byte for byte, and what the language lacks shows in the workarounds. Every timeout is a separate watchdog process that watches the clock and sends a signal at the right moment, and the woken process, finding its condition still false, decides by itself to stop waiting. There can be no array of monitors, because a monitor is a module, not a value, so eight event streams are eight named instances of one template. Starting a process gives back neither a name nor a number, so to cut power to the second node, the kubelet itself writes down its identity where the user will find it.

Readers and a writer, the third comparison problem, now has four answers instead of three. In RED an exclusive `REGION` lines everyone up, and in GREEN a server hands out copies. On the semaphores of THE and Blue, readers read together, but a late reader overtakes a waiting writer. And Hoare's monitor in Yellow gives what none of the others did: readers read together, and nobody overtakes a waiting writer.

## Why they lost

The Pittsburgh Panel boiled the analyses down into tables, and its conclusion was simple. The reviewers rated Green the best and Blue the worst, and saw hardly any difference between Red and Yellow. Read the analyses themselves, though, and the picture is far more colorful. Some teams put Yellow first, others last. One wrote that Yellow was much the worst designed and should not be carried further; another found it on the safe side from a systems programmer's point of view and probably the cheapest of all to implement. And one more team ended its analysis with my favorite piece of advice: the best next move the DoD can make is to ask the Red team to implement the Yellow language. Well, the Yellow language has been implemented now.

On Blue the panel was briefest of all: reject it. The design is careful and complete, but overwhelmed by a pervasive complexity, and the simple underlying semantic model claimed by its designers is not evident. One team admitted that Blue suffered from its presentation and that this doubtless colored its overall view, and in that team's summary table Blue and Yellow get the worst mark for how easily a typo changes the meaning of a program. The restoration bore out both halves of the verdict. The care is real: the I/O library with its drivers ran after a dozen typos were fixed, and the two kinds of semaphores turned out to be more precise than anything the finalists had. But so is the complexity: the Blue translator came out the largest of the four, nearly twice the size of Red's, and its backslashes, hash marks and double exclamation marks read worse than any of its neighbors.

Yellow lost by a hair. The panel wrote that the choice between Red and Yellow was not clear-cut, and the majority of its members only slightly preferred Red. But in the section on Yellow itself the words are harsh: type and representation are confused, there is no workable mechanism for process identification, monitors have not been used for significant systems, and the attempt to build on Pascal and its cousin Modula has not been successful. Here my experience agrees with the panel by half. On process identification it is right exactly where I tripped myself. But monitors turned out to be the most convenient part of Yellow for THE and Kubernetes, and by 1978 Brinch Hansen had already, two years earlier, described the Solo operating system, written with the monitors of Concurrent Pascal. There is a further irony: the Red design that beat Yellow by a hair was thrown out a year later by the Red team itself.

Put the four languages side by side and you see four answers to one question: how many synchronization mechanisms does a language need? Green chose the rendezvous, Blue semaphores, Yellow monitors, and only Red offered several at once. Three designs out of four bet on a single mechanism, and in none of the three, as I restored them, can a waiting process limit its own wait by time. And in the chapter on Ada you'll see that Ada eventually won the monitor back as well, under the name of the protected object. The book's compilers wrote that the losing designs should be of interest only to researchers. It seems they were right; the researchers just showed up forty-eight years later.
