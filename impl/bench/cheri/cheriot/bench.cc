// Замер цены проверки границ на CHERIoT-Ibex.
//
// Цикл — ../loop.c (sum += a[i]; i = (i+1) & 63 по u32[64]), тот же, что на
// RISC5. Две конфигурации:
//   A — sum_a: только аппаратная проверка границ капабилити при чтении;
//   B — sum_b: A плюс программная проверка «беззнаковое i >= lim -> ловушка».
// Конфигурации «без проверки вовсе» здесь нет и быть не может: на CHERIoT
// любое чтение через капабилити проверяется железом.
//
// Счёт: mcycle и minstret до и после, прерывания запрещены на время замера,
// итераций много (ITER), повторов несколько (REPS) — видно, стабилен ли счёт.

#include <compartment.h>
#include <debug.hh>
#include <fail-simulator-on-error.h>
#include <riscvreg.h>
#include <stdint.h>

using Debug = ConditionalDebug<true, "bench">;

extern "C" unsigned sum_a(const unsigned *a, unsigned n);
extern "C" unsigned sum_b(const unsigned *a, unsigned n);

// Предел программной проверки. volatile — компилятор не видит значения и не
// может доказать, что проверка лишняя.
extern "C" volatile unsigned lim = 64;

int __cheri_compartment("probe") probe_hw(unsigned elems);
int __cheri_compartment("probe") probe_sw(unsigned limit);

namespace
{
	constexpr unsigned ITER = 100000;
	constexpr unsigned REPS = 3;

	unsigned arr[64];

	// Число итераций — тоже из памяти: иначе компилятор знает n и волен
	// переписать цикл.
	volatile unsigned iterations = ITER;

	struct Sample
	{
		uint64_t cycles;
		uint32_t instret;
		unsigned sum;
	};

	// Debug::log печатает беззнаковые в шестнадцатеричном виде, знаковые —
	// в десятичном. Все значения здесь заведомо меньше 2^31.
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

	// Прерывания запрещены на время замера — в счёт не попадёт таймер.
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

	// Пустой прогон (n = 0): накладные расходы самого замера — вызов,
	// пролог, чтение счётчиков. Вычитаются из результатов.
	void report(const char *name, unsigned (*kernel)(const unsigned *, unsigned))
	{
		Sample empty = measure(kernel, arr, 0);
		for (unsigned r = 0; r < REPS; r++)
		{
			unsigned n = iterations;
			Sample   s = measure(kernel, arr, n);
			uint64_t c = s.cycles - empty.cycles;
			uint32_t i = s.instret - empty.instret;
			// На итерацию — в тысячных долях (mcyc = 1/1000 такта): 9000 = 9.000.
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
	// Границы указателя, который уходит в цикл: ровно 64 слова.
	Debug::log("array capability: {}", static_cast<void *>(arr));

	report("A (hw only)", sum_a);
	report("B (hw + sw)", sum_b);

	// Отрицательный контроль: тот же код цикла, узкие границы / узкий предел.
	// Ловушка обязана сработать; при успехе вызов вернёт -1 (разгрузка).
	Debug::log("C1 hw control, bounds 32 words: returned {}", probe_hw(32));
	Debug::log("C2 sw control, lim 32:          returned {}", probe_sw(32));
	Debug::log("C0 sanity, bounds 64 words:      returned {}", probe_hw(64));
	return 0;
}
