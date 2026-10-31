# Four languages side by side

The 1978 reviewers, as the red team remembered it, split the four designs into two pairs: the conservative Blue and Red, and the ambitious, "academic" Yellow and Green. One from each pair went through to the second round. Now that all four languages work, you can see the split was no accident, and the best way to see it is on one and the same task.

The task goes like this. Two workers take turns updating a shared account under a lock. The first one grabs the lock and crashes in the middle of the update. The question: will the second one get in? It's not an academic question. In any system with locks, from an operating system kernel to a database, the first question you ask about a lock is what happens to it when its owner dies. It will come up again in the chapter on Kubernetes.

In the red language the lock is a `REGION`, and it's released however the body ends:

```
REGION d DO
   DELAY(5);
   IF id = 1 THEN
      RAISE X_RANGE;
   END IF;
   balance := balance + 10;
END REGION;
```

In the 1979 green language, as in Ada 83, the lock is a separate server task with two entries, `SEIZE` and `RELEASE`. All the server knows is that it's waiting for a call to `RELEASE`:

```
task body LOCK is
begin
   loop
      accept SEIZE;
      accept RELEASE;
   end loop;
end LOCK;
...
LOCK.SEIZE;
begin
   delay 0.005 * SECONDS;
   if ID = 1 then
      raise RANGE_ERROR;
   end if;
   BALANCE := BALANCE + 10;
   LOCK.RELEASE;
exception
   when RANGE_ERROR => LOG("worker 1 failed while holding the lock");
end;
```

In Blue the lock is released by the abnormal termination of the path, if it's a `REGION` semaphore: the full code was in the chapter on the blue language. In Yellow there are two answers, and they're opposite. A monitor is freed if a monitor procedure exits by an exception. A binary semaphore, `CLAIM` and `RELEASE`, is never freed:

```
MONITOR Account
  ...
  PROCEDURE Update (CONST id: INTEGER64)
    DELAY(5);
    IF id = 1 THEN PROPAGATE_EXCEPTION OUT_OF_RANGE ENDIF;
    balance := balance + 10;
    RETURN
  ENDPROCEDURE Update;
  ...
ENDMONITOR Account;
```

Here's what these programs print. They wait a hundred milliseconds for the second worker, then give up and sum up. Red:

```
[1 ms] worker 1 holds the lock
[6 ms] worker 1 failed inside the region
[6 ms] worker 2 holds the lock
[11 ms] both workers are through, balance 110: the region released the lock for the failed one
```

Green:

```
[1 ms] worker 1 holds the lock
[6 ms] worker 1 failed while holding the lock
[100 ms] 1 of 2 workers through, balance 100: worker 2 still waits on SEIZE, nothing released the lock
```

Blue:

```
[1 ms] worker 1 holds the semaphore
[6 ms] worker 1 fails holding it
[6 ms] worker 2 holds the semaphore
[11 ms] the block signals FAILED: worker 1 ended abnormally
[11 ms] both workers are through, balance 110: the path's end released its REGION semaphore
```

Yellow:

```
[1 ms] worker 1 holds the monitor
[6 ms] worker 1 failed inside the monitor
[6 ms] worker 2 holds the monitor
[11 ms] both workers are through, balance 110: leaving the monitor by an exception gave it up
[11 ms] worker 3 claimed the semaphore
[16 ms] worker 3 failed between CLAIM and RELEASE
[112 ms] worker 4 asked 100 times: no exception gives a semaphore back
```

To be fair: the green worker could call `RELEASE` in its own handler, and the yellow one could do the same for the semaphore. But that's manual discipline, and it's easy to forget. More importantly, it doesn't help when the worker isn't brought down by an exception but killed from outside: in the green language and in Ada an aborted task runs no handlers, and the lock is lost for real. The difference is who is responsible for releasing it, the programmer or the language.

Three languages out of four take it on themselves, each in its own way. Red ties the release to the program text: you've left the `REGION`, the lock is free. Blue ties it to the life of the path: the path has died, its locks are free, but its signals aren't. Yellow ties it to the module boundary: an exception has carried you out of the monitor, the monitor is free. Only in Green, that is, the winner, does the language itself not release the lock, because it has no separate mechanism for shared data. A lock there is a task like any other, and it knows nothing about the death of a client. Ada got a separate mechanism for shared data, the protected object, only in 1995; more on it in the chapter on Ada.

