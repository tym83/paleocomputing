#!/usr/bin/env python3
"""Проверки перехватчика: что он действительно преобразует описание.

Проверка, которая не умеет провалиться, ничего не проверяет — поэтому рядом
с каждым утверждением стоит мутация или отрицательный контроль.

Перехватчик не знает, какую машину собирает: паспорт приходит аннотацией.
Поэтому проверок три рода:

  * Оберон по настоящему паспорту из каталога
    (`marketplace/.../apps/oberon-vm/machine.yaml`) — всё, что перехватчик
    делал до перехода на паспорта, обязано получаться и теперь;
  * вымышленная вторая машина — другая архитектура, другой эмулятор, другое
    число процессоров, другие аргументы: без единой правки кода;
  * отрицательные контроли — нет паспорта, он не разбирается, в нём дыра,
    файлов машины нет на томе: перехватчик обязан упасть и НЕ напечатать
    домен, а не собрать полупереписанный.
"""
import copy
import json
import pathlib
import subprocess
import sys
import tempfile
import xml.etree.ElementTree as ET

import yaml

HERE = pathlib.Path(__file__).resolve().parent
# Какой файл проверять: по умолчанию свой, но CI гоняет и копию из пакета
# каталога — в кластер уезжает именно она.
HOOK = pathlib.Path(sys.argv[1]).resolve() if len(sys.argv) > 1 else HERE / 'onDefineDomain.py'
PRESET = HERE.parent / 'marketplace/repos/machines/packages/apps/oberon-vm/machine.yaml'
QEMU_NS = 'http://libvirt.org/schemas/domain/qemu/1.0'
ANNOTATION = 'paleocomputing.io/machine'
ok = bad = 0


def report(passed, text):
    global ok, bad
    if passed:
        ok += 1; print(f'  ✅ {text}')
    else:
        bad += 1; print(f'  ❌ {text}')


def with_payload(desc, where):
    """Паспорт, чьи файлы лежат во временном каталоге, — как на томе."""
    d = copy.deepcopy(desc)
    d['payload']['path'] = str(where)
    for f in d['payload']['files']:
        (where / f['name']).write_bytes(b'\x01' * 16)
    return d


def run(domain_xml, desc=None, variant=None, vmi=None):
    """Запуск перехватчика. Возвращает (домен или None, stdout, stderr)."""
    cmd = [sys.executable, str(HOOK), '--domain', domain_xml]
    if vmi is None and desc is not None:
        d = dict(desc)
        if variant is not None:
            d['variant'] = variant
        vmi = json.dumps({'metadata': {'annotations': {ANNOTATION: json.dumps(d)}}})
    if vmi is not None:
        cmd += ['--vmi', vmi]
    r = subprocess.run(cmd, capture_output=True, text=True)
    root = ET.fromstring(r.stdout) if r.returncode == 0 else None
    return root, r.stdout, r.stderr


def qemu_args(root):
    cl = root.find('{%s}commandline' % QEMU_NS)
    return [a.get('value') for a in cl] if cl is not None else []


def machine_props(args):
    return [b for a, b in zip(args, args[1:]) if a == '-machine']


