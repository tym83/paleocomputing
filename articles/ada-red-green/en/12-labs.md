# Labs, and how to get your hands on all this

As in the earlier parts, I wanted readers to be able not just to read about the language but to break something with their own hands. The `impl/ada-colors/labs` directory holds twelve RED exercises and a `check.sh` script that translates your version of a program, runs it and tells you whether you've completed the task. The tasks follow the same levels as before: look, change, break, measure and build. And since time in the programs is virtual and the scheduler is deterministic, you can compare your output with someone else's character for character.

Here's what's there:

- a capsule with a stack: add an exported function `peek`, then try to reach into the `top` field from outside and watch the compiler explain that the type is exported but its components aren't;
- a closed scope: remove a variable from `IMPORTS` and get rejected, then try assigning to a variable imported read-only;
- a mailbox: set its size to zero and see that the sender can no longer run ahead; that's a rendezvous;
- `WAIT`: lose a race to a timeout, then try waiting on a send to a zero-size mailbox and find out why RED forbids it;
- `REGION`: remove the exception handler and see how the runtime reports that all tasks are blocked;
- priorities: give tasks equal priorities and see first-come, first-served ordering;
- generics: write your own `max` for numbers and strings without instantiating anything by hand;
- a process pair: move the primary's death to a different request, then swap the reply and the checkpoint and catch the missing transfer with the audit;
- Dijkstra's THE: let the segment controller report every dump to the drum to the operator, and watch the whole system freeze, because the console needs the very controller that is waiting for it;
- Kubernetes with a process-pair control plane: remove the queue draining in the node controller and get healthy nodes evicted after a failover;
- the compiler itself: add a built-in `MAX` function to `redc`, rebuild it and make sure the fixed point still holds;
- the 1979 program: drop one fix from the list and see which error in the original stops the translator.

To run all of this, you only need a C compiler and make:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing/impl/ada-colors
make                     # builds redc from the seed and checks the fixed point
red/tests/run.sh         # language tests
os/run.sh                # the operating systems and every Kubernetes variant in every language
labs/check.sh 03 look    # the mailbox lab
```

You can also translate and run a RED program without the labs:

```sh
build/redc < program.red > program.c
cc -std=gnu11 -Irt program.c rt/paleo.c -lpthread -lm -o program
./program
```

If you have Cozystack at hand, you don't need to install anything. The series' application catalog has an environment for languages, and the languages arrived there as a separate image: you specify the `ada-colors-run` image, put in a source file, and the program runs as a one-off job whose output becomes its log. When the image is built, the compilers go the whole way from their seeds again and check that they reproduce themselves.

The easiest way, though, is to open [the page in your browser](https://tym83.github.io/paleocomputing/red/). Everything happens right there, with no server. The translators, built to WebAssembly from the same C seeds, translate the source to C. Then clang, also built to WebAssembly, compiles that C, and the program runs with a thread for every task, on shared memory. The runtime is the same file as on Linux, with the same virtual clock, so the labs, the PAIRS kernel and all three Kubernetes print in the browser exactly what they print on an ordinary machine, byte for byte. CI checks it: it runs every example in headless Chrome and compares the output. The first run downloads the C compiler, about twenty megabytes, and after that the browser keeps it.
