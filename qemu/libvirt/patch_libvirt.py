#!/usr/bin/env python3
"""Заводит в libvirt архитектуры чужих машин — все, что перечислены в
kubevirt/targets.txt (сегодня это одна RISC5).

Четыре места, и они связаны: вторая таблица индексируется значениями первой,
третья защищена проверкой совпадения длины с ней, а четвёртое — разбор случаев,
который собирается с требованием явной ветки для каждой архитектуры.

Архитектуры — данные, а не код: правки собираются из строки targets.txt по
одному образцу. Новая машина — новая строка там, а не новая копия правок здесь.
Каждая новая архитектура встаёт в таблицы перед RISCV32, поэтому порядок в
первой таблице и во второй совпадает сам собой.

⚠ Каждая замена проверяется. Молча не применившийся патч хуже отсутствующего:
libvirt соберётся, но архитектуры знать не будет, и искать причину придётся
в рантайме.

Накладывается из корня дерева libvirt:  python3 patch_libvirt.py

    --targets ФАЙЛ   список архитектур; по умолчанию targets.txt рядом со
                     скриптом (так он лежит в сборке образа), иначе
                     kubevirt/targets.txt этого репозитория
    --root КАТАЛОГ   корень дерева libvirt; по умолчанию текущий
    --dry-run        показать, что изменится, и ничего не писать
"""
import argparse
import pathlib
import re
import sys

HERE = pathlib.Path(__file__).resolve().parent
DEFAULT_TARGETS = [HERE / 'targets.txt', HERE.parent.parent / 'kubevirt' / 'targets.txt']

ARCH_RE = re.compile(r'^[a-z][a-z0-9]*$')


def load_targets(path):
    """Строки targets.txt: арх. бит порядок машина PCI описание…"""
    out = []
    for n, line in enumerate(pathlib.Path(path).read_text(encoding='utf-8').splitlines(), 1):
        if not line.strip() or line.lstrip().startswith('#'):
            continue
        cols = line.split(None, 5)
        if len(cols) != 6:
            sys.exit(f'{path}:{n}: нужно шесть колонок — арх. бит порядок машина PCI описание')
        arch, bits, endian, machine, pci, desc = cols
        problems = []
        if not ARCH_RE.match(arch):
            problems.append(f'имя архитектуры {arch!r}: только строчные латинские буквы и цифры')
        if bits not in ('16', '32', '64'):
            problems.append(f'разрядность {bits!r}: 16, 32 или 64')
        if endian not in ('LE', 'BE'):
            problems.append(f'порядок байтов {endian!r}: LE или BE')
        if pci not in ('yes', 'no'):
            problems.append(f'PCI {pci!r}: yes или no')
        if problems:
            sys.exit(f'{path}:{n}: ' + '; '.join(problems))
        out.append({'arch': arch, 'bits': bits, 'endian': endian,
                    'machine': machine, 'pci': pci == 'yes', 'desc': desc.strip()})
    if not out:
        sys.exit(f'{path}: ни одной архитектуры')
    names = [t['arch'] for t in out]
    if len(set(names)) != len(names):
        sys.exit(f'{path}: архитектура названа дважды')
    return out


def enum_name(t):
    return 'VIR_ARCH_' + t['arch'].upper()


