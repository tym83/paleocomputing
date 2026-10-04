#!/usr/bin/env python3
"""Teaches libvirt the architectures of foreign machines: every one listed in
kubevirt/targets.txt (today that is just RISC5).

Four places, and they are linked: the second table is indexed by the values of
the first, the third is guarded by a check that its length matches the first,
and the fourth is a switch that is compiled with an explicit case required for
every architecture.

Architectures are data, not code: the edits are generated from a targets.txt
line by a single template. A new machine is a new line there, not a new copy of
the edits here. Every new architecture goes into the tables before RISCV32, so
the order in the first and second tables matches by construction.

⚠ Every replacement is checked. A patch that silently failed to apply is worse
than no patch: libvirt still builds, but does not know the architecture, and
the cause has to be hunted down at runtime.

Apply from the root of the libvirt tree:  python3 patch_libvirt.py

    --targets FILE   architecture list; by default targets.txt next to the
                     script (that is where it sits in the image build),
                     otherwise kubevirt/targets.txt of this repository
    --root DIR       root of the libvirt tree; current directory by default
    --dry-run        show what would change and write nothing
"""
import argparse
import pathlib
import re
import sys

HERE = pathlib.Path(__file__).resolve().parent
DEFAULT_TARGETS = [HERE / 'targets.txt', HERE.parent.parent / 'kubevirt' / 'targets.txt']

ARCH_RE = re.compile(r'^[a-z][a-z0-9]*$')


def load_targets(path):
    """targets.txt lines: arch bits endian machine PCI description…"""
    out = []
    for n, line in enumerate(pathlib.Path(path).read_text(encoding='utf-8').splitlines(), 1):
        if not line.strip() or line.lstrip().startswith('#'):
            continue
        cols = line.split(None, 5)
        if len(cols) != 6:
            sys.exit(f'{path}:{n}: six columns required: arch bits endian machine PCI description')
        arch, bits, endian, machine, pci, desc = cols
        problems = []
        if not ARCH_RE.match(arch):
            problems.append(f'architecture name {arch!r}: lowercase Latin letters and digits only')
        if bits not in ('16', '32', '64'):
            problems.append(f'bit width {bits!r}: 16, 32 or 64')
        if endian not in ('LE', 'BE'):
            problems.append(f'byte order {endian!r}: LE or BE')
        if pci not in ('yes', 'no'):
            problems.append(f'PCI {pci!r}: yes or no')
        if problems:
            sys.exit(f'{path}:{n}: ' + '; '.join(problems))
        out.append({'arch': arch, 'bits': bits, 'endian': endian,
                    'machine': machine, 'pci': pci == 'yes', 'desc': desc.strip()})
    if not out:
        sys.exit(f'{path}: no architectures')
    names = [t['arch'] for t in out]
    if len(set(names)) != len(names):
        sys.exit(f'{path}: an architecture is listed twice')
    return out


def enum_name(t):
    return 'VIR_ARCH_' + t['arch'].upper()


def edits_for(t):
    """Edits for one architecture.

    The last field says whether the edit is required. The per-architecture
    switch in the QEMU driver existed in libvirt 10; by 11.9 it was rewritten
    into helper functions and the case is no longer needed. The other three are
    required in both versions.
    """
    enum = enum_name(t)
    endian = 'VIR_ARCH_LITTLE_ENDIAN' if t['endian'] == 'LE' else 'VIR_ARCH_BIG_ENDIAN'
    enum_col = (enum + ',').ljust(max(23, len(enum) + 2))
    name_col = f'"{t["arch"]}",'.ljust(max(16, len(t['arch']) + 4))
    edits = [
        # file, what to find, what to replace it with, why, required
        ('src/util/virarch.h',
         '    VIR_ARCH_RISCV32,',
         f'    {enum_col}/* {t["desc"]} */\n'
         '    VIR_ARCH_RISCV32,',
         'value in the architecture enum', True),

        ('src/util/virarch.c',
         '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },',
         f'    {{ {name_col}{t["bits"]}, {endian} }},\n'
         '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },',
         'name, bit width, byte order', True),

        ('src/qemu/qemu_capabilities.c',
         '    "virt", /* VIR_ARCH_RISCV32 */',
         f'    "{t["machine"]}", /* {enum} */\n'
         '    "virt", /* VIR_ARCH_RISCV32 */',
         'default machine for the QEMU driver', True),

        ('src/qemu/qemu_domain.c',
         '    case VIR_ARCH_RISCV32:',
         f'    case {enum}:\n'
         '    case VIR_ARCH_RISCV32:',
         'case in the per-architecture switch (libvirt 10)', False),

        # In 11.x the switch moved here. The compiler itself finds the spot: the
        # build uses -Werror=switch-enum, and a missing case stops it.
        ('src/qemu/qemu_postparse.c',
         '    case VIR_ARCH_RISCV32:',
         f'    case {enum}:\n'
         '    case VIR_ARCH_RISCV32:',
         'case in the per-architecture switch (libvirt 11)', False),
    ]
    if not t['pci']:
        # ⚠ For an unknown architecture libvirt assumes by default that PCI
        # exists (qemuDomainSupportsPCI: special cases only for ARM and RISC-V,
        # then `return true`). Wirth's machine has no PCI bus at all, and
        # without this edit libvirt demands a controller that cannot exist:
        # «Machine type 'oberon' supports PCI but no PCI controller added».
        edits.append(
            ('src/qemu/qemu_domain.c',
             '    /* On RISC-V, only the virt machine type supports PCI */',
             f'    /* {t["desc"]}: no PCI bus at all */\n'
             f'    if (def->os.arch == {enum})\n'
             '        return false;\n'
             '\n'
             '    /* On RISC-V, only the virt machine type supports PCI */',
             f'{t["arch"]} has no PCI bus', False))
    return edits


def apply(root, targets, dry_run=False):
    applied = skipped = absent = 0
    for t in targets:
        for path, old, new, why, required in edits_for(t):
            p = pathlib.Path(root) / path
            if not p.is_file():
                sys.exit(f'no file {path}: is this really a libvirt tree?')
            text = p.read_text()
            # Already patched if the whole insertion is in place. The marker used
            # to be the VIR_ARCH_… name in the file, but virarch.c does not have
            # it (it has the string "risc5"), and a second run inserted it again.
            if new in text:
                print(f'  = [{t["arch"]}] {path}: already patched ({why})')
                skipped += 1
                continue
            if old not in text:
                if required:
                    sys.exit(f'could not find the spot in {path}: the sources changed ({why})')
                print(f'  ~ [{t["arch"]}] {path}: spot is absent, which is normal for newer versions ({why})')
                absent += 1
                continue
            if not dry_run:
                p.write_text(text.replace(old, new, 1))
            print(f'  {"?" if dry_run else "+"} [{t["arch"]}] {path}: {why}')
            applied += 1

    verb = 'would apply' if dry_run else 'applied'
    print(f'{verb} {applied}, already present {skipped}, not applicable {absent}')
    if applied == 0 and skipped == 0:
        sys.exit('the patch did nothing, which should not happen')


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split('\n\n')[0])
    ap.add_argument('--targets')
    ap.add_argument('--root', default='.')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args(argv)
    path = a.targets or next((str(p) for p in DEFAULT_TARGETS if p.is_file()), None)
    if not path:
        sys.exit('targets.txt not found: pass --targets')
    targets = load_targets(path)
    print(f'architectures from {path}: {", ".join(t["arch"] for t in targets)}')
    apply(a.root, targets, a.dry_run)


if __name__ == '__main__':
    main()
