/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef QEMU_X8_CPU_QOM_H
#define QEMU_X8_CPU_QOM_H

#include "hw/core/cpu.h"
#include "qom/object.h"

#define TYPE_X8_CPU "x8-cpu"

OBJECT_DECLARE_CPU_TYPE(X8CPU, X8CPUClass, X8_CPU)

struct X8CPUClass {
    CPUClass parent_class;

    DeviceRealize parent_realize;
    ResettablePhases parent_phases;
};

#endif
