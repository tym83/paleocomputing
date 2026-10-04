#!/bin/bash
# The "descriptors" stage (episode 14): four code generator configurations on three
# workloads, each in a FULLY homogeneous environment (build_cfg_toolchain.sh):
#   A — no checks, B — software (stock), E — CHK, F — E + IDX for open
#   arrays.
# Workloads:
#   compile  — the compiler compiles five system modules (as in finding 21)
#   arr      — bench/ArrBench.Mod: only arrays of known length (F = E in code)
#   open     — bench/OpenBench.Mod: the same kernels on open arrays
# Cycles come from the Norebo emulator's cycle model, cross-checked against RTL (finding 17);
# IDX costs one cycle in it, as in RTL (tests/t3_idx*, make idx-diff).
#
# Correctness check: each compilation workload is repeated by a compiler of the same
# configuration but executing STOCK code (stage 1). The output must match
# byte for byte; otherwise the configuration's code executes incorrectly, and the cycles are worthless.
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"; OUT="$P/build/md"
LOAD="Texts.Mod Fonts.Mod Files.Mod Modules.Mod Oberon.Mod"
for c in A B E F; do
  [ -f "$P/build/tc/$c/s2/InnerCore" ] || bash "$P/tools/build_cfg_toolchain.sh" $c > /dev/null
done
run() {  # $1 directory, $2 stage binaries, the rest is the command
  local d="$1" bin="$2"; shift 2
  # build2 goes last and only for the .smb files: stage 1 does not write symbol files
  # (the interfaces are the same as stock), and the .rsc files are found earlier, in $bin.
  cd "$d"; NOREBO_CYCLES=1 NOREBO_PATH="$d:$bin:$NB/Norebo:$NB/Oberon:$NB/build2" \
    perl -e 'alarm 120; exec @ARGV' "$NB/norebo.bin" "$@" > run.log 2>&1 || true
  grep -oE "CYCLES [0-9]+ INSNS [0-9]+" run.log || echo "CYCLES 0 INSNS 0"
}
rm -rf "$OUT"; mkdir -p "$OUT"
printf "%-4s %-8s %14s %14s  %s\n" cfg workload cycles instructions "code / check"
for c in A B E F; do
  S2="$P/build/tc/$c/s2"
  # compile
  d="$OUT/$c-compile"; mkdir -p "$d"; args=""; for m in $LOAD; do args="$args $m/s"; done
  r=$(run "$d" "$S2" ORP.Compile $args)
  code=$(grep -E "^\s+compiling" "$d/run.log" | awk '{s+=$(NF-2)} END {print s}')
  d1="$OUT/$c-compile-s1"; mkdir -p "$d1"; run "$d1" "$P/build/tc/$c/s1" ORP.Compile $args > /dev/null
  same=ok; for m in $LOAD; do cmp -s "$d/${m%.Mod}.rsc" "$d1/${m%.Mod}.rsc" || same=DIFFERENT; done
  printf "%-4s %-8s %s  code %s words, output = stage 1: %s\n" $c compile "$r" "$code" "$same"
  # arr / open
  for w in ArrBench OpenBench; do
    d="$OUT/$c-$w"; mkdir -p "$d"; cp "$P/bench/$w.Mod" "$d/"
    run "$d" "$S2" ORP.Compile $w.Mod/s > /dev/null; mv run.log compile.log
    # E and F stamp version 2 and 3; the Norebo loader rejects them (as does the
    # system one). For the bench, on a copy, we set it back to 1 (as in finding 21).
    python3 "$P/tools/rsc_setversion.py" 1 $w.rsc > /dev/null
    k=$(python3 "$P/tools/count_traps.py" $w.rsc | tr -s ' ')
    r=$(run "$d" "$S2" $w.Run)
    bad=$(grep -vcE "^CYCLES" run.log || true)   # anything but the counter line is a failure
    printf "%-4s %-8s %s  %s%s\n" $c $w "$r" "$k" "$( [ "$bad" = 0 ] || echo '  ❌ trap during execution')"
  done
done | tee "$OUT/summary.txt"