def oberon(src, tmp):
    print('\nОберон по паспорту каталога')
    preset = yaml.safe_load(PRESET.read_text(encoding='utf-8'))
    desc = with_payload(preset, tmp)
    root, _, err = run(src, desc)
    report(root is not None, 'перехватчик отработал' + (f': {err.strip()}' if root is None else ''))
    if root is None:
        return

    report(root.get('type') == 'qemu',
           'тип домена qemu, а не kvm (ускорения для чужой архитектуры нет)')

    t = root.find('os/type')
    report(t.get('arch') == 'risc5' and t.get('machine') == 'oberon',
           f"архитектура и машина из паспорта: {t.get('arch')}/{t.get('machine')}")
    report(root.find('os/smbios') is None, 'режим smbios убран')
    report(root.find('sysinfo') is not None, 'раздел sysinfo оставлен (его читает virt-launcher)')
    report(root.find('features') is None, 'ACPI/APIC и прочие свойства платформы убраны')
    report(root.find('cpu') is None and root.find('clock') is None, 'топология процессора и часы убраны')
    vcpu = root.find('vcpu')
    report(vcpu is not None and vcpu.text == '1' and 'current' not in vcpu.attrib
           and root.find('vcpus') is None, 'процессор один, без предела горячего добавления')

    emu = root.find('devices/emulator')
    report(emu is not None and emu.text == '/usr/local/bin/qemu-system-risc5',
           'эмулятор подменён на наш')

    d = root.find('devices')
    pci = [e.tag for e in d if e.tag in
           ('disk', 'interface', 'serial', 'console', 'channel', 'rng',
            'sound', 'watchdog', 'input')]
    report(not pci, f'убрано всё, чему нужна шина PCI (осталось: {pci})')

    # Экран: VNC остаётся (через него работает консоль), всё прочее уходит.
    # Проверка на сокет — чтобы не прошёл голый <graphics/> без адреса.
    gfx = d.findall('graphics')
    vnc = [g for g in gfx if g.get('type') == 'vnc']
    report(len(vnc) == 1 and vnc[0].find('listen') is not None
           and vnc[0].find('listen').get('socket', '').endswith('/virt-vnc'),
           'VNC оставлен вместе с сокетом KubeVirt')
    report(all(g.get('type') == 'vnc' for g in gfx),
           f"прочие виды экрана убраны (осталось: {[g.get('type') for g in gfx]})")
    report(any(g.get('type') == 'spice' for g in ET.fromstring(src).find('devices').findall('graphics')),
           'мутация: во входе действительно есть SPICE, который надо убрать')

    stubs = {e.tag for e in d}
    report({'controller', 'memballoon', 'video'} <= stubs,
           'поставлены заглушки вместо устройств по умолчанию')

    # Аргументы — ровно те же, что перехватчик ставил до паспортов, с
    # поправкой только на каталог тома.
    args = qemu_args(root)
    want = ['-bios', f'{tmp}/prom.bin', '-drive', f'if=none,id=sd0,file={tmp}/oberon.dsk,format=raw']
    report(args == want, f'ПЗУ и образ диска переданы напрямую: {args}')

    # ── Вариант железа ────────────────────────────────────────────────────
    #
    # Однажды пакет уехал в кластер со старой копией перехватчика: каталог
    # просил chk, машина запускалась базовой, и всё выглядело зелёным.
    report(machine_props(args) == [], 'без выбора — вариант по умолчанию, машина базовая')
    chk, _, _ = run(src, desc, variant='chk')
    report(chk is not None and machine_props(qemu_args(chk)) == ['chk=on'],
           'вариант chk даёт -machine chk=on')
    base, _, _ = run(src, desc, variant='base')
    report(base is not None and machine_props(qemu_args(base)) == [],
           'вариант base не добавляет свойств')

    # Мутации: без перехватчика описание осталось бы чужим.
    untouched = ET.fromstring(src)
    report(untouched.find('os/type').get('arch') == 'x86_64',
           'мутация: исходное описание действительно чужое (x86_64)')
    report(untouched.get('type') == 'kvm',
           'мутация: исходный тип домена действительно kvm')
    report(untouched.find('features') is not None and untouched.find('os/smbios') is not None,
           'мутация: во входе действительно есть ACPI и smbios')


# Вымышленная машина: ни одно её значение не встречается в коде перехватчика.
# Если она собирается, новая машина каталога — это только паспорт.
LILITH = {
    'apiVersion': 'paleocomputing.io/v1alpha1',
    'kind': 'Machine',
    'name': 'lilith',
    'image': 'example.org/lilith-payload:v0',
    'domain': {'arch': 'mcode', 'machine': 'lilith-1980', 'emulator': '/opt/emu/qemu-system-mcode',
               'vcpus': 2, 'graphics': 'none', 'terminationGracePeriodSeconds': 0},
    'payload': {'path': '/machine', 'files': [
        {'name': 'boot.rom', 'from': '/opt/lilith/boot.rom', 'role': 'firmware',
         'qemu': ['-kernel', '{path}']},
        {'name': 'medos.img', 'from': '/opt/lilith/medos.img', 'role': 'disk',
         'qemu': ['-drive', 'if=none,id=hd0,file={path},format=raw', '-device', 'honeywell-disk,drive=hd0']},
    ]},
    'variants': {'plain': {}, 'wide': {'bus-width': '32', 'cache': 'on'}},
    'defaultVariant': 'plain',
    'memory': {'default': '64Mi', 'min': '64Mi', 'max': '256Mi'},
}


