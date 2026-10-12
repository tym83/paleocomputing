/*
 * Answers to monitor queries for the X8 machine: libvirt asks for the CPU
 * models (see target/risc5/qmp-cmds.c for why both are defined).
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#include "qemu/osdep.h"
#include "qemu/target-info.h"
#include "qapi/error.h"
#include "qapi/qapi-commands-machine.h"
#include "cpu.h"

static void x8_cpu_add_definition(gpointer data, gpointer user_data)
{
    ObjectClass *oc = data;
    CpuDefinitionInfoList **cpu_list = user_data;
    CpuDefinitionInfo *info = g_new0(CpuDefinitionInfo, 1);
    const char *typename = object_class_get_name(oc);

    info->name = cpu_model_from_type(typename);
    info->q_typename = g_strdup(typename);

    QAPI_LIST_PREPEND(*cpu_list, info);
}

CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp)
{
    CpuDefinitionInfoList *cpu_list = NULL;
    GSList *list = object_class_get_list(target_cpu_type(), false);

    g_slist_foreach(list, x8_cpu_add_definition, &cpu_list);
    g_slist_free(list);

    return cpu_list;
}

/*
 * Model expansion: list the features the chosen model provides.
 * Our machine has no features at all, so we refuse honestly. The function
 * exists so that the stub is not pulled in whole (see above).
 */
CpuModelExpansionInfo *qmp_query_cpu_model_expansion(CpuModelExpansionType type,
                                                     CpuModelInfo *model,
                                                     Error **errp)
{
    error_setg(errp, "X8 has a single CPU model and it has no features");
    return NULL;
}
