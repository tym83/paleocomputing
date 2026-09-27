#!/usr/bin/env python3
"""Перехватчик KubeVirt: подменяет описание обычной виртуалки на чужую машину.

KubeVirt позволяет стороннему контейнеру переписать описание домена перед
запуском — это штатная точка расширения (`OnDefineDomain`), форк не нужен.
Сюда приходит описание, которое KubeVirt собрал для обычной виртуалки, а
уходит описание машины, которой в KubeVirt нет.

КАКОЙ машины — перехватчик не знает. Всё, что отличает одну машину от
другой, приходит данными: паспорт машины лежит в аннотации
`paleocomputing.io/machine` (JSON), её ставит пакет каталога. Схема паспорта —
`marketplace/repos/machines/packages/library/retro-machine/machine.schema.json`.
Новая архитектура или система — это новый паспорт, а не правка этого файла.

Что меняется всегда, для любой чужой машины:

  * тип домена — с `kvm` на `qemu`: аппаратного ускорения для чужой
    архитектуры не бывает;
  * убирается всё, что требует шины PCI: libvirt на такие устройства у
    машины без PCI отвечает «No PCI buses available»;
  * убираются свойства уровня платформы — ACPI, APIC и прочее: libvirt
    отвергает описание целиком («machine type 'oberon' does not support
    ACPI»);
  * убирается режим smbios, а раздел sysinfo остаётся (см. ниже).

Что берётся из паспорта:

  * архитектура, тип машины и путь к эмулятору в образе virt-launcher;
  * число процессоров: libvirt сверяет его с возможностями машины и
    отвергает лишнее («Maximum CPUs greater than specified machine type
    limit 1»);
  * оставлять ли экран VNC;
  * файлы машины (ПЗУ, диск) и то, как каждый передаётся эмулятору;
  * ВАРИАНТ ЖЕЛЕЗА — свойства `-machine`, например `chk=on` у Оберона.

Паспорт проверяется ДО того, как тронуто описание домена. Нет паспорта,
он не разбирается или в нём не хватает поля — перехватчик падает с внятной
причиной и ничего не печатает. Полупереписанный домен хуже отказа: libvirt
может его принять, и машина молча запустится не той.

Запускается обёрткой sidecar-shim: она ищет исполняемый файл с именем
onDefineDomain и передаёт описание домена и самой машины аргументами.
"""
import json
import os
import re
import sys
import xml.etree.ElementTree as ET

QEMU_NS = 'http://libvirt.org/schemas/domain/qemu/1.0'

# Аннотация с паспортом машины. Имя то же, что в библиотеке каталога.
MACHINE_ANNOTATION = 'paleocomputing.io/machine'

# Допустимые значения — ровно как в machine.schema.json. Проверка здесь не
# заменяет схему, а страхует от паспорта, который до схемы не дошёл: его
# могли вписать в машину руками.
NAME_RE = re.compile(r'^[a-z0-9][a-z0-9_.-]*$')
FILE_RE = re.compile(r'^[A-Za-z0-9][A-Za-z0-9._-]*$')
PATH_RE = re.compile(r'^/[A-Za-z0-9/._-]+$')
PROP_RE = re.compile(r'^[A-Za-z0-9_.-]+$')
ROLES = ('firmware', 'disk')
GRAPHICS = ('vnc', 'none')


class DescriptorError(Exception):
    """Паспорт машины отсутствует или неполон."""


def arg(name):
    """Читает --name значение из аргументов, как их передаёт обёртка."""
    a = sys.argv
    for i, v in enumerate(a):
        if v == '--' + name and i + 1 < len(a):
            return a[i + 1]
        if v.startswith('--' + name + '='):
            return v.split('=', 1)[1]
    return None


def _need(cond, what):
    if not cond:
        raise DescriptorError(what)


def _str(obj, key, where, pattern=None):
    v = obj.get(key) if isinstance(obj, dict) else None
    _need(isinstance(v, str) and v, f'{where}.{key}: нужна непустая строка')
    if pattern is not None:
        _need(pattern.match(v), f'{where}.{key}: недопустимое значение {v!r}')
    return v


def descriptor_from_vmi(vmi_json):
    """Достаёт паспорт машины из описания VMI, которое передала обёртка."""
    _need(vmi_json, 'обёртка не передала описание машины (--vmi)')
    try:
        vmi = json.loads(vmi_json)
    except (ValueError, TypeError) as e:
        raise DescriptorError(f'описание машины не разбирается: {e}')
    ann = ((vmi.get('metadata') or {}).get('annotations') or {}) if isinstance(vmi, dict) else {}
    raw = ann.get(MACHINE_ANNOTATION)
    _need(raw, f'у машины нет аннотации {MACHINE_ANNOTATION}: неизвестно, какую машину собирать')
    try:
        desc = json.loads(raw)
    except (ValueError, TypeError) as e:
        raise DescriptorError(f'аннотация {MACHINE_ANNOTATION} — не JSON: {e}')
    _need(isinstance(desc, dict), f'аннотация {MACHINE_ANNOTATION} — не объект')
    return desc


