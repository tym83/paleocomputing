[Русская версия](FINDING-78-float-semantics.ru.md)

# Finding 78. Wirth's floating point on the model: everything differs, the text is the same, and one flag

Two things about arithmetic that surfaced while porting the model.

## 1. Versus IEEE: 98.5% of logits differ, the text is the same

`lm/ieee_study.py` runs the same program (`lm/ref.py`) in RISC5 arithmetic
(`risc-fp.c`) and in IEEE float32 (numpy, round to nearest even) and compares
the logits step by step.

| | |
|---|---|
| seeds × characters | 20 × 128 |
| logits compared | 92 160 |
| differ bit-wise | **90 747 (98.5%)** |
| absolute difference | median 3.8·10⁻⁶, largest 7.3·10⁻⁵ |
| magnitude of the logits themselves | median ~3.5, up to ~22 |
| seeds where the text diverged | **0 of 20** |

Almost every number is different: rounding by adding one instead of rounding to
even accumulates over the 128 and 256 additions of a dot product. But the
difference is five to six orders of magnitude smaller than the logits
themselves, and sampling takes a 15-bit random number: for a character choice
to flip, the random number has to fall into a gap ~10⁻⁵ wide at the boundary.
In 2560 steps it never did.

Hence the practical conclusion for the episode: checking the module against
numpy would be "almost always right" and, once, inexplicably wrong. A reference
in RISC5 arithmetic gives a byte-exact match, and a mismatch, if one happens,
will be a bug rather than rounding.

## 2. Floating-point comparison reads a flag set by integer addition

While examining the code generation for comparisons: `ORG.RealRelation` compares
reals through `FSB` and sets the condition from the same `relmap` table as for
integers. For `<` and `>=` that is `S = N xor OV` (`RISC5.v:188`). But `OV` is
written only by the integer `ADD`/`SUB` (`RISC5.v:216-218`); `FSB` does not touch
it. So the condition of a floating-point comparison takes `OV` **from the last
integer addition**.

Verified with the program `lm/OvProbe.Mod` on the Norebo emulator and on Wirth's
RTL:

```
no overflow: 1.0 < 2.0 TRUE
after overflow: 1.0 < 2.0 FALSE
```

Between the two comparisons there is `i := 7FFFFFFFH; i := i + 1`. Comparison
with zero (`x < 0.0`) is done without `FSB`, from the load flags, and depends on
`OV` in the same way.

How dangerous this is: an integer overflow right before a floating-point
comparison is rare, and the nearest integer `ADD`/`SUB` (a loop counter, a bounds
check) overwrites `OV`. In the episode's model the only place where it can
happen is `seed + 12345` in the random number generator; the reference checks at
every step that no overflow occurs there (otherwise the comparisons during
sampling would change meaning). This is a property of the pair "2016 compiler +
2018 RISC5.v" in this repository; whether it was fixed in later versions of
Oberon we did not check, and we do not claim novelty.

## How to reproduce

```
cd impl
python3 lm/ieee_study.py 128 $(seq 1 20)   # needs numpy
bash lm/ovprobe.sh                          # needs build/obj_nb/norebo_tb (make lm)
```
