#!/usr/bin/env python3
"""Та же модель в QEMU (qemu-system-risc5) — только функциональная сверка.

QEMU такты не моделирует: он переводит команды RISC5 в код хоста и исполняет
их так быстро, как может. Поэтому отсюда берётся только ответ на вопрос «та
же система на другой реализации той же машины печатает тот же текст», и ни
одного числа о скорости.

Сценарий тот же, что scripts/lm.src для RTL: образ lm/mkdisk.sh (LM.Mod,
LM.Weights и две команды, дописанные в System.Tool), два средних щелчка —
компиляция внутри системы и генерация. Ввод — через QMP input-send-event,
экран — снимком кадрового буфера из памяти (pmemsave), без дисплея. Текст
сверяется с эталоном по файлу LM.Out, который модуль пишет на диск системы.

⚠ Клавиатура сюда не годится: нажатия, поданные через input-send-event,
до системы в нашей сборке QEMU не доходят (мышь доходит). Причину не
разбирали — поэтому команды лежат в System.Tool, а не набираются.

  python3 lm/qemu_run.py [каталог дерева QEMU]   (по умолчанию ../.qemu-work)
"""
import os, pathlib, shutil, subprocess, sys

HERE = pathlib.Path(__file__).resolve().parent
IMPL = HERE.parent
QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else IMPL.parent / ".qemu-work").resolve()
WORK = IMPL / "build" / "lm" / "qemu"
FB_BASE, FB_W, FB_H = 0xE7F00, 1024, 768
FB_BYTES = FB_W * FB_H // 8
# Окно System.Log на экране по умолчанию: правая колонка, от шапки до окна
# инструментов (координаты сверху вниз, как в сценариях).
LOG_X0, LOG_X1, LOG_Y0, LOG_Y1 = 640, 1024, 12, 250

def abs_val(v, size):
    # обратное к qemu_input_scale_axis(value, 0, 0x7FFF, 0, size)
    for a in range(v * 0x7FFF // size, v * 0x7FFF // size + 64):
        if a * size // 0x7FFF == v:
            return a
    raise ValueError(v)


def qmp(cmd, args):
    import json
    return json.dumps({"execute": cmd, "arguments": args}) if args else json.dumps({"execute": cmd})


def script():
    """Строки для stdin QMP с паузами: (секунды паузы, команда)."""
    out = [(1, qmp("qmp_capabilities", None)), (6, None)]     # загрузка системы

    def move(x, y):
        out.append((0.05, qmp("input-send-event", {"events": [
            {"type": "abs", "data": {"axis": "x", "value": abs_val(x, FB_W)}},
            {"type": "abs", "data": {"axis": "y", "value": abs_val(y, FB_H)}}]})))

    def click(x, y, b):
        move(x, y)
        for down in (True, False):
            out.append((0.3, qmp("input-send-event", {"events": [
                {"type": "btn", "data": {"down": down, "button": b}}]})))

    out.append((1, None))
    click(690, 569, "middle")
    out.append((5, None))
    click(690, 581, "middle")
    out.append((20, None))
    out.append((1, qmp("pmemsave", {"val": FB_BASE, "size": FB_BYTES, "filename": "/w/fb.bin"})))
    out.append((1, qmp("quit", None)))
    sh = []
    for pause, cmd in out:
        sh.append(f"sleep {pause}")
        if cmd:
            sh.append("echo '" + cmd.replace("'", "'\\''") + "'")
    return "; ".join(sh)


def fb_rows(raw):
    """Кадровый буфер -> строки пикселей сверху вниз (как на экране)."""
    wpl = FB_W // 32
    rows = []
    for y in range(FB_H):
        line = raw[(FB_H - 1 - y) * wpl * 4:(FB_H - y) * wpl * 4]
        bits = []
        for i in range(0, len(line), 4):
            w = int.from_bytes(line[i:i + 4], "little")
            bits += [(w >> b) & 1 for b in range(32)]
        rows.append(bits)
    return rows


def pbm_rows(path):
    """PBM в текстовом виде (P1) — так пишет кадры soc_tb."""
    t = path.read_text().split()
    assert t[0] == "P1"
    w, h = int(t[1]), int(t[2])
    px = [int(v) for v in t[3:3 + w * h]]
    return [px[y * w:(y + 1) * w] for y in range(h)]


def to_pbm(rows, path):
    path.write_text(f"P1\n{FB_W} {FB_H}\n" + "\n".join(" ".join(map(str, r)) for r in rows) + "\n")


def main():
    exe = QEMU / "build" / "qemu-system-risc5"
    if not exe.exists():
        raise SystemExit(f"  ❌ нет {exe} — сначала make -C qemu build")
    disk = IMPL / "build" / "lm" / "oberon-lm.dsk"
    if not disk.exists():
        subprocess.check_call(["bash", str(HERE / "mkdisk.sh")])
    WORK.mkdir(parents=True, exist_ok=True)
    shutil.copy(disk, WORK / "oberon.dsk")
    # ⚠ Образ надо вырастить заранее. Файловая система берёт новые секторы за
    # концом эталонного образа (~1 МБ); эмулятор на C и стенд RTL пишут туда
    # через fseek и файл растёт сам, а у QEMU привод raw фиксированного
    # размера — запись за конец отвергается, и система потом падает на
    # ASSERT в Files, читая заголовок файла, которого нет. 8 МБ хватает с запасом.
    with open(WORK / "oberon.dsk", "r+b") as f:
        f.truncate(8 * 1024 * 1024)
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (WORK / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    (WORK / "fb.bin").unlink(missing_ok=True)
    cmd = (f"({script()}) | timeout 120 /src/build/qemu-system-risc5 -M oberon -bios /w/prom.bin "
           f"-drive if=none,id=sd0,file=/w/oberon.dsk,format=raw -display none -serial none "
           f"-qmp stdio {'-d guest_errors -D /w/qemu.log ' if os.environ.get('LM_QEMU_DEBUG') else ''}"
           f"> /w/qmp.log 2>&1")
    subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src:ro", "-v", f"{WORK}:/w",
                    "qemu-build:risc5", cmd], check=False)
    fb = WORK / "fb.bin"
    if not fb.exists() or fb.stat().st_size != FB_BYTES:
        print((WORK / "qmp.log").read_text()[-2000:])
        raise SystemExit("  ❌ QEMU не отдал кадровый буфер")
    rows = fb_rows(fb.read_bytes())
    to_pbm(rows, WORK / "lm_qemu.pbm")
    print(f"  кадр QEMU: {WORK / 'lm_qemu.pbm'}")
    # Главная сверка — текст: модуль пишет его ещё и в LM.Out на диск системы.
    sys.stdout.flush()
    rc = subprocess.run([sys.executable, str(HERE / "outcheck.py"), str(WORK / "oberon.dsk")]).returncode
    ref = IMPL / "build" / "lm" / "lm_rtl.pbm"
    if ref.exists():
        rr = pbm_rows(ref)
        diff = sum(rows[y][x] != rr[y][x] for y in range(LOG_Y0, LOG_Y1) for x in range(LOG_X0, LOG_X1))
        full = sum(a != b for ra, rb in zip(rows, rr) for a, b in zip(ra, rb))
        print(f"  против кадра RTL (make lm-system): окно System.Log — {diff} пикселей "
              f"расходятся, весь кадр — {full}")
    print("  ✅ QEMU напечатал тот же текст" if rc == 0 else "  ❌ текст расходится")
    return rc


if __name__ == "__main__":
    sys.exit(main())
