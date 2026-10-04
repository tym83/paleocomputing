#!/bin/bash
# Build LM.Mod with the Oberon compiler and generate text.
#   lm/run.sh ENGINE N SEED "prompt"
# ENGINE: emu — Norebo emulator in C (fast, cycles from the model);
#         rtl — Norebo on Wirth's RTL (build/obj_nb/norebo_tb);
#         rtl-fast — the same on a core with a single-cycle FP multiplier (build/obj_nbf/norebo_tb);
#         rtl-fast2 — with a two-cycle one (FPMUL_FAST_REG, build/obj_nbr/norebo_tb).
# Compilation always uses the emulator: the object file does not depend on the engine (finding 22).
set -e
P="$(cd "$(dirname "$0")/.." && pwd)"; NB="$P/ext/norebo"
eng="${1:-emu}"; n="${2:-64}"; seed="${3:-1}"; prompt="${4:-alice was }"
d="$P/build/lm/run"; mkdir -p "$d"; cd "$d"
cp -f "$P/lm/LM.Mod" "$P/lm/LM.Weights" .
export NOREBO_PATH="$d:$NB/Norebo:$NB/Oberon:$NB/build2"
"$NB/norebo.bin" ORP.Compile LM.Mod/s > compile.log 2>&1 \
  || { cat compile.log; exit 1; }
grep -q "compiling LM" compile.log || { cat compile.log; exit 1; }
case "$eng" in
  emu)      bin="$NB/norebo.bin" ;;
  rtl)      bin="$P/build/obj_nb/norebo_tb" ;;
  rtl-fast) bin="$P/build/obj_nbf/norebo_tb" ;;
  rtl-fast2) bin="$P/build/obj_nbr/norebo_tb" ;;
  *) echo "engine: emu | rtl | rtl-fast | rtl-fast2"; exit 2 ;;
esac
# the LED port carries the measurement-window marks; the emulator prints each one, so hide them
NOREBO_CYCLES=1 "$bin" LM.Generate "$n" "$seed" "\"$prompt\"" 2>&1 | grep -v "^\[LEDs:"
