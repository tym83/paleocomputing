// Отрицательный контроль: проверки настоящие.
//
// probe_hw — ТОТ ЖЕ машинный код sum_a, но указатель сужен до elems слов.
//            Индекс доходит до elems, и чтение обязано упасть по границам
//            капабилити — без единой программной проверки.
// probe_sw — тот же код sum_b с пределом limit < 64: обязана сработать
//            программная ловушка (__builtin_trap, недопустимая команда).
//
// Обработчик ошибок печатает причину и разгружает компартмент: вызывающий
// получает -1. Возврат суммы значит, что ловушки не было.

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

	// Каждый элемент — 1: без ловушки сумма равна числу итераций (1000).
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
