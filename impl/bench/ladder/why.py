#!/usr/bin/env python3
"""Why a bounds check costs nothing on M4 and EPYC but costs 2-6% on GitHub's Arm core.

The ladder (ladder.py, finding 61) produced a hypothesis: on a wide core the loop is bound
by the index dependency chain `add → and` (2 cycles per iteration), and the compare and
branch execute in free slots underneath that chain. This script tests the hypothesis with
controlled experiments, without performance counters, which are available neither on
GitHub's shared machines nor on macOS without root.

ONE template produces all kernels of the experiment. The body is the same loop as in the ladder:

    [c checks]  sum += a[i];  i = i + 1;  [k links]  i &= 63;

  * k links: k dependent additions `add i, i, #64` in inline assembly.
    The mask erases them and the sum is unchanged, but the compiler cannot drop them:
    to it they are a black box. The index chain grows from 2 to 2 + k cycles.
  * c checks: c "compare + conditional branch" pairs against c independent limits
    hidden from the optimizer. Each goes to its own cold trap ladder_fail(j): there are
    no shared targets, so the compiler cannot merge the branches.
  * check position (k = 0, c = 1):
      pre   - the index is compared before the addition (like forced in the ladder);
      post  - the index after the mask; the branch is still outside the data chain;
      mask  - the same check without a branch: cmp + csel/cmov zeroes the load index
              when it is out of bounds (like array_index_nospec in Linux);
              the index chain is untouched;
      chain - the same zeroing, but the next iteration's index is computed from the
              zeroed one: cmp + csel join the dependency chain.

Cycles without counters. The calibration kernel is 32 dependent `add x, x, #1` per
iteration: integer add latency is one cycle on every core tested, so ns per add ≈
the cycle time. Calibration runs paired before each measurement, and cycles =
ns/iter ÷ ns/add of the same round, so frequency drift between rounds cancels out.

The body shape is verified, not assumed: one memory load, exactly c side exits,
exactly k links, csel/cmov in the mask and chain variants. Otherwise the script fails.

Predictions of the hypothesis:
  * cycles(c=0, k) ≈ 2 + k: the loop is bound by the chain;
  * the cost of checks Δ(c, k) = cycles(c, k) − cycles(0, k) decreases to zero
    as k grows: the longer the chain, the more free slots underneath it;
  * chain costs ≈ +2 cycles everywhere (compare and select are in the chain), mask the same as pre.
If Δ does not depend on k, the hypothesis is refuted: the cost does not hide under the latency.

Usage:
    python3 impl/bench/ladder/why.py --label macos-arm64-apple-m4
"""
import argparse
import datetime
import pathlib
import platform
import statistics
import sys

import ladder
from ladder import LIM, MASK, expected_sum, find_toolchains, host_arch, loop_body, run

HERE = pathlib.Path(__file__).resolve().parent
CHECKS = (0, 1, 2, 4)
LINKS = (0, 1, 2, 4)
CALIB_ADDS = 32
CHUNKS = 64          # chunks per measurement: calibration and kernel alternate
DEFAULT_ITER = 64_000_000

# Inline assembly per architecture: chain link, calibration, select.
ASM = {
    'aarch64': {
        'link': 'add %x0, %x0, #64',
        'one': 'add %x0, %x0, #1',
        'mask': 'cmp %x[j], %x[l]\\n\\tcsel %x[j], %x[j], %x[z], lo',
        'sel': ('csel',),
    },
    'x86_64': {
        'link': 'addq $64, %0',
        'one': 'addq $1, %0',
        'mask': 'cmpq %[l], %[j]\\n\\tcmovaeq %[z], %[j]',
        'sel': ('cmov',),
    },
}

HEAD = """/* GENERATED FILE - edit impl/bench/ladder/why.py, not by hand. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LIM {lim}u

__attribute__((noinline, noreturn, cold))
void ladder_fail(int j)
{{
    fprintf(stderr, "check %d fired\\n", j);
    abort();
}}
"""

KERNEL = """
__attribute__((noinline))
uint32_t {name}(const uint32_t *a, uint64_t n)
{{
    uint32_t sum = 0;
    size_t i = 0;
{prologue}    do {{
{pre}        sum += a[{idx}];
        i = {next} + 1;
{links}        i &= LIM - 1;
{post}    }} while (--n != 0);
    return sum;
}}
"""

CALIB = """
__attribute__((noinline))
uint64_t why_calib(const uint32_t *a, uint64_t n)
{{
    uint64_t x = (uint64_t)(uintptr_t)a;
    do {{
        __asm__ volatile({adds} : "+r"(x));
    }} while (--n != 0);
    return x - (uint64_t)(uintptr_t)a;
}}
"""

