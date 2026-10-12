/*
 * The X8 of the Mathematisch Centrum as Dijkstra's THE had it: 32K words of
 * core, the drum, the console teleprinter and keyboard, the line printer and
 * the IP tape reader (EWD 149, Grune 1972 section 10.4).
 *
 *   qemu-system-x8 -kernel the.tape [-serial ...] [-serial ...]
 *                  [-machine x8,keys=<file>|commands=<lines>,realtime=off]
 *
 * -kernel is the program tape: QEMU presses LS and IP, and CHARON reads it
 * through the IP reader, as the operator did. The first serial port is the
 * console teleprinter (output) and its keyboard (input); the second, if given,
 * is the line printer, otherwise the line printer prints on the console too.
 * With no serial port at all (libvirt passes -nodefaults) the console is a
 * text screen, which the VNC display shows.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/core/boards.h"
#include "qemu/error-report.h"
#include "qemu/main-loop.h"
#include "chardev/char.h"
#include "chardev/char-fe.h"
#include "system/address-spaces.h"
#include "system/system.h"
#include "cpu.h"
#include "x8.h"
#include "charon.h"

#define X8_CORE_WORDS 32768        /* the THE configuration (EWD 113) */

typedef struct X8MC {
    X8CPU *cpu;
    x8 m;
    CharFrontend console, printer;
    bool have_printer;
    int col[2];                    /* column of the teleprinter and the printer */
} X8MC;

static X8MC mc;
static char *x8_keys;              /* -machine x8,keys=<file>: "ms text" lines */
static char *x8_commands;          /* -machine x8,commands=<line;line>  */
static bool x8_realtime = true;

static void put(CharFrontend *be, const char *s)
{
    qemu_chr_fe_write_all(be, (const uint8_t *)s, strlen(s));
}

/*
 * A character from CHARON. The teleprinter lines carry the machine time, as
 * x8emu writes them, so the console in QEMU reads like the reference the
 * episode's tests compare with.
 */
static void x8_on_char(int dev, int ch, uint64_t cycles)
{
    bool lp = dev == DEV_LINEPRINTER;
    CharFrontend *be = lp && mc.have_printer ? &mc.printer : &mc.console;
    int *col = &mc.col[lp];
    char buf[32];

    if (!lp && *col == 0) {
        snprintf(buf, sizeof(buf), "[%8.3f s] ",
                 (double)cycles / (1000.0 * CYCLES_PER_MS));
        put(be, buf);
    }
    if (ch == '\n') {
        put(be, "\r\n");
        *col = 0;
        return;
    }
    buf[0] = (char)ch;
    buf[1] = 0;
    put(be, buf);
    (*col)++;
}

static int x8_can_read(void *opaque)
{
    return 16;
}

/* the operator presses keys on the console keyboard (device 2) */
static void x8_read(void *opaque, const uint8_t *buf, int size)
{
    for (int i = 0; i < size; i++) {
        int ch = buf[i], code;

        if (ch == '\r' || ch == '\n') {
            code = 37;
            put(&mc.console, "\r\n");
        } else {
            code = charon_code(ch);
            if (code < 0) {
                continue;
            }
            put(&mc.console, (char[2]){ (char)ch, 0 });
        }
        charon_key_now(&mc.m, code);
    }
    mc.cpu->wake = true;
    qemu_cpu_kick(CPU(mc.cpu));
}

/*
 * commands=<line;line>: the operator types these lines at start, the first
 * after twelve seconds of machine time (when pm2 has asked its question), the
 * others three seconds apart. They go to CHARON as a keys file.
 */
static char *commands_to_keys(const char *text)
{
    g_auto(GStrv) lines = g_strsplit(text, ";", -1);
    g_autoptr(GString) s = g_string_new(NULL);
    g_autoptr(GError) err = NULL;
    char *path;
    int fd, n = 0;

    for (char **l = lines; *l; l++) {
        if (**l) {
            g_string_append_printf(s, "%d %s\\n\n", 12000 + 3000 * n++, *l);
        }
    }
    fd = g_file_open_tmp("x8-keys-XXXXXX", &path, &err);
    if (fd < 0 || write(fd, s->str, s->len) != (ssize_t)s->len) {
        error_report("commands: %s", err ? err->message : strerror(errno));
        exit(1);
    }
    close(fd);
    return path;
}

