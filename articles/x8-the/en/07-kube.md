# Kubernetes in a world of semaphores

In earlier parts of the series a Kubernetes control plane already ran on the Oberon machine, and then in RED and GREEN. Here I wanted to see what is left of it when a program has nothing but what THE gave user programs in 1968: semaphores, segments and the console.

The first thing missing is a place for the objects. THE had no common database; Dijkstra says so plainly: users share only the machine and the library. So the store is a segment, owned by one program, the API server. The others send it requests. And then it turns out there is no request queue either. In RED it would be a mailbox, in GREEN a task entry. Here it has to be built from three semaphores: one counts the free places, one the filled ones, and the third keeps two clients from writing into the same place. It is the bounded buffer Dijkstra used to explain semaphores in EWD 123, only now the Kubernetes API rests on it.

The second thing missing is time. The node controller has to notice that a node has been silent for more than a second, and a THE user program has no way to wait. The kernel got exactly one new service, a delay on the clock: a process says "wake me after so many ticks" and goes to sleep, and the clock interrupt wakes it on time.

The third is watching for changes. I did not build it, and that turned out right: every controller takes a fresh snapshot of the store on every pass and compares what exists with what is wanted. That is how Kubernetes works at heart, by level, not by event, and in a world of semaphores it is the most natural way.

The last lesson is about levels. The operator types `k kill 2` on the console, but the message interpreter lives on level 2 and may not call a level 4 program. So it only puts the line into a buffer and does V on the semaphore kubectl, a user program, waits on. The same hierarchy that forbids the segment controller to wait for the interpreter decides here how the operator's command reaches Kubernetes.

In the standard run three pods spread over two nodes. At forty seconds the operator switches off node 2, two seconds later the console says `node: not ready, node 2`, and the API server's log on the line printer shows the rest:

```
node 2 not ready
deleted web-2
created web-4
bound web-4 to node 1
running web-4 on node 1
scaled to 5
created web-5
...
```

All of this shares eight core pages with the sieve of Eratosthenes and a program that drives segments through the drum, and Kubernetes knows nothing about it: the store is just one more segment that now and then goes to the drum.
