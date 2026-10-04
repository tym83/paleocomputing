# Timing of the RISC5 core on Lattice ECP5 fabric (ULX3S, LFE5U-85F-6BG381C).
#
# VARIANT — core: base (as Wirth's), chk (with -DWITH_CHK -DCHK_SPLIT), desc
#           (chk + the IDX instruction, -DWITH_DESC; episode 14, descriptors) or
#           fmul / fmul2 (fast FP multiplier in 1 / 2 cycles, episode 2).
# WRAP    — wrapper: soc (core + ROM on ~clk, as in RISC5Top.v) or
#           core (core only, code from a register; -DCORE_ONLY).
#
#   make synth  VARIANT=base|chk   yosys synth_ecp5 -> build/<v>/synth.json
#   make pnr    VARIANT=base|chk   nextpnr-ecp5, all seeds from SEEDS
#   make timing VARIANT=base|chk   check: fmax of every seed >= TARGET_MHZ
#   make bit    VARIANT=base|chk   ecppack (the wrapper bitstream is only a packing
#                                  check; the system does not boot from it)
#   make all                       synth+pnr+timing for 2 cores x 2 wrappers + summary
#   make docker-all                the same inside the pinned image (Dockerfile)
#   make fmul / docker-fmul        base, fmul, fmul2 x 2 wrappers + summary (finding 76)
#
# Tools are invoked directly; the versions are those in the image. Do not compare
# results taken with other versions against results.md.

VARIANT    ?= base
WRAP       ?= soc
SEEDS      ?= 1 2 3 4 5
# The target is the frequency of the original design: RISC5Top.v halves CLK50M.
TARGET_MHZ ?= 25
DEVICE     ?= --85k --package CABGA381 --speed 6
IMAGE      ?= paleo-fpga:local

RTL  := ../rtl
SRCS := $(addprefix $(RTL)/,RISC5.v Registers.v Multiplier.v Divider.v \
          LeftShifter.v RightShifter.v FPAdder.v FPMultiplier.v FPMultiplierFast.v FPDivider.v PROM.v) \
        core_timing_top.v
LPF  := ulx3s_core.lpf
TOP  := core_timing_top

DEFS_base :=
DEFS_chk  := -DWITH_CHK -DCHK_SPLIT
# episode 2: fast FP multiplier, single-cycle and with a product register
DEFS_fmul  := -DFPMUL_FAST
DEFS_fmul2 := -DFPMUL_FAST -DFPMUL_FAST_REG
DEFS_desc := -DWITH_CHK -DCHK_SPLIT -DWITH_DESC
WDEFS_soc :=
WDEFS_core := -DCORE_ONLY

B := build/$(WRAP)-$(VARIANT)

.PHONY: synth pnr timing bit all fmul summary docker-image docker-all docker-fmul

synth: $(B)/synth.json

# PROM.v reads "../prom.mem" relative to the yosys working directory,
# so yosys runs from build/<v>, and prom.mem is placed in build/.
build/prom.mem: $(RTL)/prom.mem
	@mkdir -p build
	cp $< $@

$(B)/synth.json: $(SRCS) build/prom.mem Makefile
	@mkdir -p $(B)
	cd $(B) && yosys -q -l synth.log -p "\
	  read_verilog $(DEFS_$(VARIANT)) $(WDEFS_$(WRAP)) $(addprefix ../../,$(SRCS)); \
	  synth_ecp5 -top $(TOP) -json synth.json; \
	  tee -o stat.txt stat"

pnr: $(foreach s,$(SEEDS),$(B)/seed$(s)/report.json)

# --timing-allow-fail: a frequency failure is caught by the separate timing target, not
# by nextpnr dying mid-run, so the report for every seed is always available.
$(B)/seed%/report.json: $(B)/synth.json $(LPF)
	@mkdir -p $(@D)
	nextpnr-ecp5 $(DEVICE) --json $< --lpf $(LPF) \
	  --freq $(TARGET_MHZ) --seed $* --timing-allow-fail \
	  --textcfg $(@D)/out.config --report $@ --log $(@D)/pnr.log -q

timing: pnr
	python3 check_timing.py --target $(TARGET_MHZ) --variant $(WRAP)-$(VARIANT) \
	  $(foreach s,$(SEEDS),$(B)/seed$(s)/report.json)

bit: $(B)/seed1/report.json
	ecppack --compress $(B)/seed1/out.config $(B)/$(TOP).bit

# All six combinations run to completion and the summary is written even when
# one of them fails: the summary shows exactly what failed.
all:
	@st=0; for w in soc core; do for v in base chk desc; do \
	  $(MAKE) timing WRAP=$$w VARIANT=$$v || st=1; done; done; \
	$(MAKE) summary; exit $$st

summary:
	python3 check_timing.py --summary --target $(TARGET_MHZ) build

docker-image:
	docker build -t $(IMAGE) .

# The whole repository is mounted because the core sources live in impl/rtl.
docker-all: docker-image
	docker run --rm -v $(abspath ../..):/work -w /work/impl/fpga $(IMAGE) \
	  make all SEEDS="$(SEEDS)" TARGET_MHZ=$(TARGET_MHZ)

# Cost of the fast multiplier (finding 76). Not part of all: it doubles the CI
# job time, and the question is a one-off: rerun it when the multiplier changes.
fmul:
	@st=0; for w in soc core; do for v in base fmul fmul2; do \
	  $(MAKE) timing WRAP=$$w VARIANT=$$v || st=1; done; done; \
	$(MAKE) summary; exit $$st

docker-fmul: docker-image
	docker run --rm -v $(abspath ../..):/work -w /work/impl/fpga $(IMAGE) \
	  make fmul SEEDS="$(SEEDS)" TARGET_MHZ=$(TARGET_MHZ)
