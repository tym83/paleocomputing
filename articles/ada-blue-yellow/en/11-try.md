# Labs, and how to get your hands on all this

As in the earlier parts, I wanted readers to be able not just to read about the language but to break something with their own hands. The twelve exercises in the red language are now joined by [fifteen new ones](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/labs/README.md), seven in Blue and eight in Yellow. They cover what only these languages have. As before, the `check.sh` script translates your version of a program, runs it and tells you whether you've completed the exercise. The lab's number and the level, `look`, `change`, `break` or `build`, are its arguments. Time in the programs is virtual and the scheduler is deterministic, so you can compare your output with someone else's character for character.

In the blue language:

- `b1`: the literal `\GREEN`, which belongs to two enumerations at once and sits at a different position in each;
- `b2`: a single `SWAP` procedure for integers, strings and colours, whose instances nobody declared;
- `b3`: the import list: remove one procedure from it and find out that Blue requires you to import either it or everything it touches;
- `b4`: device status codes as values of an unordered type, read from a register;
- `b5`: a `REGION` semaphore released by the death of a path; a path that caught the exception itself and released the semaphore by hand, that is, ended normally; and the same thing with a signalling semaphore that isn't released, and a hung second worker;
- `b6`: the THE system, in which the bottom layer starts reporting to the operator, that is, calling a layer above itself, and the whole system freezes; you could have spotted this in advance, because the call was in the import list from the start;
- `b7`: a timeout as a race of two paths: take the priority away from the waiter and lose an item in the queue.

![Lab b7: the timeout from the 1978 analysis, a race between the `GET` and `TIMER` paths. Two items received, no third one for thirty milliseconds](../img/en-blue-lab.png)

In the yellow language:

- `y1`: `a - b - c` without parentheses, and the translator's refusal;
- `y2`: `CONST`, `VAR` and `OUT` parameters, and an output parameter that doesn't change if the procedure ended with an exception;
- `y3`: ordered and unordered enumerations;
- `y4`: a module template for a stack, and an instance of the template for a type without ordering, on which the template breaks only in the instance;
- `y5`: a monitor with wait ranks, where the woken process gets the monitor handed over directly: remove `SEND` and see that a signal isn't a state, and without it nobody wakes the waiters;
- `y6`: a pure function that won't be allowed to change a global variable;
- `y7`: a module that exports a variable read-only, and a type whose insides aren't visible from outside;
- `y8`: the THE system on monitors, which can be broken by the same call from a lower layer to an upper one.

![Readers and writer on Hoare's monitor in the browser: the readers read together, while the third one waits behind the waiting writer](../img/en-yellow-readers.png)

To run all of this, you only need a C compiler and make:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing/impl/ada-colors
make                         # builds redc, needed for THE and Kubernetes in Red
make -C blue fixpoint        # builds bluec from the ready-made C file and checks the fixed point
make -C yellow fixpoint      # the same for yellowc
os/run.sh                    # THE and every Kubernetes variant in all four languages
labs/check.sh b5 look        # the REGION semaphore lab
labs/check.sh y1 break       # check your change in the minus-sign lab
```

If you have Cozystack at hand, an open platform for building a cloud on Kubernetes, you don't need to install anything. The [application catalog](https://github.com/tym83/paleocomputing/blob/main/marketplace/README.md#the-unit-of-installation-is-a-repository) I put together for this series has an [environment for languages](https://github.com/tym83/paleocomputing/blob/main/marketplace/repos/languages/packages/apps/langpack/README.md#red-green-blue-and-yellow), and all four languages arrived there in a single container image: you specify the `ada-colors-run` image, put in a source file, and the program runs as a one-off Kubernetes Job whose output becomes its log. When the image is built, all four compilers go the whole way again from the saved C file and check that they reproduce themselves.

The easiest way, though, is to open [the page in your browser](https://tym83.github.io/paleocomputing/red/). Everything happens right there on the page, with no server. All four translators, built to WebAssembly from the same C files, translate the source to C; then clang, also built to WebAssembly, compiles that C, and the program runs with a thread for every task. The runtime is the same file as on Linux, with the same virtual clock, so the programs print in the browser exactly what they print on an ordinary machine, byte for byte. CI checks it: it runs every example in headless Chrome and compares the output. The first run downloads the C compiler, about twenty megabytes, and after that the browser keeps it.

![A 1978 specification, a 2026 run: the first worker died holding a `REGION` semaphore, and the second one got in right away](../img/en-blue-failure.png)
