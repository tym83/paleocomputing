#!/bin/sh
# Inner part of trace.sh: runs INSIDE THE CONTAINER. Builds the image, runs it
# in the SAFE simulator variant with the Ibex core trace, and cuts a few iterations
# from the middle of the A and B measurements out of the trace: cycles per instruction.
set -eu
cp -r /cheri /tmp/work
cd /tmp/work/cheriot
rm -rf out build .xmake
xmake config --sdk=/cheriot-tools/ --board=ibex-safe-simulator -y > /dev/null
xmake -y > /dev/null 2>&1
FW=/tmp/work/cheriot/build/cheriot/cheriot/release/bounds_bench
mkdir -p /tmp/t
cd /tmp/t
CHERIOT_MSFT_SAFE_SIM=/cheriot-tools/bin/cheriot_ibex_safe_sim_trace \
  timeout 300 /tmp/work/cheriot-rtos/scripts/msft-safe-run-sim.sh ibex "$FW" \
  > sim.out 2>&1 || true
/cheriot-tools/bin/llvm-objdump -d --no-show-raw-insn \
  --disassemble-symbols=sum_a,sum_b "$FW" > kernels.dis
python3 /cheri/cheriot/trace_cut.py kernels.dis trace_core_00000000.log
