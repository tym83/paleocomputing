[Русская версия](FINDING-18-encoding-hazard.ru.md)

# Finding 18: the adopted encoding corrupts a register whose number is set by the array length

Found by the adversarial audit. I did not notice it, although I myself had proven that RISC5 has
no trap on an unknown instruction.

## Mechanism

The CHK instruction occupies **an alias of an existing one**: F0 `LSL` with `v=1`. The justification was
that the Oberon compiler does not emit this encoding. That is true, and not enough.

**On the stock core a CHK word executes as an ordinary `LSL`, silently**, writing a register
and setting the N and Z flags. There is no trap on an unknown instruction, and there will be no diagnostic.

The adopted encoding (limit in two pieces) made this **worse**, not better. Previously
field `a` was zero, and R0 was corrupted. Now `IR[27:24]` holds the upper four bits of the
limit, that is, **the number of the clobbered register is determined by the array length**:

| Array limit | What is corrupted on the stock core |
|---|---|
| ≤ 255 | R0 |
| 256…511 | R1 |
| 1000 | **R3** |
| 4095 | 🔴 **R15, the link register** |

The last row is the worst case: clobbering the return address sends control nowhere,
and the cause will look like stack corruption.

## What had to be done and was not

The design review (reviewer 2, items 7 and 12) explicitly prescribed a safeguard: mark modules of
the extended ISA **with the `.rsc` version byte = `2X`**, so that the old loader refuses honestly
(`Modules.Mod:67`: `versionkey = 1X`, otherwise `res = 4: bad file version`).

**Not implemented and not mentioned in any finding.** This is a direct failure to meet a requirement
of the review that I accepted and then lost.

## The check that was missing

The justification "the compiler does not emit LSL with v=1" relied only on reading the code generator.
The auditor did a direct check in half a minute: in **51 085 words** of the code sections of all
`.rsc` files in `build/` and `ext/norebo/build2/`, matches with the CHK encoding: **zero**;
in both `prom*.mem` files, also zero.

I should have provided this myself. For contrast: in the disk image 892 words match the
bit pattern, mostly data, but that is exactly why such a check is required.

## ✅ Fixed: the safeguard is implemented

The configuration E code generator now stamps modules with version byte 2:

```oberon
(*CONFIG E: modules using the CHK instruction are stamped version 2 so that a stock
  loader refuses them (Modules.Mod: versionkey = 1X -> res = 4, bad file version).*)
IF version = 1 THEN Files.WriteByte(R, 2) ELSE Files.WriteByte(R, version) END ;
```

Verified: configuration E modules get byte **2**, configuration B modules get **1**.

**Where the safeguard fires:** the standard loader of the real system,
`Modules.Mod:3` (`versionkey = 1X`) and `Modules.Mod:67` (`IF ch = versionkey THEN …`),
otherwise `res = 4: bad file version`.

**Where it does not fire and why that is fine:** Norebo has its own stripped-down loader
without this check, so in the host environment both modules load. This is not a hole in the safeguard:
Norebo does not execute CHK on stock hardware either; it implements it itself.

## What remains a risk

The safeguard covers **loading a module as a whole**. It will not help if a word with the CHK encoding
ends up in the instruction stream some other way, for example in data executed as code.
Direct check (done by the auditor): in **51 085 words** of the code sections of all the project's `.rsc` files
there are **zero** matches with the CHK encoding, and zero in both ROM images too.
In the disk image 892 words match the bit pattern: that is data, and exactly why
a safeguard based on the version byte, rather than on the pattern, is the right solution.
