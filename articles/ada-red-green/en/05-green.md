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
