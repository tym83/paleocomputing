#!/usr/bin/env python3
"""Снять LM.Out с образа диска после прогона в системе и сверить с эталоном.

  python3 lm/outcheck.py ОБРАЗ [N ЗЕРНО "затравка"]
По умолчанию — команда из System.Tool образа lm/mkdisk.sh: 16 1 "alice was ".
"""
import pathlib, sys
HERE = pathlib.Path(__file__).resolve().parent
sys.path[:0] = [str(HERE), str(HERE.parent / "tools")]
import ref
from oberonfs import Image


def main():
    img = Image(sys.argv[1])
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 16
    seed = int(sys.argv[3]) if len(sys.argv) > 3 else 1
    prompt = sys.argv[4] if len(sys.argv) > 4 else "alice was "
    fs = img.files()
    if "LM.Out" not in fs:
        print("  ❌ на образе нет LM.Out — команда не отработала")
        return 1
    got = img.read(fs["LM.Out"]).decode("latin-1")
    want = prompt + ref.generate(ref.Risc5(), n, seed, prompt)
    ok = got == want
    print(f"  LM.Out: {got!r}")
    print(f"  эталон: {want!r}  {'совпало ✅' if ok else 'РАСХОЖДЕНИЕ ❌'}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
