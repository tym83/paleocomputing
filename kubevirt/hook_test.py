#!/usr/bin/env python3
"""Hook tests: that it really transforms the description.

A check that cannot fail checks nothing, so every assertion is paired with a
mutation or a negative control.

The hook does not know which machine it builds: the descriptor arrives as an
annotation. So there are three kinds of checks:

  * Oberon from the real catalog descriptor
    (`marketplace/.../apps/oberon-vm/machine.yaml`): everything the hook did
    before descriptors were introduced must still come out the same;
  * a fictional second machine (another architecture, emulator, CPU count
    and arguments) without a single code change;
  * negative controls (no descriptor, it does not parse, it has a hole, the
    machine files are not on the volume): the hook must fail and NOT print a
    domain, rather than build a half-rewritten one.
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
# Which file to test: our own by default, but CI also runs the copy from the
# catalog package, since that is the one that ships to the cluster.
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
    """A descriptor whose files sit in a temporary directory, as on the volume."""
    d = copy.deepcopy(desc)
    d['payload']['path'] = str(where)
    for f in d['payload']['files']:
        (where / f['name']).write_bytes(b'\x01' * 16)
    return d


def run(domain_xml, desc=None, variant=None, vmi=None):
    """Runs the hook. Returns (domain or None, stdout, stderr)."""
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
    print('\nOberon from the catalog descriptor')
    preset = yaml.safe_load(PRESET.read_text(encoding='utf-8'))
    desc = with_payload(preset, tmp)
    root, _, err = run(src, desc)
    report(root is not None, 'hook ran' + (f': {err.strip()}' if root is None else ''))
    if root is None:
        return

    report(root.get('type') == 'qemu',
           'domain type is qemu, not kvm (no acceleration for a foreign architecture)')

    t = root.find('os/type')
    report(t.get('arch') == 'risc5' and t.get('machine') == 'oberon',
           f"architecture and machine from the descriptor: {t.get('arch')}/{t.get('machine')}")
    report(root.find('os/smbios') is None, 'smbios mode removed')
    report(root.find('sysinfo') is not None, 'sysinfo section kept (virt-launcher reads it)')
    report(root.find('features') is None, 'ACPI/APIC and other platform features removed')
    report(root.find('cpu') is None and root.find('clock') is None, 'CPU topology and clock removed')
    vcpu = root.find('vcpu')
    report(vcpu is not None and vcpu.text == '1' and 'current' not in vcpu.attrib
           and root.find('vcpus') is None, 'one CPU, no hotplug limit')

    emu = root.find('devices/emulator')
    report(emu is not None and emu.text == '/usr/local/bin/qemu-system-risc5',
           'emulator replaced with ours')

    d = root.find('devices')
    pci = [e.tag for e in d if e.tag in
           ('disk', 'interface', 'serial', 'console', 'channel', 'rng',
            'sound', 'watchdog', 'input')]
    report(not pci, f'everything that needs a PCI bus removed (left: {pci})')

    # Display: VNC stays (the console works through it), everything else goes.
    # The socket check keeps a bare <graphics/> without an address from passing.
    gfx = d.findall('graphics')
    vnc = [g for g in gfx if g.get('type') == 'vnc']
    report(len(vnc) == 1 and vnc[0].find('listen') is not None
           and vnc[0].find('listen').get('socket', '').endswith('/virt-vnc'),
           'VNC kept together with the KubeVirt socket')
    report(all(g.get('type') == 'vnc' for g in gfx),
           f"other display types removed (left: {[g.get('type') for g in gfx]})")
    report(any(g.get('type') == 'spice' for g in ET.fromstring(src).find('devices').findall('graphics')),
           'mutation: the input really has SPICE, which must be removed')

    stubs = {e.tag for e in d}
    report({'controller', 'memballoon', 'video'} <= stubs,
           'stubs set in place of default devices')

    # The arguments are exactly what the hook set before descriptors, adjusted
    # only for the volume directory.
    args = qemu_args(root)
    want = ['-bios', f'{tmp}/prom.bin', '-drive', f'if=none,id=sd0,file={tmp}/oberon.dsk,format=raw']
    report(args == want, f'ROM and disk image passed directly: {args}')

    # ── Hardware variant ──────────────────────────────────────────────────
    #
    # Once the package shipped to the cluster with a stale copy of the hook:
    # the catalog asked for chk, the machine started as base, and everything
    # looked green.
    report(machine_props(args) == [], 'no choice: default variant, base machine')
    chk, _, _ = run(src, desc, variant='chk')
    report(chk is not None and machine_props(qemu_args(chk)) == ['chk=on'],
           'variant chk gives -machine chk=on')
    base, _, _ = run(src, desc, variant='base')
    report(base is not None and machine_props(qemu_args(base)) == [],
           'variant base adds no properties')

    # Mutations: without the hook the description would stay foreign.
    untouched = ET.fromstring(src)
    report(untouched.find('os/type').get('arch') == 'x86_64',
           'mutation: the source description really is foreign (x86_64)')
    report(untouched.get('type') == 'kvm',
           'mutation: the source domain type really is kvm')
    report(untouched.find('features') is not None and untouched.find('os/smbios') is not None,
           'mutation: the input really has ACPI and smbios')


# A fictional machine: none of its values appears in the hook code. If it
# builds, a new catalog machine is just a descriptor.
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
    print('\nA second, fictional machine, with no code change')
    desc = with_payload(LILITH, tmp)
    root, _, err = run(src, desc, variant='wide')
    report(root is not None, 'hook ran' + (f': {err.strip()}' if root is None else ''))
    if root is None:
        return
    t = root.find('os/type')
    report((t.get('arch'), t.get('machine')) == ('mcode', 'lilith-1980'),
           f"architecture and machine: {t.get('arch')}/{t.get('machine')}")
    report(root.find('devices/emulator').text == '/opt/emu/qemu-system-mcode', 'its own emulator')
    report(root.find('vcpu').text == '2', 'CPU count from the descriptor: 2')
    report(root.find('devices/graphics') is None, 'a machine without a display gets no VNC either')
    args = qemu_args(root)
    want = ['-kernel', f'{tmp}/boot.rom',
            '-drive', f'if=none,id=hd0,file={tmp}/medos.img,format=raw',
            '-device', 'honeywell-disk,drive=hd0',
            '-machine', 'bus-width=32,cache=on']
    report(args == want, f'file and variant arguments built from the descriptor: {args}')
    report(root.get('type') == 'qemu' and root.find('features') is None,
           'the common part (qemu, no ACPI) is the same as for Oberon')


def arm64(src, tmp):
    """The description KubeVirt gives a VM on an arm64 node."""
    print('\narm64 node: KubeVirt declares UEFI firmware')
    x = src.replace('<type arch="x86_64" machine="q35">hvm</type>',
                    '<type arch="aarch64" machine="virt">hvm</type>\n'
                    '    <loader readonly="yes" secure="no" type="pflash">/usr/share/AAVMF/AAVMF_CODE.fd</loader>\n'
                    '    <nvram template="/usr/share/AAVMF/AAVMF_VARS.fd">/var/run/kubevirt-private/libvirt/qemu/nvram/vm_VARS.fd</nvram>')
    x = x.replace('<os>', '<os firmware="efi">')
    src_root = ET.fromstring(x)
    report(src_root.find('os/loader') is not None and src_root.find('os/nvram') is not None
           and src_root.find('os').get('firmware') == 'efi',
           'mutation: the input really has a loader, NVRAM and firmware=efi')
    preset = yaml.safe_load(PRESET.read_text(encoding='utf-8'))
    root, _, err = run(x, with_payload(preset, tmp))
    report(root is not None, 'hook ran' + (f': {err.strip()}' if root is None else ''))
    if root is None:
        return
    o = root.find('os')
    report(o.find('loader') is None and o.find('nvram') is None and 'firmware' not in o.attrib,
           'UEFI firmware removed: otherwise -machine oberon,pflash0=… and QEMU exits')
    report(o.find('type').get('arch') == 'risc5', 'architecture from the descriptor here too')


def air(src, tmp):
    print('\nThe air: the radio talks to the relay named by the instance')
    preset = yaml.safe_load(PRESET.read_text(encoding='utf-8'))
    report(isinstance(preset.get('air'), dict), 'the Oberon passport declares a radio (air)')
    desc = with_payload(preset, tmp)
    root, _, err = run(src, desc)
    args = qemu_args(root) if root is not None else []
    report(root is not None and '-chardev' not in args,
           'no relay named: no air arguments' + (f': {err.strip()}' if root is None else ''))
    d = copy.deepcopy(desc)
    d['air']['host'] = 'oberon-air-lab'
    root, _, err = run(src, d)
    args = qemu_args(root) if root is not None else []
    chardev = [b for a, b in zip(args, args[1:]) if a == '-chardev']
    report(chardev == ['udp,id=air,host=oberon-air-lab,port=7524,localaddr=0.0.0.0,localport=7524'],
           f'relay named: UDP air to it ({chardev})')
    report('radio=air' in machine_props(args), f'radio switched on ({machine_props(args)})')
    bad = copy.deepcopy(d)
    bad['air']['host'] = 'relay;rm -rf /'
    must_fail(src, 'relay name that is not a DNS name: refused', desc=bad)
    bad = copy.deepcopy(d)
    bad['air']['port'] = 70000
    must_fail(src, 'air port out of range: refused', desc=bad)


def must_fail(src, text, **kw):
    root, out, err = run(src, **kw)
    report(root is None and not out.strip() and err.strip(),
           f'negative control: {text}' + (f': "{err.strip().splitlines()[-1]}"' if err.strip() else ''))


def negatives(src, tmp):
    print('\nNegative controls: refusal, not a half-rewritten domain')
    good = with_payload(LILITH, tmp)

    must_fail(src, 'no machine description (--vmi): refused')
    must_fail(src, 'no descriptor annotation: refused',
              vmi=json.dumps({'metadata': {'annotations': {}}}))
    must_fail(src, 'descriptor is not JSON: refused',
              vmi=json.dumps({'metadata': {'annotations': {ANNOTATION: '{"domain": '}}}))
    must_fail(src, 'machine description is not JSON: refused', vmi='{')

    def broken(fn):
        d = copy.deepcopy(good)
        fn(d)
        return d

    cases = [
        ('no architecture', lambda d: d['domain'].pop('arch')),
        ('emulator path is not absolute', lambda d: d['domain'].update(emulator='qemu')),
        ('zero CPUs', lambda d: d['domain'].update(vcpus=0)),
        ('unknown file role', lambda d: d['payload']['files'][0].update(role='rom')),
        ('file name contains a directory', lambda d: d['payload']['files'][0].update(name='../x')),
        ('file not passed to the emulator ({path} appears nowhere)',
         lambda d: d['payload']['files'][0].update(qemu=['-kernel', '/etc/passwd'])),
        ('no hardware variants', lambda d: d.update(variants={})),
        ('variant property with a comma (a second -machine option)',
         lambda d: d['variants'].update(plain={'x': 'on,dump-guest-core=on'})),
    ]
    for what, fn in cases:
        must_fail(src, f'{what}: refused', desc=broken(fn))
    must_fail(src, 'undefined variant selected: refused', desc=good, variant='nonexistent')

    # The machine files are not on the volume: the fill job has not finished yet.
    empty = pathlib.Path(tempfile.mkdtemp())
    d = copy.deepcopy(good)
    d['payload']['path'] = str(empty)
    must_fail(src, 'machine files not on the volume: refused', desc=d)
    (empty / 'boot.rom').write_bytes(b'\x01')
    (empty / 'medos.img').write_bytes(b'')
    must_fail(src, 'machine disk is empty: refused', desc=d)

    # Control of the controls: the same descriptor without the breakage
    # passes, so the refusals above are caused by the breakage itself.
    root, _, _ = run(src, desc=good)
    report(root is not None, 'control: an intact descriptor passes')


def main():
    src = (HERE / 'test-domain.xml').read_text(encoding='utf-8')
    with tempfile.TemporaryDirectory() as a, tempfile.TemporaryDirectory() as b, \
            tempfile.TemporaryDirectory() as c:
        oberon(src, pathlib.Path(a))
        with tempfile.TemporaryDirectory() as e:
            air(src, pathlib.Path(e))
        second_machine(src, pathlib.Path(b))
        negatives(src, pathlib.Path(c))
        with tempfile.TemporaryDirectory() as d:
            arm64(src, pathlib.Path(d))
    print(f'\nTotal: passed {ok}, failed {bad}')
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
