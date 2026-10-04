// Measures the cost of a bounds check on CHERIoT-Ibex.
//
// The loop is ../loop.c (sum += a[i]; i = (i+1) & 63 over u32[64]), the same as on
// RISC5. Two configurations:
//   A - sum_a: only the hardware capability bounds check on each load;
//   B - sum_b: A plus a software check "unsigned i >= lim -> trap".
// There is no "no check at all" configuration here, and there cannot be: on CHERIoT
// every load through a capability is checked by the hardware.
//
// Counting: mcycle and minstret before and after, interrupts disabled during the
// measurement, many iterations (ITER) and several repetitions (REPS) to show
// whether the count is stable.

#include <compartment.h>
#include <debug.hh>
#include <fail-simulator-on-error.h>
#include <riscvreg.h>
#include <stdint.h>

using Debug = ConditionalDebug<true, "bench">;

extern "C" unsigned sum_a(const unsigned *a, unsigned n);
extern "C" unsigned sum_b(const unsigned *a, unsigned n);

// Limit for the software check. volatile: the compiler cannot see the value and
// cannot prove the check redundant.
extern "C" volatile unsigned lim = 64;

int __cheri_compartment("probe") probe_hw(unsigned elems);
int __cheri_compartment("probe") probe_sw(unsigned limit);

namespace
{
	constexpr unsigned ITER = 100000;
	constexpr unsigned REPS = 3;

	unsigned arr[64];

	// The iteration count also comes from memory: otherwise the compiler knows n
	// and is free to rewrite the loop.
	volatile unsigned iterations = ITER;

	struct Sample
	{
		uint64_t cycles;
		uint32_t instret;
		unsigned sum;
	};

	// Debug::log prints unsigned values in hex and signed ones in decimal.
	// All values here are known to be below 2^31.
	int32_t D(uint64_t v)
	{
		return static_cast<int32_t>(v);
	}

	uint32_t rdinstret()
	{
		uint32_t r;
		__asm__ volatile("csrr %0, minstret" : "=r"(r));
		return r;
	}

	// Interrupts are disabled during the measurement so the timer does not get counted.
	[[cheriot::interrupt_state(disabled)]] __noinline Sample
	measure(unsigned (*kernel)(const unsigned *, unsigned),
	        const unsigned *a,
	        unsigned        n)
	{
		uint32_t i0  = rdinstret();
		uint64_t c0  = rdcycle64();
		unsigned s   = kernel(a, n);
		uint64_t c1  = rdcycle64();
		uint32_t i1  = rdinstret();
		return {c1 - c0, i1 - i0, s};
	}

	// Empty run (n = 0): the overhead of the measurement itself (call,
	// prologue, counter reads). It is subtracted from the results.
	void report(const char *name, unsigned (*kernel)(const unsigned *, unsigned))
	{
		Sample empty = measure(kernel, arr, 0);
		for (unsigned r = 0; r < REPS; r++)
		{
			unsigned n = iterations;
			Sample   s = measure(kernel, arr, n);
			uint64_t c = s.cycles - empty.cycles;
			uint32_t i = s.instret - empty.instret;
			// Per iteration, in thousandths (mcyc = 1/1000 of a cycle): 9000 = 9.000.
			Debug::log("{} rep {}: n={} cycles={} instret={} "
			           "mcyc/iter={} mins/iter={} sum={} (overhead c={} i={})",
			           name,
			           D(r),
			           D(n),
			           D(c),
			           D(i),
			           D(c * 1000 / n),
			           D(uint64_t(i) * 1000 / n),
			           D(s.sum),
			           D(empty.cycles),
			           D(empty.instret));
		}
	}
} // namespace

int __cheri_compartment("bench") run()
{
	for (unsigned k = 0; k < 64; k++)
	{
		arr[k] = k + 1;
	}
	// Bounds of the pointer passed into the loop: exactly 64 words.
	Debug::log("array capability: {}", static_cast<void *>(arr));

	report("A (hw only)", sum_a);
	report("B (hw + sw)", sum_b);

	// Negative control: the same loop code, narrow bounds / narrow limit.
	// The trap must fire; if it does, the call returns -1 (unwind).
	Debug::log("C1 hw control, bounds 32 words: returned {}", probe_hw(32));
	Debug::log("C2 sw control, lim 32:          returned {}", probe_sw(32));
	Debug::log("C0 sanity, bounds 64 words:      returned {}", probe_hw(64));
	return 0;
}
