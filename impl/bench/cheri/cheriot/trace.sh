#!/bin/sh
# Такты по командам: образ гоняется в варианте SAFE с трассой ядра
# (cheriot_ibex_safe_sim_trace), из трассы вырезаются по 3 итерации A и B.
# Нужен клон SDK рядом — его делает run.sh. Вывод: out/trace-cut.txt.
set -eu
HERE=$(cd "$(dirname "$0")/.." && pwd)
IMAGE=${IMAGE:-ghcr.io/cheriot-platform/devcontainer:latest}
docker run --rm -v "$HERE:/cheri" "$IMAGE" sh /cheri/cheriot/trace-inner.sh \
  > "$HERE/cheriot/out/trace-cut.txt"
cat "$HERE/cheriot/out/trace-cut.txt"
