# Oberon-lab: RISC5 под Verilator + тесты + синтез
RTL  := rtl/RISC5.v rtl/Registers.v rtl/Multiplier.v rtl/Divider.v \
        rtl/FPAdder.v rtl/FPMultiplier.v rtl/FPMultiplierFast.v rtl/FPDivider.v \
        rtl/LeftShifter.v rtl/RightShifter.v
# Кэш байт-кода Python опасен для воспроизводимости: время файлов на macOS
# имеет секундную гранулярность, и правка инструмента в ту же секунду, в
# которую был записан .pyc, оставляет в работе СТАРЫЙ код. Ловилось вживую:
# восстановленный из копии дизассемблер продолжал выдавать мутированный разбор.
export PYTHONDONTWRITEBYTECODE := 1

VFLAGS := -Wno-fatal --cc --build --exe --public-flat-rw -CFLAGS "-O2 -I../../tb"
TESTS  := t1_latency t1_flags t1_fpb2b t1_fp t1_arith t1_umul t1_probe_flags \
          t1_branch t1_branch_width t1_logic t1_dontcare t1_prime t1_alu_diff1 t1_alu_diff2 t1_shift t1_mem t1_movspec t1_irq
IDXT   := t3_idx t3_idx_neg t3_idx_hi t3_idx_zero t3_idx_max t3_idx_rand
ASM    := $(patsubst %,tests/%.bin,$(TESTS) t2_chk t2_chk_hi $(IDXT))
# Ядро с дескрипторами (выпуск 14) — это ядро E плюс команда IDX: конфигурация F
# компилятора эмитит и CHK (массивы известной длины), и IDX (открытые массивы).
DESCDEF := -DWITH_CHK -DCHK_SPLIT -DWITH_DESC

.PHONY: boot-fast fpmul-diff lm lm-profile lm-check lm-stock lm-system lm-qemu site all check test roundtrip pristine bootstrap rebuild book labs image lab image-check equiv lockstep lockstep-chk boot boot-chk selfhost syn configs tools web deps clean
.PHONY: idx-diff idx-mutate boot-desc lockstep-desc desc-loop desc-measure desc-cross desc-profile
all: tools build/obj_tests/run_tests build/obj_chk/run_tests_chk build/obj_desc/run_tests_desc $(ASM)

# ───────────────────────────────────────────────────────────────────────────
# Внешние инструменты. Раньше лежали в дереве как готовые бинарники без единого
# правила сборки — на не-macOS/не-ARM не собиралось НИЧЕГО (найдено аудитом).
# ───────────────────────────────────────────────────────────────────────────
NOREBO := ext/norebo/norebo.bin
REFTOOLS := ext/refemu/refboot ext/refemu/reftrace

tools: $(NOREBO) $(REFTOOLS)

# ⚠ Имя norebo.bin, а не norebo: на файловых системах, нечувствительных к регистру
# (macOS по умолчанию), цель `norebo` совпадает с каталогом `Norebo/`, и make
# считает её готовой. Поэтому собираем напрямую и под другим именем.
$(NOREBO): ext/norebo/Runtime/norebo.c ext/norebo/Runtime/risc-cpu.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w
	@echo "собран $@"

ext/refemu/refboot: ext/refemu/boot.c ext/refemu/risc.c ext/refemu/risc-fp.c ext/refemu/disk.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w

ext/refemu/reftrace: ext/refemu/trace.c ext/refemu/risc.c ext/refemu/risc-fp.c ext/refemu/disk.c
	@$(CC) -o $@ $^ -O2 -std=c99 -w

# Браузерная сборка. Команды emcc не было нигде — аудитор восстанавливал её
# по косвенным признакам.
# ⚠ Пути к исходникам стенда — АБСОЛЮТНЫЕ. Verilator кладёт их в порождённый
# makefile как есть, а собирает из своего каталога: относительный путь там
# разрешается по-разному в разных версиях, и на apt'шном verilator сборка
# падает с «No rule to make target 'tb/run_tests.cpp'». Локально не видно:
# в свежих версиях путь разрешается правильно.
TB := $(abspath tb)

