# How to try it

All you need is a C compiler and Python:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing/impl/x8-the
make -C emu              # the X8 with CHARON
tests/x8stest.sh         # the 1971 test program: 375 tests
tests/the.sh             # THE: boot, three programs, console and printer
labs/check.sh 01         # the same as a lab
```

The test program is fetched from Dick Grune's page and isn't in the repository: it isn't my text. THE itself is assembled from `the/the.elan` into a paper tape in the initial loading format, and the emulator starts it the way the machine was started: LS, then IP.

There are six labs, checked by `labs/check.sh`. They include the experiments of the previous chapter: fewer core pages, a broken level, another time slice. There is also an operator answering with another number, and a run of the X8 test program. Time in the emulator is virtual, so your output can be compared with anyone else's character by character, down to the milliseconds in the console stamps.

In the browser all of this runs on the series page: [tym83.github.io/paleocomputing/x8/](https://tym83.github.io/paleocomputing/x8/). It is the same emulator, built for WebAssembly, and you are the operator at the console.
