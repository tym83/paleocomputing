[Русская версия](FINDING-87-qemu-div-remainder.ru.md)

# Finding 87. MOD in QEMU returned the high part of an earlier product

## Symptom

Kube's store on disk was never written in QEMU: the task that saves it
compares a checksum of the objects with the last one saved, and the checksum
was always 0. The same module under Norebo wrote its snapshot at once. A test
module showed the cause in two lines: `999999999 * 31` gave 935228897, as it
should, but `(999999999 * 31) MOD 1000000007` gave 7 instead of 935228897.
Seven is the high half of the 64-bit product, 7 · 2³² + 935228897.

## Cause

RISC5 puts the high part of a product into the register H, and the remainder
of a division into the same register; the compiler reads the remainder from H
after `DIV`. In the QEMU target, H is a TCG global (`cpu_h`). Multiplication
writes it in generated code; division is a helper written in C, which stores the
remainder into `env->h`.

The division helpers were declared with `TCG_CALL_NO_RWG`, a promise that they
neither read nor write TCG globals. The code generator relied on it and could
keep the value of H from the multiplication in a host register across the call,
so the remainder written by the helper was lost and `MOD` read the high part of
the product.

Whether that happened depended on how the code generator allocated registers in
the block. The register-level comparison with the RTL (`compare.py`) did not
show it: in its short program H was written back to memory right after the
multiplication and reloaded after the division, and the same sequence there,
even with H read in between, gave the right remainder.

## Fix

The helpers are declared without call flags (`DEF_HELPER_3`), so the code
generator saves and reloads globals around them.

## Check

`qemu/test/arith_check.py` compiles `qemu/test/Arith.Mod` onto a system disk,
runs it in QEMU and reads the results from the disk: products followed by `DIV`
and `MOD`, and a 100-step hash chain `h := (h*31 + i) MOD 1000000007`. Python
checks each line with its own arithmetic, rounding down as Wirth's divider
does. Negative control: with the old flags the chain comes out as 0 and the
check fails.

## Consequences

Any Oberon code that takes a remainder after a multiplication in the same
block could get a wrong result in QEMU, and therefore in an OberonVM in
Cozystack: hashes, checksums, modular arithmetic. The browser emulator and the
RTL were not affected; this was a defect of the QEMU target alone.
