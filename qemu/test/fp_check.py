#!/usr/bin/env python3
"""Сверка плавающей точки QEMU с эталоном — целиком, от исходников до вердикта.

Раньше эта сверка была сделана один раз руками (находка 50), и повторить её
было нечем: ни генератора эталонной таблицы, ни образа ПЗУ в репозитории не
было. Любая правка fp.c могла бы молча сломать арифметику.

Шаги:
  1. fp_ref.c + ext/refemu/risc-fp.c  ->  эталонная таблица;
  2. fp.s нашим ассемблером, операнды — в том же ПЗУ по слову 64;
  3. qemu-system-risc5 без экрана, снимок памяти с адреса 0x10000 через QMP;
     что программа дошла до конца, видно по метке за результатами;
  4. fp_diff.py;
  5. отрицательный контроль: та же сверка на испорченных данных обязана упасть.

  fp_check.py [<дерево QEMU со сборкой>]

Операнды — только VALS из fp_diff.py: и таблица, и ПЗУ строятся из него.
"""
import os, pathlib, struct, subprocess, sys

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parents[1]
IMPL = ROOT / "impl"
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(IMPL / "tools"))
from fp_diff import VALS, main as fp_diff    # noqa: E402
import asm                                   # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
WORK = IMPL / "build/qfp"
DATA_WORD = 64                 # fp.s читает операнды с FFE100
ROM_WORDS = 512                # ПЗУ в железе — 512 слов (PROM.v)
OUT_ADDR = 0x10000
N = len(VALS)
OUT_WORDS = N * N * 4 + N * 2  # четыре действия на пару плюс два перевода
DONE_MARK = 0x600D             # fp.s кладёт её сразу за результатами


def reference():
    """Эталонная таблица: fp_ref.c поверх risc-fp.c, операнды — из VALS."""
    exe = WORK / "fp_ref"
    cc = os.environ.get("CC", "cc")
    subprocess.run([cc, "-O2", "-std=c99", "-I", str(IMPL / "ext/refemu"),
                    "-o", str(exe), str(HERE / "fp_ref.c"),
                    str(IMPL / "ext/refemu/risc-fp.c")], check=True)
    out = subprocess.run([str(exe)] + [f"0x{v:08X}" for v in VALS],
                         check=True, capture_output=True, text=True).stdout
    path = WORK / "fp_expected.txt"
    path.write_text(out)
    return path, len(out.splitlines())


def rom():
    """Образ ПЗУ: программа, пустота до слова 64, затем операнды."""
    words, _, _ = asm.assemble((HERE / "fp.s").read_text())
    if len(words) > DATA_WORD:
        raise SystemExit(f"  ❌ программа ({len(words)} слов) наезжает на данные "
                         f"в слове {DATA_WORD}")
    image = words + [0] * (DATA_WORD - len(words)) + list(VALS)
    assert len(image) <= ROM_WORDS
    path = WORK / "fp.rom"
    path.write_bytes(struct.pack(f"<{len(image)}I", *image))
    return path


def run_qemu(rom_path):
    """Прогон без экрана, снимок памяти через QMP. Возвращает путь к снимку."""
    out = WORK / "fp.out"
    out.unlink(missing_ok=True)
    # ⚠ Монитор только QMP: сборка идёт с --without-default-features, и
    # человеческого монитора (HMP, `info registers`) в ней нет. Поэтому конец
    # программы виден не по PC, а по метке, которую fp.s кладёт за результатами.
    #
    # Программа укладывается в микросекунды; две секунды — с огромным запасом,
    # а что она правда дошла до конца, проверяет метка, а не время.
    size = (OUT_WORDS + 1) * 4
    cmds = ['{"execute":"qmp_capabilities"}',
            '{"execute":"pmemsave","arguments":{"val":%d,"size":%d,'
            '"filename":"/w/fp.out"}}' % (OUT_ADDR, size),
            '{"execute":"quit"}']
    qmp = "sleep 1; echo '%s'; sleep 2; echo '%s'; sleep 1; echo '%s'" % tuple(cmds)
    # ⚠ Дерево QEMU монтируется только на чтение: сверка ничего в нём не
    # оставляет и может гоняться на чужой, уже собранной копии.
    cmd = (f"({qmp}) | timeout 60 /src/build/qemu-system-risc5 -M oberon "
           f"-bios /w/{rom_path.name} -display none -serial none "
           f"-qmp stdio 2>&1")
    res = subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src:ro",
                          "-v", f"{WORK}:/w", "qemu-build:risc5", cmd],
                         capture_output=True, text=True)
    if not out.exists() or out.stat().st_size != size:
        print(res.stdout[-2000:], res.stderr[-2000:], sep="\n")
        raise SystemExit("  ❌ QEMU не отдал снимок памяти")
    words = list(struct.unpack(f"<{OUT_WORDS + 1}I", out.read_bytes()))
    if words[-1] != DONE_MARK:
        raise SystemExit(f"  ❌ программа не дошла до конца: за результатами "
                         f"{words[-1]:08X}, ждали метку {DONE_MARK:08X}")
    # Снимок пишет контейнер, в CI — от root, поэтому результаты кладём
    # отдельным файлом, а не переписываем чужой.
    res_path = WORK / "fp.res"
    res_path.write_bytes(struct.pack(f"<{OUT_WORDS}I", *words[:-1]))
    return res_path


def negative(out_path, exp_path):
    """Сверка обязана уметь падать: портим по одному значению с каждой стороны."""
    raw = bytearray(out_path.read_bytes())
    raw[0] ^= 1                                  # младший бит первого результата
    bad_out = WORK / "fp.res.bad"
    bad_out.write_bytes(raw)

    lines = exp_path.read_text().splitlines()
    x, y, op, r = lines[-1].split()              # последний перевод
    lines[-1] = f"{x} {y} {op} {int(r, 16) ^ 0x00400000:08X}"
    bad_exp = WORK / "fp_expected.bad.txt"
    bad_exp.write_text("\n".join(lines) + "\n")

    ok = True
    for label, o, e in (("испорчен вывод машины", bad_out, exp_path),
                        ("испорчен эталон", out_path, bad_exp)):
        print(f"  — отрицательный контроль: {label}")
        if fp_diff(o, e) != 1:
            print(f"  ❌ {label}, а сверка этого не заметила")
            ok = False
    return ok


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    if not (QEMU / "build/qemu-system-risc5").exists():
        raise SystemExit(f"  ❌ нет {QEMU}/build/qemu-system-risc5 — сначала make build")

    exp_path, n_exp = reference()
    if n_exp != OUT_WORDS:
        raise SystemExit(f"  ❌ эталон дал {n_exp} строк, ждали {OUT_WORDS}")
    print(f"  эталон: {n_exp} случаев из risc-fp.c")

    out_path = run_qemu(rom())

    if fp_diff(out_path, exp_path) != 0:
        return 1
    if not negative(out_path, exp_path):
        return 1
    print("  ✅ отрицательный контроль: порча с обеих сторон поймана")
    return 0


if __name__ == "__main__":
    sys.exit(main())
