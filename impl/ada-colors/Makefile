# RED and GREEN, the two finalists of the DoD-1 competition (1979).
#
# RED is built from a seed: red/seed/redc.c is the C that the previous redc
# made of itself. `make fixpoint` rebuilds redc from its own source twice and
# checks that the two C files are identical; `make seed` then refreshes the
# seed. `make genesis` replays the very first step, from the Python bootstrap.
CC ?= cc
CFLAGS ?= -std=gnu11 -O1 -w
B = build
RTC = rt/paleo.c
LINK = -lpthread -lm

all: fixpoint

$(B)/redc.red: red/redc/*.red
	@mkdir -p $(B)
	cat red/redc/*.red > $@

$(B)/redc0: red/seed/redc.c $(RTC) rt/paleo.h
	@mkdir -p $(B)
	$(CC) $(CFLAGS) -Irt $< $(RTC) -o $@ $(LINK)
$(B)/redc1.c: $(B)/redc0 $(B)/redc.red
	$(B)/redc0 < $(B)/redc.red > $@ || (tail -1 $@; rm -f $@; false)
$(B)/redc1: $(B)/redc1.c $(RTC)
	$(CC) $(CFLAGS) -Irt $< $(RTC) -o $@ $(LINK)
$(B)/redc2.c: $(B)/redc1 $(B)/redc.red
	$(B)/redc1 < $(B)/redc.red > $@ || (tail -1 $@; rm -f $@; false)
$(B)/redc2: $(B)/redc2.c $(RTC)
	$(CC) $(CFLAGS) -Irt $< $(RTC) -o $@ $(LINK)
$(B)/redc3.c: $(B)/redc2 $(B)/redc.red
	$(B)/redc2 < $(B)/redc.red > $@ || (tail -1 $@; rm -f $@; false)

# redc1 may differ from the seed's output when redc gained a feature; redc2 and
# redc3 are both made by a compiler built from the current source
fixpoint: $(B)/redc2.c $(B)/redc3.c
	cmp $(B)/redc2.c $(B)/redc3.c && echo "fixed point: redc2.c == redc3.c"
	cp $(B)/redc2 $(B)/redc

seed: fixpoint
	cp $(B)/redc2.c red/seed/redc.c

genesis:
	@mkdir -p $(B)/genesis
	python3 red/boot/redboot.py red/genesis/redc.red > $(B)/genesis/redc0.c
	$(CC) $(CFLAGS) -Irt $(B)/genesis/redc0.c $(RTC) -o $(B)/genesis/redc0 $(LINK)
	$(B)/genesis/redc0 < red/genesis/redc.red > $(B)/genesis/redc1.c
	cmp $(B)/genesis/redc1.c red/genesis/redc1.c && echo "genesis reproduced"

clean:
	rm -rf $(B)
.PHONY: all fixpoint seed genesis clean