And one more detail, visible only in the blue program: the block learned about the death of the first worker and reported it. In the other languages the worker caught the error itself, and had it not, the task would simply have terminated quietly and nobody would ever have known.

## Readers and writer

The second task is readers and writer. Three readers arrive at 0, 1 and 3 milliseconds, the writer at 2. Reading and writing take ten milliseconds each. A good solution lets readers read at the same time and doesn't let a reader who arrived after the writer overtake it, or else, with a steady stream of readers, the writer will never get its turn.

| Solution in the repository | Read concurrently | A late reader overtakes a waiting writer | Everything done by |
|---|---|---|---|
| RED, exclusive `REGION` | no | no, everyone stands in one queue | 40 ms |
| GREEN, the server hands out copies of the data | yes, on copies | the third reader gets a stale copy | 13 ms |
| BLUE, P and V semaphores | yes | yes | 23 ms |
| YELLOW, Hoare's monitor | yes | no | 31 ms |

This isn't the limit of the languages but the solutions I chose: with semaphores there is also a writer-priority variant, described by Courtois, Heymans and Parnas back in 1971, it's just noticeably longer. Hoare's monitor gives it in thirty lines, because that's the kind of problem it was invented for. The price is visible too: the third reader dutifully waits for the writer and finishes at 31 milliseconds rather than 23.

## Waiting with a timeout

The third task is to wait for a reply, but no longer than a given time. This is where the differences turned out to hurt the most.

Tasks in the red language talk through mailboxes, typed message queues of bounded size, and waiting there is a single construct, `WAIT`, which waits for the first of several events, a timer included. In the 1979 green language only a server can wait with a timeout, through a `select` with a `delay` alternative. A client can't limit its own wait; that kind of call appeared only in Ada. And in the blue and yellow languages no process can wait for two events at once, say, an item in a queue or the expiry of a timer, whichever comes first. Blue solves this with a race between two paths, Yellow with a watchdog that wakes the waiter, or by polling a semaphore with `CONDITIONAL_CLAIM`. More on this in the chapter on Kubernetes, because there are plenty of timeouts there, and the cost of these solutions became visible straight away.

## Summary table

Below is how the four designs differ from each other and from Ada 83. Red and Green here are in their 1979 edition, Blue and Yellow in their 1978 one.

| | RED | GREEN | BLUE | YELLOW | Ada 83 |
|---|---|---|---|---|---|
| Basis | Pascal, rewritten from scratch | Pascal | Pascal, rewritten around types | Pascal and Modula | GREEN after four years of revisions |
| Modules | capsules | packages | modules and segments | Modula modules | packages |
| Outside variables in a procedure | imported only | visible | imported only, along the whole call chain | visible inside the module | visible |
| Generics | instances created automatically | explicit instances | instances created automatically, type requirements in `NEEDS` | module templates rewrite the text | explicit instances |
| Operations | overloading | overloading | everything, assignment included, is a function with a fixed name | explicit overloading only, via `EXTENDS` and `REPLACES` | overloading, no user-defined assignment |
| Functions | no side effects unless marked | no side effects, plus value-returning procedures | input parameters only | no side effects, plus value-returning procedures | input parameters only, side effects allowed |
| Exceptions | declared as names | declared as names, 15 predefined | listed in the subprogram header | not declared | declared as names, 5 predefined |
| Concurrency | tasks and mailboxes | tasks and rendezvous | paths in a parallel block | processes and monitors | tasks and rendezvous |
| Lock for shared data | `REGION` | server task | `REGION` semaphore | monitor | server task |
| Waiting with a timeout | `WAIT` with a timer | server only | race of two paths | watchdog or polling | both server and client |
| Task didn't catch an exception | terminates quietly | terminates quietly | the block raises the exception | terminates quietly | terminates quietly |

Read the table row by row and the pairs show up at once. Blue and Red both require variables to be imported, both create generic instances by themselves, both provide a separate lock for data. Yellow and Green both lean towards side-effect-free functions and a single elegant concurrency mechanism, except that Yellow chose the monitor and Green the rendezvous. And the row about the unhandled exception shows that of the five languages only Blue doesn't lose a task's error.
