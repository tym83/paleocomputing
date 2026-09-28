#!/usr/bin/env python3
"""Почему проверка границ ничего не стоит на M4 и EPYC и стоит 2–6% на Arm-ядре GitHub.

Лестница (ladder.py, находка 61) дала гипотезу: на широком ядре цикл упирается
в цепочку зависимостей индекса `add → and` (2 такта на итерацию), а сравнение
с переходом исполняются в свободных слотах под этой цепочкой. Этот скрипт
проверяет гипотезу управляемыми опытами — без счётчиков производительности,
которых нет ни на общих машинах GitHub, ни на macOS без root.

ОДИН шаблон порождает все ядра опыта. Тело — тот же цикл, что в лестнице:

    [c проверок]  sum += a[i];  i = i + 1;  [k звеньев]  i &= 63;

  * k звеньев — k зависимых сложений `add i, i, #64` во встроенном ассемблере.
    Маска их стирает, сумма та же, а компилятор выбросить их не может: для него
    это чёрный ящик. Цепочка индекса удлиняется с 2 до 2 + k тактов.
  * c проверок — c пар «сравнение + условный переход» против c независимых
    пределов, спрятанных от оптимизатора. Каждая уходит в свою холодную ловушку
    ladder_fail(j): общих целей нет, слить переходы компилятор не может.
  * положение проверки (k = 0, c = 1):
      pre   — сравнивается индекс до сложения (как forced в лестнице);
      post  — индекс после маски; переход по-прежнему вне цепочки данных;
      mask  — та же проверка без перехода: cmp + csel/cmov обнуляет индекс
              чтения при выходе за предел (как array_index_nospec в Linux),
              цепочка индекса не затронута;
      chain — то же обнуление, но индекс следующей итерации считается из
              обнулённого: cmp + csel встают в цепочку зависимостей.

Такты без счётчиков. Ядро калибровки — 32 зависимых `add x, x, #1` на
итерацию: задержка целочисленного сложения на всех проверенных ядрах — один
такт, значит нс на сложение ≈ длительность такта. Калибровка идёт парой перед
каждым замером, такты = нс/итер ÷ нс/сложение того же круга: дрейф частоты
между кругами сокращается.

Форма тела проверяется, а не предполагается: одно чтение памяти, ровно c боковых
выходов, ровно k звеньев, csel/cmov в вариантах mask и chain. Иначе — падение.

Предсказания гипотезы:
  * такты(c=0, k) ≈ 2 + k — цикл упирается в цепочку;
  * добавка от проверок Δ(c, k) = такты(c, k) − такты(0, k) убывает до нуля
    с ростом k: чем длиннее цепочка, тем больше свободных слотов под ней;
  * chain стоит ≈ +2 такта везде (сравнение и выбор — в цепочке), mask — как pre.
Если Δ не зависит от k — гипотеза опровергнута: цена не прячется под задержкой.

Запуск:
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
CHUNKS = 64          # кусков на замер: калибровка и ядро чередуются
DEFAULT_ITER = 64_000_000

# Встроенный ассемблер по архитектурам: звено цепочки, калибровка, выбор.
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

HEAD = """/* ПОРОЖДЁННЫЙ ФАЙЛ — правится impl/bench/ladder/why.py, не руками. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LIM {lim}u

__attribute__((noinline, noreturn, cold))
void ladder_fail(int j)
{{
    fprintf(stderr, "проверка %d сработала\\n", j);
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
    __asm__ volatile("" : "+r"(p) : : "memory");   /* содержимое неизвестно оптимизатору */
    /* Замер кусками: калибровка и ядро чередуются CHUNKS раз в одном процессе,
     * от каждого берётся лучший кусок — оба при одной, наибольшей частоте. */
    uint64_t nc = n / {adds} + 1;
    for (size_t k = 0; k < sizeof kernels / sizeof kernels[0]; k++) {{
        if (strcmp(argv[1], kernels[k].name) != 0)
            continue;
        why_calib(p, nc);                          /* прогрев */
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
                fprintf(stderr, "калибровка посчитана неверно\\n");
                return 3;
            }}
            double a = (c1 - c0) / (double)(nc * {adds}), t = (t1 - c1) / (double)n;
            if (a < best_a) best_a = a;
            if (t < best_t) best_t = t;
        }}
        printf("%u %.6f %.6f\\n", s, best_t, best_a);
        return 0;
    }}
    fprintf(stderr, "нет ядра %s\\n", argv[1]);
    return 2;
}}
"""


def variants():
    """(имя, c, k, положение): сетка c × k с проверкой pre и три варианта положения."""
    out = [(f'why_c{c}_k{k}', c, k, 'pre') for k in LINKS for c in CHECKS]
    out += [(f'why_{pos}', 1, 0, pos) for pos in ('post', 'mask', 'chain')]
    return out


def emit_kernel(arch, name, c, k, pos):
    a = ASM[arch]
    lims = range(c)
    prologue = ''.join(f'    size_t lim{j} = LIM;\n' for j in lims)
    if c:
        regs = ', '.join(f'"+r"(lim{j})' for j in lims)
        prologue += f'    __asm__ volatile("" : {regs});   /* пределы неизвестны оптимизатору */\n'
    checks = ''.join(f'        if (i >= lim{j}) ladder_fail({j});\n' for j in lims)
    pre, post, idx, nxt = '', '', 'i', 'i'
    if pos == 'pre':
        pre = checks
    elif pos == 'post':
        post = checks
    else:                                   # mask, chain: без перехода
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
    """Сколько в теле сложений с непосредственным imm: `add x, x, #imm` или `addq $imm, %r`."""
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
    """Форма тела по ассемблеру; бросает SystemExit с телом, если она не та."""
    lb = loop_body(asm_text, arch, name)
    want_exits = 0 if pos in ('mask', 'chain') else c
    errs = []
    if lb['loads'] != 1:
        errs.append(f'{lb["loads"]} чтений памяти вместо одного')
    if len(lb['exits']) != want_exits:
        errs.append(f'{len(lb["exits"])} боковых выходов вместо {want_exits}')
    if count_imm_adds(lb['text'], arch, 64) != k:
        errs.append(f'{count_imm_adds(lb["text"], arch, 64)} звеньев цепочки вместо {k}')
    if pos in ('mask', 'chain') and not any(s in lb['text'] for s in ASM[arch]['sel']):
        errs.append('нет csel/cmov')
    if errs:
        sys.exit(f'❌ {name}: ' + '; '.join(errs) + f'\n{lb["text"]}')
    return lb


def verify_calib(asm_text, arch):
    lb = loop_body(asm_text, arch, 'why_calib')
    adds = count_imm_adds(lb['text'], arch, 1)
    if adds != CALIB_ADDS:
        sys.exit(f'❌ why_calib: {adds} сложений вместо {CALIB_ADDS}\n{lb["text"]}')
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
    """(сумма, нс/итер, нс/сложение по калибровке в том же процессе)."""
    out = run([str(binary), kernel, str(n)]).stdout.split()
    return int(out[0]), float(out[1]), float(out[2])


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--label', required=True)
    ap.add_argument('--iter', type=int, default=DEFAULT_ITER, help='итераций на прогон')
    ap.add_argument('--reps', type=int, default=5, help='кругов')
    ap.add_argument('--emulated', action='store_true',
                    help='машина эмулируется: проверяется только форма тел, время не пишется')
    ap.add_argument('--note', default='')
    ap.add_argument('--build-dir', default=str(ladder.IMPL / 'build' / 'ladder'))
    ap.add_argument('--out', default=None)
    args = ap.parse_args()
    if args.emulated:
        ladder.RETRIES = 5
    arch = host_arch()
    if arch not in ASM:
        sys.exit(f'архитектура {arch} не поддерживается')
    tcs = find_toolchains({'c'})
    if not tcs:
        sys.exit('компилятора C нет')
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
                sys.exit(f'❌ {tc[0]} {name}: сумма {got}, ожидалась {want}')
            rows.append({'tc': tc[0], 'name': name, 'c': c, 'k': k, 'pos': pos,
                         'count': lb['count'], 'cyc': [], 'ns': [], 'nsadd': []})
            bodies[(tc[0], name)] = lb['text']
        print(f'  {tc[0]}: {len(variants())} ядер, форма тел проверена', flush=True)

    if not args.emulated:
        # По кругу; калибровка — в том же процессе, до и после замера.
        for rep in range(args.reps):
            for r in rows:
                _, ns, cal = time_one(bins[r['tc']], r['name'], chunk)
                r['ns'].append(ns)
                r['nsadd'].append(cal)
                r['cyc'].append(ns / cal)
            print(f'  круг {rep + 1}/{args.reps}', flush=True)
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
    w(f'# Почему проверка бесплатна — {args.label}')
    w('')
    w('ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/why.py`. Как читать — '
      '`impl/docs/FINDING-61-bounds-ladder.md`, раздел «Почему так: эксперимент».')
    w('')
    w(f'* дата: {datetime.date.today().isoformat()}')
    w(f'* система: `{platform.system()} {platform.release()}`, архитектура `{arch}`')
    if args.emulated:
        w('* процессор: эмулируется; /proc/cpuinfo принадлежит хосту')
    else:
        for line in ladder.cpu_info():
            w(f'* процессор: {line}')
    if args.note:
        w(f'* {args.note}')
    w(f'* цикл: `sum += a[i]; i = i + 1; [k × add #64]; i &= {MASK}` над {LIM} × u32; '
      f'итераций на замер: ' + f'{args.iter:,}'.replace(',', ' '))
    w(f'* кругов: {args.reps}, по кругу; в каждом замере {CHUNKS} кусков, где калибровка '
      f'{CALIB_ADDS} зависимыми сложениями (1 сложение = 1 такт) чередуется с ядром в одном '
      'процессе; такты замера = лучший кусок ядра (нс/итер) ÷ лучший кусок калибровки '
      '(нс/сложение); в таблицах — медиана по кругам')
    w('')
    w('| компилятор | версия | флаги |')
    w('|---|---|---|')
    for name, _, _, flags, ver in tcs:
        w(f'| {name} | `{ver}` | `{" ".join(flags)}` |')
    w('')
    if args.emulated:
        w('> ⚠ **Машина эмулируется.** Проверена только форма тел и суммы; времени нет.')
        w('')
    else:
        for tc in tcs:
            t = tc[0]
            ghz = statistics.median(r['ghz'] for r in rows if r['tc'] == t)
            w(f'## {t}: такты на итерацию')
            w('')
            w(f'Частота по калибровке (медиана): **{ghz:.2f} ГГц**.')
            w('')
            w('Такты на итерацию (медиана по кругам), в скобках — добавка от проверок '
              'Δ = такты(c, k) − такты(0, k):')
            w('')
            w('| цепочка индекса | ' + ' | '.join(f'c = {c}' for c in CHECKS) + ' |')
            w('|---|' + '---:|' * len(CHECKS))
            for k in LINKS:
                base = cell(rows, t, f'why_c0_k{k}')['median']
                cells = []
                for c in CHECKS:
                    v = cell(rows, t, f'why_c{c}_k{k}')['median']
                    cells.append(f'{v:.2f}' if c == 0 else f'{v:.2f} ({v - base:+.2f})')
                w(f'| k = {k} (2 + {k} = {2 + k} такта) | ' + ' | '.join(cells) + ' |')
            w('')
            base = cell(rows, t, 'why_c0_k0')['median']
            w('Положение одной проверки (k = 0):')
            w('')
            w('| вариант | что | команд в теле | такты | Δ к c = 0 |')
            w('|---|---|---:|---:|---:|')
            what = {'why_c0_k0': 'без проверки',
                    'why_c1_k0': 'pre: cmp + переход, индекс до сложения',
                    'why_post': 'post: cmp + переход, индекс после маски',
                    'why_mask': 'mask: cmp + csel/cmov на индексе чтения, вне цепочки',
                    'why_chain': 'chain: cmp + csel/cmov в цепочке индекса'}
            for nm, desc in what.items():
                r = cell(rows, t, nm)
                w(f'| `{nm}` | {desc} | {r["count"]} | {r["median"]:.2f} | {r["median"] - base:+.2f} |')
            w('')
        w('Полная таблица (все круги):')
        w('')
        w('| компилятор | ядро | c | k | положение | команд | такты: медиана | мин | макс | '
          'нс/итер (лучшее) |')
        w('|---|---|---:|---:|---|---:|---:|---:|---:|---:|')
        for r in rows:
            w(f'| {r["tc"]} | `{r["name"]}` | {r["c"]} | {r["k"]} | {r["pos"]} | {r["count"]} | '
              f'{r["median"]:.3f} | {r["best"]:.3f} | {max(r["cyc"]):.3f} | {r["nsbest"]:.3f} |')
        w('')
    w('## Тела циклов')
    w('')
    for r in rows:
        w(f'### {r["tc"]} — `{r["name"]}` ({r["count"]} команд)')
        w('')
        w('```asm')
        w(bodies[(r['tc'], r['name'])])
        w('```')
        w('')
    return '\n'.join(L)


if __name__ == '__main__':
    main()
