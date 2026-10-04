#!/usr/bin/env python3
"""Bounds-check cost ladder: the same loop as on RISC5, on modern processors.

On RISC5 the cost of a check is measured exactly (finding 55): 10 instructions versus 9,
11 cycles versus 10. The Oberon page says this number does not carry over to a modern
processor. This script turns that claim into a measurement.

ONE generator produces ONE AND THE SAME loop in C and in Rust:

    sum += a[i];  i = (i + 1) & (LIM - 1);     - LIM cells of 32 bits, n iterations

in three configurations that differ only in the check:

    none    no check at all (C: a[i]; Rust: get_unchecked)
    auto    the check as the language writes it, the limit is the constant LIM
            (C: if (i >= LIM) __builtin_trap(); Rust: a[i] on [u32; LIM]).
            The compiler may prove it redundant: i wraps around through the mask.
            Whether it dropped the check or not is a result in itself.
    forced  the same check, but the limit is hidden from the optimizer (an empty asm in C,
            std::hint::black_box in Rust), so the compare and branch must stay.
            The direct analogue of configuration B on RISC5 (SUB + BCC).

The trap is a cold path with no return: __builtin_trap() in C, the panic of checked
indexing in Rust auto, an explicit if + std::process::abort() in Rust forced.

The loop shape is kept as on RISC5: no unrolling and no vectorization (flags below),
a do-while with a down counter (SUB R5 / BNE loop). The array comes in through a pointer
laundered from the optimizer, and the sum is returned and printed, so the loop cannot be dropped.

Two metrics:
  * instructions in the loop body, from the compiler's assembly: the backward branch and its
    label, from the label to the branch inclusive. The whole body is printed into the results
    so the number can be checked by eye;
  * ns per iteration: the best of N runs, with configurations interleaved round-robin.
    ⚠ Nanoseconds on a modern processor include frequency scaling and neighbours on the
    machine. What matters is the ratio to none, not the absolute numbers.

Usage:
    python3 impl/bench/ladder/ladder.py --label macos-arm64-m4
    python3 impl/bench/ladder/ladder.py --label linux-amd64-qemu --iter 2000000 --emulated

The limits (LIM) come from tools/gen_bounds_bench.py, the same source as for the RISC5
programs, so the two ladders do not drift apart when edited.
"""
import argparse
import datetime
import os
import pathlib
import platform
import re
import shutil
import statistics
import subprocess
import sys

HERE = pathlib.Path(__file__).resolve().parent
IMPL = HERE.parent.parent
sys.path.insert(0, str(IMPL / 'tools'))
from gen_bounds_bench import LIM  # noqa: E402  - one limit for both ladders

MASK = LIM - 1
CONFIGS = ('none', 'auto', 'forced')
DEFAULT_ITER = 500_000_000

# ─── Sources ──────────────────────────────────────────────────────────────────

C_SRC = """/* GENERATED FILE - edit impl/bench/ladder/ladder.py, not by hand.
 * Configuration {cfg}: {what} */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM {lim}u

__attribute__((noinline))
uint32_t ladder_kernel(const uint32_t *a, uint64_t n)
{{
    uint32_t sum = 0;
    size_t i = 0;
{prologue}    do {{
{check}        sum += a[i];
        i = (i + 1) & (LIM - 1);
    }} while (--n != 0);
    return sum;
}}

static uint32_t arr[LIM];

static double now_ns(void)
{{
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return (double)t.tv_sec * 1e9 + (double)t.tv_nsec;
}}

int main(int argc, char **argv)
{{
    uint64_t n = argc > 1 ? strtoull(argv[1], 0, 10) : 1000000;
    for (uint32_t k = 0; k < LIM; k++)
        arr[k] = k * 2654435761u + 1u;
    const uint32_t *p = arr;
    __asm__ volatile("" : "+r"(p) : : "memory");   /* contents unknown to the optimizer */
    ladder_kernel(p, n / 16 + 1);                  /* warm-up */
    double t0 = now_ns();
    uint32_t s = ladder_kernel(p, n);
    double t1 = now_ns();
    printf("%u %.6f\\n", s, (t1 - t0) / (double)n);
    return 0;
}}
"""

C_CHECK = {
    'none':   ('', ''),
    'auto':   ('', '        if (i >= LIM) __builtin_trap();\n'),
    'forced': ('    size_t lim = LIM;\n'
               '    __asm__ volatile("" : "+r"(lim));   /* limit unknown to the optimizer */\n',
               '        if (i >= lim) __builtin_trap();\n'),
}