static void x8_mc_init(MachineState *machine)
{
    MemoryRegion *page = g_new(MemoryRegion, 1);
    charon_cfg cfg = { 0 };
    Chardev *con = serial_hd(0), *lp = serial_hd(1);

    if (!machine->kernel_filename) {
        error_report("no program tape: give it with -kernel <file.tape>");
        exit(1);
    }
    if (x8_keys && *x8_keys && x8_commands && *x8_commands) {
        error_report("keys and commands are two ways to type: give one");
        exit(1);
    }

    mc.cpu = X8_CPU(cpu_create(machine->cpu_type));
    mc.cpu->env.m = &mc.m;
    mc.cpu->env.realtime = x8_realtime;

    /* the page of QEMU's one translation block, which hands over to the X8 */
    memory_region_init_rom(page, NULL, "x8.handover", 0x1000, &error_fatal);
    memory_region_add_subregion(get_system_memory(), 0, page);

    if (!con) {
        con = qemu_chr_new("x8-console", "vc:80Cx40C", NULL);
    }
    qemu_chr_fe_init(&mc.console, con, &error_fatal);
    qemu_chr_fe_set_handlers(&mc.console, x8_can_read, x8_read, NULL, NULL,
                             &mc, NULL, true);
    if (lp) {
        qemu_chr_fe_init(&mc.printer, lp, &error_fatal);
        mc.have_printer = true;
    }

    cfg.reader2 = machine->kernel_filename;
    cfg.on_char = x8_on_char;
    if (x8_keys && *x8_keys) {
        cfg.keys = x8_keys;
    } else if (x8_commands && *x8_commands) {
        cfg.keys = commands_to_keys(x8_commands);
    }
    x8_init(&mc.m, X8_CORE_WORDS);
    charon_setup(&mc.m, &cfg);
    x8_ip(&mc.m);
    mc.cpu->env.start_ns = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);
}

static char *get_keys(Object *obj, Error **errp)
{
    return g_strdup(x8_keys ? x8_keys : "");
}

static void set_keys(Object *obj, const char *value, Error **errp)
{
    g_free(x8_keys);
    x8_keys = g_strdup(value);
}

static char *get_commands(Object *obj, Error **errp)
{
    return g_strdup(x8_commands ? x8_commands : "");
}

static void set_commands(Object *obj, const char *value, Error **errp)
{
    g_free(x8_commands);
    x8_commands = g_strdup(value);
}

static bool get_realtime(Object *obj, Error **errp)
{
    return x8_realtime;
}

static void set_realtime(Object *obj, bool value, Error **errp)
{
    x8_realtime = value;
}

static void x8_mc_machine_init(MachineClass *m)
{
    ObjectClass *oc = OBJECT_CLASS(m);

    m->desc = "Electrologica X8 of the Mathematisch Centrum (THE, 1968)";
    m->init = x8_mc_init;
    m->default_cpu_type = TYPE_X8_CPU;
    m->no_parallel = 1;
    m->no_floppy = 1;
    m->no_cdrom = 1;

    object_class_property_add_str(oc, "keys", get_keys, set_keys);
    object_class_property_set_description(oc, "keys",
        "what the operator types on the console keyboard: a file of \"ms text\" lines");
    object_class_property_add_str(oc, "commands", get_commands, set_commands);
    object_class_property_set_description(oc, "commands",
        "lines the operator types at start, separated by ';'");
    object_class_property_add_bool(oc, "realtime", get_realtime, set_realtime);
    object_class_property_set_description(oc, "realtime",
        "run at the speed of the X8 (on) or as fast as the host allows (off)");
}

DEFINE_MACHINE("x8", x8_mc_machine_init)
