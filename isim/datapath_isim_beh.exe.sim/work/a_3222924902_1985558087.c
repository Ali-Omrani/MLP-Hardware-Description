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
static const char *ng0 = "D:/CADCA5/layer1.vhd";



static void work_a_3222924902_1985558087_p_0(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(122, ng0);

LAB3:    t1 = (4 - 1);
    t2 = (t0 + 6832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = t1;
    xsi_driver_first_trans_fast(t2);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3222924902_1985558087_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(123, ng0);

LAB3:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6736);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3222924902_1985558087_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(124, ng0);

LAB3:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    t1 = (t0 + 6960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6752);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3222924902_1985558087_init()
{
	static char *pe[] = {(void *)work_a_3222924902_1985558087_p_0,(void *)work_a_3222924902_1985558087_p_1,(void *)work_a_3222924902_1985558087_p_2};
	xsi_register_didat("work_a_3222924902_1985558087", "isim/datapath_isim_beh.exe.sim/work/a_3222924902_1985558087.didat");
	xsi_register_executes(pe);
}
