#!/usr/bin/env python3
"""Tests patch_libvirt.py without a libvirt tree.

The real tree is hundreds of megabytes and a build takes minutes; the edits
only need the anchor lines. This builds a toy tree of five files with the same
anchors as libvirt 11.9 / 11.10 and checks on it that:

  * for RISC5 the edits are the same as the old script with the edit table
    in code produced (it is frozen below as the reference; code is compared
    without C comments, since the PCI comment text is now built from the
    description);
  * the architecture list is data: a second, made-up architecture from its own
    targets.txt gets its own edits from the same template, with no code change;
  * a second run changes nothing, --dry-run writes nothing;
  * negative controls: a malformed targets.txt and a missing anchor stop the
    script.

    python3 qemu/libvirt/patch_test.py
"""
import pathlib
import re
import subprocess
import sys
import tempfile

HERE = pathlib.Path(__file__).resolve().parent
SCRIPT = HERE / 'patch_libvirt.py'
TARGETS = HERE.parent.parent / 'kubevirt' / 'targets.txt'

# Anchors are exactly the lines the patch looks for, with neighbours for realism.
TREE = {
    'src/util/virarch.h':
        'typedef enum {\n'
        '    VIR_ARCH_PPCLE,        /* PowerPC 32 LE http://en.wikipedia.org/wiki/PowerPC */\n'
        '    VIR_ARCH_RISCV32,      /* RISC-V 32 LE https://en.wikipedia.org/wiki/RISC-V */\n'
        '    VIR_ARCH_LAST,\n'
        '} virArch;\n',
    'src/util/virarch.c':
        'static const struct virArchData {\n'
        '    { "ppcle",        32, VIR_ARCH_LITTLE_ENDIAN },\n'
        '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },\n'
        '};\n',
    'src/qemu/qemu_capabilities.c':
        'static const char *preferredMachines[] = {\n'
        '    NULL, /* VIR_ARCH_PPCLE */\n'
        '    "virt", /* VIR_ARCH_RISCV32 */\n'
        '};\n',
    'src/qemu/qemu_domain.c':
        'bool qemuDomainSupportsPCI(const virDomainDef *def)\n{\n'
        '    /* On RISC-V, only the virt machine type supports PCI */\n'
        '    return true;\n}\n',
    'src/qemu/qemu_postparse.c':
        '    switch (def->os.arch) {\n'
        '    case VIR_ARCH_RISCV32:\n'
        '        break;\n',
}

# Edit table of the old patch_libvirt.py (before architectures became data):
# the reference for RISC5.
OLD_EDITS = [
    ('src/util/virarch.h', '    VIR_ARCH_RISCV32,',
     '    VIR_ARCH_RISC5,        /* Wirth RISC5 32 LE http://www.projectoberon.net/ */\n'
     '    VIR_ARCH_RISCV32,'),
    ('src/util/virarch.c', '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },',
     '    { "risc5",        32, VIR_ARCH_LITTLE_ENDIAN },\n'
     '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },'),
    ('src/qemu/qemu_capabilities.c', '    "virt", /* VIR_ARCH_RISCV32 */',
     '    "oberon", /* VIR_ARCH_RISC5 */\n'
     '    "virt", /* VIR_ARCH_RISCV32 */'),
    ('src/qemu/qemu_postparse.c', '    case VIR_ARCH_RISCV32:',
     '    case VIR_ARCH_RISC5:\n'
     '    case VIR_ARCH_RISCV32:'),
    ('src/qemu/qemu_domain.c', '    /* On RISC-V, only the virt machine type supports PCI */',
     '    /* Wirth\'s RISC5 has no PCI bus at all */\n'
     '    if (def->os.arch == VIR_ARCH_RISC5)\n'
     '        return false;\n'
     '\n'
     '    /* On RISC-V, only the virt machine type supports PCI */'),
]

ok = fail = 0


def report(passed, text):
    global ok, fail
    ok, fail = ok + bool(passed), fail + (not passed)
    print(f"  {'✅' if passed else '❌'} {text}")


def make_tree(root):
    for rel, text in TREE.items():
        p = root / rel
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(text)


def read_tree(root):
    return {rel: (root / rel).read_text() for rel in TREE}


