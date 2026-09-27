#!/usr/bin/env python3
"""Снимок экрана машины через VNC — тем путём, которым идёт пользователь.

Минимальный клиент RFB: подключиться, попросить один полный кадр, сохранить
PPM и посчитать тёмные точки. Эталон экрана загруженного Оберона — 18607
(находка 48), так что совпадение числа и есть проверка.

  virtctl -n <ns> vnc <vmi> --proxy-only --port 5978 &
  kubevirt/vnc_snapshot.py 127.0.0.1 5978 screen.ppm

⚠ Прокси virtctl принимает ОДНО подключение и выходит: не проверяйте порт
посторонним соединением (nc -z), оно съест его.
"""
import socket, struct, sys

host, port, out = sys.argv[1], int(sys.argv[2]), sys.argv[3]
s = socket.create_connection((host, port), timeout=20)

def rd(n):
    b = b''
    while len(b) < n:
        c = s.recv(n - len(b))
        if not c:
            raise EOFError('closed')
        b += c
    return b

ver = rd(12)
s.sendall(b'RFB 003.008\n')
n = rd(1)[0]
types = rd(n)
if 1 not in types:
    raise SystemExit(f'no None security: {list(types)}')
s.sendall(b'\x01')
if struct.unpack('>I', rd(4))[0] != 0:
    raise SystemExit('security failed')
s.sendall(b'\x01')  # shared
w, h = struct.unpack('>HH', rd(4))
rd(16)
name = rd(struct.unpack('>I', rd(4))[0]).decode(errors='replace')
# 32bpp, little endian, true colour, RGB at 16/8/0
s.sendall(struct.pack('>BxxxBBBBHHHBBBxxx', 0, 32, 24, 0, 1, 255, 255, 255, 16, 8, 0))
s.sendall(struct.pack('>BxHi', 2, 1, 0))  # SetEncodings: Raw
s.sendall(struct.pack('>BBHHHH', 3, 0, 0, 0, w, h))
fb = bytearray(w * h * 3)
got = 0
while got < w * h:
    t = rd(1)[0]
    if t != 0:
        raise SystemExit(f'unexpected message {t}')
    rd(1)
    nrect = struct.unpack('>H', rd(2))[0]
    for _ in range(nrect):
        x, y, rw, rh, enc = struct.unpack('>HHHHi', rd(12))
        if enc != 0:
            raise SystemExit(f'encoding {enc}')
        px = rd(rw * rh * 4)
        for j in range(rh):
            for i in range(rw):
                o = (j * rw + i) * 4
                d = ((y + j) * w + (x + i)) * 3
                fb[d:d + 3] = bytes((px[o + 2], px[o + 1], px[o]))
        got += rw * rh
with open(out, 'wb') as f:
    f.write(b'P6\n%d %d\n255\n' % (w, h) + fb)
dark = sum(1 for k in range(0, len(fb), 3) if fb[k] < 128)
print(f'{ver.decode().strip()} name={name!r} {w}x{h} dark_pixels={dark}')
