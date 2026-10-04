#!/usr/bin/env python3
"""KubeVirt hook: replaces the description of an ordinary VM with a foreign machine.

KubeVirt lets a third-party container rewrite the domain description before
launch. This is a supported extension point (`OnDefineDomain`); no fork is
needed. In comes the description KubeVirt built for an ordinary VM; out goes
the description of a machine KubeVirt does not know about.

WHICH machine, the hook does not know. Everything that tells one machine from
another arrives as data: the machine descriptor sits in the
`paleocomputing.io/machine` annotation (JSON), set by the catalog package. The
descriptor schema is
`marketplace/repos/machines/packages/library/retro-machine/machine.schema.json`.
A new architecture or system is a new descriptor, not an edit to this file.

What always changes, for any foreign machine:

  * the domain type, from `kvm` to `qemu`: there is no hardware acceleration
    for a foreign architecture;
  * everything that needs a PCI bus is removed: for a machine without PCI,
    libvirt answers such devices with "No PCI buses available";
  * platform-level features (ACPI, APIC and the like) are removed: libvirt
    rejects the whole description ("machine type 'oberon' does not support
    ACPI");
  * the smbios mode is removed, while the sysinfo section stays (see below);
  * the UEFI firmware is removed: on arm64 nodes KubeVirt always gives it to
    a VM (pflash flash memory), and a foreign machine has no flash memory.

What comes from the descriptor:

  * the architecture, the machine type and the emulator path in the
    virt-launcher image;
  * the CPU count: libvirt checks it against the machine's capabilities and
    rejects anything extra ("Maximum CPUs greater than specified machine type
    limit 1");
  * whether to keep the VNC display;
  * the machine files (ROM, disk) and how each one is passed to the emulator;
  * the HARDWARE VARIANT: `-machine` properties, e.g. `chk=on` for Oberon.

The descriptor is validated BEFORE the domain description is touched. If there
is no descriptor, it does not parse, or a field is missing, the hook fails with
a clear reason and prints nothing. A half-rewritten domain is worse than a
refusal: libvirt may accept it, and the wrong machine silently starts.

It is run by the sidecar-shim wrapper: the wrapper looks for an executable
named onDefineDomain and passes the domain description and the machine itself
as arguments.
"""
import json
import os
import re
import sys
import xml.etree.ElementTree as ET

QEMU_NS = 'http://libvirt.org/schemas/domain/qemu/1.0'

# Annotation carrying the machine descriptor. Same name as in the catalog library.
MACHINE_ANNOTATION = 'paleocomputing.io/machine'

# Allowed values exactly as in machine.schema.json. This check does not
# replace the schema; it guards against a descriptor that never went through
# the schema, e.g. one written into the machine by hand.
NAME_RE = re.compile(r'^[a-z0-9][a-z0-9_.-]*$')
FILE_RE = re.compile(r'^[A-Za-z0-9][A-Za-z0-9._-]*$')
PATH_RE = re.compile(r'^/[A-Za-z0-9/._-]+$')
PROP_RE = re.compile(r'^[A-Za-z0-9_.-]+$')
ROLES = ('firmware', 'disk')
GRAPHICS = ('vnc', 'none')


class DescriptorError(Exception):
    """The machine descriptor is missing or incomplete."""


def arg(name):
    """Reads `--name value` from the arguments, as the wrapper passes them."""
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
    _need(isinstance(v, str) and v, f'{where}.{key}: a non-empty string is required')
    if pattern is not None:
        _need(pattern.match(v), f'{where}.{key}: invalid value {v!r}')
    return v


def descriptor_from_vmi(vmi_json):
    """Extracts the machine descriptor from the VMI description passed by the wrapper."""
    _need(vmi_json, 'the wrapper did not pass the machine description (--vmi)')
    try:
        vmi = json.loads(vmi_json)
    except (ValueError, TypeError) as e:
        raise DescriptorError(f'the machine description does not parse: {e}')
    ann = ((vmi.get('metadata') or {}).get('annotations') or {}) if isinstance(vmi, dict) else {}
    raw = ann.get(MACHINE_ANNOTATION)
    _need(raw, f'the machine has no {MACHINE_ANNOTATION} annotation: unknown which machine to build')
    try:
        desc = json.loads(raw)
    except (ValueError, TypeError) as e:
        raise DescriptorError(f'annotation {MACHINE_ANNOTATION} is not JSON: {e}')
    _need(isinstance(desc, dict), f'annotation {MACHINE_ANNOTATION} is not an object')
    return desc