def run(root, *args):
    return subprocess.run([sys.executable, str(SCRIPT), '--root', str(root), *args],
                          capture_output=True, text=True)


def strip_comments(text):
    return re.sub(r'/\*.*?\*/', '', text)


def main():
    print('libvirt patch: architectures as data')
    with tempfile.TemporaryDirectory() as tmp:
        tmp = pathlib.Path(tmp)

        # 1. RISC5 from the real targets.txt against the old edit table.
        new, old = tmp / 'new', tmp / 'old'
        make_tree(new)
        make_tree(old)
        for rel, a, b in OLD_EDITS:
            p = old / rel
            p.write_text(p.read_text().replace(a, b, 1))
        r = run(new, '--targets', str(TARGETS))
        report(r.returncode == 0, 'patch from kubevirt/targets.txt applied'
               + ('' if r.returncode == 0 else f': {r.stdout}{r.stderr}'))
        got, want = read_tree(new), read_tree(old)
        same = all(strip_comments(got[k]) == strip_comments(want[k]) for k in TREE)
        report(same, 'for RISC5 the edited code is the same as with the old script')
        report(got['src/util/virarch.h'] == want['src/util/virarch.h'],
               'the enum line matches byte for byte, comment included')

        # 2. A second run changes nothing.
        r = run(new, '--targets', str(TARGETS))
        report(r.returncode == 0 and read_tree(new) == got, 'a second run changes nothing')

        # 3. A second architecture, added only as a data line.
        fake = tmp / 'targets-two.txt'
        fake.write_text(TARGETS.read_text()
                        + 'fakearch 64   BE       fakeboard yes  Fake machine for the test\n')
        two = tmp / 'two'
        make_tree(two)
        r = run(two, '--targets', str(fake))
        t = read_tree(two)
        report(r.returncode == 0, 'patch with two architectures applied')
        h = t['src/util/virarch.h']
        report(h.index('VIR_ARCH_RISC5,') < h.index('VIR_ARCH_FAKEARCH,') < h.index('VIR_ARCH_RISCV32,'),
               'both architectures are in the enum before RISCV32, in file order')
        report('{ "fakearch",     64, VIR_ARCH_BIG_ENDIAN },' in t['src/util/virarch.c'],
               'name, bit width and byte order of the second architecture come from its line')
        c = t['src/qemu/qemu_capabilities.c']
        report(c.index('"oberon", /* VIR_ARCH_RISC5 */') < c.index('"fakeboard", /* VIR_ARCH_FAKEARCH */'),
               'default machines follow the enum order (the table is indexed by it)')
        report('case VIR_ARCH_FAKEARCH:' in t['src/qemu/qemu_postparse.c'],
               'the second one also has a case in the switch')
        d = t['src/qemu/qemu_domain.c']
        report('VIR_ARCH_RISC5)' in d and 'VIR_ARCH_FAKEARCH' not in d,
               'PCI is refused only for the one with PCI: no')

        # 4. --dry-run writes nothing.
        dry = tmp / 'dry'
        make_tree(dry)
        r = run(dry, '--targets', str(fake), '--dry-run')
        report(r.returncode == 0 and read_tree(dry) == TREE and 'would apply 9' in r.stdout,
               '--dry-run shows nine edits and writes none')

        # 5. Negative controls.
        bad = tmp / 'targets-bad.txt'
        bad.write_text('risc5 32 middle oberon no Wirth\n')
        make_tree(tmp / 'b1')
        r = run(tmp / 'b1', '--targets', str(bad))
        report(r.returncode != 0 and 'byte order' in r.stderr and read_tree(tmp / 'b1') == TREE,
               'negative control: a malformed targets.txt line stops the patch before any write')
        broken = tmp / 'b2'
        make_tree(broken)
        (broken / 'src/util/virarch.c').write_text('/* no anchor */\n')
        r = run(broken, '--targets', str(TARGETS))
        report(r.returncode != 0 and 'could not find the spot' in r.stderr,
               'negative control: a missing required anchor stops the patch')

    print(f'Total: passed {ok}, failed {fail}')
    sys.exit(1 if fail else 0)


if __name__ == '__main__':
    main()
