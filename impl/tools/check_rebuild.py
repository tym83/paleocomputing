#!/usr/bin/env python3
"""Check of a full system rebuild: a fixed point over the object files.

The system is rebuilt by its own compiler inside itself on RTL. If the compiler
and the sources are consistent, the generated object files must match those
that were on the image, BYTE FOR BYTE.

Exceptions are listed explicitly and explained; otherwise the check degenerates into
"whatever came out is correct".
"""
import sys
sys.path.insert(0, "tools")
from oberonfs import Image

# Modules that do NOT compile on this image. This is a property of the image, not of
# our machine: each reason was verified separately.
BROKEN = {
    "RISC":  "pos 926 bad divisor — the constant 80000000H as a divisor "
             "is negative for a signed INTEGER",
    "ORC":   "import not available — imports V24, which is not on the image "
             "either as source or as a symbol file",
    "Net":   "incompatible parameters — the SCC call signatures diverged from "
             "SCC.Mod of the same image",
}

# ⚠ A byte-for-byte comparison BY ITSELF does not distinguish "rebuilt and matched" from
# "never touched": the first version of this check passed green on an untouched
# image. So below are listed not "allowed differences" but MANDATORY
# signs that the rebuild really happened. Their absence is
# a failure, not a relaxation.
REQUIRE_DIFF = {
    "Math.rsc": "the shipped binary is stale: the image has 449 words of code, "
                "the rebuild gives 447 with the same key 32C32F12",
}
REQUIRE_NEW = {
    "PIO.rsc": "was missing from the image entirely",
    "PIO.smb": "was missing from the image entirely",
}


def main(before, after):
    a, b = Image(before), Image(after)
    fa, fb = a.files(), b.files()
    same, diff, new, gone = [], [], [], []
    for n in sorted(set(fa) | set(fb)):
        if n not in fa:
            new.append(n)
        elif n not in fb:
            gone.append(n)
        elif a.read(fa[n]) == b.read(fb[n]):
            same.append(n)
        else:
            diff.append(n)

    rsc_same = [n for n in same if n.endswith(".rsc")]
    print(f"  files: before {len(fa)}, after {len(fb)}")
    print(f"  object files matching byte for byte: {len(rsc_same)}")

    bad = []
    for n in diff:
        if n in REQUIRE_DIFF:
            print(f"  expected difference {n}: {REQUIRE_DIFF[n]}")
        else:
            bad.append(f"{n} changed unexpectedly")
    for n in new:
        if n in REQUIRE_NEW:
            print(f"  appeared as expected {n}: {REQUIRE_NEW[n]}")
        else:
            bad.append(f"{n} appeared unexpectedly")
    for n in gone:
        bad.append(f"{n} disappeared")

    # The main check: object files of the modules that compile must match.
    for n in sorted(fa):
        if not n.endswith(".rsc"):
            continue
        mod = n[:-4]
        if mod in BROKEN or n in REQUIRE_DIFF:
            continue
        if n not in same:
            bad.append(f"{n} does not match, although the module compiles")

    for mod, why in BROKEN.items():
        print(f"  does not compile {mod}: {why}")

    # Positive signs: without them the comparison proves nothing.
    for n in REQUIRE_NEW:
        if n not in new:
            bad.append(f"{n} did NOT appear, so the rebuild did not run "
                       f"(this file is absent from the original image)")
    for n in REQUIRE_DIFF:
        if n not in diff:
            bad.append(f"{n} did NOT change, so the rebuild did not run "
                       f"(the shipped file is stale and must differ)")
    if len(rsc_same) < 35:
        bad.append(f"only {len(rsc_same)} object files matched")

    if bad:
        print("\n❌ the rebuild did not converge:")
        for x in bad:
            print("   ", x)
        return 1
    print(f"\n✅ SYSTEM FIXED POINT: {len(rsc_same)} object files "
          f"rebuilt byte for byte identically")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1], sys.argv[2]))
