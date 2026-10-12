// A flat archive of files: a 4-byte length, a JSON index {path: [offset, size]}
// and the bytes. The page gets the toolchain (headers, libc, the runtime object)
// as one zlib-compressed file of this kind.

export function pack(files) {
  const paths = Object.keys(files).sort();
  const index = {};
  let size = 0;
  for (const p of paths) { index[p] = [size, files[p].length]; size += files[p].length; }
  const head = new TextEncoder().encode(JSON.stringify(index));
  const out = new Uint8Array(4 + head.length + size);
  new DataView(out.buffer).setUint32(0, head.length, true);
  out.set(head, 4);
  let o = 4 + head.length;
  for (const p of paths) { out.set(files[p], o); o += files[p].length; }
  return out;
}

export function unpack(bytes) {
  const n = new DataView(bytes.buffer, bytes.byteOffset).getUint32(0, true);
  const index = JSON.parse(new TextDecoder().decode(bytes.subarray(4, 4 + n)));
  const base = 4 + n, files = {};
  for (const [p, [o, s]] of Object.entries(index)) files[p] = bytes.subarray(base + o, base + o + s);
  return files;
}

// {'a/b/c': bytes} → {a: {b: {c: bytes}}}, the shape the clang package takes
export function tree(files) {
  const root = {};
  for (const [p, b] of Object.entries(files)) {
    const parts = p.split('/');
    let d = root;
    for (const part of parts.slice(0, -1)) d = d[part] ||= {};
    d[parts[parts.length - 1]] = b;
  }
  return root;
}