RS_SRC = """// GENERATED FILE - edit impl/bench/ladder/ladder.py, not by hand.
// Configuration {cfg}: {what}
#![allow(unused_imports)]
use std::hint::black_box;
use std::time::Instant;

const LIM: usize = {lim};

#[no_mangle]
#[inline(never)]
pub fn ladder_kernel(a: &[u32; LIM], mut n: u64) -> u32 {{
    let mut sum: u32 = 0;
    let mut i: usize = 0;
{prologue}    loop {{
{body}        i = (i + 1) & (LIM - 1);
        n -= 1;
        if n == 0 {{
            break;
        }}
    }}
    sum
}}

fn main() {{
    let n: u64 = std::env::args().nth(1).map(|s| s.parse().unwrap()).unwrap_or(1_000_000);
    let mut arr = [0u32; LIM];
    for k in 0..LIM {{
        arr[k] = (k as u32).wrapping_mul(2654435761).wrapping_add(1);
    }}
    let p: &[u32; LIM] = black_box(&arr);   // contents unknown to the optimizer
    black_box(ladder_kernel(p, n / 16 + 1)); // warm-up
    let t0 = Instant::now();
    let s = ladder_kernel(p, n);
    let dt = t0.elapsed().as_nanos() as f64;
    println!("{{}} {{:.6}}", s, dt / n as f64);
}}
"""

RS_CHECK = {
    'none':   ('', '        sum = sum.wrapping_add(unsafe {{ *a.get_unchecked(i) }});\n'),
    'auto':   ('', '        sum = sum.wrapping_add(a[i]);\n'),
    'forced': ('    let lim: usize = black_box(LIM); // limit unknown to the optimizer\n',
               '        if i >= lim {{\n'
               '            std::process::abort();\n'
               '        }}\n'
               '        sum = sum.wrapping_add(unsafe {{ *a.get_unchecked(i) }});\n'),
}

WHAT = {
    'none':   'no check',
    'auto':   'check as the language does it, the limit is a constant',
    'forced': 'check with the limit hidden from the optimizer (analogue of B on RISC5)',
}


def emit_c(cfg):
    prologue, check = C_CHECK[cfg]
    return C_SRC.format(cfg=cfg, what=WHAT[cfg], lim=LIM,
                        prologue=prologue, check=check)


def emit_rust(cfg):
    prologue, body = RS_CHECK[cfg]
    # the body itself contains {{ }}, so expand it separately, before the common template
    return RS_SRC.format(cfg=cfg, what=WHAT[cfg], lim=LIM,
                         prologue=prologue, body=body.format())


