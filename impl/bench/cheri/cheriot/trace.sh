#!/bin/sh
# Cycles per instruction: the image runs in the SAFE variant with a core trace
# (cheriot_ibex_safe_sim_trace); 3 iterations each of A and B are cut from the trace.
# Needs the SDK clone next to it, which run.sh makes. Output: out/trace-cut.txt.
set -eu
HERE=$(cd "$(dirname "$0")/.." && pwd)
IMAGE=${IMAGE:-ghcr.io/cheriot-platform/devcontainer:latest}
docker run --rm -v "$HERE:/cheri" "$IMAGE" sh /cheri/cheriot/trace-inner.sh \
  > "$HERE/cheriot/out/trace-cut.txt"
cat "$HERE/cheriot/out/trace-cut.txt"
