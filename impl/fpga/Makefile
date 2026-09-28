# Тайминг ядра RISC5 на ткани Lattice ECP5 (ULX3S, LFE5U-85F-6BG381C).
#
# VARIANT — ядро: base (как у Вирта), chk (с -DWITH_CHK -DCHK_SPLIT),
#           fmul / fmul2 (быстрый FP-умножитель за 1 / 2 такта, выпуск №2).
# WRAP    — обёртка: soc (ядро + ПЗУ на ~clk, как в RISC5Top.v) или
#           core (только ядро, код из регистра; -DCORE_ONLY).
#
#   make synth  VARIANT=base|chk   yosys synth_ecp5 -> build/<v>/synth.json
#   make pnr    VARIANT=base|chk   nextpnr-ecp5, все зёрна из SEEDS
#   make timing VARIANT=base|chk   проверка: fmax каждого зерна >= TARGET_MHZ
#   make bit    VARIANT=base|chk   ecppack (битстрим обёртки — только проверка
#                                  упаковки; система из него не грузится)
#   make all                       synth+pnr+timing для 2 ядер x 2 обёрток + сводка
#   make docker-all                то же внутри прибитого образа (Dockerfile)
#   make fmul / docker-fmul        base, fmul, fmul2 x 2 обёртки + сводка (находка 76)
#
# Инструменты вызываются напрямую; версии — те, что в образе. Результаты,
# снятые другими версиями, с results.md не сравнивать.

VARIANT    ?= base
WRAP       ?= soc
SEEDS      ?= 1 2 3 4 5
# Цель — частота исходного дизайна: RISC5Top.v делит CLK50M пополам.
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
# выпуск №2: быстрый FP-умножитель, однотактный и с регистром произведения
DEFS_fmul  := -DFPMUL_FAST
DEFS_fmul2 := -DFPMUL_FAST -DFPMUL_FAST_REG
WDEFS_soc :=
WDEFS_core := -DCORE_ONLY

B := build/$(WRAP)-$(VARIANT)

.PHONY: synth pnr timing bit all fmul summary docker-image docker-all docker-fmul

synth: $(B)/synth.json

# PROM.v читает "../prom.mem" относительно рабочего каталога yosys,
# поэтому yosys запускается из build/<v>, а prom.mem кладётся в build/.
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

# --timing-allow-fail: провал по частоте ловит отдельная цель timing, а не
# падение nextpnr посреди прогона — так отчёт всех зёрен доступен всегда.
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

# Все четыре сочетания прогоняются до конца и сводка пишется даже при
# провале одного из них: по сводке и видно, что именно упало.
all:
	@st=0; for w in soc core; do for v in base chk; do \
	  $(MAKE) timing WRAP=$$w VARIANT=$$v || st=1; done; done; \
	$(MAKE) summary; exit $$st

summary:
	python3 check_timing.py --summary --target $(TARGET_MHZ) build

docker-image:
	docker build -t $(IMAGE) .

# Весь репозиторий монтируется, потому что исходники ядра лежат в impl/rtl.
docker-all: docker-image
	docker run --rm -v $(abspath ../..):/work -w /work/impl/fpga $(IMAGE) \
	  make all SEEDS="$(SEEDS)" TARGET_MHZ=$(TARGET_MHZ)

# Цена быстрого умножителя (находка 76). В all не входит: удваивает время
# задания CI, а вопрос разовый — пересчитывать при правке умножителя.
fmul:
	@st=0; for w in soc core; do for v in base fmul fmul2; do \
	  $(MAKE) timing WRAP=$$w VARIANT=$$v || st=1; done; done; \
	$(MAKE) summary; exit $$st

docker-fmul: docker-image
	docker run --rm -v $(abspath ../..):/work -w /work/impl/fpga $(IMAGE) \
	  make fmul SEEDS="$(SEEDS)" TARGET_MHZ=$(TARGET_MHZ)
