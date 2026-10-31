# YELLOW: Pascal told to satisfy Ironman

If the blue language started from types, the yellow one started from Pascal. The DoD's language requirements were written in stages, and the editions were called Strawman, Woodenman, Tinman, Ironman and Steelman, from a man of straw to a man of steel, each more detailed than the last. The first-round designs were submitted against the 1977 Ironman. SRI writes plainly in its report that its task was to design a language by reworking Pascal to meet the Ironman requirements. The description of the yellow language follows the section numbering of Wirth's "Pascal Report", down to an empty section kept only so that the numbers line up. A program in it reads like Pascal with long closing keywords:

```
MODULE Enumerations
  IMPORT TextIO, StandardImplementationPrelude;
  REPRESENTATION
    Phase = ORDERED (Pending, Running, Succeeded);
    Fruit = UNORDERED (Lemon, Lime, Orange);
  VAR p: Phase := Pending;

  PROCEDURE WritePhase (CONST p: Phase)
    SELECT p
      CASE Pending => Write("Pending")
      CASE Running => Write("Running")
      CASE Succeeded => Write("Succeeded")
    ENDSELECT;
    RETURN
  ENDPROCEDURE WritePhase;

  FOR q: Phase DO WritePhase(q); Write(" ") ENDFOR;
  ...
ENDMODULE Enumerations
```

On top of Pascal come modules from Modula, monitors and signals, module templates, exceptions and overloading. Case matters: reserved words are written in capitals, and names however you like. ASCII had no "not equal" sign, so it's written as a hash, as in Modula.

## Type and representation

SRI's main idea of its own is the separation of type and representation. "Representation" here doesn't mean a machine format, like `REP` in the blue language, but a constraint on values. `INTEGER` is a type, a set of values with operations. `INTEGER [1..10]` is a representation of it, with a range, and for floating-point numbers also with a precision, for fixed-point with a step. A variable can only be declared through a representation; a bare `INTEGER` won't do. On the other hand, two representations of the same type are compatible: `INTEGER [1..5]` and `INTEGER [0..9]` are one type, and assignment between them just checks the range. Enumerations are declared as representations too, in a `REPRESENTATION` section, as in the example above.

This is exactly what Ada calls subtypes: `subtype SMALL is INTEGER range 1 .. 10` doesn't create a new type, it only constrains the old one. Except that in Ada a subtype is an optional extra, while in the yellow language you can't do without a representation. A new type is created by a separate declaration, `TYPE T = INTEGER`, and its literals are written with the type name: `T 50`.

Enumerations are ordered or unordered, as in the blue language, and `BOOLEAN` here is unordered: true is not greater than false. Overloading is explicit only. A new definition of a function with the same name is marked with `EXTENDS` if it is added to the old ones, or `REPLACES` if it replaces them. Without a mark, the new declaration hides all the old ones. So in the yellow language you can't overload something by accident, and when reading you see at once where a name has acquired a new meaning.

## Two rules you trip over on day one

In the yellow language subtraction cannot be written as a chain. Addition and multiplication are, and `a + b + c` is written without parentheses, but `a - b - c` is a syntax error, as is `a * b DIV c`. You have to state the order with parentheses: `(a - b) - c`. Pascal and nearly every other language read this expression left to right. This isn't a whim on SRI's part: Ironman required it, item 4G: parentheses are mandatory if a non-associative operator of the same precedence stands to the left. SRI met the requirement literally, while SofTech wrote outright in the Blue justification that this item should be dropped. In the next edition of the requirements it was indeed softened to a wish.

The second rule is more insidious, and it was inherited from Pascal. Comparisons in the yellow language, as in Pascal, bind more weakly than all other operators, more weakly than `AND` and `OR`. So `x > 0 AND b` reads as `x > (0 AND b)` and doesn't compile. And when the types do match, there's no error: `f = f AND g` for Boolean `f` and `g` silently means `f = (f AND g)`. Later I'll show how the language's own authors fell for this rule.

## Pure functions and value-returning procedures

A function in the yellow language is pure: it has only constant parameters, and it can assign only to its own local variables. The same arguments give the same result wherever it is called. That's stricter than Ironman required. For generators like "give me the next number" there are procedures that return a value:

