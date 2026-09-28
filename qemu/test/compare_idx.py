#!/usr/bin/env python3
"""Сверка IDX (выпуск 14): QEMU с -machine oberon,chk=on,desc=on против RTL.

RTL здесь — нативная модель Verilator с -DWITH_DESC (impl/build/obj_desc/
run_tests_desc, режим --budget печатает все регистры): WASM-сборки ядра с
дескрипторами нет, а нативная — тот же RTL. Две программы:

  * tests/bench_bounds_d — цикл центрального номера с IDX (находка 81);
  * tests/t3_idx_q       — 40 случайных IDX и случайный выход за границу
                           (порождается tools/gen_idx_diff.py, как t3_idx_rand):
                           после бюджета машина стоит в обработчике ловушки,
                           так что сравнивается и ловушка.

Отрицательный контроль: с chk=on, но без desc=on состояние обязано разойтись.
Сравнение по журналу QEMU устроено как в compare_chk.py — см. его оговорки.
"""
import pathlib, subprocess, sys
sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from compare_chk import in_qemu, state_at, aligned, IMPL  # noqa: E402

# t3_idx_q — короткий вариант t3_idx_rand (40 случаев): ПЗУ QEMU — 512 слов,
# полный файл (1666 слов) в него не влезает, и QEMU молча не стартует.
CASES = (("bench_bounds_d", 8000), ("t3_idx_q", 520))


def prepare():
    tests = IMPL / "tests"
    subprocess.run([sys.executable, str(IMPL / "tools/gen_idx_diff.py"), "40", "14",
                    str(tests / "t3_idx_q.s")], check=True, capture_output=True)
    for n in ("t3_idx_q", "bench_bounds_d"):
        subprocess.run([sys.executable, str(IMPL / "tools/asm.py"), str(tests / f"{n}.s")],
                       check=True, capture_output=True)


def in_rtl(name, budget):
    out = subprocess.run([str(IMPL / "build/obj_desc/run_tests_desc"), str(IMPL / "tests" / name),
                          f"--budget={budget}"], capture_output=True, text=True, check=True).stdout
    f = next(l for l in out.splitlines() if l.startswith("REGS")).split()
    return {"regs": [int(x, 16) for x in f[1:17]], "pc": int(f[18], 16)}


def main():
    prepare()
    bad = 0
    for name, budget in CASES:
        binp = IMPL / "tests" / f"{name}.bin"
        rtl = in_rtl(name, budget)
        blocks = in_qemu(binp, budget, chk=True, extra=",desc=on")
        idx, hits = aligned(blocks, budget, rtl["pc"])
        # После HALT (B .) машина стоит на одном адресе, и записей с ним
        # несколько. Это не неоднозначность, если состояние во всех одинаково.
        if idx is None and len(hits) > 1 and \
                len({tuple(state_at(blocks, k)[0]) for k in hits}) == 1:
            idx = hits[0]
        if idx is None:
            print(f"  ❌ {name}: нет записи с адресом {rtl['pc']:08X} (подошло {len(hits)})")
            bad += 1; continue
        q, _ = state_at(blocks, idx)
        diff = [i for i in range(16) if q[i] != rtl["regs"][i]]
        if diff:
            for i in diff:
                print(f"  ❌ {name} R{i}: RTL {rtl['regs'][i]:08X}, QEMU {q[i]:08X}")
            bad += 1; continue
        print(f"  ✅ {name}: 16 регистров сошлись на {rtl['pc']:08X} после {budget} команд")
        plain, _ = state_at(in_qemu(binp, budget, chk=True), idx)   # CHK есть, IDX нет
        if plain == rtl["regs"]:
            print(f"  ❌ {name}: без desc=on то же состояние — сверка ничего не проверяет")
            bad += 1
        else:
            print(f"  ✅ {name}: без desc=on расходится "
                  f"{', '.join('R%d' % i for i in range(16) if plain[i] != rtl['regs'][i])}")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
