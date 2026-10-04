[Русская версия](FINDING-55-central-number.ru.md)

# Finding 55. The centerpiece: the processor changes on the page

The reader presses a button, the processor under the system changes, and the
page immediately computes what array bounds checking costs. Not a retelling of
a measurement but the measurement itself: the numbers are computed in the
browser, on the real RTL model.

```
configuration           instructions/index   cycles/index
B: software check              10.00              11.00
E: hardware check               9.00              10.00
savings                         1.00               1.00  (9.1%)
```

## Why this is honest

**The loop body is the same.** Both programs are generated from one template
(`tools/gen_bounds_bench.py`) and differ exactly in the check: `SUB` + `BCC`
versus a single `CHKS`. Address computation, element load, accumulation and
index wraparound are identical byte for byte. Two copies of the loop would
diverge at the first edit, and the number would become a comparison of two
different programs.

**The program runs from reset, out of ROM.** The measurement needs neither the
system nor a disk image, only the processor model. So the measurement takes a
fraction of a second and can be repeated on the page as often as you like.

**The numbers match the ceiling computed in advance.** The v0.2 design
predicted: "the savings ceiling is 1 cycle and 1 word per index operation".
Exactly that was measured.

## The trap that made the measurement lie tenfold

The first version ran the program **to completion** and detected the end by a
signal word in memory. The check happened once every 200,000 instructions, and
the idle tail got into the numbers: the program had long finished and was
spinning in an empty loop. The difference came out as 10 instructions per
iteration instead of one, that is, **ten times the real value**, and it looked
plausible.

The correct setup is the reverse: the loop is guaranteed to be longer than the
budget, both configurations run **exactly the same number of instructions**,
and the completed iterations are read from a counter in a register. Then there
is nothing to detect.

## The second trap is in node, not in the machine

For small files, `fs.readFileSync` returns **a view into a shared pool**, not a
buffer of its own: `.buffer` there is the entire pool. A second read in a row
returned someone else's bytes, the program was assembled from garbage and simply
never ran to completion. No error, no exception. The fix is a window:
`new Uint32Array(b.buffer, b.byteOffset, …)`.

## What the switch shows

Beyond the numbers, the main point: **the stock system boots identically on
both cores**. The screen checksum is `B5DFC933`, the same as in the native
`make boot`, with the same instruction count. An instruction set extension that
changes the behavior of existing code is not an extension but a different
machine.

This is checked automatically (`worker-test.mjs`), not merely claimed in the
text.

## What is not there yet

Configuration A (no checks at all) is not on the page: it requires **a different
system image**, built with a patched compiler, not different hardware. Its
numbers were taken with a cross build on the host (Finding 21) and have not yet
made it into the browser.
