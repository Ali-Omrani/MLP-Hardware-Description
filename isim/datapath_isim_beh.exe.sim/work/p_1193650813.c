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
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


char *work_p_1193650813_sub_2062213575_1684452321(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[16];
    char t28[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2600);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t17 = (0 + 0U);
    t18 = (t2 + t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)2);
    if (t20 == 1)
        goto LAB9;

LAB10:    t16 = (unsigned char)0;

LAB11:    if (t16 != 0)
        goto LAB6;

LAB8:    t17 = (0 + 0U);
    t7 = (t2 + t17);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB14;

LAB15:    t13 = (unsigned char)0;

LAB16:    if (t13 != 0)
        goto LAB12;

LAB13:    t17 = (0 + 0U);
    t7 = (t2 + t17);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB19;

LAB20:    t13 = (unsigned char)0;

LAB21:    if (t13 != 0)
        goto LAB17;

LAB18:    t17 = (0 + 1U);
    t7 = (t2 + t17);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t18 = *((char **)t11);
    t21 = (0 + 1U);
    t22 = (t3 + t21);
    t25 = (t1 + 2600);
    t26 = xsi_record_get_element_type(t25, 1);
    t29 = (t26 + 80U);
    t30 = *((char **)t29);
    t13 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t7, t18, t22, t30);
    if (t13 != 0)
        goto LAB28;

LAB30:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (0 + 0U);
    t7 = (t8 + t17);
    *((unsigned char *)t7) = (unsigned char)2;

LAB29:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (0 + 0U);
    t7 = (t8 + t17);
    t13 = *((unsigned char *)t7);
    t15 = (t13 == (unsigned char)3);
    if (t15 != 0)
        goto LAB31;

LAB33:    t17 = (0 + 1U);
    t7 = (t3 + t17);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t18 = *((char **)t11);
    t21 = (0 + 1U);
    t22 = (t2 + t21);
    t25 = (t1 + 2600);
    t26 = xsi_record_get_element_type(t25, 1);
    t29 = (t26 + 80U);
    t30 = *((char **)t29);
    t31 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t7, t18, t22, t30);
    t32 = (t6 + 56U);
    t33 = *((char **)t32);
    t27 = (0 + 1U);
    t32 = (t33 + t27);
    t34 = (t28 + 12U);
    t35 = *((unsigned int *)t34);
    t36 = (1U * t35);
    memcpy(t32, t31, t36);

LAB32:
LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = (0 + 0U);
    t25 = (t26 + t27);
    *((unsigned char *)t25) = (unsigned char)2;
    t17 = (0 + 1U);
    t7 = (t2 + t17);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t18 = *((char **)t11);
    t21 = (0 + 1U);
    t22 = (t3 + t21);
    t25 = (t1 + 2600);
    t26 = xsi_record_get_element_type(t25, 1);
    t29 = (t26 + 80U);
    t30 = *((char **)t29);
    t31 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t28, t7, t18, t22, t30);
    t32 = (t6 + 56U);
    t33 = *((char **)t32);
    t27 = (0 + 1U);
    t32 = (t33 + t27);
    t34 = (t28 + 12U);
    t35 = *((unsigned int *)t34);
    t36 = (1U * t35);
    memcpy(t32, t31, t36);
    goto LAB7;

LAB9:    t21 = (0 + 0U);
    t22 = (t3 + t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    t16 = t24;
    goto LAB11;

LAB12:    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t27 = (0 + 0U);
    t10 = (t11 + t27);
    *((unsigned char *)t10) = (unsigned char)3;
    t17 = (0 + 1U);
    t7 = (t2 + t17);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t18 = *((char **)t11);
    t21 = (0 + 1U);
    t22 = (t3 + t21);
    t25 = (t1 + 2600);
    t26 = xsi_record_get_element_type(t25, 1);
    t29 = (t26 + 80U);
    t30 = *((char **)t29);
    t31 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t28, t7, t18, t22, t30);
    t32 = (t6 + 56U);
    t33 = *((char **)t32);
    t27 = (0 + 1U);
    t32 = (t33 + t27);
    t34 = (t28 + 12U);
    t35 = *((unsigned int *)t34);
    t36 = (1U * t35);
    memcpy(t32, t31, t36);
    goto LAB7;

LAB14:    t21 = (0 + 0U);
    t8 = (t3 + t21);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    t13 = t20;
    goto LAB16;

LAB17:    t27 = (0 + 1U);
    t10 = (t2 + t27);
    t11 = (t1 + 2600);
    t18 = xsi_record_get_element_type(t11, 1);
    t22 = (t18 + 80U);
    t25 = *((char **)t22);
    t35 = (0 + 1U);
    t26 = (t3 + t35);
    t29 = (t1 + 2600);
    t30 = xsi_record_get_element_type(t29, 1);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t23 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t10, t25, t26, t32);
    if (t23 != 0)
        goto LAB22;

LAB24:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (0 + 0U);
    t7 = (t8 + t17);
    *((unsigned char *)t7) = (unsigned char)2;

LAB23:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (0 + 0U);
    t7 = (t8 + t17);
    t13 = *((unsigned char *)t7);
    t15 = (t13 == (unsigned char)3);
    if (t15 != 0)
        goto LAB25;

