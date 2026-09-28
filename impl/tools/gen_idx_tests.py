#!/usr/bin/env python3
"""Направленные тесты команды IDX (индексация через дескриптор, выпуск 14).

Порождаются, а не пишутся руками: адрес обработчика ловушки (R12 = MT) и
ожидаемый R15 = адрес IDX + 4 считаются из числа слов, а не выписываются.
Ручной подсчёт слов в t2_chk.s держался на двенадцати WORD 0 для выравнивания.

Дескриптор — {длина[31:20], адрес[19:0]}. Каждый файл — один сценарий:

  t3_idx        законные индексы: адрес + (i << sh) для sh = 0..3, флаги C/OV
                не тронуты, N/Z по результату, 1 такт; затем i = длина -> ловушка
  t3_idx_neg    индекс -1 (беззнаково огромный) -> ловушка
  t3_idx_hi     индекс 0x1001 при длине 10: младшие 12 бит (1) меньше длины,
                ловит только проверка старших 20 бит индекса
  t3_idx_zero   обычный адрес (длина 0) как дескриптор, индекс 0 -> ловушка:
                нет дескриптора — нет доступа
  t3_idx_max    длина 4095 и адрес 0xFFFFF: крайние значения полей

В каждом сценарии с ловушкой проверяется: управление у обработчика (R5),
приёмник IDX не записан, команда после IDX не исполнилась, R15 = адрес IDX + 4.
"""
import pathlib

ORG = 0x00FFE000
OUT = pathlib.Path(__file__).resolve().parent.parent / 'tests'


def desc(length, adr):
    return (length << 20) | adr


def load32(r, val):
    """R := val тремя командами: MOV 0, MHI старшие, IOR младшие."""
    return [f'MOV  R{r}, 0', f'MHI  R{r}, 0x{val >> 16:04X}', f'IOR  R{r}, R{r}, 0x{val & 0xFFFF:04X}']


def build(name, what, body, trap):
    """body — список (команда, [ожидания]); trap — индекс команды IDX, которая
    обязана сработать (или None). Обработчик ставится сразу за телом."""
    head = ['MOV  R0, 0'] + load32(12, 0)  # R12 допишем, когда узнаем адрес
    words = len(head) + len(body) + 2      # + MOV R4 (не должна исполниться) + HALT
    handler = ORG + 4 * words
    head = ['MOV  R0, 0'] + load32(12, handler)
    lines = [f'; ПОРОЖДЁННЫЙ ФАЙЛ — правится tools/gen_idx_tests.py, не руками.',
             f'; {name}: {what}']
    lines += [f'        {h}' for h in head]
    idx_adr = None
    for k, (insn, exps) in enumerate(body):
        if k == trap:
            idx_adr = ORG + 4 * (len(head) + k)
        lines.append(f'        {insn}')
        lines += [f'; EXPECT {e}' for e in exps]
    lines += ['        MOV  R4, 0x1111            ; не должна исполниться', '        HALT']
    lines += ['handler:', '        MOV  R5, 0x2222']
    if trap is not None:
        lines += ['; EXPECT R5 = 8738', '; EXPECT R4 = 0', f'; EXPECT R15 = {idx_adr + 4}',
                  '; EXPECT R3 = 7']
    lines.append('        HALT')
    (OUT / f'{name}.s').write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'  {name}.s')


def trap_case(name, what, d, i):
    body = [(l, []) for l in load32(2, d)] + [(l, []) for l in load32(1, i & 0xFFFFFFFF)]
    body += [('MOV  R3, 7                  ; приёмник: должен остаться 7', [])]
    body += [('IDX  R3, R2, R1, 2', [])]
    build(name, what, body, trap=len(body) - 1)


def main():
    D = desc(10, 0x1000)
    body = [(l, []) for l in load32(2, D)]
    body += [('MOV  R6, -1', []),
             ('ADD  R7, R6, R6             ; C=1 (перенос), N=1', []),
             ('MOV  R1, 3', [])]
    # MOV не трогает C: к IDX приходим с C=1. IDX обязана его оставить.
    for sh in range(4):
        body.append((f'IDX  R3, R2, R1, {sh}',
                     [f'R3 = {0x1000 + (3 << sh)}', 'C = 1', 'N = 0', 'Z = 0', 'CYCLES = 1']))
    body += [('MOV  R1, 9                  ; последний законный индекс', []),
             ('IDX  R2, R2, R1, 1           ; приёмник = дескриптор: запись на место',
              [f'R2 = {0x1000 + 18}', 'CYCLES = 1'])]
    body += [(l, []) for l in load32(2, D)]
    body += [('MOV  R3, 7', []),
             ('MOV  R1, 10                 ; индекс = длина', []),
             ('IDX  R3, R2, R1, 2', [])]
    build('t3_idx', 'законные индексы, затем индекс = длина', body, trap=len(body) - 1)
    trap_case('t3_idx_neg', 'индекс -1', D, -1)
    trap_case('t3_idx_hi', 'индекс 0x1001 при длине 10 (старшие биты индекса)', D, 0x1001)
    trap_case('t3_idx_zero', 'обычный адрес 0x1000 (длина 0) как дескриптор', 0x1000, 0)
    M = desc(4095, 0xFFFFF)
    body = [(l, []) for l in load32(2, M)] + [('MOV  R1, 4094', [])]
    body += [('IDX  R3, R2, R1, 3', [f'R3 = {0xFFFFF + (4094 << 3)}', 'CYCLES = 1'])]
    body += [('MOV  R3, 7', []), ('MOV  R1, 4095', []), ('IDX  R3, R2, R1, 3', [])]
    build('t3_idx_max', 'длина 4095, адрес 0xFFFFF', body, trap=len(body) - 1)


if __name__ == '__main__':
    main()
