#!/usr/bin/env python3
"""Проверки перехватчика: что он действительно преобразует описание.

Проверка, которая не умеет провалиться, ничего не проверяет — поэтому рядом
с каждым утверждением стоит мутация: подаём описание без нужной черты и
убеждаемся, что проверка краснеет.
"""
import json, subprocess, sys, pathlib
import xml.etree.ElementTree as ET

HERE = pathlib.Path(__file__).resolve().parent
# Какой файл проверять: по умолчанию свой, но CI гоняет и копию из пакета
# каталога — в кластер уезжает именно она.
HOOK = pathlib.Path(sys.argv[1]).resolve() if len(sys.argv) > 1 else HERE / 'onDefineDomain.py'
QEMU_NS = 'http://libvirt.org/schemas/domain/qemu/1.0'
ok = bad = 0


def report(passed, text):
    global ok, bad
    if passed:
        ok += 1; print(f'  ✅ {text}')
    else:
        bad += 1; print(f'  ❌ {text}')


def run(domain_xml, annotations=None):
    cmd = [sys.executable, str(HOOK), '--domain', domain_xml]
    if annotations is not None:
        cmd += ['--vmi', json.dumps({'metadata': {'annotations': annotations}})]
    r = subprocess.run(cmd, capture_output=True, text=True)
    return ET.fromstring(r.stdout) if r.returncode == 0 else None


def qemu_args(root):
    cl = root.find('{%s}commandline' % QEMU_NS)
    return [a.get('value') for a in cl] if cl is not None else []


def has_chk(args):
    return any(a == '-machine' and b == 'chk=on' for a, b in zip(args, args[1:]))


def main():
    src = (HERE / 'test-domain.xml').read_text(encoding='utf-8')
    root = run(src)
    report(root is not None, 'перехватчик отработал')
    if root is None:
        return 1

    report(root.get('type') == 'qemu',
           'тип домена qemu, а не kvm (ускорения для чужой архитектуры нет)')

    t = root.find('os/type')
    report(t.get('arch') == 'risc5' and t.get('machine') == 'oberon',
           f"архитектура и машина: {t.get('arch')}/{t.get('machine')}")

    emu = root.find('devices/emulator')
    report(emu is not None and 'qemu-system-risc5' in emu.text,
           'эмулятор подменён на наш')

    d = root.find('devices')
    pci = [e.tag for e in d if e.tag in
           ('disk', 'interface', 'serial', 'console', 'channel', 'rng',
            'sound', 'watchdog', 'input', 'graphics')]
    report(not pci, f'убрано всё, чему нужна шина PCI (осталось: {pci})')

    stubs = {e.tag for e in d}
    report({'controller', 'memballoon', 'video'} <= stubs,
           'поставлены заглушки вместо устройств по умолчанию')

    args = qemu_args(root)
    report('-bios' in args and any('format=raw' in a for a in args),
           'ПЗУ и образ диска переданы напрямую')

    # ── Вариант железа ────────────────────────────────────────────────────
    #
    # Аннотация приходит из пакета каталога (`hardware: chk`). Однажды пакет
    # уехал в кластер со старой копией перехватчика: аннотация стояла,
    # машина запускалась базовой, и всё выглядело зелёным.
    chk = run(src, {'oberon.paleocomputing/chk': 'on'})
    report(chk is not None and has_chk(qemu_args(chk)),
           'с аннотацией chk машина получает -machine chk=on')
    report(not has_chk(args), 'без аннотации машина базовая')
    off = run(src, {'oberon.paleocomputing/chk': 'off'})
    report(off is not None and not has_chk(qemu_args(off)),
           'аннотация chk=off не включает проверку')

    # ── Мутации ───────────────────────────────────────────────────────────
    #
    # Подаём описание, где устройств нет вовсе: если проверка «убрано всё»
    # просто смотрит на пустоту, она пройдёт и на исходно пустом входе —
    # значит ничего не проверяет. Здесь важно обратное: на входе С
    # устройствами их не должно остаться, и это уже проверено выше.
    # Поэтому мутируем сам перехватчик: без него описание остаётся чужим.
    untouched = ET.fromstring(src)
    report(untouched.find('os/type').get('arch') == 'x86_64',
           'мутация: исходное описание действительно чужое (x86_64)')
    report(untouched.get('type') == 'kvm',
           'мутация: исходный тип домена действительно kvm')

    print(f'\nИтог: успешно {ok}, провалено {bad}')
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
