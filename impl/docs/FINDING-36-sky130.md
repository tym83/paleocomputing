[Русская версия](FINDING-36-sky130.ru.md)

# Finding 36. A free cell library, and the claim survives a change of process

The area and frequency estimates were computed with the **Nangate45** cell library, which
had to be excluded from the publication: its header explicitly forbids redistribution:
*"provided pursuant to a License Agreement containing restrictions on its use"*,
*"does not indicate actual or intended publication of this file"*. Because of this,
`make syn` and `make fmax` did not work from a clean clone.

The replacement is **Sky130** (SkyWater, 130 nm) under Apache-2.0. It is a real process,
chips are physically made on it, and the library is taken from the OpenROAD flow.

## The synthesis script needed not a single edit

Mapping went through the first time: 7306 cells, all from the
`sky130_fd_sc_hd__*` set. Two lines changed, the file path in `syn/fmax.py` and
`syn/sweep.py`, plus a `make lib` target that fetches the library on demand
(12 MB, not committed to the repository).

## The main point: the relative deltas survive the switch

This is what had to be checked. The absolute numbers are bound to change, 130 nm versus
45 nm, but our claims are formulated as relative ones, and the question was
whether they would hold.

| | Nangate45 (45 nm) | Sky130 (130 nm) |
|---|---|---|
| base core frequency | 451…477 MHz | **113.8 MHz** |
| frequency with the check instruction | 458.6 / 468.5 MHz | **115.1 MHz** |
| area delta, area-driven mapping | +0.32…0.85 % | **+1.04 %** |
| area delta, delay-driven mapping | — | **+1.35 %** |

The frequency dropped threefold, exactly as expected from a three times coarser process.
**The sign and order of magnitude of the delta held:** the area cost of a hardware bounds check
is around one percent, not tens of percent.

## Finding 16 reproduced along the way

On Sky130 the core **with** the check instruction turned out faster than the base one: 115.1 versus
113.8 MHz. This is the same thing one of the flows gave on Nangate45 (there CHK was
faster by 1.60 %).

The explanation is the same as before: adding logic changes how the optimiser works, and on
the critical path it finds a different solution. The size of the area delta also
depends on the mapping flow: 1.04 % versus 1.35 % on one and the same
library.

The practical conclusion has not changed: **the area delta lies within the spread caused by
the choice of flow**, and it must not be presented as an exact number. The correct
wording is "around one percent; the order of magnitude is stable".

## What remains open

`WireLoad = "none"`: wire delays are still not taken into account, and the frequency
remains an estimate. Sky130 comes with the OpenROAD flow, which can do
real routing; that would remove the caveat, but requires a Linux setup.
