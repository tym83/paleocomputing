// The Verilator runtime pulls in thread-to-core affinity functions that the
// wasm sysroot lacks. The review warned about exactly this. The signatures must match
// those verilated.cpp sees, otherwise wasm-ld complains about a type mismatch.
#include <cerrno>
extern "C" {
int pthread_getaffinity_np(unsigned long, unsigned long, void*) { return ENOSYS; }
int pthread_setaffinity_np(unsigned long, unsigned long, const void*) { return ENOSYS; }
int sched_getcpu(void) { return 0; }
}
