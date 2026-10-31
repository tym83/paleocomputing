# BLUE: a language in which everything rests on types

Of the four, the blue language looks the most unfamiliar, so I'll start with a short program from a [lab](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/labs/blue/b2-generic.blu). It swaps two integers, two strings and two colours with one and the same procedure:

```
TYPE COLOR = ENUM (\RED, \GREEN, \BLUE);
VAR I, J: INTEGER;
VAR A, B: ASCII_STR (4);
VAR K, M: COLOR;
...
SWAP (# I, J);
SWAP (# A, B);
SWAP (# K, M);

PROCEDURE SWAP (# X, Y: ?T) WHERE T NEEDS (STORE_ (T ## T));
   VAR TMP: T;
   TMP := X;
   X := Y;
   Y := TMP;
END PROCEDURE SWAP;

FUNCTION FRAME (S: ASCII_STR (?L)) RETURNS (ASCII_STR (L + 2));
   RETURN '[' !! S !! ']';
END FUNCTION FRAME;
```

Almost every symbol here means something, so let's go through it in order.

![This is what the blue language looked like in the specification itself: a generic stack where `?T` infers the element type, `#` separates the parameters, `SIGNALS` lists the exceptions, and `WHERE T NEEDS` says what is required of the type](../img/scan-blue-code.png)

Enumeration literals are written with a backslash: `\RED`, `\GREEN`. This isn't a whim. A literal in the blue language doesn't belong to a single type, and `\GREEN` can be both a traffic-light colour and a rainbow colour at once, at a different position in each. Which one is meant is decided by context, and if the context isn't enough, you state the type explicitly: `[COLOR]$$(\GREEN)`. There are also unordered enumerations, `UNORDERED`, for which only equality is defined: one card suit is never greater or less than another, and the language won't let you pretend otherwise.

A procedure's parameters fall into three groups, input, modifiable and output, and the hash signs go between the groups. In `SWAP (# X, Y)` there are no inputs, and both parameters are modifiable. In `STORE_ (T ## T)` there is one input `T`, no modifiable ones, and one output `T`: assignment takes a value and produces the variable's new value. The groups are visible at the call site too: `SWAP (# I, J)` tells the reader right away that `I` and `J` will change.

`?T` is a generic type inferred from the argument. An instance of the procedure for each type is created by itself, at the call site; nobody names it or declares it. Red worked the same way, while in Green and in Ada the instance has to be created explicitly. It's not only types that can be inferred: `ASCII_STR (?L)` takes the string's length from the argument, and the function `FRAME` promises to return a string of length `L + 2`. The length lives in the type, and the compiler knows it.

And `WHERE T NEEDS (STORE_ (T ## T))` is the list of what the procedure body needs from type `T`. Here it needs only assignment. These operations are taken from the place the procedure was called from, and if the type has no assignment, the call won't compile, with a clear error at the call site rather than somewhere deep inside the instance. Today this is called concepts in C++ or trait bounds in Rust.

## Assignment is a function too

`STORE_` in the previous example is not a typo. In the blue language every operation, including assignment, comparison and taking a substring, is a call to a function with a fixed name: `ADD_`, `EQUAL_`, `LESS_THAN_`, `SUBSTRING_`, `STORE_`. An abstract type exported from a module defines its own addition and assignment in exactly the same way, as ordinary subprograms. Ada still has no user-defined assignment: Ada 95's controlled types let you specify actions after copying and before finalization, but not the assignment itself. In C with Classes, the predecessor of C++, on the other hand, you could already overload assignment in 1980.

One of the 1978 reviewers wrote that "Blue is the closest to using the concept of type and type definition facilities as unifying forces in the language." I don't know a better short description, and it shows everywhere. Fixed-point numbers are specified by scale, radix and precision: `FIXED (scale, radix, precision)`, and `INTEGER` is simply fixed point with a zero scale. The onboard computers of the seventies often had no floating point at all, so they computed in fixed point, and Blue describes it in more detail than anyone. Strings come in different character sets, and a function over strings is generic over the character set. And at the machine level a type can assign its values the codes chosen by the hardware:

```
TYPE STATUS = UNORDERED (\IDLE, \BUSY, \DONE, \FAULT)
   REP ENUM_VAL_REP (4, VALUES (\IDLE AS BIN '0000', \BUSY AS BIN '0001',
                                \DONE AS BIN '1000', \FAULT AS BIN '1111'));
...
SELECT OBJECT_MACHINE FROM
   PDP_11 -->
      S := [STATUS]$$(REGISTER);
   END;
END SELECT;
```

Two details are worth noting here. Only an unordered type is allowed to have its own codes: hardware codes can come in any order, and then they couldn't carry the ordering of the values. Ada arrived at the same place from the other side: there any enumeration can be given codes, but they must be ascending. And reading a code from a device register as a value of the type is only possible in the machine-dependent part, inside `SELECT OBJECT_MACHINE`, where the program says plainly which hardware it's doing this on.

## Closed scopes and declared exceptions

As in the red language, a procedure in Blue is a closed scope: it can't see outside variables until it imports them. Blue is stricter than Red here. A procedure that calls another procedure must import either that procedure or all the variables it touches. So the header of any procedure tells you what state it can reach through the whole chain of calls. A hash sign in the import list works the same way as in the parameters: in `IMPORTS (DATA: (# MUTEX, BALANCE))` everything comes after the hash, meaning the variables are imported for modification, and whatever the procedure only reads is written before it. A blue program itself is made of segments, units of translation that list in `USES` what they take from one another.

