"""HalfSipHash-2-4 with a 32-bit output, as KubeNet signs its messages.

HalfSipHash is the 32-bit variant of SipHash (Aumasson and Bernstein): it
works on 32-bit words, so the Oberon machine computes it with its own
arithmetic. Key: 8 bytes; output: 4 bytes, little-endian.
"""
M = 0xFFFFFFFF


def _rotl(x, b):
    return ((x << b) | (x >> (32 - b))) & M


def _round(v):
    v0, v1, v2, v3 = v
    v0 = (v0 + v1) & M; v1 = _rotl(v1, 5); v1 ^= v0; v0 = _rotl(v0, 16)
    v2 = (v2 + v3) & M; v3 = _rotl(v3, 8); v3 ^= v2
    v0 = (v0 + v3) & M; v3 = _rotl(v3, 7); v3 ^= v0
    v2 = (v2 + v1) & M; v1 = _rotl(v1, 13); v1 ^= v2; v2 = _rotl(v2, 16)
    return [v0, v1, v2, v3]


def halfsiphash(key: bytes, msg: bytes) -> int:
    k0 = int.from_bytes(key[0:4], "little")
    k1 = int.from_bytes(key[4:8], "little")
    v = [k0, k1, 0x6C796765 ^ k0, 0x74656462 ^ k1]
    n = len(msg) // 4 * 4
    for i in range(0, n, 4):
        m = int.from_bytes(msg[i:i + 4], "little")
        v[3] ^= m
        v = _round(_round(v))
        v[0] ^= m
    b = (len(msg) & 0xFF) << 24
    for i, c in enumerate(msg[n:]):
        b |= c << (8 * i)
    v[3] ^= b
    v = _round(_round(v))
    v[0] ^= b
    v[2] ^= 0xFF
    for _ in range(4):
        v = _round(v)
    return v[1] ^ v[3]


def key_of(text: str) -> bytes:
    """KubeNet's key: up to 16 hex digits, the first two the lowest byte."""
    text = (text or "").strip()
    return bytes.fromhex(text.ljust(16, "0")[:16]) if text else bytes(8)


if __name__ == "__main__":
    # The first vector of the reference implementation: key 00..07, empty message.
    got = halfsiphash(bytes(range(8)), b"").to_bytes(4, "little")
    assert got == bytes([0xA9, 0x35, 0x9F, 0x5B]), got.hex()
    # and a 15-byte message
    got = halfsiphash(bytes(range(8)), bytes(range(15))).to_bytes(4, "little")
    print("vectors ok", got.hex())