# ⚠ Отложенное присваивание: с `:=` make звал verilator при КАЖДОМ запуске,
# и там, где его нет (быстрое задание CI), любая цель печатала ошибку.
VINC = $(shell verilator --getenv VERILATOR_ROOT)/include
WASM_SRC := $$(ls build/obj_wasm/*.cpp | grep -v "__Dpi\.cpp$$")

BENCH := web/bench_bounds_b.bin web/bench_bounds_e.bin web/bench_bounds.json

web: web/risc5.js web/risc5-chk.js web/prom_sd.mem web/oberon.dsk web/oberon.dsk.gz $(BENCH)

build/obj_wasm/VRISC5.cpp: $(RTL)
	@verilator -Wno-fatal --cc --public-flat-rw --Mdir build/obj_wasm --top-module RISC5 $(RTL)

# Второй вариант ЖЕЛЕЗА: то же ядро с аппаратной проверкой границ. Страница
# переключает их мгновенно — это и есть «я поменял процессор»: пересобирать
# нечего, обе модели уже лежат рядом.
build/obj_wasm_chk/VRISC5.cpp: $(RTL)
	@verilator -Wno-fatal --cc --public-flat-rw -DWITH_CHK -DCHK_SPLIT \
	  --Mdir build/obj_wasm_chk --top-module RISC5 $(RTL)

# ⚠ Список порождённых файлов берётся ОБОЛОЧКОЙ, а не $(wildcard).
#
# GNU make кэширует содержимое каталога на весь прогон: build/obj_wasm он
# читает раньше, чем verilator туда пишет, и список остаётся пустым. Тогда
# VRISC5.cpp в сборку не попадает, и связывание падает на eval_step.
#
# Локально это не видно: файлы лежат с прошлого раза, и кэш их застаёт. Видно
# только на чистой сборке — то есть там, где собирают все остальные.
# ⚠ Один рецепт на оба варианта железа. Два одинаковых рецепта разошлись бы при
# первой же правке — в этом репозитории так было уже трижды. Поэтому правило
# одно, а каталог объектов подставляется переменной цели.
#
# ⚠ И здесь же НЕЛЬЗЯ заворачивать это в define/eval: внутри него `$@` и
# shell-подстановка `$(ls …)` разворачиваются дважды, и em++ молча получает
# пустое `-o`. Проверено.
WASM_OBJ = build/obj_wasm
web/risc5-chk.js: WASM_OBJ = build/obj_wasm_chk

web/risc5.js web/risc5-chk.js: build/obj_wasm/VRISC5.cpp build/obj_wasm_chk/VRISC5.cpp \
                              tb/wasm_main.cpp tb/wasm_stubs.cpp tb/memdisk.h
	@em++ -O3 -I $(WASM_OBJ) -I $(VINC) -I $(VINC)/vltstd -I tb 	  -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TRACE=0 -DVM_TRACE_FST=0 -DVM_TRACE_VCD=0 -DVM_TRACE_SAIF=0 	  $$(ls $(WASM_OBJ)/*.cpp | grep -v "__Dpi\.cpp$$") 	  $(VINC)/verilated.cpp $(VINC)/verilated_threads.cpp tb/wasm_main.cpp tb/wasm_stubs.cpp 	  -s EXPORTED_FUNCTIONS='["_soc_init","_soc_run","_soc_framebuffer","_soc_fb_words","_soc_cycles","_soc_insns","_soc_pc","_soc_key","_soc_mouse","_soc_reg","_soc_flags","_soc_h","_soc_ram","_soc_fb_crc","_soc_disk_word","_soc_disk_size","_soc_poke","_malloc","_free"]' 	  -s EXPORTED_RUNTIME_METHODS='["HEAPU8","HEAPU32"]' 	  -s ALLOW_MEMORY_GROWTH=1 -s MODULARIZE=1 -s EXPORT_ES6=1 -s EXPORT_NAME=OberonRISC5 	  -s ENVIRONMENT=web,node -s FILESYSTEM=0 -o $@

web/prom_sd.mem: rtl/prom_sd.mem
	@cp $< $@

# Нагрузка центрального номера. Исходники порождаются из одного шаблона, потом
# собираются ассемблером — копии в web/ производные, руками их класть нельзя.
tests/bench_bounds_b.s tests/bench_bounds_e.s tests/bench_bounds.json: tools/gen_bounds_bench.py
	@python3 tools/gen_bounds_bench.py > /dev/null

web/bench_bounds_b.bin: tests/bench_bounds_b.bin
	@cp $< $@
web/bench_bounds_e.bin: tests/bench_bounds_e.bin
	@cp $< $@
web/bench_bounds.json: tests/bench_bounds.json
	@cp $< $@
web/oberon.dsk: ext/disk/Oberon-2016-08-02.dsk
	@cp $< $@

# Сжатый образ для страницы: GitHub Pages не отдаёт ни brotli, ни gzip на лету,
# поэтому мегабайт сжимаем заранее, а распаковывает его сам браузер
# (DecompressionStream). Несжатый остаётся для тех, у кого его нет.
web/oberon.dsk.gz: web/oberon.dsk
	@gzip -9 -n -c $< > $@

# Проверка окружения: без этого ошибки вылезают посреди сборки
deps:
	@for t in verilator yosys python3 cc; do \
	  command -v $$t >/dev/null || { echo "НЕТ: $$t"; exit 1; }; \
	  printf "  %-12s ✅ %s\n" "$$t" "$$($$t --version 2>&1 | head -1 | cut -c1-48)"; \
	done
	@command -v em++ >/dev/null && echo "  em++         ✅ (нужен только для make web)" || echo "  em++         ⚠ нет — make web не соберётся"
	@test -f $(SKY130) && echo "  Sky130       ✅" || echo "  Sky130       ⚠ нет — возьмётся сама при make syn (12 МБ)"

# Порождаемые тесты: держим их производными от генераторов, иначе .s может
# отстать от модели и проверка тихо выродится в сверку с самой собой.
tests/t1_alu_diff1.s tests/t1_alu_diff2.s: tools/gen_alu_diff.py tools/alu_model.py tools/asm.py
	@python3 tools/gen_alu_diff.py

tests/t1_dontcare.s: tools/gen_dontcare_test.py
	@python3 tools/gen_dontcare_test.py

tests/t1_branch.s: tools/gen_branch_test.py
	@python3 tools/gen_branch_test.py

$(patsubst %,tests/%.s,$(filter-out t3_idx_rand,$(IDXT))): tools/gen_idx_tests.py
	@python3 tools/gen_idx_tests.py > /dev/null

tests/t3_idx_rand.s: tools/gen_idx_diff.py
	@python3 tools/gen_idx_diff.py > /dev/null

# Дифференциал IDX: те же тесты на процессоре Norebo — эмуляторе, на котором
# сняты замеры компиляции. RTL их проходит в `make test`; здесь — эмулятор.
build/emu_tests: tb/emu_tests.c ext/norebo/Runtime/risc-cpu.c ext/norebo/Runtime/risc-cpu.h
	@mkdir -p build && $(CC) -O2 -std=c99 -w -o $@ tb/emu_tests.c

idx-diff: build/emu_tests $(patsubst %,tests/%.bin,$(IDXT) t2_chk t2_chk_hi)
	@fail=0; for t in $(IDXT) t2_chk t2_chk_hi; do \
	  out=$$(build/emu_tests tests/$$t); rc=$$?; \
	  printf "  %-12s %s\n" "$$t" "$$(echo "$$out" | tail -1)"; [ $$rc -eq 0 ] || fail=1; \
	done; [ $$fail -eq 0 ] || { echo "  ❌ эмулятор расходится с тестами"; exit 1; }

# Ступень «дескрипторы» (выпуск 14). Числа находок 80–84 воспроизводятся этими
# целями; каждая пишет свои таблицы в build/.
#   desc-loop     цикл центрального номера на RTL: A, B, E, D (секунды)
#   desc-measure  три нагрузки × четыре однородные среды A/B/E/F (~10 минут:
#                 сборка четырёх сред Norebo в три ступени)
#   desc-cross    разложение F против E на компиляции 2×2 (после desc-measure)
#   desc-profile  динамический профиль открытых массивов (после desc-measure)
desc-loop: build/obj_tests/run_tests build/obj_chk/run_tests_chk build/obj_desc/run_tests_desc \
           $(patsubst %,tests/bench_bounds_%.bin,a b e d)
	@bash tools/measure_loop_desc.sh

tests/bench_bounds_a.s tests/bench_bounds_d.s: tools/gen_bounds_bench.py
	@python3 tools/gen_bounds_bench.py > /dev/null

desc-measure: $(NOREBO)
	@bash tools/measure_desc.sh

desc-cross: $(NOREBO)
	@bash tools/measure_desc_cross.sh

desc-profile: $(NOREBO)
	@bash tools/profile_desc.sh

# Мутационная проверка тестов IDX: шесть мутаций RTL, каждая обязана быть
# поймана. Около пяти минут (шесть сборок верилятором).
idx-mutate:
	@bash tools/mutate_idx.sh

tests/%.bin tests/%.chk: tests/%.s tools/asm.py
	@python3 tools/asm.py $<

# 🔴 Найдено аудитом: `|| true` съедал ошибку сборки, и `make test` рапортовал
# «ВСЁ ЗЕЛЁНОЕ» при нуле выполненных тестов. Теперь сборка обязана пройти.
build/obj_tests/run_tests: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) -o run_tests --top-module RISC5 --Mdir build/obj_tests $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

build/obj_chk/run_tests_chk: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o run_tests_chk --top-module RISC5 --Mdir build/obj_chk $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

build/obj_desc/run_tests_desc: $(RTL) tb/run_tests.cpp tb/soc_mem.h
	@mkdir -p build
	@verilator $(VFLAGS) $(DESCDEF) -o run_tests_desc --top-module RISC5 --Mdir build/obj_desc $(RTL) $(TB)/run_tests.cpp
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

# Полная регрессия. Базовые тесты обязаны давать ИДЕНТИЧНЫЕ такты на обоих ядрах —
# это и есть проверка «расширение ISA не меняет поведение существующего кода».
test: all
	@mkdir -p build
	@python3 -c "import sys; sys.path.insert(0,'tools'); import asm; sys.exit(asm._selftest())" \
	  > build/asm_selftest.txt \
	  || { cat build/asm_selftest.txt; echo "  ❌ самотест ассемблера провален"; exit 1; }
	@tail -1 build/asm_selftest.txt
	@python3 tools/sweep_encoding.py > build/sweep.txt \
	  || { cat build/sweep.txt; echo "  ❌ перебор кодировок провален"; exit 1; }
	@head -2 build/sweep.txt
	@fail=0; \
	for t in $(TESTS); do \
	  for v in "build/obj_tests/run_tests:базовое" "build/obj_chk/run_tests_chk:с CHK" "build/obj_desc/run_tests_desc:с IDX"; do \
	    bin=$${v%%:*}; name=$${v##*:}; \
	    out=$$($$bin tests/$$t); rc=$$?; \
	    printf "  %-12s %-9s %s\n" "$$t" "$$name" "$$(echo "$$out" | tail -1)"; \
	    [ $$rc -eq 0 ] || fail=1; \
	  done; \
	done; \
	for t in t2_chk t2_chk_hi; do \
	  for v in "build/obj_chk/run_tests_chk:с CHK" "build/obj_desc/run_tests_desc:с IDX"; do \
	    bin=$${v%%:*}; name=$${v##*:}; \
	    out=$$($$bin tests/$$t); rc=$$?; \
	    printf "  %-12s %-9s %s\n" "$$t" "$$name" "$$(echo "$$out" | tail -1)"; \
	    [ $$rc -eq 0 ] || fail=1; \
	  done; \
	done; \
	for t in $(IDXT); do \
	  out=$$(build/obj_desc/run_tests_desc tests/$$t); rc=$$?; \
	  printf "  %-12s %-9s %s\n" "$$t" "с IDX" "$$(echo "$$out" | tail -1)"; \
	  [ $$rc -eq 0 ] || fail=1; \
	done; \
	for t in $(IDXT); do \
	  if build/obj_chk/run_tests_chk tests/$$t > /dev/null 2>&1; then \
	    echo "  ❌ $$t прошёл на ядре БЕЗ IDX — тест ничего не проверяет"; fail=1; \
	  else printf "  %-12s %-9s %s\n" "$$t" "с CHK" "провален, как и должен (IDX нет) ✅"; fi; \
	done; \
	echo; [ $$fail -eq 0 ] || { echo "ЕСТЬ ПРОВАЛЫ ❌"; exit 1; }; \
	$(MAKE) --no-print-directory idx-diff && \
	$(MAKE) --no-print-directory equiv && echo && echo "ВСЁ ЗЕЛЁНОЕ ✅"

# Проверка эквивалентности декодера: все 256 комбинаций {IR[31:28] x op}
# на пяти наборах операндов. Различаться должна РОВНО одна кодировка.
# В RISC5 нет ловушки на неизвестную инструкцию, поэтому занятие чужой
# кодировки проявилось бы молчаливым изменением поведения старого кода.
equiv:
	@verilator $(VFLAGS) -o deq_base --top-module RISC5 --Mdir build/obj_deqb $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o deq_chk --top-module RISC5 --Mdir build/obj_deqc $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@./build/obj_deqb/deq_base > build/deq_base.txt
	@./build/obj_deqc/deq_chk  > build/deq_chk.txt
	@python3 tools/cmp_decoder.py build/deq_base.txt build/deq_chk.txt
	@verilator $(VFLAGS) $(DESCDEF) -o deq_desc --top-module RISC5 --Mdir build/obj_deqd $(RTL) $(TB)/decoder_equiv.cpp 2>&1 | grep -E "error:" || true
	@./build/obj_deqd/deq_desc > build/deq_desc.txt
	@echo "  ядро с дескрипторами:"
	@python3 tools/cmp_decoder.py build/deq_base.txt build/deq_desc.txt 1:1,1:8

# Дифференциальный стенд: RTL против эталонного эмулятора, инструкция за
# инструкцией, на загрузке настоящей системы Оберон.
REFOBJ := build/refobj/risc.o build/refobj/risc-fp.o build/refobj/disk.o
$(REFOBJ): build/refobj/%.o: ext/refemu/%.c
	@mkdir -p build/refobj && cc -O2 -std=c99 -w -c $< -o $@

lockstep: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) -CFLAGS "-I../../ext/refemu" -o lockstep --top-module RISC5 \
	  --Mdir build/obj_ls $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls/lockstep --max=15000000

# Загрузка системы на RTL с выгрузкой экрана
# Эталонная контрольная сумма кадрового буфера после загрузки системы.
# Совпадает во всех сборках: нативной с файловым диском, нативной с диском
# в памяти и в WASM.
BOOT_CRC := B5DFC933

boot:
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# Те же системные прогоны на ядре С расширением ISA. Найдено аудитом: все системные
# доказательства (lockstep, загрузка, CRC экрана) снимались только на базовом ядре.
lockstep-chk: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -CFLAGS "-I../../ext/refemu" -o lockstep_chk \
	  --top-module RISC5 --Mdir build/obj_ls_chk $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls_chk/lockstep_chk --max=15000000

boot-chk:
	@mkdir -p build
	@verilator $(VFLAGS) -DWITH_CHK -DCHK_SPLIT -o soc_tb_chk --top-module RISC5 --Mdir build/obj_soc_chk $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc_chk/soc_tb_chk --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# Загрузка системы на ядре с быстрым FP-умножителем (выпуск №2): экран обязан
# совпасть с тем же эталоном, модель тактов — с RTL (в ней вариант учтён).
boot-fast:
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -CFLAGS -DFPMUL_FAST -o soc_tb_fast --top-module RISC5 --Mdir build/obj_soc_fast $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c > build/soc_fast.log 2>&1 || { cat build/soc_fast.log; exit 1; }
	@./build/obj_soc_fast/soc_tb_fast --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# ───────────────────────────────────────────────────────────────────────────
# Выпуск №2: языковая модель на RISC5 (13-episode-lm-on-risc5.md, находки 72–78)
# ───────────────────────────────────────────────────────────────────────────
# Дешёвая проверка: веса = манифест, модуль на эмуляторе Norebo даёт ровно
# эталонный текст (арифметика risc-fp.c). Секунды — годится в CI.
lm-check: $(NOREBO)
	@python3 lm/train.py --check
	@python3 lm/compare.py emu 64 1 2 3

# Та же сверка на RTL Вирта (Norebo поверх Verilator).
lm: $(NOREBO) build/obj_nb/norebo_tb
	@python3 lm/train.py --check
	@python3 lm/compare.py rtl 16 1 7

# Главные числа: такты на символ, профиль, ускорение, потолок FMAC. ~3 минуты.
LM_N ?= 32
lm-profile: $(NOREBO) build/obj_nb/norebo_tb build/obj_nbf/norebo_tb build/obj_nbr/norebo_tb
	@python3 lm/profile.py $(LM_N)

# Стоковая нагрузка на трёх ядрах: компилятор собирает сам себя. ~2 минуты.
lm-stock: build/obj_nb/norebo_tb build/obj_nbf/norebo_tb build/obj_nbr/norebo_tb
	@bash lm/stock.sh

# Модель внутри настоящей системы (1 МБ ОЗУ, диск, окна) на RTL: система сама
# компилирует LM.Mod и исполняет команду средней кнопкой. ~4 минуты.
lm-system: $(NOREBO) scripts/lm.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c > build/soc.log 2>&1 || { cat build/soc.log; exit 1; }
	@bash lm/mkdisk.sh
	@cp -f build/lm/oberon-lm.dsk build/lm/oberon-lm-run.dsk
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=130000000 --disk=build/lm/oberon-lm-run.dsk \
	  --persist --script=scripts/lm.txt | grep -E "экран выгружен: build/lm|расхождений"
	@python3 lm/outcheck.py build/lm/oberon-lm-run.dsk

# То же в QEMU — только функциональная сверка (тактов QEMU не моделирует).
lm-qemu: $(NOREBO)
	@python3 lm/qemu_run.py

scripts/lm.txt: scripts/lm.src tools/mkscript.py tools/keymap.py
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@
# Те же системные прогоны на ядре с дескрипторами (выпуск 14): стоковая система
# обязана грузиться с тем же CRC экрана и идти с эталоном шаг в шаг — IDX
# занимает кодировку, которую стоковый код не эмитит.
lockstep-desc: $(REFOBJ)
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_rtl.dsk
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/disk_ref.dsk
	@verilator $(VFLAGS) $(DESCDEF) -CFLAGS "-I../../ext/refemu" -o lockstep_desc \
	  --top-module RISC5 --Mdir build/obj_ls_desc $(RTL) $(TB)/lockstep.cpp \
	  ../../build/refobj/risc.o ../../build/refobj/risc-fp.o ../../build/refobj/disk.o \
	  2>&1 | grep -E "error:" || true
	@./build/obj_ls_desc/lockstep_desc --max=15000000

boot-desc:
	@mkdir -p build
	@verilator $(VFLAGS) $(DESCDEF) -o soc_tb_desc --top-module RISC5 --Mdir build/obj_soc_desc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@./build/obj_soc_desc/soc_tb_desc --prom=rtl/prom_sd.mem --max=12000000 --expect-crc=$(BOOT_CRC)

# ───────────────────────────────────────────────────────────────────────────
# Полная проверка. Раньше сильнейшие проверки (диффстенд, загрузка системы)
# были отдельными целями и ни от чего не зависели — то есть в гейт не входили.
# ───────────────────────────────────────────────────────────────────────────
check: pristine test boot boot-chk boot-desc lockstep lockstep-desc selfhost roundtrip bootstrap rebuild book labs
	@echo
	@echo "═══ ПОЛНАЯ ПРОВЕРКА ПРОЙДЕНА ═══"

# Замыкание круга: компилятор Оберона работает на настоящем RTL, а не на
# эмуляторе, и порождает побайтово тот же код.
# Мост к Norebo — код на C, и собирается как C, отдельным объектом: внутри
# него norebo.c целиком, а в том стоят назначенные инициализаторы массива,
# которых нет в C++. g++ на Linux на этом падал, clang на macOS — прощал.
NBOBJ := build/nbobj/norebo_bridge.o
$(NBOBJ): tb/norebo_bridge.c ext/norebo/Runtime/norebo.c ext/norebo/Runtime/risc-cpu.h
	@mkdir -p $(@D) && $(CC) -O2 -std=gnu99 -w -c $< -o $@

build/obj_nb/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -o norebo_tb --top-module RISC5 --Mdir build/obj_nb $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

# Те же ядра с быстрым FP-умножителем (выпуск №2): однотактным и двухтактным.
build/obj_nbf/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -o norebo_tb --top-module RISC5 --Mdir build/obj_nbf $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

build/obj_nbr/norebo_tb: $(RTL) tb/norebo_tb.cpp $(NBOBJ)
	@mkdir -p build
	@verilator $(VFLAGS) -DFPMUL_FAST -DFPMUL_FAST_REG -o norebo_tb --top-module RISC5 --Mdir build/obj_nbr $(RTL) $(TB)/norebo_tb.cpp ../../$(NBOBJ)
	@test -x $@ || { echo "СБОРКА НЕ ДАЛА БИНАРНИКА: $@"; exit 1; }

# Быстрый FP-умножитель против исходного, побитово (находка 73). FPMUL_N —
# сколько случайных пар сверх полного перебора порядков и граничных мантисс.
FPMUL_N ?= 10000000
fpmul-diff: build/refobj/risc-fp.o
	@mkdir -p build
	@verilator $(VFLAGS) -CFLAGS "-I../../ext/refemu" -o fpmul_diff --top-module fpmul_diff_top \
	  --Mdir build/obj_fmd rtl/FPMultiplier.v rtl/FPMultiplierFast.v tb/fpmul_diff_top.v \
	  $(TB)/fpmul_diff.cpp ../../build/refobj/risc-fp.o > build/fmd.log 2>&1 || { cat build/fmd.log; exit 1; }
	@verilator $(VFLAGS) -DFPMUL_FAST_REG -CFLAGS "-I../../ext/refemu -DFPMUL_FAST_REG" -o fpmul_diff \
	  --top-module fpmul_diff_top --Mdir build/obj_fmr rtl/FPMultiplier.v rtl/FPMultiplierFast.v \
	  tb/fpmul_diff_top.v $(TB)/fpmul_diff.cpp ../../build/refobj/risc-fp.o > build/fmr.log 2>&1 || { cat build/fmr.log; exit 1; }
	@echo "  однотактный вариант:"; ./build/obj_fmd/fpmul_diff $(FPMUL_N)
	@echo "  двухтактный вариант (FPMUL_FAST_REG):"; ./build/obj_fmr/fpmul_diff $(FPMUL_N)

selfhost: build/obj_nb/norebo_tb $(NOREBO)
	@bash tools/selfhost_rtl.sh

# Замкнутый круг на НАСТОЯЩЕМ выводе компилятора Вирта: каждое слово кода из
# .rsc дизассемблируется и собирается обратно, требуется побитовое совпадение.
# Зависит от selfhost — объектные файлы порождает он.
roundtrip:
	@test -f build/self_rtl/ORP.rsc \
	  || { echo "  ❌ нет объектных файлов, сначала make selfhost"; exit 1; }
	@python3 tools/roundtrip.py build/self_rtl/*.rsc build/self_emu/*.rsc

# Образ с инструментарием для лабораторных, которым не хватает браузера.
# Правка процессора и правка компилятора требуют верилятора и сборки — это
# обычная пакетная нагрузка, и она одинаково запускается локально и заданием
# в кластере (deploy/k8s/lab-job.yaml).
IMAGE ?= oberon-lab:dev

image:
	@docker build -f deploy/Containerfile -t $(IMAGE) .
	@docker image ls $(IMAGE) --format "  образ {{.Repository}}:{{.Tag}}, {{.Size}}"

# Прогон лабораторной в контейнере. Правка подаётся каталогом:
#   make lab WORK=build/labwork TASK=isa
WORK ?= build/labwork
TASK ?= isa

lab:
	@mkdir -p $(WORK)
	@docker run --rm -v "$(PWD)/$(WORK):/work" $(IMAGE) $(TASK)

# Проверка самого образа: на чистом дереве лабораторная обязана пройти,
# на сломанной правке — провалиться. Без второй половины образ бесполезен:
# вердикт, который всегда зелёный, ничего не проверяет.
image-check: image
	@rm -rf build/imgtest && mkdir -p build/imgtest
	@docker run --rm -v "$(PWD)/build/imgtest:/work" $(IMAGE) isa > /dev/null \
	  && echo "  чистое дерево: прошло ✅" \
	  || { echo "  ❌ чистое дерево не прошло"; exit 1; }
	@mkdir -p build/imgtest/rtl
	@sed 's|(~op\[0\] ? B & C1 : B & ~C1)|(~op[0] ? B \& ~C1 : B \& C1)|' \
	  rtl/RISC5.v > build/imgtest/rtl/RISC5.v
	@cmp -s rtl/RISC5.v build/imgtest/rtl/RISC5.v \
	  && { echo "  ❌ пробная правка не применилась"; exit 1; } || true
	@docker run --rm -v "$(PWD)/build/imgtest:/work" $(IMAGE) isa > /dev/null 2>&1 \
	  && { echo "  ❌ сломанная правка прошла"; exit 1; } \
	  || echo "  сломанная правка: провалилась ✅"

# Методичка: docs/book/*.md -> web/book/*.html. Проверяются ссылки между
# главами и ссылки на лабораторные: битая ссылка в учебнике хуже отсутствующей
# главы, потому что выглядит рабочей.
book:
	@python3 tools/mkbook.py

# Сайт: то же, что делает раскладка на Pages. Проверяет состав и местные
# ссылки, поэтому годится как проверка перед пушем, а не только как просмотр.
site: web book
	@cd .. && ./tools/build-site.sh _site

# Лаборатории: безголовый прогон сценариев каждой лабы. Проверка, которая
# всегда зелёная или всегда красная, бесполезна, поэтому тест требует перехода
# из «не сделано» в «сделано» от предусмотренных действий.
labs: web book
	@cd web && node labs-test.mjs
	@cd web && node worker-test.mjs
	@cd web && node bench-test.mjs
	@cd web && node page-test.mjs

# Полная пересборка системы Обероном внутри самой системы на RTL.
# Три сессии: пачками, затем поодиночке то, что упало в ловушку 4 (исчерпание
# кучи внутри команды). Между сессиями состояние переносится диском.
# Прогон тяжёлый: около миллиарда инструкций, порядка восьми минут.
REBUILD_SRC := build/disksrc

$(REBUILD_SRC):
	@mkdir -p $@
	@python3 -c "import sys; sys.path.insert(0,'tools'); from oberonfs import Image; \
	  img=Image('ext/disk/Oberon-2016-08-02.dsk'); fs=img.files(); \
	  [open('$@/'+n,'wb').write(img.read(h)) for n,h in fs.items() if n.endswith('.Mod')]"

scripts/rebuild1.txt scripts/rebuild2.txt: tools/gen_rebuild.py tools/modorder.py | $(REBUILD_SRC)
	@python3 tools/gen_rebuild.py $(REBUILD_SRC) > /dev/null
	@for n in 1 2; do PYTHONPATH=tools python3 tools/mkscript.py scripts/rebuild$$n.src > scripts/rebuild$$n.txt; done

scripts/rebuild3.txt: scripts/rebuild3.src
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@

rebuild: scripts/rebuild1.txt scripts/rebuild2.txt scripts/rebuild3.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@cp -f ext/disk/Oberon-2016-08-02.dsk build/rebuild.dsk
	@echo "  пересборка системы внутри системы: 3 сессии, ~8 минут"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=430000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild1.txt | grep -c "экран выгружен" | xargs echo "    сессия 1, снимков:"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=450000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild2.txt | grep -c "экран выгружен" | xargs echo "    сессия 2, снимков:"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=210000000 \
	  --disk=build/rebuild.dsk --persist --script=scripts/rebuild3.txt | grep -c "экран выгружен" | xargs echo "    сессия 3, снимков:"
	@python3 tools/check_rebuild.py ext/disk/Oberon-2016-08-02.dsk build/rebuild.dsk
	@cp -f build/rebuild.dsk build/rebuild_boot.dsk
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=12000000 \
	  --disk=build/rebuild_boot.dsk --expect-crc=$(BOOT_CRC) | grep -E "совпал|❌"

# Эталонный образ диска — источник истины. Эмулятор диска пишет в образ
# настоящие сектора, так что прогон, случайно пущенный прямо на нём, молча
# портит исходник. Проверка загрузки этого не ловит: её контрольная сумма
# совпадает и на испорченном образе.
pristine:
	@cd ext/disk && shasum -a 256 -c SHA256SUMS >/dev/null \
	  && echo "  эталонный образ диска ✅" \
	  || { echo "  ❌ эталонный образ диска изменён — восстановите из upstream"; exit 1; }

# Самораскрутка внутри самой системы: ни одной строки кода с хоста в контуре,
# только мышь и клавиатура. Два поколения компилятора должны совпасть.
# Прогон тяжёлый: 715 млн инструкций, около четырёх минут.
scripts/gen2_sep.txt: scripts/gen2_sep.src tools/mkscript.py tools/keymap.py
	@PYTHONPATH=tools python3 tools/mkscript.py $< > $@

bootstrap: scripts/gen2_sep.txt
	@mkdir -p build
	@verilator $(VFLAGS) -o soc_tb --top-module RISC5 --Mdir build/obj_soc $(RTL) $(TB)/soc_tb.cpp $(TB)/disk/disk.c
	@echo "  самораскрутка внутри системы: 715 млн инструкций, ~4 минуты"
	@./build/obj_soc/soc_tb --prom=rtl/prom_sd.mem --max=715000000 \
	  --script=scripts/gen2_sep.txt | grep -E "инструкций|расхождений"
	@python3 tools/check_bootstrap.py build/g2_gen2.pbm

# Библиотека ячеек Sky130 (Apache-2.0) — 12 МБ, тянется по требованию.
# Прежняя Nangate45 распространению не подлежит, см. THIRD-PARTY.md.
SKY130 := syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
SKY130_URL := https://raw.githubusercontent.com/The-OpenROAD-Project/OpenROAD-flow-scripts/master/flow/platforms/sky130hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib

lib: $(SKY130)
$(SKY130):
	@mkdir -p syn/lib && curl -fsSL -o $@ $(SKY130_URL) \
	  && echo "  библиотека ячеек Sky130 загружена ($$(du -h $@ | cut -f1))"

syn: $(SKY130)
	@python3 syn/sweep.py

# ⚠ Патчи кодогенератора живут в patches/, а НЕ в build/ — иначе одна команда clean
# уничтожает все конфигурации вместе с серией измерений (найдено аудитом).
clean:
	@rm -rf build tests/*.bin tests/*.chk
	@echo "патчи кодогенератора сохранены в patches/ — восстановить: make configs"

# Восстановить рабочие каталоги конфигураций из версионируемых патчей
configs:
	@for c in A C D E; do mkdir -p build/cfg$$c && cp patches/ORG-cfg$$c.Mod build/cfg$$c/ORG.Mod; done
	@mkdir -p build/cfgB
	@echo "конфигурации восстановлены из patches/ (B — сток, без патча)"
