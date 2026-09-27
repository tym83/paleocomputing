#!/bin/sh
# Сборка и прогон замера на CHERIoT-Ibex в симуляторе SAFE (Verilator-модель
# ядра, потактовая). Всё внутри публичного контейнера CHERIoT.
#
#   ./run.sh
#
# SDK cheriot-rtos клонируется рядом (impl/bench/cheri/cheriot-rtos, в git не
# идёт) на закреплённом коммите RTOS_REV. Каталог лежит внутри дерева, потому
# что docker в colima видит только /Users.
#
# Вывод в out/: run.log (UART симулятора), kernels.dis (дизассемблер
# sum_a/sum_b из образа), compile-cmd.txt (строка компиляции loop.c), versions.txt.
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
  # Сборка — в копии дерева, чтобы не мусорить в смонтированном каталоге.
  cp -r /cheri /tmp/work && cd /tmp/work/cheriot
  rm -rf out build .xmake
  xmake config --sdk=/cheriot-tools/ --board="$BOARD" -y > /dev/null
  xmake -v -y > /tmp/build.log 2>&1 || { cat /tmp/build.log; exit 1; }
  grep -E "loop\.c" /tmp/build.log | sed "s/\x1b\[[0-9;]*m//g" > /cheri/cheriot/out/compile-cmd.txt
  xmake run 2>&1 | sed "s/\x1b\[[0-9;]*m//g" > /cheri/cheriot/out/run.log || true
  # Дизассемблер ровно того, что исполнялось: ядра из собранного образа
  # (адреса переходов уже разрешены; по копии в компартментах bench и probe).
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
