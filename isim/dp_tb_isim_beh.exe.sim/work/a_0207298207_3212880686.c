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
static const char *ng0 = "D:/CADCA5/Activation Function.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0207298207_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    *((unsigned char *)t2) = (unsigned char)2;
    t6 = (t1 + 1U);
    t10 = (t0 + 4526);
    memcpy(t6, t10, 15U);
    t13 = (t0 + 2912);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t13);

LAB3:    t1 = (t0 + 2832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t7 = (0 + 0U);
    t1 = (t6 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    *((unsigned char *)t2) = (unsigned char)2;
    t6 = (t1 + 1U);
    t10 = (t0 + 4511);
    memcpy(t6, t10, 15U);
    t13 = (t0 + 2912);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t13);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t17 = (t0 + 2912);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 16U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB6;

LAB8:    t10 = (t0 + 1192U);
    t11 = *((char **)t10);
    t12 = (0 + 1U);
    t10 = (t11 + t12);
    t13 = (t0 + 4496);
    t15 = ((IEEE_P_2592010699) + 4024);
    t16 = xsi_vhdl_greater(t15, t10, 15U, t13, 15U);
    t5 = t16;
    goto LAB10;

}


extern void work_a_0207298207_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0207298207_3212880686_p_0};
	xsi_register_didat("work_a_0207298207_3212880686", "isim/dp_tb_isim_beh.exe.sim/work/a_0207298207_3212880686.didat");
	xsi_register_executes(pe);
}
