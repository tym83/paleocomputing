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
