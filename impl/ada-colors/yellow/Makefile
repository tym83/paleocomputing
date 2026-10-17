# YELLOW (SRI International, 1978): yellowc, a YELLOW translator written in YELLOW.
#
# yellowc is built from a seed: seed/yellowc.c is the C that the previous
# yellowc made of itself. `make fixpoint` rebuilds yellowc from its own source
# twice and checks that the two C files are identical; `make seed` refreshes
# the seed; `make genesis` replays the very first step, from the Python
# bootstrap.
CC ?= cc
CFLAGS ?= -std=gnu11 -O1 -w
B = build
RTC = ../rt/paleo.c
INC = -I../rt
LINK = -lpthread -lm

all: fixpoint

$(B)/yellowc.yel: yellowc/*.yel
	@mkdir -p $(B)
	cat yellowc/*.yel > $@

$(B)/yellowc0: seed/yellowc.c $(RTC) ../rt/paleo.h
	@mkdir -p $(B)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/yellowc1.c: $(B)/yellowc0 $(B)/yellowc.yel
	$(B)/yellowc0 < $(B)/yellowc.yel > $@ || (tail -1 $@; rm -f $@; false)
$(B)/yellowc1: $(B)/yellowc1.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/yellowc2.c: $(B)/yellowc1 $(B)/yellowc.yel
	$(B)/yellowc1 < $(B)/yellowc.yel > $@ || (tail -1 $@; rm -f $@; false)
$(B)/yellowc2: $(B)/yellowc2.c $(RTC)
	$(CC) $(CFLAGS) $(INC) $< $(RTC) -o $@ $(LINK)
$(B)/yellowc3.c: $(B)/yellowc2 $(B)/yellowc.yel
	$(B)/yellowc2 < $(B)/yellowc.yel > $@ || (tail -1 $@; rm -f $@; false)

fixpoint: $(B)/yellowc2.c $(B)/yellowc3.c
	cmp $(B)/yellowc2.c $(B)/yellowc3.c && echo "fixed point: yellowc2.c == yellowc3.c"
	cp $(B)/yellowc2 $(B)/yellowc

seed: fixpoint
	cp $(B)/yellowc2.c seed/yellowc.c

# the first step: the Python bootstrap translates the first yellowc
genesis:
	@mkdir -p $(B)/genesis
	python3 boot/yellowboot.py genesis/yellowc.yel > $(B)/genesis/yellowc0.c
	$(CC) $(CFLAGS) $(INC) $(B)/genesis/yellowc0.c $(RTC) -o $(B)/genesis/yellowc0 $(LINK)
	$(B)/genesis/yellowc0 < genesis/yellowc.yel > $(B)/genesis/yellowc1.c
	cmp $(B)/genesis/yellowc1.c genesis/yellowc1.c && echo "genesis reproduced"

test: fixpoint
	tests/run.sh

clean:
	rm -rf $(B)
.PHONY: all fixpoint seed genesis test clean