```
FUNCTION Square RETURNS INTEGER64 (CONST x: INTEGER64)
  RETURN x * x
ENDFUNCTION Square;

PROCEDURE NextTicket RETURNS INTEGER64 ()
  ticket := ticket + 1;
  RETURN ticket
ENDPROCEDURE NextTicket;
```

The 1979 green language solved the same problem in almost the same way, and Ada 83 dropped it.

## Templates that rewrite the text

Generics in the yellow language are the simplest of the four. A module template, `TEMPLATE`, is text with parameters, and `INSTANCE` literally rewrites the module afresh, substituting the actual parameters for the formal ones, and only then translates it. Each instance becomes a new module with its own state, and an error in the template body surfaces only in an instance, just like C++ templates with their three-screen error messages. In the blue language, by contrast, the `NEEDS` list is checked at the call site.

## Hoare's monitors

Concurrency, though, is the yellow language's most successful part. Processes communicate only through monitors. A monitor, invented by Hoare and Brinch Hansen, is a module whose procedures execute strictly one at a time, and inside it there are signals: queues in which a process can sleep until the event it needs. In Java and POSIX they're called condition variables. Here's the classic readers-and-writer problem, the monitor from Hoare's 1974 paper, rewritten in the yellow language:

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

  PROCEDURE EndRead ()
    readers := readers - 1;
    IF readers = 0 THEN SEND(okToWrite) ENDIF;
    RETURN
  ENDPROCEDURE EndRead;
  ...
ENDMONITOR ReadersAndWriters;
```

The yellow language's semantics are Hoare's. `SEND` hands the monitor directly to the process it wakes, and the sender waits until that process leaves the monitor or falls asleep again. So the woken process can check its condition with `IF` rather than `WHILE`: between the signal and the wakeup nobody gets a chance to barge in and spoil everything again. The monitors that made it into the mainstream are different. In 1980, in the Mesa language, Xerox chose semantics in which a signal is only a hint, and the woken process must check the condition again in a loop. That's how `wait` and `notify` work in Java, and POSIX condition variables. Everyone who has written Java knows about the `while` around `wait`; in the yellow language it isn't needed. The price is paid in discipline: a signal is sent only when the condition really holds. As soon as there's a watchdog that wakes a waiter on a timeout while the condition is false, you have to check the condition after waking in the yellow language too.

Waiting has a rank: `WAIT(s, rank)` queues a process by number, and `SEND` wakes the process with the lowest rank. And `AWAITED(s)` asks whether anyone is waiting on a signal. A signal can be bound to an interrupt address, and then the hardware sends it.

![An example from the yellow language's tutorial: a real-time clock monitor rewritten from Wirth's Modula. The clock process waits for a signal from the timer and wakes everyone waiting for the next tick](../img/scan-yellow-monitor.png)

There are also binary semaphores, `CLAIM` and `RELEASE`, for those who find a monitor too heavy. But, as we'll see later, they're better left alone.

## Time you can stop

And one last thing that genuinely surprised me in the yellow language. Any `BEGIN ... END` block can be marked with the word `SIMULATED_TIME`. Then everything inside it runs as one sequential program: processes take turns and switch only where someone waits. Inside the block there is its own artificial time. Every statement takes zero units of that time except `DELAY(n)`, which takes exactly `n`, and the clock moves forward only when all the processes inside are blocked.

In other words, simulation with controlled time is built into a 1978 language. The requirement for "a clock for simulation" was in Ironman, and the blue design answered it with a promise to write a simulation module, as in Simula, the Norwegian simulation language that object-oriented programming started from. Yellow turned it into a language construct you can wrap around any piece of a real program. Today people build entire separate systems for the same thing. FoundationDB built all of its testing on deterministic simulation: the program runs on artificial clocks, the network and disks are replaced with models, and any run can be replayed step for step. A whole company grew out of that, selling such an environment for other people's programs. The yellow language doesn't come close to that, of course: the specification doesn't fix the order of processes, and the language doesn't model hardware or failures. But a clock that moves only when the program wants it to is already there.

My project, incidentally, rests on the same trick: the runtime of all four languages runs on a virtual clock with a deterministic scheduler, which is why any failure is reproducible down to the millisecond. Since my clock is virtual everywhere anyway, in my compiler `SIMULATED_TIME` takes care of something else. Inside the block processes are never preempted by a time slice and switch only where someone waits, as the specification asks.
