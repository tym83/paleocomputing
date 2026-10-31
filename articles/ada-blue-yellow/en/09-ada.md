# What Ada inherited from them

Ada 83 is the green language after four years of revisions, and it has no direct inheritance from Blue and Yellow. But if you lay the 1978 designs next to the whole history of Ada up to Ada 2022, you get the same picture as with the red language: much of what the losers offered from the start, Ada picked up over decades, in its own words and, as a rule, without knowing it was repeating someone from 1978. Let me go over the main points.

## What matched from the start

The first match is subtypes. The yellow language's representations are Ada's subtypes, which came to Ada from the green language, so this is a resemblance, not a borrowing.

Machine-level representations match too. The blue language assigned hardware codes to enumerations through `REP`; Ada does the same in chapter 13 of the standard. Blue allowed custom codes only for unordered types; Ada allows them for any, but requires the codes to be ascending. Both teams saw the same problem, the order of values versus the order of codes, and solved it from different sides.

There's also the idea of parentheses where the reader might go wrong. Ironman required parentheses around non-associative operators, Yellow did this literally, Blue refused, and in Steelman the requirement was softened to a wish. Not much of it survived in Ada, but some did: you can't mix `and` and `or` without parentheses, and `a ** b ** c` is an error too.

## What came later

The monitor came back first. Ada 95 introduced protected objects, and the Ada 95 rationale names monitors outright among their ancestors. A protected object is a monitor that has barriers instead of signals, and callers waiting on an open entry are served before new calls. In other words, Ada 95 kept Hoare's main guarantee, the one the yellow language gave through `SEND`: between the moment a condition becomes true and the moment the waiter wakes up, nobody can barge in. Leaving a protected operation by an exception frees the object, just like leaving a yellow monitor. Ada came back to the monitor seventeen years after rejecting the yellow language.

Then came explicit overloading. The yellow language's `EXTENDS` and `REPLACES` required you to mark whether a new definition adds a meaning to a name or replaces the old one. An idea similar in spirit came to Ada 2005 as the `overriding` and `not overriding` indicators, though for methods rather than for any name: so that a typo in a name doesn't turn an override into a new method. C++11 got `override`, Java the `@Override` annotation. The industry arrived at this through bugs that the yellow language ruled out by syntax.

Side-effect-free functions and import lists. The yellow language required a function to touch nothing but its own local variables, and the blue one required the header to list every outside variable the procedure reads or changes, along with the access mode. Ada 83 had neither. It came back through SPARK, a strict subset of Ada for provable code, and in Ada 2022 became part of the language: the `Global` aspect lists a subprogram's outside objects together with their access mode. That's almost word for word the blue language's `IMPORTS` list from the workers example.

Concurrency that doesn't lose errors: it arrived, but in the wrong place. Ada 2005 introduced task termination handlers: you can find out that a task died with an unhandled exception, but the exception doesn't propagate to whoever started the task. Ada 2022 introduced parallel blocks, `parallel do ... and ... end do`: the block waits for all its branches, a failure in one cancels the others, and the exception comes out. This is structured concurrency in the modern sense, even stricter than Blue's block. But it's for computation, while Ada's tasks with their rendezvous still lose errors exactly as they did in 1983.

## What never came

A lock that is released when its owner dies. A protected object is freed if an operation exits by an exception, but a task inside a protected operation can't be aborted: Ada defers the abort until the operation ends. So Ada solved the same problem as the blue language, just from the opposite side: Blue releases the dead owner's lock, Ada won't let you die while you hold the lock.

Declared exceptions. The `SIGNALS` list in the header of a blue subprogram didn't make it into Ada. Java got checked exceptions, and the industry is still arguing about whether that's a good thing: C# and Kotlin deliberately left them out. So here the blue language bet on an idea that hasn't won conclusively anywhere.

User-defined assignment, like Blue's `STORE_`, never appeared in Ada.

Generics without explicit instances. In Ada a generic instance is still created explicitly, and the required operations are passed as formal subprograms. The closest thing to Blue's `NEEDS` is `with function "<" (L, R : T) return BOOLEAN is <>`, which picks up the matching operation at the point where the instance is created. In essence it's the same list of requirements on a type, except you still have to create the instance by hand.

Ada has no simulated time and never did.

## Three teams out of four

John Goodenough, the head of the blue design, spent twenty years after the competition making sure Ada compilers conformed to the standard, and the standard to itself. Ada 95, as I told in the article about the finalists, was designed by the Intermetrics team, the authors of the red language. So of the four 1978 teams, three ended up responsible for Ada in one way or another. Only the yellow one was left out.