LAB27:    t17 = (0 + 1U);
    t7 = (t2 + t17);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t18 = *((char **)t11);
    t21 = (0 + 1U);
    t22 = (t3 + t21);
    t25 = (t1 + 2600);
    t26 = xsi_record_get_element_type(t25, 1);
    t29 = (t26 + 80U);
    t30 = *((char **)t29);
    t31 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t7, t18, t22, t30);
    t32 = (t6 + 56U);
    t33 = *((char **)t32);
    t27 = (0 + 1U);
    t32 = (t33 + t27);
    t34 = (t28 + 12U);
    t35 = *((unsigned int *)t34);
    t36 = (1U * t35);
    memcpy(t32, t31, t36);

LAB26:    goto LAB7;

LAB19:    t21 = (0 + 0U);
    t8 = (t3 + t21);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    t13 = t20;
    goto LAB21;

LAB22:    t33 = (t6 + 56U);
    t34 = *((char **)t33);
    t36 = (0 + 0U);
    t33 = (t34 + t36);
    *((unsigned char *)t33) = (unsigned char)3;
    goto LAB23;

LAB25:    t21 = (0 + 1U);
    t10 = (t3 + t21);
    t11 = (t1 + 2600);
    t18 = xsi_record_get_element_type(t11, 1);
    t22 = (t18 + 80U);
    t25 = *((char **)t22);
    t27 = (0 + 1U);
    t26 = (t2 + t27);
    t29 = (t1 + 2600);
    t30 = xsi_record_get_element_type(t29, 1);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t10, t25, t26, t32);
    t34 = (t6 + 56U);
    t37 = *((char **)t34);
    t35 = (0 + 1U);
    t34 = (t37 + t35);
    t38 = (t28 + 12U);
    t36 = *((unsigned int *)t38);
    t39 = (1U * t36);
    memcpy(t34, t33, t39);
    goto LAB26;

LAB28:    t31 = (t6 + 56U);
    t32 = *((char **)t31);
    t27 = (0 + 0U);
    t31 = (t32 + t27);
    *((unsigned char *)t31) = (unsigned char)3;
    goto LAB29;

LAB31:    t21 = (0 + 1U);
    t10 = (t2 + t21);
    t11 = (t1 + 2600);
    t18 = xsi_record_get_element_type(t11, 1);
    t22 = (t18 + 80U);
    t25 = *((char **)t22);
    t27 = (0 + 1U);
    t26 = (t3 + t27);
    t29 = (t1 + 2600);
    t30 = xsi_record_get_element_type(t29, 1);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t10, t25, t26, t32);
    t34 = (t6 + 56U);
    t37 = *((char **)t34);
    t35 = (0 + 1U);
    t34 = (t37 + t35);
    t38 = (t28 + 12U);
    t36 = *((unsigned int *)t38);
    t39 = (1U * t36);
    memcpy(t34, t33, t39);
    goto LAB32;

LAB34:;
}

char *work_p_1193650813_sub_2185784959_1684452321(char *t1, char *t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t12[16];
    char t19[32];
    char t36[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned int t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2600);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 29;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 29);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t4 + 124U);
    t17 = ((IEEE_P_2592010699) + 4024);
    t18 = (t14 + 88U);
    *((char **)t18) = t17;
    t20 = (t14 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, t12);
    t21 = (t14 + 64U);
    *((char **)t21) = t12;
    t22 = (t14 + 80U);
    *((unsigned int *)t22) = 30U;
    t23 = (t5 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t5 + 12U);
    t26 = (t3 != 0);
    if (t26 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 0U);
    t27 = (t2 + t16);
    t28 = *((unsigned char *)t27);
    t29 = (0 + 0U);
    t30 = (t3 + t29);
    t31 = *((unsigned char *)t30);
    t32 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t28, t31);
    t33 = (t6 + 56U);
    t34 = *((char **)t33);
    t35 = (0 + 0U);
    t33 = (t34 + t35);
    *((unsigned char *)t33) = t32;
    t16 = (0 + 1U);
    t7 = (t2 + t16);
    t8 = (t1 + 2600);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 80U);
    t13 = *((char **)t11);
    t29 = (0 + 1U);
    t17 = (t3 + t29);
    t18 = (t1 + 2600);
    t20 = xsi_record_get_element_type(t18, 1);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t27 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t36, t7, t13, t17, t22);
    t30 = (t14 + 56U);
    t33 = *((char **)t30);
    t30 = (t33 + 0);
    t34 = (t36 + 12U);
    t35 = *((unsigned int *)t34);
    t37 = (1U * t35);
    memcpy(t30, t27, t37);
    t7 = (t14 + 56U);
    t8 = *((char **)t7);
    t7 = (t12 + 0U);
    t15 = *((int *)t7);
    t16 = (t15 - 20);
    t29 = (t16 * 1U);
    t35 = (0 + t29);
    t10 = (t8 + t35);
    t11 = (t6 + 56U);
    t13 = *((char **)t11);
    t37 = (0 + 1U);
    t11 = (t13 + t37);
    t38 = (6 - 20);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t40 = (1U * t39);
    memcpy(t11, t10, t40);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB5:    *((char **)t25) = t3;
    goto LAB4;

LAB6:;
}


extern void work_p_1193650813_init()
{
	static char *se[] = {(void *)work_p_1193650813_sub_2062213575_1684452321,(void *)work_p_1193650813_sub_2185784959_1684452321};
	xsi_register_didat("work_p_1193650813", "isim/datapath_isim_beh.exe.sim/work/p_1193650813.didat");
	xsi_register_subprogram_executes(se);
}