MAIN = """
static uint32_t arr[LIM];

static double now_ns(void)
{{
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return (double)t.tv_sec * 1e9 + (double)t.tv_nsec;
}}

typedef uint32_t (*kernel_fn)(const uint32_t *, uint64_t);
static const struct {{ const char *name; kernel_fn fn; }} kernels[] = {{
{table}}};

int main(int argc, char **argv)
{{
    if (argc < 3) {{
        fprintf(stderr, "usage: %s kernel n\\n", argv[0]);
        return 2;
    }}
    uint64_t n = strtoull(argv[2], 0, 10);
    for (uint32_t k = 0; k < LIM; k++)
        arr[k] = k * 2654435761u + 1u;
    const uint32_t *p = arr;
    __asm__ volatile("" : "+r"(p) : : "memory");   /* contents unknown to the optimizer */
    /* Measured in chunks: calibration and kernel alternate CHUNKS times in one process,
     * and the best chunk of each is taken, so both are at the same, highest frequency. */
    uint64_t nc = n / {adds} + 1;
    for (size_t k = 0; k < sizeof kernels / sizeof kernels[0]; k++) {{
        if (strcmp(argv[1], kernels[k].name) != 0)
            continue;
        why_calib(p, nc);                          /* warm-up */
        kernels[k].fn(p, n);
        uint32_t s = 0;
        double best_t = 1e300, best_a = 1e300;
        for (int c = 0; c < {chunks}; c++) {{
            double c0 = now_ns();
            uint64_t x = why_calib(p, nc);
            double c1 = now_ns();
            s += kernels[k].fn(p, n);
            double t1 = now_ns();
            if (x != nc * {adds}) {{
                fprintf(stderr, "calibration computed the wrong result\\n");
                return 3;
            }}
            double a = (c1 - c0) / (double)(nc * {adds}), t = (t1 - c1) / (double)n;
            if (a < best_a) best_a = a;
            if (t < best_t) best_t = t;
        }}
        printf("%u %.6f %.6f\\n", s, best_t, best_a);
        return 0;
    }}
    fprintf(stderr, "no kernel %s\\n", argv[1]);
    return 2;
}}
"""


def variants():
    """(name, c, k, position): the c × k grid with a pre check, plus three position variants."""
    out = [(f'why_c{c}_k{k}', c, k, 'pre') for k in LINKS for c in CHECKS]
    out += [(f'why_{pos}', 1, 0, pos) for pos in ('post', 'mask', 'chain')]
    return out


def emit_kernel(arch, name, c, k, pos):
    a = ASM[arch]
    lims = range(c)
    prologue = ''.join(f'    size_t lim{j} = LIM;\n' for j in lims)
    if c:
        regs = ', '.join(f'"+r"(lim{j})' for j in lims)
        prologue += f'    __asm__ volatile("" : {regs});   /* limits unknown to the optimizer */\n'
    checks = ''.join(f'        if (i >= lim{j}) ladder_fail({j});\n' for j in lims)
    pre, post, idx, nxt = '', '', 'i', 'i'
    if pos == 'pre':
        pre = checks
    elif pos == 'post':
        post = checks
    else:                                   # mask, chain: no branch
        prologue += ('    size_t zero = 0;\n'
                     '    __asm__ volatile("" : "+r"(zero));\n')
        pre = ('        size_t j = i;\n'
               f'        __asm__("{a["mask"]}" : [j] "+r"(j) : [l] "r"(lim0), [z] "r"(zero) : "cc");\n')
        idx = 'j'
        nxt = 'j' if pos == 'chain' else 'i'
    links = ''
    if k:
        body = '\\n\\t'.join([a['link']] * k)
        links = f'        __asm__ volatile("{body}" : "+r"(i) : : "cc");\n'
    return KERNEL.format(name=name, prologue=prologue, pre=pre, post=post,
                         idx=idx, next=nxt, links=links)


def emit(arch):
    vs = variants()
    adds = '"' + '\\n\\t'.join([ASM[arch]['one']] * CALIB_ADDS) + '"'
    table = ''.join(f'    {{"{v[0]}", {v[0]}}},\n' for v in vs)
    return (HEAD.format(lim=LIM) + ''.join(emit_kernel(arch, *v) for v in vs)
            + CALIB.format(adds=adds) + MAIN.format(table=table, adds=CALIB_ADDS, chunks=CHUNKS))


def count_imm_adds(text, arch, imm):
    """How many additions with immediate imm the body has: `add x, x, #imm` or `addq $imm, %r`."""
    n = 0
    for line in text.splitlines():
        parts = line.strip().split(None, 1)
        if len(parts) < 2 or not parts[0].lower().startswith('add'):
            continue
        ops = [o.strip() for o in parts[1].split(',')]
        if arch == 'x86_64':
            n += ops[0] == f'${imm}'
        else:
            n += ops[-1] in (f'#{imm}', f'#{imm:#x}')
    return n


