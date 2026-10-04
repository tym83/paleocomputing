[Русская версия](README.ru.md)

# libvirt patch: the RISC5 architecture

Our own build, not an upstream submission: libvirt rejects contributions
involving a language model, and Claude is named in their rules explicitly.

## Why it is needed

Verified by experience: **libvirt does not trust the machine description, it
asks the emulator itself for the architecture** over QMP. Claiming a familiar
name in the description does not work; the refusal comes when the binary is
probed:

```
internal error: Unknown QEMU arch risc5
```

## What it edits

Five places, about ten lines. Three are always required, two depend on the
version; the script decides on its own which ones apply:

| file | what | versions |
|---|---|---|
| `src/util/virarch.h` | value in the architecture enum | all |
| `src/util/virarch.c` | name, bit width, byte order | all |
| `src/qemu/qemu_capabilities.c` | default machine | all |
| `src/qemu/qemu_domain.c` | case in the switch | 10.x |
| `src/qemu/qemu_postparse.c` | the same case, moved | 11.x |
| `src/qemu/qemu_domain.c` | RISC5 has no PCI bus | 11.x |

**Three of the five places were pointed out by the compiler itself.** The
machine table is guarded by a length check, the switch is compiled with
`-Werror=switch-enum`, and libvirt reported the PCI issue at runtime. None of
them had to be hunted down by hand.

PCI deserves a separate note: for an unknown architecture
`qemuDomainSupportsPCI` answers "yes" by default; the only special cases there
are ARM and RISC-V. Without the edit libvirt demands a controller that
Wirth's machine cannot have.

**Every replacement is checked.** A patch that silently failed to apply is
worse than no patch: libvirt builds, but does not know the architecture. On
libvirt 11.9 this paid off: the script stopped the build when the 10.x spot
was not found.

Apply from the root of the libvirt tree:

```
python3 patch_libvirt.py
```

## Architectures are data

The script takes the architectures to add from `kubevirt/targets.txt` (in the
image build, from `targets.txt` next to itself): name, bit width, byte order,
default machine and whether there is a PCI bus. All the edits above are
generated from that line by a single template, so a new machine is a new line,
not new code. Verified by runs on clean `v11.9.0` and `v11.10.0`: for RISC5
the result is the same as the old edit table in code produced, except for the
text of the PCI comment, which is now built from the description.

`--dry-run` shows what would change without writing anything. The test that
needs no libvirt tree is `python3 qemu/libvirt/patch_test.py`: a toy tree with
the same anchors, a comparison with the old edit table, a second made-up
architecture from its own list, and negative controls.

## What the patch does NOT cover

After it libvirt recognises the architecture but crashes when probing the
emulator: a null pointer dereference in the code that parses QMP replies.

The cause was found by probing the binary with the same requests libvirt
makes. Everything answers except one:

```
query-target             ✅ {"arch": "risc5"}
query-machines           ✅ [{"name": "oberon", ...}]
query-cpu-definitions    ❌ CPU model definitions are not supported on this target
query-kvm                ✅
query-version            ✅
```

**Our target does not declare a single CPU model.** For Wirth's machine that
is honest, since its core has no variants, but libvirt does not expect such a
refusal and crashes instead of reporting a clear error.

Two ways out, both workable:

1. **Declare one CPU model in the target.** Honest: there is exactly one
   model, `risc5-cpu`, and it already exists as an object type. It only needs
   to answer the request.
2. Fix libvirt so that it survives the refusal. More correct in substance,
   since libvirt should not crash on this, but it means editing someone
   else's code beyond what is necessary.

The first is the sensible choice: our target simply becomes more complete,
and that will be useful beyond this case.
