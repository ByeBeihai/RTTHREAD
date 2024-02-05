/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-05-20     bigmagic     first version
 */

#include <rtthread.h>
#include <rthw.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    rt_kprintf("Hello,World!\n");
    rt_kprintf("Polaris 22A:RISC-V Multicore Parallel Neuromorphic Processor!\n");
    return 0;
}