def verify(asm_text, arch, name, c, k, pos):
    """Body shape from the assembly; raises SystemExit with the body if it is wrong."""
    lb = loop_body(asm_text, arch, name)
    want_exits = 0 if pos in ('mask', 'chain') else c
    errs = []
    if lb['loads'] != 1:
        errs.append(f'{lb["loads"]} memory loads instead of one')
    if len(lb['exits']) != want_exits:
        errs.append(f'{len(lb["exits"])} side exits instead of {want_exits}')
    if count_imm_adds(lb['text'], arch, 64) != k:
        errs.append(f'{count_imm_adds(lb["text"], arch, 64)} chain links instead of {k}')
    if pos in ('mask', 'chain') and not any(s in lb['text'] for s in ASM[arch]['sel']):
        errs.append('no csel/cmov')
    if errs:
        sys.exit(f'❌ {name}: ' + '; '.join(errs) + f'\n{lb["text"]}')
    return lb


def verify_calib(asm_text, arch):
    lb = loop_body(asm_text, arch, 'why_calib')
    adds = count_imm_adds(lb['text'], arch, 1)
    if adds != CALIB_ADDS:
        sys.exit(f'❌ why_calib: {adds} additions instead of {CALIB_ADDS}\n{lb["text"]}')
    return lb


def build(tc, arch, outdir):
    _, _, cmd, flags, _ = tc
    stem = outdir / f'why_{tc[0].split("(")[-1].rstrip(")")}'
    src = stem.with_suffix('.c')
    src.write_text(emit(arch), encoding='utf-8')
    run([cmd, *flags, '-S', '-o', str(stem.with_suffix('.s')), str(src)])
    run([cmd, *flags, '-o', str(stem), str(src)])
    return stem, stem.with_suffix('.s').read_text(encoding='utf-8', errors='replace')


