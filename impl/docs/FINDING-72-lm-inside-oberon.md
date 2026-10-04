[Русская версия](FINDING-72-lm-inside-oberon.ru.md)

# Finding 72. A language model inside Oberon: the text matched the reference to the byte

A character-level language model runs inside the Oberon system on Wirth's RTL,
both in Norebo's batch mode and in the real system with windows, 1 MB of
memory and a disk. The module is compiled by the system's own compiler. The
printed text is byte-for-byte equal to the text computed by the reference on
the host in RISC5 arithmetic.

```
alice was one thought all the tell you spo
```

(prompt `alice was `, seed 1, 32 characters; the output of a model with 43
thousand parameters trained on "Alice", "looks like English", nothing more.)

## What the model is

| | |
|---|---|
| architecture | Bengio MLP: 8 characters of context → embeddings 16 → 256 (ReLU) → 36 logits |
| parameters | 42,852; fp32 weights, 171,572 B with the header (`lm/LM.Weights`) |
| text | Lewis Carroll, *Alice's Adventures in Wonderland*, Project Gutenberg #11, public domain; the PG header and footer removed (`lm/alice.txt`) |
| training | numpy, seed 1, 12 epochs, tens of seconds on a laptop; loss 1.24 / 1.57 nats/character (training / held-out 10%), `lm/weights.json` |
| sampling | softmax with temperature 0.8, `exp` following Wirth's `Math.exp` scheme, a custom PRNG (LCG) |

The sizes were chosen for the question of the release, not for text quality:
a character costs ~42 thousand multiply-accumulates, and almost all of them
are in two dot-product loops. There is nothing else in the model.

## Why the reference is bit-exact

Comparing with numpy is pointless: Wirth's floating point is not IEEE
(Finding 50). The reference `lm/ref.py` repeats every operation of the module
in the same order and computes it with the functions of `risc-fp.c`, already
checked against the RTL on 1056 cases. Comparisons go through the sign and
zero of the `FSB` result, the way the code generator does them; `FLOOR`,
`FLT`, `PACK` use the same bit operations that `ORG.Mod` emits. Constants in
the module are given as bits (`SYSTEM.VAL(REAL, 3FB8AA3CH)`): the compiler
would convert decimal notation with its own arithmetic, and that would have
to be replicated too.

The match was verified on three executors of the same `LM.rsc`:

| executor | what was compared | result |
|---|---|---|
| Norebo emulator in C | 5 seeds × 128 characters | byte-for-byte ✅ |
| Wirth's RTL (Norebo on Verilator) | 32 characters, seed 1; and 8 characters | byte-for-byte ✅ |
| RTL with fast multipliers | 32 characters on both variants | byte-for-byte ✅ (Finding 73) |

## Inside the real system

Batch Norebo is not the whole truth: it has 8 MB of memory. The model has to
fit into Wirth's machine, so there is a separate run in the real system on
the RTL (`tb/soc_tb.cpp`, 1 MB of RAM, an SD card, a screen):

1. `lm/mkdisk.sh` puts `LM.Mod` and `LM.Weights` onto a copy of the reference
   image and appends two lines to `System.Tool`.
2. The script `scripts/lm.src` is two middle clicks: `ORP.Compile LM.Mod/s`
   (the system compiles it itself: `compiling LM new symbol file 892 1856`)
   and `LM.Generate 16 1 "alice was "`.
3. The module writes the text to the log and to the file `LM.Out`;
   `lm/outcheck.py` extracts the file from the image and compares it with the
   reference: **match** (`alice was one thought all `).

Memory budget (from the sources, `13-episode-lm-on-risc5.md`): the heap is
`80000H…0E7EF0H` = 425,712 B; the record with the weights is 171,408 B,
allocated with a single `NEW` at startup, which is 40% of the heap. The
module's code is 892 words, its globals 1856 B.

The first attempt to put a ready-made `LM.rsc` from Norebo onto the disk
failed with `Call error: LM imports Files with bad key`: an object file
remembers the keys of the symbol files of the environment where it was built.
So compilation happens only inside the system, which is also more honest.

## What this does not show

* Cycles in the real system were not measured: `soc_tb` has no measurement
  window, and the window system runs between characters. The cycle counts
  come from Norebo on the RTL (Finding 74), where the same model step code
  runs.
* Video DMA is not connected in the testbench (Finding 17): on a board where
  the video controller steals cycles, generation will be slower.

## How to reproduce

```
cd impl
make lm-check     # weights = manifest; emulator vs reference, 3 seeds × 64 characters
make lm           # the same on Wirth's RTL, 2 seeds × 16 characters
make lm-system    # in the real system on the RTL, ~4 minutes
python3 lm/train.py   # retrain (bit-exact only on the same machine, see the script)
```
