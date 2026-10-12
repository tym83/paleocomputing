/* BSD libc functions the R1000 emulator uses that glibc does not have. */
#ifndef LINUX_COMPAT_H
#define LINUX_COMPAT_H
static inline int fls(int x)
{
	return x ? 32 - __builtin_clz((unsigned)x) : 0;
}
static inline int flsl(long x)
{
	return x ? 64 - __builtin_clzl((unsigned long)x) : 0;
}
static inline int flsll(long long x)
{
	return x ? 64 - __builtin_clzll((unsigned long long)x) : 0;
}
#endif
