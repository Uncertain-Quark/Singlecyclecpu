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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/kommi/Downloads/Singlecycletest/Singlecycletest/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {16U, 0U};
static unsigned int ng16[] = {17U, 0U};
static unsigned int ng17[] = {18U, 0U};
static unsigned int ng18[] = {19U, 0U};
static unsigned int ng19[] = {20U, 0U};
static unsigned int ng20[] = {21U, 0U};
static unsigned int ng21[] = {22U, 0U};
static unsigned int ng22[] = {23U, 0U};
static unsigned int ng23[] = {24U, 0U};
static unsigned int ng24[] = {25U, 0U};
static unsigned int ng25[] = {26U, 0U};
static unsigned int ng26[] = {27U, 0U};
static unsigned int ng27[] = {28U, 0U};
static unsigned int ng28[] = {29U, 0U};
static unsigned int ng29[] = {30U, 0U};
static unsigned int ng30[] = {31U, 0U};
static unsigned int ng31[] = {32U, 0U};
static unsigned int ng32[] = {33U, 0U};
static unsigned int ng33[] = {34U, 0U};
static unsigned int ng34[] = {35U, 0U};
static unsigned int ng35[] = {36U, 0U};
static int ng36[] = {0, 0};



static void Always_23_0(char *t0)
{
    char t9[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB73;

LAB74:
LAB76:
LAB75:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB77:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB77;

LAB9:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB78:    if (t19 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t9) = 1;

LAB81:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(27, ng0);

LAB86:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB84:    goto LAB77;

LAB11:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t32, 0, 8);
    xsi_vlog_signed_not_equal(t32, 32, t4, 32, t7, 32);
    t3 = (t32 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t32);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(28, ng0);

LAB91:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB89:    goto LAB77;

LAB13:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t32, 0, 8);
    xsi_vlog_signed_less(t32, 32, t4, 32, t7, 32);
    t3 = (t32 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t32);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(29, ng0);

LAB96:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB94:    goto LAB77;

LAB15:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t32, 0, 8);
    xsi_vlog_signed_greatereq(t32, 32, t4, 32, t7, 32);
    t3 = (t32 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t32);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(30, ng0);

LAB101:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB99:    goto LAB77;

LAB17:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB103;

LAB102:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB104;

LAB105:    t23 = (t9 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(31, ng0);

LAB111:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB109:    goto LAB77;

LAB19:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB113;

LAB112:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB113;

LAB116:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB115;

LAB114:    *((unsigned int *)t9) = 1;

LAB115:    t23 = (t9 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(32, ng0);

LAB121:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB119:    goto LAB77;

LAB21:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB23:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB25:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB27:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB31:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB33:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB35:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB37:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB39:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t32, 0, 8);
    xsi_vlog_signed_less(t32, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t32, 0, 0, 32, 0LL);
    goto LAB77;

LAB41:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB123;

LAB122:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB123;

LAB126:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB124;

LAB125:    t23 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t23, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB43:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB127;

LAB128:
LAB129:    t23 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t23, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB45:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB130;

LAB131:
LAB132:    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB47:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB133;

LAB134:
LAB135:    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB49:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB51:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB53:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t31, 0, 8);
    xsi_vlog_signed_arith_rshift(t31, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 32, 0LL);
    goto LAB77;

LAB55:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB57:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB59:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB61:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t32, 0, 8);
    xsi_vlog_signed_less(t32, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t32, 0, 0, 32, 0LL);
    goto LAB77;

LAB63:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB137;

LAB136:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB137;

LAB140:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB138;

LAB139:    t23 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t23, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB65:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB141;

LAB142:
LAB143:    t23 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t23, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB67:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB69:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t31, 0, 8);
    xsi_vlog_signed_arith_rshift(t31, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 32, 0LL);
    goto LAB77;

LAB71:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB144;

LAB145:
LAB146:    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB73:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t22 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t22);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB147;

LAB148:
LAB149:    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t9, 0, 0, 32, 0LL);
    goto LAB77;

LAB80:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(27, ng0);

LAB85:    xsi_set_current_line(27, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    goto LAB84;

LAB87:    xsi_set_current_line(28, ng0);

LAB90:    xsi_set_current_line(28, ng0);
    t8 = ((char*)((ng3)));
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t8, 0, 0, 32, 0LL);
    goto LAB89;

LAB92:    xsi_set_current_line(29, ng0);

LAB95:    xsi_set_current_line(29, ng0);
    t8 = ((char*)((ng3)));
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t8, 0, 0, 32, 0LL);
    goto LAB94;

LAB97:    xsi_set_current_line(30, ng0);

LAB100:    xsi_set_current_line(30, ng0);
    t8 = ((char*)((ng3)));
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t8, 0, 0, 32, 0LL);
    goto LAB99;

LAB103:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t9) = 1;
    goto LAB105;

LAB107:    xsi_set_current_line(31, ng0);

LAB110:    xsi_set_current_line(31, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    goto LAB109;

LAB113:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB115;

LAB117:    xsi_set_current_line(32, ng0);

LAB120:    xsi_set_current_line(32, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    goto LAB119;

LAB123:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB125;

LAB124:    *((unsigned int *)t9) = 1;
    goto LAB125;

LAB127:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    goto LAB129;

LAB130:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    t23 = (t4 + 4);
    t29 = (t7 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t24 = *((unsigned int *)t4);
    t33 = (t24 & t21);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t34 = (t27 & t26);
    t28 = (~(t33));
    t35 = (~(t34));
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t28);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t37 & t35);
    goto LAB132;

LAB133:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    t23 = (t4 + 4);
    t29 = (t7 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t29);
    t35 = (~(t28));
    t33 = (t21 & t25);
    t34 = (t27 & t35);
    t36 = (~(t33));
    t37 = (~(t34));
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t36);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    goto LAB135;

LAB137:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB139;

LAB138:    *((unsigned int *)t9) = 1;
    goto LAB139;

LAB141:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    goto LAB143;

LAB144:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    t23 = (t4 + 4);
    t29 = (t7 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t24 = *((unsigned int *)t4);
    t33 = (t24 & t21);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t34 = (t27 & t26);
    t28 = (~(t33));
    t35 = (~(t34));
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t28);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t37 & t35);
    goto LAB146;

LAB147:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t18 | t19);
    t23 = (t4 + 4);
    t29 = (t7 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t29);
    t35 = (~(t28));
    t33 = (t21 & t25);
    t34 = (t27 & t35);
    t36 = (~(t33));
    t37 = (~(t34));
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t36);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & t37);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    goto LAB149;

}


extern void work_m_07367421607300638729_0886308060_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_07367421607300638729_0886308060", "isim/cpu_tb_isim_beh.exe.sim/work/m_07367421607300638729_0886308060.didat");
	xsi_register_executes(pe);
}