Exceptions in the blue language are declared in the subprogram header: `SIGNALS (OVERFLOW, INVALID_FORMAT)`. A subprogram cannot let out an exception that isn't on this list. SofTech's justification explains this with exactly the same argument as the import lists: a procedure's interface must be described completely, and what it can throw is as much a part of it as what it can modify. In 1978 practically the only language that did this was Barbara Liskov's CLU, and checked exceptions, the kind the compiler forces you to declare or handle, came into the mainstream with Java. Ada doesn't have them and never did.

An exception handler in the blue language is attached to a statement, not a block: `EXCEPT` can follow any statement. This seems like a trifle until you write `BLOCK ... EXCEPT ... END BLOCK` and discover that the handler belongs to the last statement of the block rather than the whole block. I fell for it, and it's now a separate item in the [compiler notes](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/blue/notes/blue-digest.md).

## A parallel block that doesn't lose errors

When it comes to concurrency, Blue is the strictest of the four. There are no tasks in the usual sense. There is a parallel block, `PAR_BLOCK`, with paths, `PATH`, inside it, and the block doesn't finish until all its paths have finished. Such a block isn't new in itself; it's Dijkstra's `parbegin ... parend` from 1965. What's new is something else: if some path dies with an exception it is allowed to let out, the block waits for the others and raises that exception itself. `REQUEST` and `RELEASE` in the example acquire and release a semaphore; more on them below. For now, look at `SIGNALS (FAILED)` in the path's header and at `EXCEPT` after the block:

```
VAR MUTEX: SEMAPHORE (REGION) := NEW (1);
VAR BALANCE: INTEGER := 100;
PAR_BLOCK
   PATH WORKER FOR ID IN [1:2] SIGNALS (FAILED) IMPORTS (DATA: (# MUTEX, BALANCE));
      PAUSE (ID);          % PAUSE and LOG are my procedures: a wait in milliseconds
      REQUEST (# MUTEX);   % and a timestamped log line
      PAUSE (5);
      IF ID = 1 THEN
         SIGNAL FAILED;
      END IF;
      BALANCE := BALANCE + 10;
      RELEASE (# MUTEX);
   END PATH WORKER;
END PAR_BLOCK;
EXCEPT
   FAILED --> LOG ('the block signals FAILED: worker 1 ended abnormally'); END;
END EXCEPT;
```

Today this is called structured concurrency: parallel branches live inside a lexical block, the block doesn't finish before they do, and a branch's error isn't lost but reaches whoever opened the block. For the last eight years or so it has been reintroduced everywhere: the Python library Trio, task groups in Swift, `StructuredTaskScope` in Java. Blue is simpler than they are. A failure in one branch doesn't cancel its neighbours; you write that by hand with `TERMINATE`, and if two branches fail, only one exception comes out. `TERMINATE` doesn't kill a path on the spot, either: it delivers the exception `TERMINATED` to it as soon as the path next gets the processor, and the path can catch it. And paths have priorities: of two ready paths, the higher-priority one runs first. But the essential part is already there in the blue block.

In Ada 83 a block also waits for its tasks, but a task that dies with an unhandled exception just quietly terminates, and whoever started it never finds out. This is one of Ada's best-known traps. The blue language of 1978 doesn't have it.

The strictness has a price too. A parallel block can't be placed inside a subprogram, so you can't start a couple of paths from a procedure, and this will come back to bite us in Kubernetes.

## Two kinds of semaphores

The blue language has no mailboxes, that is, message queues between tasks as in the red language, and no rendezvous; paths coordinate with each other through semaphores. Dijkstra's semaphore is a counter with two operations: P waits until the counter is greater than zero and decrements it, V increments the counter and wakes one waiter. In the blue language semaphores come in two kinds, and the difference between them is very subtly thought out. A `SYNCH` semaphore is a classic semaphore without an owner: one path waits for an event, another announces it. A `REGION` semaphore is a lock with an owner around shared data, what today we'd call a mutex. If the path holding such a lock terminates abnormally, the lock releases itself.

![Section 3.11 of the SofTech specification: `SYNCH` and `REGION` semaphores. `REGION` semaphores that a path has requested and not released are released automatically when it terminates abnormally](../img/scan-blue-semaphores.png)

In the example above the first worker dies with the semaphore in its hands, and the second one gets in right away, so the balance comes out as 110 instead of the second worker waiting forever. The word "abnormally" matters. A path that caught an exception itself and carried on keeps its locks, and that became [one of the labs](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/labs/blue/b5-region.blu).

Why not release all semaphores when a path dies? SofTech's justification answers like this. Recording "this path holds the lock" can only be done inside the acquire operation itself, because any flag set afterwards might not get set before the path dies. So it's the system, not the path's handler, that has to release a dead path's lock. But if all semaphores were released, the signalling ones would be too, and the dying path would send false signals to those waiting for a completely different event. That's why there are two kinds, and only locks get released.

SofTech itself cites an objection that had been put to it: the data under a released lock may be left half-updated. The justification agrees and replies that in an embedded system the data will soon be "refreshed" with a new set of data from an input sensor. Thirty years later the same problem would show up in the POSIX standard, and it would be solved more strictly: a robust mutex whose owner has died goes to the next one with the code `EOWNERDEAD`, and the new owner must declare the data consistent, or the mutex becomes unusable. Blue has no such signal; the lock is handed over silently.

Time in the blue language isn't quite what you'd expect either. `WAIT (30)` puts a path to sleep for thirty seconds, and those seconds are a binary fixed-point number, so you can't write a millisecond in them exactly. And `CLOCK`, in my reading of the specification, shows the running time of the particular path rather than the time of day, so my programs take the timestamps in their logs from the simulated machine's clock.
