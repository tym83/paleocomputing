#!/bin/bash
# An HONEST measurement of the dynamic cost of run-time checks.
#
# ⚠ Found by the audit: the two-stage scheme in measure3.sh repeated the very mistake
# it was guarding against. In stage 2 each configuration rebuilt the compiler
# FROM ITS OWN patched ORG.Mod, so compiler A not only contained no
# checks inside, it also did NOT GENERATE them, i.e. it did less work.
# The confound moved one stage later instead of disappearing.
#
# Here stage 2 is built from the REFERENCE ORG.Mod for all configurations.
# Then the generated code is bit-for-bit identical, and the ONLY difference is the presence of checks
# inside the compiler's own binary code. That is exactly the cost of executing them.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
COMP="ORS.Mod ORB.Mod ORG.Mod ORP.Mod"
LOAD="${*:-Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod}"

# stage 2: with configuration X's compiler, build the compiler FROM THE REFERENCE source
# ⚠ The second trap I fell into during the fix itself: NOREBO_PATH serves
# BOTH the lookup of .rsc (the compiler we compile with) AND the lookup of .Mod (what we compile).
# If build/cfgX is put on the path, not only the compiler but also the
# PATCHED ORG.Mod is taken from there, and the generated code diverges again.
# Solution: a separate directory with only the configuration's binary modules, no sources.
# ⚠ Found during the fix: the path was wrong. The configurations' binary modules live
# in build/s2X (built by stage 1 in tools/measure3.sh), while build/cfgX holds only
# the ORG.Mod source. Copying ran with `|| true`, so missing files
# were swallowed: all three configurations ended up being the same Norebo
# compiler, the "identity check" passed trivially, and the difference came out
# exactly +0.00%. The same class of green-on-failure that the mutation audit exposed.
for cfg in A B E; do
  src="$P/build/s2$cfg"
  if ! ls "$src"/ORP.rsc >/dev/null 2>&1; then
    echo "❌ no binary modules for configuration $cfg in $src" >&2
    echo "   first: make configs && bash tools/measure3.sh" >&2
    exit 1
  fi
  bin="$P/build/onlyrsc$cfg"; rm -rf "$bin"; mkdir -p "$bin"
  cp "$src"/*.rsc "$bin"/
  # Stage 1 does not rewrite the symbol files (the sources are the same), so they
  # may be missing there; they are taken from the standard Norebo path. A missing .smb
  # is acceptable, a missing .rsc is not, and that is checked strictly above.
  if ls "$src"/*.smb >/dev/null 2>&1; then cp "$src"/*.smb "$bin"/; fi
  d="$P/build/clean2$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $COMP; do args="$args $m/s"; done
  NOREBO_PATH="$d:$bin:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > build.log 2>&1
done

# ⚠ Configuration E stamps version 2 into its output, a deliberate lock so that
# the old loader (versionkey = 1X in Modules.Mod) does not accept code with hardware
# CHK. The lock works: without this step stage 2 for E simply did NOT LOAD,
# the run produced an empty log, and `set -e` aborted the script right after "workload:".
# That was exactly the "script prints nothing" symptom. For the measurement the version
# is set back to 1, on a copy in build/, deliberately and only here.
python3 "$P/tools/rsc_setversion.py" 1 "$P"/build/clean2E/*.rsc > /dev/null

# The stage 2 binary modules MUST differ; that is the point: A has no checks inside,
# B and E do. But the code they GENERATE on the workload must match:
# all three are built from the reference ORG.Mod and therefore emit the same thing.
echo "workload: $LOAD"
for cfg in A B E; do
  d="$P/build/cleanrun$cfg"; rm -rf "$d"; mkdir -p "$d"; cd "$d"
  args=""; for m in $LOAD; do args="$args $m/s"; done
  NOREBO_CYCLES=1 NOREBO_PATH="$P/build/clean2$cfg:$NB/Norebo:$NB/Oberon:$NB/build2" \
    "$NB/norebo.bin" ORP.Compile $args > run.log 2>&1
done

# control: the code generated on the workload must be IDENTICAL for all three
echo; echo "control: code generated on the workload"
ok=1
for f in Texts Fonts Files Modules Oberon; do
  a=$(md5 -q "$P/build/cleanrunA/$f.rsc" 2>/dev/null)
  b=$(md5 -q "$P/build/cleanrunB/$f.rsc" 2>/dev/null)
  e=$(md5 -q "$P/build/cleanrunE/$f.rsc" 2>/dev/null)
  if [ -n "$a" ] && [ "$a" = "$b" ] && [ "$b" = "$e" ]; then printf "  %-9s ✅ identical\n" "$f"
  else printf "  %-9s ❌ differs\n" "$f"; ok=0; fi
done
[ $ok -eq 1 ] || { echo; echo "❌ CONTROL FAILED: the configurations generate different code,"
                   echo "   so the cycle difference includes code generation work"; exit 1; }

python3 - "$P/build" <<'PY'
import re, sys, pathlib
b = pathlib.Path(sys.argv[1])
def get(c):
    t = (b / f"cleanrun{c}" / "run.log").read_text(errors="replace")
    m = re.search(r"CYCLES (\d+) INSNS (\d+)", t)
    code = sum(int(x) for x in re.findall(r"^\s+compiling \w+\s+(\d+)", t, re.M))
    return (int(m.group(1)), int(m.group(2)), code)
A, B_, E = get("A"), get("B"), get("E")
print(f"\n{'configuration':<24}{'cycles':>14}{'instructions':>14}{'code':>8}")
print("-"*62)
for n, v in (("A: no checks", A), ("B: software", B_), ("E: hardware", E)):
    print(f"{n:<24}{v[0]:>14,}{v[1]:>14,}{v[2]:>8,}")
print("-"*62)
print(f"\nHONEST cost of the checks (the generated code is identical):")
print(f"  software     cycles +{100*(B_[0]-A[0])/A[0]:.2f}%   instr. +{100*(B_[1]-A[1])/A[1]:.2f}%")
print(f"  hardware     cycles +{100*(E[0]-A[0])/A[0]:.2f}%   instr. +{100*(E[1]-A[1])/A[1]:.2f}%")
# ⚠ If the configurations gave identical numbers there is nothing to divide by: this is not a
# "zero cost" result but a sign that three copies of one compiler were compared.
if B_[0] == A[0] and E[0] == A[0]:
    print("\n❌ all three configurations gave IDENTICAL numbers, so the same")
    print("   binary code was compared. The measurement is invalid.")
    sys.exit(1)
print(f"\n  the hardware removes {100*(B_[0]-E[0])/(B_[0]-A[0]):.1f}% of the cost of the checks")
PY
