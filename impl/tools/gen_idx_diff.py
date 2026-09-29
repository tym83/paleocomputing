#!/usr/bin/env python3
"""Дифференциал команды IDX: модель — RTL — эмулятор Norebo.

Порождает tests/t3_idx_rand.s: N случайных случаев «дескриптор, индекс,
масштаб, состояние флагов», ожидания для каждого посчитаны моделью ниже,
написанной по тексту 14-episode-descriptors.md, а не по RTL. Тот же файл
прогоняется на ядре RTL (build/obj_desc/run_tests_desc) и на процессоре
Norebo (build/emu_tests, tb/emu_tests.c) — эмуляторе, на котором сняты все
замеры компиляции. Три независимых описания одной команды должны совпасть.

Последний случай — случайный выход за границу: ловушка, R15 = адрес IDX + 4.
"""
import pathlib, random, sys

ORG = 0x00FFE000
OUT = pathlib.Path(__file__).resolve().parent.parent / 'tests' / 't3_idx_rand.s'


def model_idx(desc, i, sh):
    """(результат, ловушка?) — по дизайну выпуска, независимо от RTL."""
    length, adr = desc >> 20, desc & 0xFFFFF
    if i >= length:
        return None, True
    return (adr + (i << sh)) & 0xFFFFFF, False


def load32(r, v):
    return [f'MOV  R{r}, 0', f'MHI  R{r}, 0x{v >> 16:04X}', f'IOR  R{r}, R{r}, 0x{v & 0xFFFF:04X}']


def main(n=150, seed=14, out=OUT):   # 150 случаев — 1666 слов, от ORG помещается 2048
    rnd = random.Random(seed)
    body, exps = [], {}
    def emit(line, *e):
        body.append(line)
        if e: exps[len(body)] = list(e)   # проверка — когда машина подошла к следующему слову
    for _ in range(n):
        length = rnd.choice([1, 2, 3, rnd.randint(1, 63), rnd.randint(1, 4095), 4095])
        adr = rnd.choice([0, 0xFFFFF, rnd.randint(0, 0xFFFFF)])
        d = (length << 20) | adr
        i = rnd.choice([0, length - 1, rnd.randint(0, length - 1)])
        sh = rnd.randint(0, 3)
        f = rnd.getrandbits(32)                      # R6: C и OV от ADD R7, R6, R6
        c, ov = f >> 31, ((f >> 31) ^ (f >> 30)) & 1
        dst = rnd.choice([3, 2])                     # иногда приёмник = дескриптор
        res, trap = model_idx(d, i, sh)
        assert not trap
        for l in load32(2, d) + load32(1, i) + load32(6, f):
            emit(l)
        emit('ADD  R7, R6, R6')
        emit(f'IDX  R{dst}, R2, R1, {sh}', f'R{dst} = {res}', f'C = {c}', f'V = {ov}',
             f'Z = {int(res == 0)}', 'N = 0', 'CYCLES = 1')
    # случайный выход за границу
    length = rnd.randint(1, 4095); d = (length << 20) | rnd.randint(0, 0xFFFFF)
    i = rnd.choice([length, rnd.randint(length, 0xFFFFFFFF)])
    assert model_idx(d, i, 2)[1]
    for l in load32(2, d) + load32(1, i):
        emit(l)
    emit('MOV  R3, 7')
    emit('IDX  R3, R2, R1, 2')
    idx_pos = len(body) - 1
    head = 4                                         # MOV R0 + три команды R12
    handler = ORG + 4 * (head + len(body) + 2)
    lines = ['; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_diff.py, не руками.',
             f'; {n} случайных IDX (зерно {seed}) и один случайный выход за границу.',
             '        MOV  R0, 0'] + [f'        {l}' for l in load32(12, handler)]
    for k, l in enumerate(body):
        lines.append(f'        {l}')
        lines += [f'; EXPECT {e}' for e in exps.get(k + 1, [])]
    lines += ['        MOV  R4, 0x1111            ; не должна исполниться', '        HALT',
              'handler:', '        MOV  R5, 0x2222',
              '; EXPECT R5 = 8738', '; EXPECT R4 = 0', '; EXPECT R3 = 7',
              f'; EXPECT R15 = {ORG + 4 * (head + idx_pos) + 4}', '        HALT']
    out = pathlib.Path(out)
    out.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'  {out.name}: {n} случаев')


if __name__ == '__main__':
    # аргументы: [число случаев [зерно [файл]]] — QEMU берёт ПЗУ на 512 слов,
    # поэтому его сверка (qemu/test/compare_idx.py) порождает свой короткий вариант
    a = sys.argv[1:]
    main(*(int(x) for x in a[:2]), *(a[2:3]))
