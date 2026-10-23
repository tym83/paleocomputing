// Compiler and linker flags for translated programs, shared by the page and by
// impl/ada-colors/web/build.mjs, which builds the translators and the runtime the
// same way. The page and the build must agree, or a program compiled in the
// browser would link against a runtime built differently.

// clang and lld compiled to WebAssembly, from npm through jsDelivr
export const CLANG_VERSION = '22.0.0-git20542-10';
export const CLANG_URL = `https://cdn.jsdelivr.net/npm/@yowasp/clang@${CLANG_VERSION}/gen/bundle.js`;

// wasm32-wasip1-threads: real threads on shared memory, one worker each.
// setjmp/longjmp (the runtime's exceptions) become wasm exceptions; the legacy
// encoding is the one every current browser runs.
export const CFLAGS = [
  '--target=wasm32-wasip1-threads', '--sysroot=/sysroot', '-pthread',
  '-O1', '-w', '-std=gnu11', '-I/rt',
  '-mllvm', '-wasm-enable-sjlj', '-mllvm', '-wasm-use-legacy-eh',
];

export function ldflags(out, stackMiB) {
  return [
    '--target=wasm32-wasip1-threads', '--sysroot=/sysroot', '-pthread',
    '-nodefaultlibs', '-lsetjmp', '-lc', '/rtlib/libclang_rt.builtins.a',
    '-Wl,--import-memory,--shared-memory,--max-memory=1073741824',
    `-Wl,-z,stack-size=${stackMiB << 20}`, '-o', out,
  ];
}
