#!/bin/sh
# Builds and runs the measurement on CHERIoT-Ibex in the SAFE simulator (a
# cycle-accurate Verilator model of the core). Everything runs inside the public CHERIoT container.
#
#   ./run.sh
#
# The cheriot-rtos SDK is cloned next to it (impl/bench/cheri/cheriot-rtos, not
# tracked in git) at the pinned commit RTOS_REV. The directory lives inside the tree
# because docker in colima only sees /Users.
#
# Output in out/: run.log (simulator UART), kernels.dis (disassembly of
# sum_a/sum_b from the image), compile-cmd.txt (compile line for loop.c), versions.txt.
set -eu
HERE=$(cd "$(dirname "$0")/.." && pwd)          # impl/bench/cheri
IMAGE=${IMAGE:-ghcr.io/cheriot-platform/devcontainer:latest}
BOARD=${BOARD:-ibex-safe-simulator}
RTOS_REV=${RTOS_REV:-17ae734ba98e4f084bfaa2bf07f0447ca4d7e127}
RTOS="$HERE/cheriot-rtos"

if [ ! -d "$RTOS/.git" ]; then
  git clone --recurse-submodules https://github.com/CHERIoT-Platform/cheriot-rtos "$RTOS"
fi
git -C "$RTOS" checkout -q "$RTOS_REV"
git -C "$RTOS" submodule update -q --init --recursive

OUT="$HERE/cheriot/out"
mkdir -p "$OUT"

docker run --rm -e BOARD="$BOARD" -v "$HERE:/cheri" "$IMAGE" sh -euc '
  # Build in a copy of the tree so as not to litter the mounted directory.
  cp -r /cheri /tmp/work && cd /tmp/work/cheriot
  rm -rf out build .xmake
  xmake config --sdk=/cheriot-tools/ --board="$BOARD" -y > /dev/null
  xmake -v -y > /tmp/build.log 2>&1 || { cat /tmp/build.log; exit 1; }
  grep -E "loop\.c" /tmp/build.log | sed "s/\x1b\[[0-9;]*m//g" > /cheri/cheriot/out/compile-cmd.txt
  xmake run 2>&1 | sed "s/\x1b\[[0-9;]*m//g" > /cheri/cheriot/out/run.log || true
  # Disassembly of exactly what ran: the kernels from the built image
  # (branch addresses already resolved; one copy each in the bench and probe compartments).
  fw=$(find build -type f -name bounds_bench | head -1)
  /cheriot-tools/bin/llvm-objdump -d --no-show-raw-insn \
      --disassemble-symbols=sum_a,sum_b "$fw" > /cheri/cheriot/out/kernels.dis
  {
    echo "board: $BOARD"
    /cheriot-tools/bin/clang --version | head -1
    xmake --version | head -1 | sed "s/\x1b\[[0-9;]*m//g"
  } > /cheri/cheriot/out/versions.txt
'
{
  echo "image: $(docker image inspect "$IMAGE" --format '{{index .RepoDigests 0}} ({{.Architecture}})')"
  echo "cheriot-rtos: $(git -C "$RTOS" rev-parse HEAD)"
} >> "$OUT/versions.txt"
cat "$OUT/run.log"
