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
static const char *ng0 = "D:/CADCA5/layer2_tb.vhd";



static void work_a_2101557585_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2101557585_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = xsi_get_transient_memory(64U);
    memset(t2, 0, 64U);
    t3 = t2;
    t4 = t3;
    *((unsigned char *)t4) = (unsigned char)2;
    t5 = (t3 + 1U);
    t6 = (t0 + 5904);
    memcpy(t5, t6, 15U);
    t3 = (t3 + 16U);
    t8 = t3;
    *((unsigned char *)t8) = (unsigned char)2;
    t9 = (t3 + 1U);
    t10 = (t0 + 5919);
    memcpy(t9, t10, 15U);
    t3 = (t3 + 16U);
    t12 = t3;
    *((unsigned char *)t12) = (unsigned char)2;
    t13 = (t3 + 1U);
    t14 = (t0 + 5934);
    memcpy(t13, t14, 15U);
    t3 = (t3 + 16U);
    t16 = t3;
    *((unsigned char *)t16) = (unsigned char)2;
    t17 = (t3 + 1U);
    t18 = (t0 + 5949);
    memcpy(t17, t18, 15U);
    t20 = (t0 + 3872);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t2, 64U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t25 = *((int64 *)t3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t25);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t25 = *((int64 *)t3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t25);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_2101557585_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2101557585_2372691052_p_0,(void *)work_a_2101557585_2372691052_p_1};
	xsi_register_didat("work_a_2101557585_2372691052", "isim/layer2_tb_isim_beh.exe.sim/work/a_2101557585_2372691052.didat");
	xsi_register_executes(pe);
}
