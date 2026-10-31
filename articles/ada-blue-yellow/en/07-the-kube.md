# THE and Kubernetes without messages

A compiler tests a language on sequential code. To test concurrency, in the article about the finalists I wrote several systems in the red and green languages, and now I repeated them in Blue and Yellow.

The first is THE, the multiprogramming system that Dijkstra's group built in Eindhoven in 1965–1968. It's a society of sequential processes arranged in layers: semaphores and processor allocation on level 0; the memory controller, which shuttles segments between memory and the magnetic drum, the slow backing store of those years, on level 1; the single operator console on level 2; the input/output buffers on level 3; the user programs on level 4. A process only calls on the layers below it.

For those who haven't worked with Kubernetes: you write the desired state into a store, say a deployment with three replicas, and a set of controllers compares it with the actual state over and over and closes the gap: they create pods, instances of the application, assign them to nodes and move them off nodes that have gone quiet. Together this is called the control plane.

The second is Kubernetes on top of THE: the Kubernetes controllers run as level-four user programs, the object store lives in segments on the drum, and every node has a kubelet that runs pods. The third is the Kubernetes control plane on its own, without THE, to test exactly what real Kubernetes rests on. It has an API server that itself pushes every object change to its subscribers (in Kubernetes this is called a watch), controllers with their own copies of the state, and leases: records a node must renew regularly to be considered alive.

And straight away it became clear what unites the blue and yellow languages and how they differ from the finalists. Neither has messages, and neither can wait for two events at once, say, an item in a queue or the expiry of a timer, whichever comes first.

## Blue: THE feels at home

THE in the blue language turned out to be almost a native. Blue's semaphores are exactly Dijkstra's P and V, and the program prints exactly the same thing as the red-language version, character for character. Each layer of the system is a module, so each process's import list says outright which layers it calls on.

And then came the thing that made rebuilding the whole blue language worth it. Kubernetes on THE has a power-off scenario: a node loses power, its kubelet dies, and the control plane has to notice the node is gone and move the pods. The store in THE is guarded by a semaphore, like everything in this system. In the red language this is a P-and-V semaphore in Dijkstra's spirit, not a `REGION`: a `REGION` is tied to a block of text, whereas in THE one process does P and another V, and acquire and release often live in different places. So a kubelet that died in the middle of writing to the store took the semaphore with it, and the whole control plane froze: in the article about the finalists, that's exactly where I got caught. In the red and green languages I had to move the power-off into the gap between the kubelet's passes, where it holds nothing.

In the blue language the store's semaphore is declared as `REGION`, and it's still an ordinary P-and-V semaphore, just with an owner. You can acquire it in one procedure and release it in another, and if the path dies, the system releases it by itself. Now the node can lose power in the middle of a kubelet pass, even during a write: the kill reaches the path as soon as it next gets the processor, the path's death releases the semaphore, and the control plane lives on. For this to work, the kubelet, having caught the notice that it's being killed, raises it again; otherwise the path would end normally and keep the lock. The data under the lock may be left half-written, and SofTech's justification answered that it would soon be refreshed with fresh sensor readings. In Kubernetes the same role is played by the controller's next pass, which once again compares the desired with the actual. What the red language got from a lexical block, Blue gives for an ordinary semaphore with an owner, that is, for exactly what THE is built on.

## Blue: a timeout as a race

Timeouts are harder. Acquiring a semaphore has none, and the blue language has no way to say "wait for an item, but no longer than thirty milliseconds". The answer turned up in the same book, from the reviewers. One of the teams solved an input-with-timeout problem in all four languages, and here is its blue version, retyped from the picture:

![The analysis by team 126-02, problem A 2.8 "input with timeout", the solution in the blue language. At the bottom of the page the reviewers honestly warn that they are making assumptions about how Blue implements exceptions](../img/scan-fuel-flow.png)

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

Two paths race, and whichever gets there first kills the other. If the operator hasn't answered within thirty seconds, the fuel flow is taken to be five gallons per second. I like that this example holds the whole era: a military console, a teletype and a sensible default. And the weakness of the idiom is already visible here: if the timer fires between the input and `TERMINATE (PATH2)`, the value entered gets overwritten with a five.

In the standalone Kubernetes in Blue, every wait works this way, and the cost of the idiom shows immediately. A parallel block can't be placed inside a subprogram, so the wait loop can't be hidden in a procedure, and it had to be written twice: for the family of controllers and for the kubelets. The race is safe only if the waiting path has a higher priority than the timer. Otherwise the timer can kill it at the moment when the semaphore has already handed it an item but the path hasn't yet picked it up: the item stays in the queue, but there's nobody left to take it. That became one of the labs. Priority saves the day here only because there's one processor and the priorities are strict. The right way is for cancellation to return what was handed out, or for the "take and mark" section to be non-interruptible, as in Ada, where an abort is deferred until the end of a rendezvous and of protected operations. And a killed path can't tell who exactly killed it, its own race or the user who switched off the node. The kubelet of the blue Kubernetes learns about the power-off from a note the user leaves for it before killing it.

## Yellow: everything on monitors

The yellow language builds everything on monitors. Its semaphores are binary only, so Dijkstra's counting semaphores became monitors with a counter and two signals, the very bounded buffer from Hoare's monitors paper. The memory controller became a monitor too, and it turned out simpler than Dijkstra's: a process that needs a segment does the work itself inside the monitor, and the queue to enter the monitor is the request queue.

![Kubernetes on top of THE in the yellow language, in a browser. Node 2 loses power, its pods move to other nodes, the operator scales the deployment to five replicas](../img/en-yellow-kube.png)

Kubernetes on top of THE in the yellow language prints the same as in the red one, byte for byte. Its store, as in the red version, is guarded by a semaphore, a binary one, to keep THE's P and V, and a binary semaphore isn't released when a process dies. So here too the power goes off between the kubelet's passes. A monitor would have released itself: an exception that carries a process out of a monitor frees it, like the red language's `REGION`.

What the language lacks shows in the workarounds, and for timeouts I tried several. In the small comparison program, the timeout is a watchdog that wakes the waiter without slipping it anything: the woken process sees the condition is still false and decides by itself to stop waiting. In Kubernetes on THE, a clock process wakes all the controllers every ten milliseconds. And in the standalone Kubernetes I took a simpler route and set up one clock process that every twenty milliseconds puts an empty tick event into each quiet event stream, essentially the same fake item the watchdog slips in in the semaphore-based THE.

There can't be an array of monitors, because a monitor is a module, not a value. So the standalone Kubernetes's eight event streams, one per subscriber, are eight named instances of a single template, and the right one is picked by a select statement on its number. Starting a process returns neither a name nor a number, and to cut the power to the second node, the kubelet itself writes its identifier where the user will find it. A program with running processes can't finish until they finish, and the eternal controllers have to be asked to stop with a flag and one last signal.

## What came of it

Both systems work and print the same as their red and green twins, in places byte for byte. The blue language turned out to be the most convenient for THE and the least convenient for Kubernetes, where timeouts are at every step. Yellow is the opposite: monitors fit Kubernetes very naturally, but everything to do with time and with process names had to be built by hand. And the common conclusion for both is this: a language with a single synchronization mechanism copes, but pays for every missing mechanism with a separate process. The green language in the article about the finalists paid the same way, with a buffer task instead of a mailbox.