def validate(desc):
    """Validates the descriptor and returns what is needed to rewrite the domain."""
    dom = desc.get('domain')
    _need(isinstance(dom, dict), 'domain: section missing')
    arch = _str(dom, 'arch', 'domain', NAME_RE)
    machine = _str(dom, 'machine', 'domain', NAME_RE)
    emulator = _str(dom, 'emulator', 'domain', PATH_RE)
    vcpus = dom.get('vcpus')
    _need(isinstance(vcpus, int) and not isinstance(vcpus, bool) and vcpus >= 1,
          'domain.vcpus: an integer of at least 1 is required')
    graphics = _str(dom, 'graphics', 'domain')
    _need(graphics in GRAPHICS, f'domain.graphics: must be one of {GRAPHICS}, not {graphics!r}')

    pay = desc.get('payload')
    _need(isinstance(pay, dict), 'payload: section missing')
    base = _str(pay, 'path', 'payload', PATH_RE).rstrip('/')
    files = pay.get('files')
    _need(isinstance(files, list) and files, 'payload.files: a non-empty list is required')
    args, paths, seen = [], [], set()
    for i, f in enumerate(files):
        where = f'payload.files[{i}]'
        _need(isinstance(f, dict), f'{where}: not an object')
        name = _str(f, 'name', where, FILE_RE)
        _need(name not in seen, f'{where}.name: {name} appears twice')
        seen.add(name)
        role = _str(f, 'role', where)
        _need(role in ROLES, f'{where}.role: must be one of {ROLES}, not {role!r}')
        qemu = f.get('qemu')
        _need(isinstance(qemu, list) and qemu and all(isinstance(a, str) and a for a in qemu),
              f'{where}.qemu: a non-empty list of strings is required')
        # A file that is never passed to the emulator has no reason to be
        # filled in: this is almost certainly a typo in the descriptor.
        _need(any('{path}' in a for a in qemu), f'{where}.qemu: {{path}} appears nowhere')
        path = f'{base}/{name}'
        paths.append(path)
        args += [a.replace('{path}', path) for a in qemu]

    variants = desc.get('variants')
    _need(isinstance(variants, dict) and variants, 'variants: at least one hardware variant is required')
    variant = desc.get('variant') or desc.get('defaultVariant')
    _need(isinstance(variant, str) and variant, 'no hardware variant selected (variant/defaultVariant)')
    _need(variant in variants, f'hardware variant {variant!r} is not defined; available: {sorted(variants)}')
    props = variants[variant]
    _need(isinstance(props, dict), f'variants.{variant}: not an object')
    for k, v in props.items():
        _need(isinstance(v, str) and PROP_RE.match(k) and PROP_RE.match(v),
              f'variants.{variant}.{k}: property and value must not contain commas, spaces or "="')
    if props:
        # ⚠ As a second `-machine`, not by editing the machine attribute in the
        # description: libvirt allows only the machine name there. QEMU merges
        # the options into one group, and an unknown property properly fails
        # the launch ("Property 'oberon-machine.chkk' not found"), so a typo
        # does not slip through silently.
        args += ['-machine', ','.join(f'{k}={v}' for k, v in sorted(props.items()))]

    return {'arch': arch, 'machine': machine, 'emulator': emulator,
            'vcpus': vcpus, 'graphics': graphics, 'args': args, 'paths': paths}


def check_payload(paths):
    """The machine files are present and not empty.

    The volume is filled by a catalog job, and the machine may wake up before
    the job finishes. It is better to refuse here with a clear reason: KubeVirt
    retries on its own, and the machine's events show what it is waiting for,
    instead of an obscure emulator failure to open the ROM.

    The volume is mounted into the hook at the same path as into the libvirt
    container: the catalog library sets volumePath and sharedComputePath to
    one value.
    """
    missing = [p for p in paths if not (os.path.isfile(p) and os.path.getsize(p) > 0)]
    _need(not missing, 'machine files are not on the volume yet (has the fill job '
                       f'not finished?): {", ".join(missing)}')