def expected_sum(n):
    """What every configuration must return: checks do not change the result."""
    a = [(k * 2654435761 + 1) & 0xFFFFFFFF for k in range(LIM)]
    return (n // LIM * sum(a) + sum(a[:n % LIM])) & 0xFFFFFFFF


# ─── Toolchains ───────────────────────────────────────────────────────────────

# The flags keep the loop shape as on RISC5: one iteration is one body.
CLANG_FLAGS = ['-O2', '-fno-unroll-loops', '-fno-vectorize', '-fno-slp-vectorize']
GCC_FLAGS = ['-O2', '-fno-unroll-loops', '-fno-tree-vectorize', '-fno-tree-slp-vectorize']
# rustc has no -fno-unroll-loops. Unrolling is disabled by an LLVM threshold of zero
# plus a ban on runtime unrolling; vectorization by the standard -C options.
RUSTC_FLAGS = ['-C', 'opt-level=2', '-C', 'codegen-units=1',
               '-C', 'debug-assertions=off', '-C', 'overflow-checks=off',
               '-C', 'no-vectorize-loops', '-C', 'no-vectorize-slp',
               '-C', 'llvm-args=-unroll-threshold=0',
               '-C', 'llvm-args=-unroll-runtime=false']


# Under QEMU emulation compilers occasionally crash on their own (cc1 with SIGSEGV inside
# qemu-x86_64, confirmed). There we retry; on a real machine a crash is an error.
RETRIES = 1


def run(cmd, **kw):
    for attempt in range(RETRIES):
        p = subprocess.run(cmd, capture_output=True, text=True, **kw)
        if p.returncode == 0:
            return p
        print(f'  ⚠ {cmd[0]} returned {p.returncode} (attempt {attempt + 1}/{RETRIES})\n'
              f'{p.stderr.strip()[-2000:]}', file=sys.stderr, flush=True)
    raise subprocess.CalledProcessError(p.returncode, cmd, p.stdout, p.stderr)


def first_line(cmd):
    try:
        return run(cmd).stdout.strip().splitlines()[0]
    except (OSError, subprocess.CalledProcessError, IndexError):
        return None


def find_toolchains(want):
    """List of (name, language, command, flags, version). gcc on macOS is clang: no duplicates."""
    found, seen = [], set()
    for name in ('clang', 'gcc'):
        if 'c' not in want or not shutil.which(name):
            continue
        ver = first_line([name, '--version'])
        if not ver:
            continue
        family = 'clang' if 'clang' in ver.lower() else 'gcc'
        if family in seen:
            continue
        seen.add(family)
        flags = CLANG_FLAGS if family == 'clang' else GCC_FLAGS
        found.append((f'C ({family})', 'c', name, flags, ver))
    if 'rust' in want and shutil.which('rustc'):
        ver = first_line(['rustc', '--version'])
        llvm = [l for l in run(['rustc', '-vV']).stdout.splitlines() if l.startswith('LLVM')]
        found.append(('Rust', 'rust', 'rustc', RUSTC_FLAGS,
                      ver + (f' ({llvm[0]})' if llvm else '')))
    return found


def build(tc, cfg, outdir):
    _, lang, cmd, flags, _ = tc
    stem = outdir / f'{tc[0].split()[0].lower()}_{tc[2]}_{cfg}'
    if lang == 'c':
        src = stem.with_suffix('.c')
        src.write_text(emit_c(cfg), encoding='utf-8')
        run([cmd, *flags, '-S', '-o', str(stem.with_suffix('.s')), str(src)])
        run([cmd, *flags, '-o', str(stem), str(src)])
    else:
        src = stem.with_suffix('.rs')
        src.write_text(emit_rust(cfg), encoding='utf-8')
        run([cmd, *flags, '--emit', 'asm', '-o', str(stem.with_suffix('.s')), str(src)])
        run([cmd, *flags, '-o', str(stem), str(src)])
    return stem, stem.with_suffix('.s')


# ─── Assembly parsing ─────────────────────────────────────────────────────────

LABEL = re.compile(r'^([A-Za-z_.$][\w.$]*):')
TRAP_MNEM = {'brk', 'udf', 'ud2', 'hlt', 'int3'}
TRAP_CALL = re.compile(r'abort|panic|trap|__rust_start_panic|bounds_check', re.I)


def strip_comment(line, arch):
    if arch == 'x86_64':
        line = line.split('#', 1)[0]
    else:
        line = line.split('//', 1)[0].split(';', 1)[0]
    return line.strip()


def classify(ins, arch):
    """(kind, target): kind is 'cond' | 'jump' | 'trap' | 'ret' | None."""
    parts = ins.split(None, 1)
    mnem = parts[0].lower()
    ops = parts[1] if len(parts) > 1 else ''
    last = ops.split(',')[-1].strip() if ops else ''
    if mnem in TRAP_MNEM:
        return 'trap', None
    if arch == 'x86_64':
        if mnem in ('ret', 'retq'):
            return 'ret', None
        if mnem in ('jmp', 'jmpq'):
            return 'jump', last
        if mnem.startswith('j'):
            return 'cond', last
        if mnem in ('call', 'callq') and TRAP_CALL.search(ops):
            return 'trap', None
    else:
        if mnem == 'ret':
            return 'ret', None
        if mnem == 'b':
            return 'jump', last
        if mnem.startswith('b.') or mnem in ('cbz', 'cbnz', 'tbz', 'tbnz') or \
                re.fullmatch(r'b(eq|ne|hs|cs|lo|cc|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)', mnem):
            return 'cond', last
        if mnem == 'bl' and TRAP_CALL.search(ops):
            return 'trap', None
    return None, None


def function_lines(asm_text, name):
    """Lines of function name: from its label to .cfi_endproc / .size / .Lfunc_end."""
    out, inside = [], False
    for raw in asm_text.splitlines():
        s = raw.strip()
        if not inside:
            if re.match(rf'^_?{name}:', s):
                inside = True
            continue
        if s.startswith('.cfi_endproc') or s.startswith('.size') or \
                re.match(r'^\.?Lfunc_end', s):
            break
        out.append(raw.rstrip())
    return out


def loop_body(asm_text, arch, name='ladder_kernel'):
    """Loop body: from the target of the backward branch to the branch itself, inclusive.

    Returns a dict: instructions, their count, side exits from the body (branches out,
    other than the backward one) and whether the body contains a trap. Raises ValueError
    if there is no loop.
    """
    lines = function_lines(asm_text, name)
    if not lines:
        raise ValueError(f'function {name} not found in the assembly')
    items = []                      # ('label', name) | ('ins', text)
    for raw in lines:
        s = strip_comment(raw, arch)
        if not s:
            continue
        m = LABEL.match(s)
        if m:
            items.append(('label', m.group(1)))
            s = s[m.end():].strip()
            if not s:
                continue
        if s.startswith('.'):
            continue                # directive
        items.append(('ins', s))
    labels = {v: k for k, (t, v) in enumerate(items) if t == 'label'}

    back = []                       # (branch position, label position, kind)
    for k, (t, v) in enumerate(items):
        if t != 'ins':
            continue
        kind, tgt = classify(v, arch)
        if kind in ('cond', 'jump') and tgt in labels and labels[tgt] < k:
            back.append((k, labels[tgt], kind))
    if not back:
        raise ValueError('no backward branch: the function has no loop')
    # A conditional backward branch is preferred over an unconditional one; among equals,
    # the shortest (innermost) loop.
    back.sort(key=lambda b: (b[2] != 'cond', b[0] - b[1]))
    end, start, back_kind = back[0]

    body = [v for t, v in items[start:end + 1] if t == 'ins']
    shown = [(f'{v}:' if t == 'label' else f'        {v}') for t, v in items[start:end + 1]]
    exits, traps = [], 0
    for t, v in items[start:end + 1]:
        if t != 'ins':
            continue
        kind, tgt = classify(v, arch)
        if kind == 'trap':
            traps += 1
        elif kind in ('cond', 'jump') and v != items[end][1] and \
                (tgt not in labels or not start <= labels[tgt] <= end):
            exits.append(v)
    # The only memory load in the loop is a[i]. Two or more loads mean the loop
    # was unrolled or vectorized, and its body cannot be compared with RISC5.
    if arch == 'x86_64':
        # lea computes an address but does not read memory
        loads = sum(1 for v in body if '(' in v and not v.split()[0].lower().startswith('lea'))
    else:
        loads = sum(1 for v in body if v.split()[0].lower().startswith('ld'))
    return {'count': len(body), 'text': '\n'.join(shown), 'exits': exits,
            'traps_inside': traps, 'back_kind': back_kind, 'loads': loads}


# ─── Measurement ──────────────────────────────────────────────────────────────

def host_arch():
    m = platform.machine().lower()
    return 'x86_64' if m in ('x86_64', 'amd64') else 'aarch64' if m in ('arm64', 'aarch64') else m


# Core numbers from MIDR_EL1: implementer → {part → name}. Source: Linux
# arch/arm64/include/asm/cputype.h (ARM_CPU_IMP_*, *_CPU_PART_*), checked
# against master 2026-09-28. An unknown number is printed as is, without guessing.
ARM_IMPLEMENTERS = {0x41: 'Arm', 0x61: 'Apple', 0x6D: 'Microsoft', 0xC0: 'Ampere'}
ARM_PARTS = {
    0x41: {0xD03: 'Cortex-A53', 0xD05: 'Cortex-A55', 0xD07: 'Cortex-A57',
           0xD08: 'Cortex-A72', 0xD0B: 'Cortex-A76', 0xD0C: 'Neoverse N1',
           0xD0D: 'Cortex-A77', 0xD40: 'Neoverse V1', 0xD41: 'Cortex-A78',
           0xD44: 'Cortex-X1', 0xD46: 'Cortex-A510', 0xD47: 'Cortex-A710',
           0xD48: 'Cortex-X2', 0xD49: 'Neoverse N2', 0xD4D: 'Cortex-A715',
           0xD4E: 'Cortex-X3', 0xD4F: 'Neoverse V2', 0xD80: 'Cortex-A520',
           0xD81: 'Cortex-A720', 0xD82: 'Cortex-X4', 0xD83: 'Neoverse V3AE',
           0xD84: 'Neoverse V3', 0xD85: 'Cortex-X925', 0xD87: 'Cortex-A725',
           0xD8E: 'Neoverse N3'},
    0x6D: {0xD49: 'Azure Cobalt 100 (based on Neoverse N2 r0p0)'},
    0xC0: {0xAC3: 'AmpereOne', 0xAC4: 'AmpereOne A'},
}


def arm_core_name(implementer, part):
    """Core name from implementer and part in /proc/cpuinfo (strings like '0x41')."""
    try:
        imp, prt = int(implementer, 16), int(part, 16)
    except (TypeError, ValueError):
        return None
    name = ARM_PARTS.get(imp, {}).get(prt)
    if name:
        return name
    return f'{ARM_IMPLEMENTERS.get(imp, f"implementer {implementer}")}, part {part} - not in the table'


def cpu_info():
    """Processor lines for the header: model, family/model/stepping or MIDR, lscpu."""
    try:
        if sys.platform == 'darwin':
            return [run(['sysctl', '-n', 'machdep.cpu.brand_string']).stdout.strip()]
        info = pathlib.Path('/proc/cpuinfo').read_text()
    except (OSError, subprocess.CalledProcessError):
        return ['unknown']

    def field(key):
        m = re.search(rf'^{key}\s*:\s*(.+)$', info, re.M)
        return m.group(1).strip() if m else None

    lines = []
    if field('model name'):
        lines.append(field('model name'))
        fam = [f'{k} {field(k)}' for k in ('vendor_id', 'cpu family', 'model', 'stepping')
               if field(k)]
        if fam:
            lines.append(', '.join(fam))
    imp, part = field('CPU implementer'), field('CPU part')
    # A virtual machine on Apple reports implementer and part as zeros.
    if imp and imp not in ('0x00', '0x0'):
        midr = [f'{k.split()[1]} {field(k)}' for k in
                ('CPU implementer', 'CPU architecture', 'CPU variant', 'CPU part',
                 'CPU revision') if field(k)]
        lines.append(f'core: **{arm_core_name(imp, part)}** (MIDR: {", ".join(midr)}; '
                     'names from Linux `arch/arm64/include/asm/cputype.h`)')
    if shutil.which('lscpu'):
        p = subprocess.run(['lscpu'], capture_output=True, text=True)
        keep = [l.split(':', 1) for l in p.stdout.splitlines()
                if re.match(r'\s*(Vendor ID|Model name|BIOS Model name|CPU max MHz|'
                            r'Hypervisor vendor)\s*:', l)]
        if keep:
            lines.append('lscpu: ' + '; '.join(f'{k.strip()} = {v.strip()}' for k, v in keep))
    return lines or ['not reported (virtual machine)']


def time_one(binary, n):
    out = run([str(binary), str(n)]).stdout.split()
    return int(out[0]), float(out[1])


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--label', required=True, help='platform name for the results file')
    ap.add_argument('--iter', type=int, default=DEFAULT_ITER, help='iterations per run')
    ap.add_argument('--reps', type=int, default=5, help='runs per configuration')
    ap.add_argument('--langs', default='c,rust', help='c,rust')
    ap.add_argument('--emulated', action='store_true',
                    help='the machine is emulated: timings mean nothing and are marked as such')
    ap.add_argument('--note', default='', help='a line about the platform for the results header')
    ap.add_argument('--build-dir', default=str(IMPL / 'build' / 'ladder'))
    ap.add_argument('--out', default=None, help='results file (default results/<label>.md)')
    args = ap.parse_args()
    if args.iter < 1:
        ap.error('--iter must be ≥ 1: the loop is do-while')

    global RETRIES
    if args.emulated:
        RETRIES = 5
    arch = host_arch()
    if arch not in ('x86_64', 'aarch64'):
        sys.exit(f'architecture {arch} is not supported by the assembly parser')
    tcs = find_toolchains(set(args.langs.split(',')))
    if not tcs:
        sys.exit('no compiler found')
    outdir = pathlib.Path(args.build_dir) / args.label
    outdir.mkdir(parents=True, exist_ok=True)

    rows, bins = [], {}
    want = expected_sum(args.iter)
    for tc in tcs:
        for cfg in CONFIGS:
            binary, asm = build(tc, cfg, outdir)
            lb = loop_body(asm.read_text(encoding='utf-8', errors='replace'), arch)
            if lb['loads'] != 1:
                sys.exit(f'❌ {tc[0]} {cfg}: the loop body has {lb["loads"]} memory loads instead of '
                         f'one, so the loop was unrolled or vectorized:\n{lb["text"]}')
            got, _ = time_one(binary, args.iter)
            if got != want:
                sys.exit(f'❌ {tc[0]} {cfg}: sum {got}, expected {want}: the loop computed the wrong result')
            bins[(tc[0], cfg)] = binary
            rows.append({'tc': tc[0], 'cfg': cfg, **lb, 'times': []})
            print(f'  {tc[0]:12} {cfg:7} instructions in body: {lb["count"]:2}  '
                  f'side exits: {len(lb["exits"])}', flush=True)

    # Round-robin: frequency and thermal drift fall on all configurations equally,
    # not on whichever ran last.
    for rep in range(args.reps):
        for r in rows:
            r['times'].append(time_one(bins[(r['tc'], r['cfg'])], args.iter)[1])
        print(f'  run {rep + 1}/{args.reps}', flush=True)

    base = {r['tc']: min(r['times']) for r in rows if r['cfg'] == 'none'}
    base_n = {r['tc']: r['count'] for r in rows if r['cfg'] == 'none'}
    for r in rows:
        r['best'] = min(r['times'])
        r['median'] = statistics.median(r['times'])
        r['spread'] = (max(r['times']) - r['best']) / r['best']
        r['ratio'] = r['best'] / base[r['tc']]
        r['dcount'] = r['count'] - base_n[r['tc']]

    out = pathlib.Path(args.out) if args.out else HERE / 'results' / f'{args.label}.md'
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(report(args, arch, tcs, rows), encoding='utf-8')
    print(f'  → {out}')


def verdict(r):
    if r['cfg'] == 'none':
        return '—'
    if r['exits'] or r['traps_inside']:
        return 'kept'
    return '**dropped**'


def report(args, arch, tcs, rows):
    L = []
    w = L.append
    w(f'# Bounds-check ladder - {args.label}')
    w('')
    w('GENERATED FILE: `impl/bench/ladder/ladder.py`. How to read it: '
      '`impl/docs/FINDING-61-bounds-ladder.md`.')
    w('')
    w(f'* date: {datetime.date.today().isoformat()}')
    w(f'* system: `{platform.system()} {platform.release()}`, architecture `{arch}`')
    if args.emulated:
        w('* processor: emulated; /proc/cpuinfo belongs to the host')
    else:
        for line in cpu_info():
            w(f'* processor: {line}')
    if args.note:
        w(f'* {args.note}')
    w(f'* array: {LIM} × u32, index `i = (i + 1) & {MASK}`; iterations per run: '
      + f'{args.iter:,}'.replace(',', ' '))
    w(f'* runs per configuration: {args.reps}, round-robin; the best is taken')
    w('')
    w('| compiler | version | flags |')
    w('|---|---|---|')
    for name, _, _, flags, ver in tcs:
        w(f'| {name} | `{ver}` | `{" ".join(flags)}` |')
    w('')
    if args.emulated:
        w('> ⚠ **The machine is emulated (QEMU).** The timings below mean nothing and are given '
          'only for completeness. The instruction count in the loop body and the sum (checked) are valid.')
    else:
        w('> ⚠ Nanoseconds include frequency scaling and background load on the machine. '
          'What matters is the ratio to `none` within one compiler row, not the absolute numbers.')
    w('')
    w('| compiler | configuration | instructions in body | Δ vs none | check in loop | '
      'ns/iter (best) | median | spread | vs none |')
    w('|---|---|---:|---:|---|---:|---:|---:|---:|')
    for r in rows:
        w(f'| {r["tc"]} | `{r["cfg"]}` | {r["count"]} | {r["dcount"]:+d} | {verdict(r)} | '
          f'{r["best"]:.3f} | {r["median"]:.3f} | {r["spread"] * 100:.1f}% | {r["ratio"]:.3f} |')
    w('')
    w('*Instructions in body*: from the label of the backward branch to the branch itself inclusive, '
      'from the compiler assembly. *Spread*: (worst − best) / best.')
    w('')
    w('## Loop bodies')
    w('')
    for r in rows:
        extra = ''
        if r['exits']:
            extra = ' - exit to trap: `' + '`, `'.join(r['exits']) + '`'
        w(f'### {r["tc"]} - `{r["cfg"]}` ({r["count"]} instructions{extra})')
        w('')
        w('```asm')
        w(r['text'])
        w('```')
        w('')
    return '\n'.join(L)


if __name__ == '__main__':
    main()
