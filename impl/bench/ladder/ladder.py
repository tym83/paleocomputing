#!/usr/bin/env python3
"""Лестница цены проверки границ: тот же цикл, что на RISC5, на современных процессорах.

На RISC5 цена проверки измерена точно (находка 55): 10 команд против 9, 11
тактов против 10. Страница Оберона говорит, что на современный процессор это
число не переносится. Этот скрипт превращает утверждение в замер.

ОДИН генератор порождает ОДИН И ТОТ ЖЕ цикл на C и на Rust:

    sum += a[i];  i = (i + 1) & (LIM - 1);     — LIM ячеек по 32 бита, n итераций

в трёх конфигурациях, которые отличаются только проверкой:

    none    проверки нет вовсе (C: a[i]; Rust: get_unchecked)
    auto    проверка так, как её пишет язык, предел — константа LIM
            (C: if (i >= LIM) __builtin_trap(); Rust: a[i] на [u32; LIM]).
            Компилятор вправе доказать, что она лишняя: i заворачивается маской.
            Выбросил он её или нет — само по себе результат.
    forced  та же проверка, но предел спрятан от оптимизатора (пустой asm в C,
            std::hint::black_box в Rust) — сравнение и переход обязаны остаться.
            Прямой аналог конфигурации B на RISC5 (SUB + BCC).

Ловушка — холодный путь без возврата: __builtin_trap() в C, паника проверенной
индексации в Rust auto, явный if + std::process::abort() в Rust forced.

Форма цикла держится как на RISC5: без развёртки и без векторизации (флаги ниже),
do-while со счётчиком вниз (SUB R5 / BNE loop). Массив приходит через указатель,
отмытый от оптимизатора, сумма возвращается и печатается — цикл не выбросить.

Две метрики:
  * команд в теле цикла — по ассемблеру компилятора: обратный переход и его метка,
    от метки до перехода включительно. Тело печатается в результаты целиком,
    чтобы число можно было проверить глазами;
  * нс на итерацию — лучшее из N прогонов, конфигурации чередуются по кругу.
    ⚠ Наносекунды на современном процессоре включают частотное масштабирование
    и соседей по машине. Значат отношения к none, а не абсолютные числа.

Запуск:
    python3 impl/bench/ladder/ladder.py --label macos-arm64-m4
    python3 impl/bench/ladder/ladder.py --label linux-amd64-qemu --iter 2000000 --emulated

Пределы (LIM) берутся из tools/gen_bounds_bench.py — тот же источник, что у
программ для RISC5, чтобы две лестницы не разошлись при правке.
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
from gen_bounds_bench import LIM  # noqa: E402  — один предел на обе лестницы

MASK = LIM - 1
CONFIGS = ('none', 'auto', 'forced')
DEFAULT_ITER = 500_000_000

# ─── Исходники ────────────────────────────────────────────────────────────────

C_SRC = """/* ПОРОЖДЁННЫЙ ФАЙЛ — правится impl/bench/ladder/ladder.py, не руками.
 * Конфигурация {cfg}: {what} */
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
    __asm__ volatile("" : "+r"(p) : : "memory");   /* содержимое неизвестно оптимизатору */
    ladder_kernel(p, n / 16 + 1);                  /* прогрев */
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
               '    __asm__ volatile("" : "+r"(lim));   /* предел неизвестен оптимизатору */\n',
               '        if (i >= lim) __builtin_trap();\n'),
}

RS_SRC = """// ПОРОЖДЁННЫЙ ФАЙЛ — правится impl/bench/ladder/ladder.py, не руками.
// Конфигурация {cfg}: {what}
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
    let p: &[u32; LIM] = black_box(&arr);   // содержимое неизвестно оптимизатору
    black_box(ladder_kernel(p, n / 16 + 1)); // прогрев
    let t0 = Instant::now();
    let s = ladder_kernel(p, n);
    let dt = t0.elapsed().as_nanos() as f64;
    println!("{{}} {{:.6}}", s, dt / n as f64);
}}
"""

