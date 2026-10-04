[Русская версия](FINDING-85-descriptor-qemu.ru.md)

# Finding 85. IDX in QEMU: the same switch as for CHK, and a comparison with the RTL across all registers

Parity (finding 56): the hardware variant is selected the same way everywhere,
by a machine property. For descriptors:

| where | how it is selected |
|---|---|
| RTL | `-DWITH_CHK -DCHK_SPLIT -DWITH_DESC` (`DESCDEF` in `impl/Makefile`) |
| QEMU | `-machine oberon,chk=on,desc=on` |
| browser | **no**: no WASM build of the core with descriptors was made |
| cluster, catalog package | **no**: `hardware: desc` has not been added |

`desc` is a separate property, like `chk`: the RTL core with `IDX` also includes
`CHK`, so its QEMU counterpart is both properties at once. Without `desc=on`, the
`IDX` encoding is `ADD` with `v=1`, that is, just `ADD`, as on Wirth's core.

## Comparison

`qemu/test/compare_idx.py`: the program is run in QEMU with an instruction log and
on the native Verilator model with `-DWITH_DESC` (`run_tests_desc --budget=N`
prints all registers); the 16 registers are compared after the same number of
instructions.

| program | budget | result |
|---|---:|---|
| `bench_bounds_d`, the loop from finding 81 | 8 000 | 16 registers matched |
| `t3_idx_q`, 40 random `IDX` and a random out-of-bounds access | 520 | 16 registers matched; the machine is in the trap handler, `R15` = `IDX` address + 4 |
| the same, `chk=on` without `desc=on` (negative control) | | they diverge: `R10` in the loop; `R3`, `R4`, `R5`, `R15` in the random one |

The older comparison `compare_chk.py` still passes after the change to the shared
QEMU launch function. Both are in `.github/workflows/hardware.yml` (the qemu job;
for `IDX` it installs Verilator for the native model).

## What turned up along the way

* **The QEMU ROM is 512 words.** The full random test (1 666 words) does not fit
  into it, and the QEMU log is simply empty. So a separate short variant is
  generated for QEMU (`tools/gen_idx_diff.py 40 14 tests/t3_idx_q.s`).
* **After `HALT` the log entry is ambiguous**: the machine stays at one address,
  and there are several such entries. The comparison accepts them only if the
  state is identical in all of them.
* **The incremental QEMU build did not notice the new instruction**: the copied
  build tree turned out to be newer than the edited `insn.decode`, and ninja did
  not regenerate the decoder (`unknown type name 'arg_idx'`). A clean build in CI
  does not see this; locally it is fixed by `touch`ing the target's sources after
  `graft.sh`.

## What is missing

* Cycles: QEMU does not model them; the extra stall cycle on a trap exists only
  in the RTL and in the Norebo emulator model.
* The browser and the cluster (table above): open.