def time_one(binary, kernel, n):
    """(sum, ns/iter, ns/add from the calibration in the same process)."""
    out = run([str(binary), kernel, str(n)]).stdout.split()
    return int(out[0]), float(out[1]), float(out[2])


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--label', required=True)
    ap.add_argument('--iter', type=int, default=DEFAULT_ITER, help='iterations per run')
    ap.add_argument('--reps', type=int, default=5, help='rounds')
    ap.add_argument('--emulated', action='store_true',
                    help='the machine is emulated: only body shapes are checked, no timings are written')
    ap.add_argument('--note', default='')
    ap.add_argument('--build-dir', default=str(ladder.IMPL / 'build' / 'ladder'))
    ap.add_argument('--out', default=None)
    args = ap.parse_args()
    if args.emulated:
        ladder.RETRIES = 5
    arch = host_arch()
    if arch not in ASM:
        sys.exit(f'architecture {arch} is not supported')
    tcs = find_toolchains({'c'})
    if not tcs:
        sys.exit('no C compiler')
    outdir = pathlib.Path(args.build_dir) / f'why-{args.label}'
    outdir.mkdir(parents=True, exist_ok=True)

    chunk = max(1, args.iter // CHUNKS)
    want = CHUNKS * expected_sum(chunk) % 2 ** 32
    rows, bins, bodies = [], {}, {}
    for tc in tcs:
        binary, asm = build(tc, arch, outdir)
        bins[tc[0]] = binary
        verify_calib(asm, arch)
        for name, c, k, pos in variants():
            lb = verify(asm, arch, name, c, k, pos)
            got = time_one(binary, name, chunk)[0]
            if got != want:
                sys.exit(f'❌ {tc[0]} {name}: sum {got}, expected {want}')
            rows.append({'tc': tc[0], 'name': name, 'c': c, 'k': k, 'pos': pos,
                         'count': lb['count'], 'cyc': [], 'ns': [], 'nsadd': []})
            bodies[(tc[0], name)] = lb['text']
        print(f'  {tc[0]}: {len(variants())} kernels, body shapes verified', flush=True)

    if not args.emulated:
        # Round-robin; calibration runs in the same process, before and after the measurement.
        for rep in range(args.reps):
            for r in rows:
                _, ns, cal = time_one(bins[r['tc']], r['name'], chunk)
                r['ns'].append(ns)
                r['nsadd'].append(cal)
                r['cyc'].append(ns / cal)
            print(f'  round {rep + 1}/{args.reps}', flush=True)
        for r in rows:
            r['best'] = min(r['cyc'])
            r['median'] = statistics.median(r['cyc'])
            r['nsbest'] = min(r['ns'])
            r['ghz'] = 1 / statistics.median(r['nsadd'])

    out = pathlib.Path(args.out) if args.out else HERE / 'results' / f'why-{args.label}.md'
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(report(args, arch, tcs, rows, bodies), encoding='utf-8')
    print(f'  → {out}')


def cell(rows, tc, name, key='best'):
    for r in rows:
        if r['tc'] == tc and r['name'] == name:
            return r
    raise KeyError(name)


def report(args, arch, tcs, rows, bodies):
    L = []
    w = L.append
    w(f'# Why the check is free - {args.label}')
    w('')
    w('GENERATED FILE: `impl/bench/ladder/why.py`. How to read it: '
      '`impl/docs/FINDING-61-bounds-ladder.md`, the "why" experiment section.')
    w('')
    w(f'* date: {datetime.date.today().isoformat()}')
    w(f'* system: `{platform.system()} {platform.release()}`, architecture `{arch}`')
    if args.emulated:
        w('* processor: emulated; /proc/cpuinfo belongs to the host')
    else:
        for line in ladder.cpu_info():
            w(f'* processor: {line}')
    if args.note:
        w(f'* {args.note}')
    w(f'* loop: `sum += a[i]; i = i + 1; [k × add #64]; i &= {MASK}` over {LIM} × u32; '
      f'iterations per measurement: ' + f'{args.iter:,}'.replace(',', ' '))
    w(f'* rounds: {args.reps}, round-robin; each measurement has {CHUNKS} chunks in which calibration '
      f'with {CALIB_ADDS} dependent additions (1 addition = 1 cycle) alternates with the kernel in one '
      'process; cycles of a measurement = best kernel chunk (ns/iter) ÷ best calibration chunk '
      '(ns/add); the tables show the median over rounds')
    w('')
    w('| compiler | version | flags |')
    w('|---|---|---|')
    for name, _, _, flags, ver in tcs:
        w(f'| {name} | `{ver}` | `{" ".join(flags)}` |')
    w('')
    if args.emulated:
        w('> ⚠ **The machine is emulated.** Only body shapes and sums are checked; no timings.')
        w('')
    else:
        for tc in tcs:
            t = tc[0]
            ghz = statistics.median(r['ghz'] for r in rows if r['tc'] == t)
            w(f'## {t}: cycles per iteration')
            w('')
            w(f'Frequency from calibration (median): **{ghz:.2f} GHz**.')
            w('')
            w('Cycles per iteration (median over rounds); in parentheses, the cost of the checks '
              'Δ = cycles(c, k) − cycles(0, k):')
            w('')
            w('| index chain | ' + ' | '.join(f'c = {c}' for c in CHECKS) + ' |')
            w('|---|' + '---:|' * len(CHECKS))
            for k in LINKS:
                base = cell(rows, t, f'why_c0_k{k}')['median']
                cells = []
                for c in CHECKS:
                    v = cell(rows, t, f'why_c{c}_k{k}')['median']
                    cells.append(f'{v:.2f}' if c == 0 else f'{v:.2f} ({v - base:+.2f})')
                w(f'| k = {k} (2 + {k} = {2 + k} cycles) | ' + ' | '.join(cells) + ' |')
            w('')
            base = cell(rows, t, 'why_c0_k0')['median']
            w('Position of a single check (k = 0):')
            w('')
            w('| variant | what | instructions in body | cycles | Δ vs c = 0 |')
            w('|---|---|---:|---:|---:|')
            what = {'why_c0_k0': 'no check',
                    'why_c1_k0': 'pre: cmp + branch, index before the addition',
                    'why_post': 'post: cmp + branch, index after the mask',
                    'why_mask': 'mask: cmp + csel/cmov on the load index, outside the chain',
                    'why_chain': 'chain: cmp + csel/cmov in the index chain'}
            for nm, desc in what.items():
                r = cell(rows, t, nm)
                w(f'| `{nm}` | {desc} | {r["count"]} | {r["median"]:.2f} | {r["median"] - base:+.2f} |')
            w('')
        w('Full table (all rounds):')
        w('')
        w('| compiler | kernel | c | k | position | instructions | cycles: median | min | max | '
          'ns/iter (best) |')
        w('|---|---|---:|---:|---|---:|---:|---:|---:|---:|')
        for r in rows:
            w(f'| {r["tc"]} | `{r["name"]}` | {r["c"]} | {r["k"]} | {r["pos"]} | {r["count"]} | '
              f'{r["median"]:.3f} | {r["best"]:.3f} | {max(r["cyc"]):.3f} | {r["nsbest"]:.3f} |')
        w('')
    w('## Loop bodies')
    w('')
    for r in rows:
        w(f'### {r["tc"]} - `{r["name"]}` ({r["count"]} instructions)')
        w('')
        w('```asm')
        w(bodies[(r['tc'], r['name'])])
        w('```')
        w('')
    return '\n'.join(L)


if __name__ == '__main__':
    main()
