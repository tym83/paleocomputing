#!/usr/bin/env python3
"""Extract LM.Out from the disk image after a run in the system and compare it with the reference.

  python3 lm/outcheck.py IMAGE [N SEED "prompt"]
Default: the command from System.Tool of the lm/mkdisk.sh image: 16 1 "alice was ".
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
        print("  ❌ no LM.Out on the image: the command did not run")
        return 1
    got = img.read(fs["LM.Out"]).decode("latin-1")
    want = prompt + ref.generate(ref.Risc5(), n, seed, prompt)
    ok = got == want
    print(f"  LM.Out: {got!r}")
    print(f"  reference: {want!r}  {'match ✅' if ok else 'MISMATCH ❌'}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