def edits_for(t):
    """Правки для одной архитектуры.

    Последнее поле — обязательна ли правка. Разбор случаев по архитектуре в
    драйвере QEMU был в libvirt 10, а к 11.9 его переписали на вспомогательные
    функции, и ветка стала не нужна. Остальные три обязательны в обеих версиях.
    """
    enum = enum_name(t)
    endian = 'VIR_ARCH_LITTLE_ENDIAN' if t['endian'] == 'LE' else 'VIR_ARCH_BIG_ENDIAN'
    enum_col = (enum + ',').ljust(max(23, len(enum) + 2))
    name_col = f'"{t["arch"]}",'.ljust(max(16, len(t['arch']) + 4))
    edits = [
        # файл, что ищем, на что заменяем, зачем, обязательна ли
        ('src/util/virarch.h',
         '    VIR_ARCH_RISCV32,',
         f'    {enum_col}/* {t["desc"]} */\n'
         '    VIR_ARCH_RISCV32,',
         'значение в перечне архитектур', True),

        ('src/util/virarch.c',
         '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },',
         f'    {{ {name_col}{t["bits"]}, {endian} }},\n'
         '    { "riscv32",      32, VIR_ARCH_LITTLE_ENDIAN },',
         'имя, разрядность, порядок байтов', True),

        ('src/qemu/qemu_capabilities.c',
         '    "virt", /* VIR_ARCH_RISCV32 */',
         f'    "{t["machine"]}", /* {enum} */\n'
         '    "virt", /* VIR_ARCH_RISCV32 */',
         'машина по умолчанию для драйвера QEMU', True),

        ('src/qemu/qemu_domain.c',
         '    case VIR_ARCH_RISCV32:',
         f'    case {enum}:\n'
         '    case VIR_ARCH_RISCV32:',
         'ветка в разборе случаев по архитектуре (libvirt 10)', False),

        # В 11.x разбор переехал сюда. Место находит сам компилятор: сборка идёт
        # с -Werror=switch-enum, и пропущенная ветка её останавливает.
        ('src/qemu/qemu_postparse.c',
         '    case VIR_ARCH_RISCV32:',
         f'    case {enum}:\n'
         '    case VIR_ARCH_RISCV32:',
         'ветка в разборе случаев по архитектуре (libvirt 11)', False),
    ]
    if not t['pci']:
        # ⚠ Для незнакомой архитектуры libvirt по умолчанию считает, что PCI
        # есть (qemuDomainSupportsPCI: особые случаи только для ARM и RISC-V,
        # дальше `return true`). У машины Вирта шины PCI нет вовсе, и без этой
        # правки libvirt требует контроллер, которого не может быть:
        # «Machine type 'oberon' supports PCI but no PCI controller added».
        edits.append(
            ('src/qemu/qemu_domain.c',
             '    /* On RISC-V, only the virt machine type supports PCI */',
             f'    /* {t["desc"]}: no PCI bus at all */\n'
             f'    if (def->os.arch == {enum})\n'
             '        return false;\n'
             '\n'
             '    /* On RISC-V, only the virt machine type supports PCI */',
             f'у {t["arch"]} нет шины PCI', False))
    return edits


def apply(root, targets, dry_run=False):
    applied = skipped = absent = 0
    for t in targets:
        for path, old, new, why, required in edits_for(t):
            p = pathlib.Path(root) / path
            if not p.is_file():
                sys.exit(f'нет файла {path} — это точно дерево libvirt?')
            text = p.read_text()
            # Уже пропатчено — если вставка стоит на месте целиком. Раньше
            # признаком было имя VIR_ARCH_… в файле, но в virarch.c его нет
            # (там строка "risc5"), и повторный прогон вписывал её второй раз.
            if new in text:
                print(f'  = [{t["arch"]}] {path}: уже пропатчен ({why})')
                skipped += 1
                continue
            if old not in text:
                if required:
                    sys.exit(f'не нашёл место в {path} — исходники изменились ({why})')
                print(f'  ~ [{t["arch"]}] {path}: места нет, и это норма для новых версий ({why})')
                absent += 1
                continue
            if not dry_run:
                p.write_text(text.replace(old, new, 1))
            print(f'  {"?" if dry_run else "+"} [{t["arch"]}] {path}: {why}')
            applied += 1

    verb = 'наложилось бы' if dry_run else 'наложено'
    print(f'{verb} {applied}, уже было {skipped}, неприменимо {absent}')
    if applied == 0 and skipped == 0:
        sys.exit('патч не сделал ничего — так быть не должно')


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split('\n\n')[0])
    ap.add_argument('--targets')
    ap.add_argument('--root', default='.')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args(argv)
    path = a.targets or next((str(p) for p in DEFAULT_TARGETS if p.is_file()), None)
    if not path:
        sys.exit('не найден targets.txt — укажите --targets')
    targets = load_targets(path)
    print(f'архитектуры из {path}: {", ".join(t["arch"] for t in targets)}')
    apply(a.root, targets, a.dry_run)


if __name__ == '__main__':
    main()
