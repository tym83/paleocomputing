// Negative control: the checks are real.
//
// probe_hw - THE SAME machine code as sum_a, but the pointer is narrowed to elems words.
//            The index reaches elems, and the load must fault on the capability
//            bounds, without a single software check.
// probe_sw - the same code as sum_b with limit < 64: the software trap must fire
//            (__builtin_trap, an illegal instruction).
//
// The error handler prints the cause and unwinds the compartment: the caller
// gets -1. Returning a sum means no trap happened.

#include <cheri.hh>
#include <compartment.h>
#include <debug.hh>
#include <priv/riscv.h>

using Debug = ConditionalDebug<true, "probe">;

extern "C" unsigned sum_a(const unsigned *a, unsigned n);
extern "C" unsigned sum_b(const unsigned *a, unsigned n);
extern "C" volatile unsigned lim = 64;

namespace
{
	unsigned          arr[64];
	volatile unsigned iterations = 1000;

	// Every element is 1: without a trap the sum equals the iteration count (1000).
	void fill()
	{
		for (auto &x : arr)
		{
			x = 1;
		}
	}
} // namespace

extern "C" ErrorRecoveryBehaviour
compartment_error_handler(ErrorState *frame, size_t mcause, size_t mtval)
{
	if (mcause == priv::MCAUSE_CHERI)
	{
		auto [code, reg] = CHERI::extract_cheri_mtval(mtval);
		Debug::log("trap: CHERI {} in register {} = {}",
		           code,
		           reg,
		           reg == CHERI::RegisterNumber::CZR
		             ? nullptr
		             : *frame->get_register_value(reg));
	}
	else
	{
		Debug::log("trap: mcause {} (2 = illegal instruction) at {}",
		           mcause,
		           frame->pcc);
	}
	return ErrorRecoveryBehaviour::ForceUnwind;
}

int __cheri_compartment("probe") probe_hw(unsigned elems)
{
	fill();
	CHERI::Capability<unsigned> p{arr};
	p.bounds() = elems * sizeof(unsigned);
	Debug::log("probe_hw: pointer {}", static_cast<void *>(p.get()));
	return static_cast<int>(sum_a(p, iterations));
}

int __cheri_compartment("probe") probe_sw(unsigned limit)
{
	fill();
	lim = limit;
	return static_cast<int>(sum_b(arr, iterations));
}