RS_CHECK = {
    'none':   ('', '        sum = sum.wrapping_add(unsafe {{ *a.get_unchecked(i) }});\n'),
    'auto':   ('', '        sum = sum.wrapping_add(a[i]);\n'),
    'forced': ('    let lim: usize = black_box(LIM); // предел неизвестен оптимизатору\n',
               '        if i >= lim {{\n'
               '            std::process::abort();\n'
               '        }}\n'
               '        sum = sum.wrapping_add(unsafe {{ *a.get_unchecked(i) }});\n'),
}

WHAT = {
    'none':   'проверки нет',
    'auto':   'проверка как в языке, предел — константа',
    'forced': 'проверка с пределом, спрятанным от оптимизатора (аналог B на RISC5)',
}


def emit_c(cfg):
    prologue, check = C_CHECK[cfg]
    return C_SRC.format(cfg=cfg, what=WHAT[cfg], lim=LIM,
                        prologue=prologue, check=check)


def emit_rust(cfg):
    prologue, body = RS_CHECK[cfg]
    # тело само содержит {{ }} — раскрываем его отдельно, до общего шаблона
    return RS_SRC.format(cfg=cfg, what=WHAT[cfg], lim=LIM,
                         prologue=prologue, body=body.format())


def expected_sum(n):
    """То, что обязана вернуть любая конфигурация: проверки не меняют результат."""
    a = [(k * 2654435761 + 1) & 0xFFFFFFFF for k in range(LIM)]
    return (n // LIM * sum(a) + sum(a[:n % LIM])) & 0xFFFFFFFF


# ─── Инструменты ──────────────────────────────────────────────────────────────

# Флаги держат форму цикла как на RISC5: одна итерация — одно тело.
CLANG_FLAGS = ['-O2', '-fno-unroll-loops', '-fno-vectorize', '-fno-slp-vectorize']
GCC_FLAGS = ['-O2', '-fno-unroll-loops', '-fno-tree-vectorize', '-fno-tree-slp-vectorize']
# У rustc нет -fno-unroll-loops. Развёртку отключает порог LLVM, равный нулю,
# плюс запрет развёртки с остатком (runtime unroll); векторизацию — штатные -C.
RUSTC_FLAGS = ['-C', 'opt-level=2', '-C', 'codegen-units=1',
               '-C', 'debug-assertions=off', '-C', 'overflow-checks=off',
               '-C', 'no-vectorize-loops', '-C', 'no-vectorize-slp',
               '-C', 'llvm-args=-unroll-threshold=0',
               '-C', 'llvm-args=-unroll-runtime=false']


# Под эмуляцией QEMU компиляторы изредка падают сами (cc1 с SIGSEGV внутри
# qemu-x86_64 — проверено). Там повторяем; на живой машине падение — ошибка.
RETRIES = 1


def run(cmd, **kw):
    for attempt in range(RETRIES):
        p = subprocess.run(cmd, capture_output=True, text=True, **kw)
        if p.returncode == 0:
            return p
        print(f'  ⚠ {cmd[0]} вернул {p.returncode} (попытка {attempt + 1}/{RETRIES})\n'
              f'{p.stderr.strip()[-2000:]}', file=sys.stderr, flush=True)
    raise subprocess.CalledProcessError(p.returncode, cmd, p.stdout, p.stderr)


def first_line(cmd):
    try:
        return run(cmd).stdout.strip().splitlines()[0]
    except (OSError, subprocess.CalledProcessError, IndexError):
        return None


def find_toolchains(want):
    """Список (имя, язык, команда, флаги, версия). gcc на macOS — это clang: не дублируем."""
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


# ─── Разбор ассемблера ────────────────────────────────────────────────────────

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
    """(вид, цель): вид — 'cond' | 'jump' | 'trap' | 'ret' | None."""
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
    """Строки функции name: от её метки до .cfi_endproc / .size / .Lfunc_end."""
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
    """Тело цикла: от цели обратного перехода до него самого включительно.

    Возвращает словарь: команды, число, боковые выходы из тела (переходы наружу,
    кроме обратного) и есть ли в теле ловушка. Бросает ValueError, если цикла нет.
    """
    lines = function_lines(asm_text, name)
    if not lines:
        raise ValueError(f'функция {name} не найдена в ассемблере')
    items = []                      # ('label', имя) | ('ins', текст)
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
            continue                # директива
        items.append(('ins', s))
    labels = {v: k for k, (t, v) in enumerate(items) if t == 'label'}

    back = []                       # (позиция перехода, позиция метки, вид)
    for k, (t, v) in enumerate(items):
        if t != 'ins':
            continue
        kind, tgt = classify(v, arch)
        if kind in ('cond', 'jump') and tgt in labels and labels[tgt] < k:
            back.append((k, labels[tgt], kind))
    if not back:
        raise ValueError('обратного перехода нет — цикла в функции нет')
    # Условный обратный переход предпочтительнее безусловного; среди равных —
    # самый короткий (внутренний) цикл.
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
    # Единственное чтение памяти в цикле — a[i]. Два чтения и больше значат, что
    # цикл развёрнут или векторизован и сравнивать тела с RISC5 нельзя.
    if arch == 'x86_64':
        loads = sum(1 for v in body if '(' in v)
    else:
        loads = sum(1 for v in body if v.split()[0].lower().startswith('ld'))
    return {'count': len(body), 'text': '\n'.join(shown), 'exits': exits,
            'traps_inside': traps, 'back_kind': back_kind, 'loads': loads}


# ─── Замер ────────────────────────────────────────────────────────────────────

def host_arch():
    m = platform.machine().lower()
    return 'x86_64' if m in ('x86_64', 'amd64') else 'aarch64' if m in ('arm64', 'aarch64') else m


def cpu_name():
    try:
        if sys.platform == 'darwin':
            return run(['sysctl', '-n', 'machdep.cpu.brand_string']).stdout.strip()
        info = pathlib.Path('/proc/cpuinfo').read_text()
        for key in ('model name', 'Model', 'CPU implementer', 'CPU part'):
            m = re.search(rf'^{key}\s*:\s*(.+)$', info, re.M)
            # Виртуальная машина на Apple сообщает implementer и part нулями.
            if m and m.group(1).strip() not in ('0x00', '0x000'):
                return f'{key}: {m.group(1).strip()}'
        return 'не сообщается (виртуальная машина)'
    except (OSError, subprocess.CalledProcessError):
        pass
    return 'неизвестен'


def time_one(binary, n):
    out = run([str(binary), str(n)]).stdout.split()
    return int(out[0]), float(out[1])


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--label', required=True, help='имя платформы для файла результатов')
    ap.add_argument('--iter', type=int, default=DEFAULT_ITER, help='итераций на прогон')
    ap.add_argument('--reps', type=int, default=5, help='прогонов на конфигурацию')
    ap.add_argument('--langs', default='c,rust', help='c,rust')
    ap.add_argument('--emulated', action='store_true',
                    help='машина эмулируется: время не значит ничего, пишется с пометкой')
    ap.add_argument('--note', default='', help='строка о платформе в шапку результатов')
    ap.add_argument('--build-dir', default=str(IMPL / 'build' / 'ladder'))
    ap.add_argument('--out', default=None, help='файл результатов (по умолчанию results/<label>.md)')
    args = ap.parse_args()
    if args.iter < 1:
        ap.error('--iter должно быть ≥ 1: цикл do-while')

    global RETRIES
    if args.emulated:
        RETRIES = 5
    arch = host_arch()
    if arch not in ('x86_64', 'aarch64'):
        sys.exit(f'архитектура {arch} разборщиком ассемблера не поддерживается')
    tcs = find_toolchains(set(args.langs.split(',')))
    if not tcs:
        sys.exit('ни одного компилятора не найдено')
    outdir = pathlib.Path(args.build_dir) / args.label
    outdir.mkdir(parents=True, exist_ok=True)

    rows, bins = [], {}
    want = expected_sum(args.iter)
    for tc in tcs:
        for cfg in CONFIGS:
            binary, asm = build(tc, cfg, outdir)
            lb = loop_body(asm.read_text(encoding='utf-8', errors='replace'), arch)
            if lb['loads'] != 1:
                sys.exit(f'❌ {tc[0]} {cfg}: в теле цикла {lb["loads"]} чтений памяти вместо '
                         f'одного — цикл развёрнут или векторизован:\n{lb["text"]}')
            got, _ = time_one(binary, args.iter)
            if got != want:
                sys.exit(f'❌ {tc[0]} {cfg}: сумма {got}, ожидалась {want} — цикл посчитан неверно')
            bins[(tc[0], cfg)] = binary
            rows.append({'tc': tc[0], 'cfg': cfg, **lb, 'times': []})
            print(f'  {tc[0]:12} {cfg:7} команд в теле: {lb["count"]:2}  '
                  f'боковых выходов: {len(lb["exits"])}', flush=True)

    # По кругу: дрейф частоты и нагрева ложится на все конфигурации поровну,
    # а не на ту, что шла последней.
    for rep in range(args.reps):
        for r in rows:
            r['times'].append(time_one(bins[(r['tc'], r['cfg'])], args.iter)[1])
        print(f'  прогон {rep + 1}/{args.reps}', flush=True)

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
        return 'осталась'
    return '**выброшена**'


def report(args, arch, tcs, rows):
    L = []
    w = L.append
    w(f'# Лестница проверки границ — {args.label}')
    w('')
    w('ПОРОЖДЁННЫЙ ФАЙЛ — `impl/bench/ladder/ladder.py`. Как читать — '
      '`impl/docs/FINDING-61-bounds-ladder.md`.')
    w('')
    w(f'* дата: {datetime.date.today().isoformat()}')
    w(f'* система: `{platform.system()} {platform.release()}`, архитектура `{arch}`')
    cpu = 'эмулируется; /proc/cpuinfo принадлежит хосту' if args.emulated else cpu_name()
    w(f'* процессор: {cpu}')
    if args.note:
        w(f'* {args.note}')
    w(f'* массив: {LIM} × u32, индекс `i = (i + 1) & {MASK}`; итераций на прогон: '
      + f'{args.iter:,}'.replace(',', ' '))
    w(f'* прогонов на конфигурацию: {args.reps}, по кругу; берётся лучший')
    w('')
    w('| компилятор | версия | флаги |')
    w('|---|---|---|')
    for name, _, _, flags, ver in tcs:
        w(f'| {name} | `{ver}` | `{" ".join(flags)}` |')
    w('')
    if args.emulated:
        w('> ⚠ **Машина эмулируется (QEMU).** Время ниже не значит ничего и приведено '
          'только для полноты. Верны число команд в теле цикла и сумма (проверена).')
    else:
        w('> ⚠ Наносекунды включают частотное масштабирование и фон машины. '
          'Значат отношения к `none` внутри одной строки компилятора, а не абсолютные числа.')
    w('')
    w('| компилятор | конфигурация | команд в теле | Δ к none | проверка в цикле | '
      'нс/итер (лучшее) | медиана | разброс | к none |')
    w('|---|---|---:|---:|---|---:|---:|---:|---:|')
    for r in rows:
        w(f'| {r["tc"]} | `{r["cfg"]}` | {r["count"]} | {r["dcount"]:+d} | {verdict(r)} | '
          f'{r["best"]:.3f} | {r["median"]:.3f} | {r["spread"] * 100:.1f}% | {r["ratio"]:.3f} |')
    w('')
    w('*Команд в теле* — от метки обратного перехода до него самого включительно, '
      'по ассемблеру компилятора. *Разброс* — (худший − лучший) / лучший.')
    w('')
    w('## Тела циклов')
    w('')
    for r in rows:
        extra = ''
        if r['exits']:
            extra = ' — выход к ловушке: `' + '`, `'.join(r['exits']) + '`'
        w(f'### {r["tc"]} — `{r["cfg"]}` ({r["count"]} команд{extra})')
        w('')
        w('```asm')
        w(r['text'])
        w('```')
        w('')
    return '\n'.join(L)


if __name__ == '__main__':
    main()
