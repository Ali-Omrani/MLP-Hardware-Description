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
static const char *ng0 = "D:/CADCA5/ROM.vhd";



static void work_a_3805079620_2190091522_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3392);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(152, ng0);
    t11 = (2 - 1);
    t4 = (t0 + 5612);
    *((int *)t4) = 0;
    t12 = (t0 + 5616);
    *((int *)t12) = t11;
    t13 = 0;
    t14 = t11;

LAB11:    if (t13 <= t14)
        goto LAB12;

LAB14:    goto LAB9;

LAB12:    xsi_set_current_line(153, ng0);
    t15 = (t0 + 1672U);
    t16 = *((char **)t15);
    t15 = (t0 + 1352U);
    t17 = *((char **)t15);
    t18 = *((int *)t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    t21 = (4 - 1);
    xsi_vhdl_check_range_of_index(0, t21, 1, t18);
    t22 = (16U * t20);
    t15 = (t0 + 5612);
    t23 = *((int *)t15);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, *((int *)t15));
    t26 = (64U * t25);
    t27 = (0 + t26);
    t28 = (t27 + t22);
    t29 = (t16 + t28);
    t30 = (t0 + 5612);
    t31 = *((int *)t30);
    t32 = (t31 - 0);
    t33 = (t32 * 1);
    t34 = (16U * t33);
    t35 = (0U + t34);
    t36 = (t0 + 3472);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t29, 16U);
    xsi_driver_first_trans_delta(t36, t35, 16U, 0LL);

LAB13:    t2 = (t0 + 5612);
    t13 = *((int *)t2);
    t4 = (t0 + 5616);
    t14 = *((int *)t4);
    if (t13 == t14)
        goto LAB14;

LAB15:    t11 = (t13 + 1);
    t13 = t11;
    t5 = (t0 + 5612);
    *((int *)t5) = t13;
    goto LAB11;

}


extern void work_a_3805079620_2190091522_init()
{
	static char *pe[] = {(void *)work_a_3805079620_2190091522_p_0};
	xsi_register_didat("work_a_3805079620_2190091522", "isim/layer2_tb_isim_beh.exe.sim/work/a_3805079620_2190091522.didat");
	xsi_register_executes(pe);
}
