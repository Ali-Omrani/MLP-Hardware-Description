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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *WORK_P_1193650813;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *WORK_P_1496313929;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_1193650813_init();
    work_p_1496313929_init();
    work_a_0945777706_3212880686_init();
    work_a_1153420228_3212880686_init();
    work_a_0516162765_3212880686_init();
    work_a_0207298207_3212880686_init();
    work_a_1631455290_3605678778_init();
    work_a_3805079620_2190091522_init();
    work_a_4000226436_3212880686_init();
    work_a_3164747398_0681682556_init();
    work_a_4059165947_1985558087_init();
    work_a_2101557585_2372691052_init();


    xsi_register_tops("work_a_2101557585_2372691052");

    WORK_P_1193650813 = xsi_get_engine_memory("work_p_1193650813");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_1496313929 = xsi_get_engine_memory("work_p_1496313929");
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}