def second_machine(src, tmp):
    print('\nВторая, вымышленная машина — без правки кода')
    desc = with_payload(LILITH, tmp)
    root, _, err = run(src, desc, variant='wide')
    report(root is not None, 'перехватчик отработал' + (f': {err.strip()}' if root is None else ''))
    if root is None:
        return
    t = root.find('os/type')
    report((t.get('arch'), t.get('machine')) == ('mcode', 'lilith-1980'),
           f"архитектура и машина: {t.get('arch')}/{t.get('machine')}")
    report(root.find('devices/emulator').text == '/opt/emu/qemu-system-mcode', 'свой эмулятор')
    report(root.find('vcpu').text == '2', 'число процессоров из паспорта: 2')
    report(root.find('devices/graphics') is None, 'машина без экрана не получает и VNC')
    args = qemu_args(root)
    want = ['-kernel', f'{tmp}/boot.rom',
            '-drive', f'if=none,id=hd0,file={tmp}/medos.img,format=raw',
            '-device', 'honeywell-disk,drive=hd0',
            '-machine', 'bus-width=32,cache=on']
    report(args == want, f'аргументы файлов и варианта собраны из паспорта: {args}')
    report(root.get('type') == 'qemu' and root.find('features') is None,
           'общая часть (qemu, без ACPI) та же, что у Оберона')


def must_fail(src, text, **kw):
    root, out, err = run(src, **kw)
    report(root is None and not out.strip() and err.strip(),
           f'отрицательный контроль: {text}' + (f' — «{err.strip().splitlines()[-1]}»' if err.strip() else ''))


def negatives(src, tmp):
    print('\nОтрицательные контроли: отказ, а не полупереписанный домен')
    good = with_payload(LILITH, tmp)

    must_fail(src, 'без описания машины (--vmi) отказ')
    must_fail(src, 'без аннотации с паспортом отказ',
              vmi=json.dumps({'metadata': {'annotations': {}}}))
    must_fail(src, 'паспорт — не JSON: отказ',
              vmi=json.dumps({'metadata': {'annotations': {ANNOTATION: '{"domain": '}}}))
    must_fail(src, 'описание машины — не JSON: отказ', vmi='{')

    def broken(fn):
        d = copy.deepcopy(good)
        fn(d)
        return d

    cases = [
        ('нет архитектуры', lambda d: d['domain'].pop('arch')),
        ('путь к эмулятору не абсолютный', lambda d: d['domain'].update(emulator='qemu')),
        ('ноль процессоров', lambda d: d['domain'].update(vcpus=0)),
        ('неизвестная роль файла', lambda d: d['payload']['files'][0].update(role='rom')),
        ('файл с каталогом в имени', lambda d: d['payload']['files'][0].update(name='../x')),
        ('файл не передан эмулятору ({path} нигде нет)',
         lambda d: d['payload']['files'][0].update(qemu=['-kernel', '/etc/passwd'])),
        ('нет вариантов железа', lambda d: d.update(variants={})),
        ('свойство варианта с запятой (вторая опция -machine)',
         lambda d: d['variants'].update(plain={'x': 'on,dump-guest-core=on'})),
    ]
    for what, fn in cases:
        must_fail(src, f'{what}: отказ', desc=broken(fn))
    must_fail(src, 'выбран неописанный вариант: отказ', desc=good, variant='nonexistent')

    # Файлов машины нет на томе: задача наполнения ещё не закончила.
    empty = pathlib.Path(tempfile.mkdtemp())
    d = copy.deepcopy(good)
    d['payload']['path'] = str(empty)
    must_fail(src, 'файлов машины нет на томе: отказ', desc=d)
    (empty / 'boot.rom').write_bytes(b'\x01')
    (empty / 'medos.img').write_bytes(b'')
    must_fail(src, 'диск машины пустой: отказ', desc=d)

    # Контроль контролей: тот же паспорт без поломки проходит — значит,
    # отказы выше вызваны именно поломкой.
    root, _, _ = run(src, desc=good)
    report(root is not None, 'контроль: неиспорченный паспорт проходит')


def main():
    src = (HERE / 'test-domain.xml').read_text(encoding='utf-8')
    with tempfile.TemporaryDirectory() as a, tempfile.TemporaryDirectory() as b, \
            tempfile.TemporaryDirectory() as c:
        oberon(src, pathlib.Path(a))
        second_machine(src, pathlib.Path(b))
        negatives(src, pathlib.Path(c))
    print(f'\nИтог: успешно {ok}, провалено {bad}')
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
