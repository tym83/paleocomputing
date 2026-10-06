#!/bin/sh
# Grafts the RISC5 target into a QEMU tree.
#
# QEMU targets are compiled in: dropping the files in is not enough, the target
# also has to be declared in four places. That is why this is a script and not
# a list of steps kept in someone's head; otherwise the build is not reproducible.
#
#   graft.sh <qemu-tree-directory>
set -eu
Q="${1:?specify the QEMU tree directory}"
HERE=$(cd "$(dirname "$0")" && pwd)

# cp -R, not cp -a: the copies must get the current time. With the source
# timestamps kept, a file edited before the previous build looks older than its
# object file, and an incremental build silently keeps the old code.
cp -R "$HERE/target/risc5"               "$Q/target/"
cp -R "$HERE/hw/risc5"                   "$Q/hw/"
cp    "$HERE/configs/targets/risc5-softmmu.mak" "$Q/configs/targets/"
cp -R "$HERE/configs/devices/risc5-softmmu"     "$Q/configs/devices/"

add_once() {  # file, what to look for, what to replace it with
  grep -q "$3" "$1" || sed -i.bak "s|$2|$3\\n$2|" "$1"
  rm -f "$1.bak"
}

add_once "$Q/target/meson.build" "subdir('riscv')"      "subdir('risc5')"
add_once "$Q/target/Kconfig"     "source riscv/Kconfig"  "source risc5/Kconfig"
add_once "$Q/hw/meson.build"     "subdir('riscv')"       "subdir('risc5')"
add_once "$Q/hw/Kconfig"         "source riscv/Kconfig"  "source risc5/Kconfig"

# The list of targets in QAPI; without it target-info does not build.
grep -q "'risc5'" "$Q/qapi/machine.json" || \
  sed -i.bak "s|'ppc64', 'riscv32'|'ppc64', 'risc5', 'riscv32'|" "$Q/qapi/machine.json"
rm -f "$Q/qapi/machine.json.bak"

# The air, two changes to the UDP chardev (chardev/char-udp.c):
#
# 1. Keep receiving after a failed read. The socket is connected, so once the
#    relay is gone an ICMP "port unreachable" makes the next read fail with
#    ECONNREFUSED, and upstream then removes the read watch for good: the
#    machine keeps sending but never hears the air again. A datagram socket has
#    no stream to end, and the error is consumed by the read, so carrying on
#    does not spin.
# 2. Connect again after a failed write. In Kubernetes the relay is a Service;
#    Cilium's socket load balancing turns the connect() to its ClusterIP into
#    the address of one relay pod, and when that pod is replaced it aborts the
#    socket, which leaves it without a destination. Every write then fails and
#    the machine falls silent for good. On a failed write the chardev resolves
#    the relay's name again and reconnects, at most once a second.
U="$Q/chardev/char-udp.c"
if ! grep -q 'risc5: connect again' "$U"; then
  "${PYTHON:-python3}" - "$U" <<'PY'
import sys
p = sys.argv[1]
s = open(p).read()
edits = [
    ("""#include "io/channel-socket.h"
""", """#include "io/channel-socket.h"
#include "qemu/timer.h"
#include <netdb.h>
"""),
    ("""    int max_size;
};""", """    int max_size;
    SocketAddress *remote;   /* risc5: connect again after a failed write */
    int64_t retry_at;
};"""),
    ("""static int udp_chr_write(Chardev *chr, const uint8_t *buf, int len)
{
    UdpChardev *s = UDP_CHARDEV(chr);

    return qio_channel_write(
        s->ioc, (const char *)buf, len, NULL);
}""", """static int udp_chr_write(Chardev *chr, const uint8_t *buf, int len)
{
    UdpChardev *s = UDP_CHARDEV(chr);
    int ret = qio_channel_write(s->ioc, (const char *)buf, len, NULL);
    int64_t now;
    struct addrinfo hints = { .ai_family = AF_INET, .ai_socktype = SOCK_DGRAM };
    struct addrinfo *res;

    if (ret >= 0 || !s->remote || s->remote->type != SOCKET_ADDRESS_TYPE_INET) {
        return ret;
    }
    now = qemu_clock_get_ms(QEMU_CLOCK_REALTIME);
    if (now < s->retry_at) {
        return ret;
    }
    s->retry_at = now + 1000;
    if (getaddrinfo(s->remote->u.inet.host, s->remote->u.inet.port, &hints, &res) == 0) {
        if (connect(QIO_CHANNEL_SOCKET(s->ioc)->fd, res->ai_addr, res->ai_addrlen) == 0) {
            ret = qio_channel_write(s->ioc, (const char *)buf, len, NULL);
        }
        freeaddrinfo(res);
    }
    return ret;
}"""),
    ("""    if (ret <= 0) {
        remove_fd_in_watch(chr);
        return FALSE;
    }""", """    if (ret <= 0) {
        (void)chr;
        return TRUE;    /* risc5: keep the air after a failed read */
    }"""),
    ("""    qapi_free_SocketAddress(local_addr);
    qapi_free_SocketAddress(remote_addr);
    if (ret < 0) {
        object_unref(OBJECT(sioc));
        return false;
    }""", """    qapi_free_SocketAddress(local_addr);
    if (ret < 0) {
        qapi_free_SocketAddress(remote_addr);
        object_unref(OBJECT(sioc));
        return false;
    }
    s->remote = remote_addr;"""),
]
for old, new in edits:
    if old not in s:
        sys.exit("graft.sh: char-udp.c is not as expected near: " + old.strip().splitlines()[0])
    s = s.replace(old, new, 1)
open(p, "w").write(s)
PY
fi

echo "risc5 target grafted into $Q"
