#!/usr/bin/env python3
"""Сравнивает таблицы декодера двух ядер и показывает, какие кодировки различаются."""
import sys, collections
def load(p):
    d = {}
    for line in open(p):
        if line.startswith("#"): continue
        f = line.split()
        d[(f[0], f[1], f[2])] = tuple(f[3:])
    return d
# Третий аргумент — ожидаемые кодировки через запятую, «нибл:op» в шестнадцатеричном
# виде. По умолчанию одна CHK (0001, op=1); ядро с дескрипторами добавляет IDX
# (0001, op=8, выпуск 14).
a, b = load(sys.argv[1]), load(sys.argv[2])
expect = {tuple(x.split(":")) for x in (sys.argv[3] if len(sys.argv) > 3 else "1:1").split(",")}
diff = collections.defaultdict(list)
for k in sorted(a):
    if a[k] != b[k]: diff[(k[0], k[1])].append(k[2])   # k[2] = "<поле a>.<набор>"
print(f"комбинаций проверено: {len(a)}  ({len(set((k[0],k[1]) for k in a))} кодировок × 16 значений поля a × 5 наборов операндов)")
if not diff:
    print("расхождений НЕТ ❌ — новая инструкция не декодируется, что тоже ошибка")
    sys.exit(1)
print(f"\nразличающихся кодировок: {len(diff)}")
for (nib, op), sets in sorted(diff.items()):
    print(f"  IR[31:28]={int(nib,16):04b}  op={int(op,16):<2}  различий: {len(sets)} из 80 (16 значений a × 5 наборов)")
got = set(diff.keys())
print()
names = {("1", "1"): "CHK", ("1", "8"): "IDX"}
if got == expect:
    what = ", ".join(f"(0001, op={int(o,16)}) — {names.get((n,o), '?')}" for n, o in sorted(expect))
    print(f"✅ различаются РОВНО ожидаемые кодировки: {what}")
    sys.exit(0)
print(f"❌ ожидалось {sorted(expect)}, получено {sorted(got)}")
sys.exit(1)
