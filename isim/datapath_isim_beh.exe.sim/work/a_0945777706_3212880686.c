/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/CADCA5/Multiplier.vhd";
extern char *WORK_P_1193650813;

char *work_p_1193650813_sub_2185784959_1684452321(char *, char *, char *);


static void work_a_0945777706_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = work_p_1193650813_sub_2185784959_1684452321(WORK_P_1193650813, t2, t3);
    t4 = (t0 + 2912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB2:    t9 = (t0 + 2832);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0945777706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0945777706_3212880686_p_0};
	xsi_register_didat("work_a_0945777706_3212880686", "isim/datapath_isim_beh.exe.sim/work/a_0945777706_3212880686.didat");
	xsi_register_executes(pe);
}