def convert(domain_xml, m):
    ET.register_namespace('qemu', QEMU_NS)
    root = ET.fromstring(domain_xml)

    # ── Domain type ───────────────────────────────────────────────────────
    #
    # KubeVirt declares the domain as `kvm` because it expects an ordinary VM
    # with hardware acceleration. A foreign architecture never has it: its
    # instructions are translated on the fly. libvirt checks this and rejects
    # it: "Emulator does not support virt type kvm".
    root.set('type', 'qemu')

    # ── Architecture and machine ──────────────────────────────────────────
    os_el = root.find('os')
    type_el = os_el.find('type')
    type_el.set('arch', m['arch'])
    type_el.set('machine', m['machine'])

    # ⚠ The smbios mode goes, the sysinfo section STAYS. The subtlety: from the
    # mode libvirt derives the -smbios argument, which a foreign target does
    # not understand ("Option not supported for this target"), while the
    # sysinfo section itself is read by virt-launcher after launch, and it
    # crashes without it. The two requirements pull in opposite directions,
    # and this is the only way to satisfy both.
    for sm in os_el.findall('smbios'):
        os_el.remove(sm)

    # ⚠ UEFI firmware. On an arm64 node KubeVirt always declares it (AAVMF,
    # loader and NVRAM), and libvirt turns that into `-machine
    # <machine>,pflash0=…,pflash1=…`. A foreign machine has no flash memory,
    # and QEMU exits right after launch. On amd64 this is invisible: there
    # KubeVirt boots BIOS by default and declares no firmware. Found by the
    # end-to-end test on kind under arm64 (finding 71). The machine takes its
    # own firmware from the descriptor (role firmware).
    os_el.attrib.pop('firmware', None)
    for tag in ('loader', 'nvram', 'firmware'):
        for el in os_el.findall(tag):
            os_el.remove(el)

    # ── Platform features ─────────────────────────────────────────────────
    #
    # KubeVirt declares ACPI and APIC, expecting an ordinary machine. A
    # foreign one has neither, and libvirt rejects the whole description:
    # "machine type 'oberon' does not support ACPI". This only showed up on a
    # live cluster: the hand-written description simply lacked these features.
    for f in root.findall('features'):
        root.remove(f)

    # CPU topology and power management, for the same reason.
    #
    # ⚠ sysinfo is NOT touched: virt-launcher itself reads it after launch and
    # without it fails with "Domain sysinfo are not available". Remove exactly
    # what libvirt rejects and not a line more.
    for tag in ('cpu', 'clock', 'pm', 'cputune', 'numatune',
                'launchSecurity', 'iothreads'):
        for el in root.findall(tag):
            root.remove(el)

    # ── CPU count ─────────────────────────────────────────────────────────
    #
    # KubeVirt sets both the current count and the hotplug limit, and libvirt
    # checks them against the machine's capabilities and rejects the
    # description. Only the descriptor knows how many CPUs the machine has.
    for vcpu in root.findall('vcpu'):
        vcpu.text = str(m['vcpus'])
        for a in ('current', 'placement'):
            vcpu.attrib.pop(a, None)
    for vcpus in root.findall('vcpus'):
        root.remove(vcpus)

    devices = root.find('devices')

    # ── Emulator ──────────────────────────────────────────────────────────
    emu = devices.find('emulator')
    if emu is None:
        emu = ET.SubElement(devices, 'emulator')
    emu.text = m['emulator']

    # ── Remove everything that needs a PCI bus ────────────────────────────
    #
    # Removing the devices themselves is not enough: KubeVirt adds
    # controllers, channels and serial ports that libvirt also attaches to PCI.
    for tag in ('controller', 'video', 'memballoon', 'sound', 'channel',
                'rng', 'watchdog', 'redirdev', 'hostdev', 'input',
                'interface', 'disk', 'serial', 'console',
                'tpm', 'smartcard', 'filesystem'):
        for el in devices.findall(tag):
            devices.remove(el)

    # ── Display ───────────────────────────────────────────────────────────
    #
    # graphics is not a bus device but a way to show the screen: libvirt turns
    # it into `-vnc unix:<socket>`, and KubeVirt attaches the console and
    # `virtctl vnc` to that socket. It used to be removed along with the PCI
    # devices, the machine started with `-display none`, and nobody could see
    # the Oberon screen in the cluster (finding 59). Such a machine has a
    # built-in video adapter and needs no separate video device.
    #
    # Only VNC is kept: SPICE has its own channel bus, which does not exist
    # here. A machine without a display (graphics: none) gets none either.
    for el in devices.findall('graphics'):
        if m['graphics'] != 'vnc' or el.get('type') != 'vnc':
            devices.remove(el)

    # Instead, explicit stubs where libvirt would otherwise insert its defaults.
    ET.SubElement(devices, 'controller', {'type': 'usb', 'model': 'none'})
    ET.SubElement(devices, 'memballoon', {'model': 'none'})
    ET.SubElement(ET.SubElement(devices, 'video'), 'model', {'type': 'none'})

    # ── Machine files and hardware variant ────────────────────────────────
    #
    # Passed as raw arguments: such machines have neither firmware in the
    # usual sense nor a disk controller that libvirt knows how to describe.
    for el in root.findall('{%s}commandline' % QEMU_NS):
        root.remove(el)
    cl = ET.SubElement(root, '{%s}commandline' % QEMU_NS)
    for v in m['args']:
        ET.SubElement(cl, '{%s}arg' % QEMU_NS, {'value': v})

    return ET.tostring(root, encoding='unicode')


def main():
    domain_xml = arg('domain')
    if not domain_xml:
        sys.exit('the hook was not given a domain description')
    try:
        m = validate(descriptor_from_vmi(arg('vmi')))
        check_payload(m['paths'])
    except DescriptorError as e:
        sys.exit(f'hook: {e}')
    print(convert(domain_xml, m))


if __name__ == '__main__':
    main()
