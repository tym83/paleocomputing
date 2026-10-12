# RED and GREEN, the two finalists of the DoD-1 competition (1979).
CC ?= cc
CFLAGS ?= -std=gnu11 -O1 -w
B = build
RT = rt/paleo.c rt/paleo.h

all: $(B)/redc

$(B)/redc.red: red/redc/*.red
	@mkdir -p $(B)
	cat red/redc/*.red > $@

# stage 0: the Python bootstrap translates redc.red
$(B)/redc0.c: $(B)/redc.red red/boot/*.py
	python3 red/boot/redboot.py $< > $@
$(B)/redc0: $(B)/redc0.c $(RT)
	$(CC) $(CFLAGS) -Irt $< rt/paleo.c -o $@ -lpthread -lm

# stage 1 and 2: redc translates itself; the two outputs must be identical
$(B)/redc1.c: $(B)/redc0 $(B)/redc.red
	$(B)/redc0 < $(B)/redc.red > $@
$(B)/redc1: $(B)/redc1.c $(RT)
	$(CC) $(CFLAGS) -Irt $< rt/paleo.c -o $@ -lpthread -lm
$(B)/redc2.c: $(B)/redc1 $(B)/redc.red
	$(B)/redc1 < $(B)/redc.red > $@

fixpoint: $(B)/redc1.c $(B)/redc2.c
	cmp $(B)/redc1.c $(B)/redc2.c && echo "fixed point: redc1.c == redc2.c"

$(B)/redc: fixpoint
	cp $(B)/redc1 $@

clean:
	rm -rf $(B)
.PHONY: all fixpoint clean