def validate(desc):
    """Проверяет паспорт и возвращает то, что нужно для переписывания домена."""
    dom = desc.get('domain')
    _need(isinstance(dom, dict), 'domain: нет раздела')
    arch = _str(dom, 'arch', 'domain', NAME_RE)
    machine = _str(dom, 'machine', 'domain', NAME_RE)
    emulator = _str(dom, 'emulator', 'domain', PATH_RE)
    vcpus = dom.get('vcpus')
    _need(isinstance(vcpus, int) and not isinstance(vcpus, bool) and vcpus >= 1,
          'domain.vcpus: нужно целое не меньше 1')
    graphics = _str(dom, 'graphics', 'domain')
    _need(graphics in GRAPHICS, f'domain.graphics: одно из {GRAPHICS}, а не {graphics!r}')

    pay = desc.get('payload')
    _need(isinstance(pay, dict), 'payload: нет раздела')
    base = _str(pay, 'path', 'payload', PATH_RE).rstrip('/')
    files = pay.get('files')
    _need(isinstance(files, list) and files, 'payload.files: нужен непустой список')
    args, paths, seen = [], [], set()
    for i, f in enumerate(files):
        where = f'payload.files[{i}]'
        _need(isinstance(f, dict), f'{where}: не объект')
        name = _str(f, 'name', where, FILE_RE)
        _need(name not in seen, f'{where}.name: {name} встречается дважды')
        seen.add(name)
        role = _str(f, 'role', where)
        _need(role in ROLES, f'{where}.role: одно из {ROLES}, а не {role!r}')
        qemu = f.get('qemu')
        _need(isinstance(qemu, list) and qemu and all(isinstance(a, str) and a for a in qemu),
              f'{where}.qemu: нужен непустой список строк')
        # Файл, который эмулятору не передан, наполнять незачем: это почти
        # наверняка опечатка в паспорте.
        _need(any('{path}' in a for a in qemu), f'{where}.qemu: нигде нет {{path}}')
        path = f'{base}/{name}'
        paths.append(path)
        args += [a.replace('{path}', path) for a in qemu]

    variants = desc.get('variants')
    _need(isinstance(variants, dict) and variants, 'variants: нужен хотя бы один вариант железа')
    variant = desc.get('variant') or desc.get('defaultVariant')
    _need(isinstance(variant, str) and variant, 'не выбран вариант железа (variant/defaultVariant)')
    _need(variant in variants, f'вариант железа {variant!r} не описан; есть: {sorted(variants)}')
    props = variants[variant]
    _need(isinstance(props, dict), f'variants.{variant}: не объект')
    for k, v in props.items():
        _need(isinstance(v, str) and PROP_RE.match(k) and PROP_RE.match(v),
              f'variants.{variant}.{k}: свойство и значение — без запятых, пробелов и «=»')
    if props:
        # ⚠ Вторым `-machine`, а не правкой атрибута machine в описании: там
        # libvirt допускает только имя машины. QEMU сливает опции в одну
        # группу, и неизвестное свойство честно роняет запуск
        # («Property 'oberon-machine.chkk' not found»), так что опечатка не
        # пройдёт молча.
        args += ['-machine', ','.join(f'{k}={v}' for k, v in sorted(props.items()))]

    return {'arch': arch, 'machine': machine, 'emulator': emulator,
            'vcpus': vcpus, 'graphics': graphics, 'args': args, 'paths': paths}


def check_payload(paths):
    """Файлы машины на месте и не пустые.

    Том наполняет задача каталога, и машина может проснуться раньше, чем
    она закончит. Тогда лучше отказать здесь с понятной причиной: KubeVirt
    повторит попытку сам, а в событиях машины будет видно, чего она ждёт, —
    вместо невнятного отказа эмулятора открыть ПЗУ.

    Том смонтирован в перехватчик по тому же пути, что и в контейнер с
    libvirt: библиотека каталога задаёт volumePath и sharedComputePath одним
    значением.
    """
    missing = [p for p in paths if not (os.path.isfile(p) and os.path.getsize(p) > 0)]
    _need(not missing, 'файлы машины ещё не на томе (задача наполнения не '
                       f'закончила?): {", ".join(missing)}')


