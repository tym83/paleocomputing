#!/usr/bin/env python3
"""Проверка patch_libvirt.py без дерева libvirt.

Настоящее дерево — сотни мегабайт и сборка на минуты; правкам нужны только
строки-якоря. Здесь собирается игрушечное дерево из пяти файлов с теми же
якорями, что в libvirt 11.9 / 11.10, и на нём проверяется:

  * для RISC5 правки те же, что давал прежний скрипт с таблицей правок
    в коде (она заморожена ниже как эталон; сравнивается код, без
    комментариев C, — текст комментария к PCI теперь собирается из описания);
  * список архитектур — данные: вторая, выдуманная архитектура из своего
    targets.txt даёт свои правки по тому же образцу, ничего в коде не меняя;
  * повторный прогон ничего не меняет, --dry-run ничего не пишет;
  * отрицательные контроли: кривой targets.txt и пропавший якорь
    останавливают скрипт.

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

# Якоря — ровно те строки, которые ищет патч, с соседями для вида.
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

# Таблица правок прежнего patch_libvirt.py (до того, как архитектуры стали
# данными) — эталон для RISC5.
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
    print('Патч libvirt: архитектуры как данные')
    with tempfile.TemporaryDirectory() as tmp:
        tmp = pathlib.Path(tmp)

        # 1. RISC5 из настоящего targets.txt против прежней таблицы правок.
        new, old = tmp / 'new', tmp / 'old'
        make_tree(new)
        make_tree(old)
        for rel, a, b in OLD_EDITS:
            p = old / rel
            p.write_text(p.read_text().replace(a, b, 1))
        r = run(new, '--targets', str(TARGETS))
        report(r.returncode == 0, 'патч по kubevirt/targets.txt прошёл'
               + ('' if r.returncode == 0 else f': {r.stdout}{r.stderr}'))
        got, want = read_tree(new), read_tree(old)
        same = all(strip_comments(got[k]) == strip_comments(want[k]) for k in TREE)
        report(same, 'для RISC5 код правок тот же, что у прежнего скрипта')
        report(got['src/util/virarch.h'] == want['src/util/virarch.h'],
               'строка перечня совпадает байт в байт, с комментарием')

        # 2. Повторный прогон ничего не меняет.
        r = run(new, '--targets', str(TARGETS))
        report(r.returncode == 0 and read_tree(new) == got, 'повторный прогон ничего не меняет')

        # 3. Вторая архитектура — только строкой данных.
        fake = tmp / 'targets-two.txt'
        fake.write_text(TARGETS.read_text()
                        + 'fakearch 64   BE       fakeboard yes  Fake machine for the test\n')
        two = tmp / 'two'
        make_tree(two)
        r = run(two, '--targets', str(fake))
        t = read_tree(two)
        report(r.returncode == 0, 'патч с двумя архитектурами прошёл')
        h = t['src/util/virarch.h']
        report(h.index('VIR_ARCH_RISC5,') < h.index('VIR_ARCH_FAKEARCH,') < h.index('VIR_ARCH_RISCV32,'),
               'обе архитектуры встали в перечень перед RISCV32, по порядку файла')
        report('{ "fakearch",     64, VIR_ARCH_BIG_ENDIAN },' in t['src/util/virarch.c'],
               'имя, разрядность и порядок байтов второй архитектуры — из её строки')
        c = t['src/qemu/qemu_capabilities.c']
        report(c.index('"oberon", /* VIR_ARCH_RISC5 */') < c.index('"fakeboard", /* VIR_ARCH_FAKEARCH */'),
               'машины по умолчанию идут в том же порядке, что перечень (таблица индексируется им)')
        report('case VIR_ARCH_FAKEARCH:' in t['src/qemu/qemu_postparse.c'],
               'ветка в разборе случаев есть и у второй')
        d = t['src/qemu/qemu_domain.c']
        report('VIR_ARCH_RISC5)' in d and 'VIR_ARCH_FAKEARCH' not in d,
               'отказ от PCI — только у той, где PCI: no')

        # 4. --dry-run ничего не пишет.
        dry = tmp / 'dry'
        make_tree(dry)
        r = run(dry, '--targets', str(fake), '--dry-run')
        report(r.returncode == 0 and read_tree(dry) == TREE and 'наложилось бы 9' in r.stdout,
               '--dry-run показывает девять правок и не пишет ни одной')

        # 5. Отрицательные контроли.
        bad = tmp / 'targets-bad.txt'
        bad.write_text('risc5 32 middle oberon no Wirth\n')
        make_tree(tmp / 'b1')
        r = run(tmp / 'b1', '--targets', str(bad))
        report(r.returncode != 0 and 'порядок байтов' in r.stderr and read_tree(tmp / 'b1') == TREE,
               'отрицательный контроль: кривая строка targets.txt останавливает патч до записи')
        broken = tmp / 'b2'
        make_tree(broken)
        (broken / 'src/util/virarch.c').write_text('/* якоря нет */\n')
        r = run(broken, '--targets', str(TARGETS))
        report(r.returncode != 0 and 'не нашёл место' in r.stderr,
               'отрицательный контроль: пропавший обязательный якорь останавливает патч')

    print(f'Итог: успешно {ok}, провалено {fail}')
    sys.exit(1 if fail else 0)


if __name__ == '__main__':
    main()