def convert(domain_xml, m):
    ET.register_namespace('qemu', QEMU_NS)
    root = ET.fromstring(domain_xml)

    # ── Тип домена ────────────────────────────────────────────────────────
    #
    # KubeVirt объявляет домен как `kvm`, потому что рассчитывает на обычную
    # виртуалку с аппаратным ускорением. Для чужой архитектуры его не бывает:
    # её команды переводятся на лету. libvirt это проверяет и отвергает:
    # «Emulator does not support virt type kvm».
    root.set('type', 'qemu')

    # ── Архитектура и машина ──────────────────────────────────────────────
    os_el = root.find('os')
    type_el = os_el.find('type')
    type_el.set('arch', m['arch'])
    type_el.set('machine', m['machine'])

    # ⚠ Режим smbios убираем, а раздел sysinfo ОСТАВЛЯЕМ. Тонкость: из режима
    # libvirt выводит аргумент -smbios, которого чужая цель не понимает
    # («Option not supported for this target»), а сам раздел sysinfo читает
    # virt-launcher уже после запуска и без него падает. Два требования тянут
    # в разные стороны, и развести их можно только так.
    for sm in os_el.findall('smbios'):
        os_el.remove(sm)

    # ── Свойства платформы ────────────────────────────────────────────────
    #
    # KubeVirt объявляет ACPI и APIC, рассчитывая на обычную машину. У чужой
    # их нет, и libvirt отвергает описание целиком: «machine type 'oberon'
    # does not support ACPI». Нашлось только на живом кластере — в рукописном
    # описании этих свойств просто не было.
    for f in root.findall('features'):
        root.remove(f)

    # Топология процессора и управление питанием — оттуда же.
    #
    # ⚠ sysinfo НЕ трогаем: его читает сам virt-launcher уже после запуска, и
    # без него он падает с «Domain sysinfo are not available». Убирать надо
    # ровно то, что отвергает libvirt, и ни строкой больше.
    for tag in ('cpu', 'clock', 'pm', 'cputune', 'numatune',
                'launchSecurity', 'iothreads'):
        for el in root.findall(tag):
            root.remove(el)

    # ── Число процессоров ─────────────────────────────────────────────────
    #
    # KubeVirt проставляет и текущее число, и предел для горячего
    # добавления, а libvirt сверяет их с возможностями машины и отвергает
    # описание. Сколько процессоров у машины — знает только паспорт.
    for vcpu in root.findall('vcpu'):
        vcpu.text = str(m['vcpus'])
        for a in ('current', 'placement'):
            vcpu.attrib.pop(a, None)
    for vcpus in root.findall('vcpus'):
        root.remove(vcpus)

    devices = root.find('devices')

    # ── Эмулятор ──────────────────────────────────────────────────────────
    emu = devices.find('emulator')
    if emu is None:
        emu = ET.SubElement(devices, 'emulator')
    emu.text = m['emulator']

    # ── Убрать всё, чему нужна шина PCI ───────────────────────────────────
    #
    # Мало убрать сами устройства: KubeVirt добавляет контроллеры, каналы и
    # последовательные порты, которые libvirt тоже привяжет к PCI.
    for tag in ('controller', 'video', 'memballoon', 'sound', 'channel',
                'rng', 'watchdog', 'redirdev', 'hostdev', 'input',
                'interface', 'disk', 'serial', 'console',
                'tpm', 'smartcard', 'filesystem'):
        for el in devices.findall(tag):
            devices.remove(el)

    # ── Экран ─────────────────────────────────────────────────────────────
    #
    # graphics — не устройство на шине, а способ показать экран: libvirt
    # превращает его в `-vnc unix:<сокет>`, а к этому сокету KubeVirt
    # подключает консоль и `virtctl vnc`. Раньше он уходил вместе с
    # устройствами PCI, машина запускалась с `-display none`, и экран
    # Оберона в кластере не видел никто (находка 59). Своя видеокарта у
    # такой машины встроенная, отдельное устройство video ей не нужно.
    #
    # Оставляем только VNC: у SPICE своя шина каналов, которой здесь нет.
    # Машина без экрана (graphics: none) не получает и его.
    for el in devices.findall('graphics'):
        if m['graphics'] != 'vnc' or el.get('type') != 'vnc':
            devices.remove(el)

    # Взамен — явные заглушки там, где libvirt иначе подставит своё.
    ET.SubElement(devices, 'controller', {'type': 'usb', 'model': 'none'})
    ET.SubElement(devices, 'memballoon', {'model': 'none'})
    ET.SubElement(ET.SubElement(devices, 'video'), 'model', {'type': 'none'})

    # ── Файлы машины и вариант железа ─────────────────────────────────────
    #
    # Через прямую передачу аргументов: у таких машин нет ни микропрограммы в
    # привычном смысле, ни контроллера диска, который libvirt умеет описывать.
    for el in root.findall('{%s}commandline' % QEMU_NS):
        root.remove(el)
    cl = ET.SubElement(root, '{%s}commandline' % QEMU_NS)
    for v in m['args']:
        ET.SubElement(cl, '{%s}arg' % QEMU_NS, {'value': v})

    return ET.tostring(root, encoding='unicode')


def main():
    domain_xml = arg('domain')
    if not domain_xml:
        sys.exit('перехватчику не передали описание домена')
    try:
        m = validate(descriptor_from_vmi(arg('vmi')))
        check_payload(m['paths'])
    except DescriptorError as e:
        sys.exit(f'перехватчик: {e}')
    print(convert(domain_xml, m))


if __name__ == '__main__':
    main()
