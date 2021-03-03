/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * coriolis_100.c
 *
 * Code generation for function 'coriolis_100'
 *
 */

/* Include files */
#include "coriolis_100.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include <string.h>

/* Function Declarations */
static void coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);
static void coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);

/* Function Definitions */
static void coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
  Crow[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t27_tmp_tmp;
  real_T t27_tmp;
  real_T b_t27_tmp_tmp;
  real_T b_t27_tmp;
  real_T t27;
  real_T t28_tmp;
  real_T t28_tmp_tmp;
  real_T b_t28_tmp;
  real_T c_t28_tmp;
  real_T t28;
  real_T t29_tmp;
  real_T b_t29_tmp;
  real_T c_t29_tmp;
  real_T t29;
  real_T t30_tmp_tmp;
  real_T t30_tmp;
  real_T b_t30_tmp;
  real_T t30;
  real_T t31_tmp;
  real_T b_t31_tmp;
  real_T t31;
  real_T t32_tmp;
  real_T t32_tmp_tmp;
  real_T b_t32_tmp;
  real_T t32;
  real_T t39_tmp;
  real_T t39;
  real_T t40_tmp;
  real_T b_t40_tmp;
  real_T t40;
  real_T t41_tmp;
  real_T b_t41_tmp;
  real_T t41;
  real_T t51_tmp;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t60;
  real_T t61_tmp_tmp;
  real_T t61_tmp;
  real_T t61;
  real_T t64_tmp;
  real_T t64;
  real_T t65_tmp;
  real_T t65;
  real_T t66;
  real_T t67_tmp_tmp;
  real_T t67_tmp;
  real_T b_t67_tmp;
  real_T t67;
  real_T t68_tmp_tmp;
  real_T t68_tmp;
  real_T b_t68_tmp;
  real_T t68;
  real_T t69_tmp_tmp;
  real_T t69_tmp;
  real_T t69;
  real_T t70_tmp_tmp;
  real_T t70_tmp;
  real_T b_t70_tmp;
  real_T t70;
  real_T t74_tmp;
  real_T t74;
  real_T t75_tmp;
  real_T t75;
  real_T t76_tmp;
  real_T t76;
  real_T t77_tmp;
  real_T t77;
  real_T t80_tmp_tmp;
  real_T t80_tmp;
  real_T t80;
  real_T t81_tmp_tmp;
  real_T t81_tmp;
  real_T t81;
  real_T t85_tmp;
  real_T t85;
  real_T t86_tmp;
  real_T b_t86_tmp;
  real_T t86;
  real_T t87_tmp;
  real_T b_t87_tmp;
  real_T t87;
  real_T t89_tmp_tmp;
  real_T b_t89_tmp_tmp;
  real_T t89_tmp;
  real_T t89;
  real_T t90_tmp_tmp;
  real_T t90_tmp;
  real_T t90;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t101;
  real_T t102;
  real_T t115_tmp;
  real_T t115;
  real_T t116;
  real_T t125_tmp_tmp;
  real_T b_t125_tmp_tmp;
  real_T t125;
  real_T t127_tmp_tmp;
  real_T t127_tmp;
  real_T t127;
  real_T t129_tmp_tmp;
  real_T t129_tmp;
  real_T b_t129_tmp;
  real_T t129;
  real_T t130_tmp_tmp;
  real_T t130_tmp;
  real_T b_t130_tmp;
  real_T t130;
  real_T t131_tmp;
  real_T b_t131_tmp;
  real_T t131;
  real_T t132_tmp;
  real_T b_t132_tmp;
  real_T t132;
  real_T t133_tmp;
  real_T b_t133_tmp;
  real_T t133;
  real_T t134_tmp;
  real_T t134_tmp_tmp;
  real_T t134;
  real_T t143_tmp_tmp;
  real_T t143_tmp;
  real_T t143;
  real_T t147_tmp;
  real_T b_t147_tmp;
  real_T t147;
  real_T t149_tmp;
  real_T t149;
  real_T t150_tmp_tmp;
  real_T t150_tmp;
  real_T t150;
  real_T t151_tmp;
  real_T t151;
  real_T t152_tmp_tmp;
  real_T t152_tmp;
  real_T t152;
  real_T t153_tmp;
  real_T t153;
  real_T t154_tmp;
  real_T t154;
  real_T t155_tmp;
  real_T t155;
  real_T t156_tmp;
  real_T t156_tmp_tmp_tmp;
  real_T t156;
  real_T t166_tmp_tmp;
  real_T t166_tmp;
  real_T t166;
  real_T t167_tmp;
  real_T t167;
  real_T t168_tmp;
  real_T t168_tmp_tmp;
  real_T t168;
  real_T t169_tmp;
  real_T b_t169_tmp;
  real_T c_t169_tmp;
  real_T t169;
  real_T t170_tmp;
  real_T t170_tmp_tmp;
  real_T b_t170_tmp;
  real_T t170;
  real_T t171_tmp;
  real_T b_t171_tmp;
  real_T t171;
  real_T t184_tmp;
  real_T t184;
  real_T t185_tmp_tmp_tmp;
  real_T t185_tmp_tmp;
  real_T t185_tmp;
  real_T t185;
  real_T t186_tmp_tmp_tmp;
  real_T t186_tmp_tmp;
  real_T t186_tmp;
  real_T t186;
  real_T t187_tmp;
  real_T b_t187_tmp;
  real_T t187;
  real_T t188;
  real_T t194_tmp;
  real_T t194;
  real_T t197_tmp;
  real_T b_t197_tmp;
  real_T t197;
  real_T t198;
  real_T t204_tmp;
  real_T t204;
  real_T t205_tmp;
  real_T t205;
  real_T t206_tmp;
  real_T t206;
  real_T t207_tmp;
  real_T t207;
  real_T t216;
  real_T t217;
  real_T t218;
  real_T t219;
  real_T t222;
  real_T t223;
  real_T t224_tmp;
  real_T t224;
  real_T t225_tmp;
  real_T t225;
  real_T t226;
  real_T t227;
  real_T t228;
  real_T t229;
  real_T t230;
  real_T t231;
  real_T t242;
  real_T t243_tmp;
  real_T t243;
  real_T t244_tmp;
  real_T t244;
  real_T t245;
  real_T t246;
  real_T t247;
  real_T t248;
  real_T t249;
  real_T t262;
  real_T t267;
  real_T t269;
  real_T t271;
  real_T t272_tmp;
  real_T t272;
  real_T t278_tmp;
  real_T t278;
  real_T t279;
  real_T t280;
  real_T t281;
  real_T t282_tmp_tmp;
  real_T t282;
  real_T t283_tmp_tmp;
  real_T t283_tmp;
  real_T t283;
  real_T t284_tmp_tmp;
  real_T t284_tmp;
  real_T t284;
  real_T t306_tmp_tmp;
  real_T t306_tmp;
  real_T t306;
  real_T t307_tmp;
  real_T t307_tmp_tmp;
  real_T t307;
  real_T t312_tmp;
  real_T t312;
  real_T t313_tmp;
  real_T t313;
  real_T t323_tmp;
  real_T t323;
  real_T t329_tmp;
  real_T b_t329_tmp;
  real_T t329;
  real_T t331_tmp_tmp;
  real_T t331_tmp;
  real_T t331;
  real_T t26;
  real_T t33_tmp;
  real_T t33;
  real_T t34_tmp;
  real_T t34;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t55;
  real_T t58;
  real_T t59;
  real_T t62;
  real_T t63;
  real_T t71_tmp;
  real_T t71;
  real_T t72;
  real_T t78;
  real_T t98;
  real_T t99;
  real_T t100_tmp;
  real_T t100;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t114;
  real_T t119_tmp;
  real_T t119;
  real_T t120_tmp;
  real_T t120;
  real_T t121_tmp;
  real_T t121;
  real_T t122_tmp_tmp;
  real_T t122;
  real_T t124_tmp;
  real_T b_t124_tmp;
  real_T t124;
  real_T t126;
  real_T t142_tmp;
  real_T t142;
  real_T t145_tmp;
  real_T t145;
  real_T t146_tmp;
  real_T t146;
  real_T t157;
  real_T t158;
  real_T t159;
  real_T t160;
  real_T t164_tmp;
  real_T t164;
  real_T t165_tmp;
  real_T t165;
  real_T t176;
  real_T t177;
  real_T t178;
  real_T t179;
  real_T t180_tmp;
  real_T t180;
  real_T t181_tmp_tmp;
  real_T t181_tmp;
  real_T t181;
  real_T t182;
  real_T t183;
  real_T t195_tmp;
  real_T t195;
  real_T t203;
  real_T t208;
  real_T t209;
  real_T t210;
  real_T t211;
  real_T t234;
  real_T t235;
  real_T t236;
  real_T t237;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t253;
  real_T t254;
  real_T t255_tmp;
  real_T t255;
  real_T t256;
  real_T t257;
  real_T t261;
  real_T t266;
  real_T t268;
  real_T t276;
  real_T t277;
  real_T t285;
  real_T t286;
  real_T t287;
  real_T t288;
  real_T t299;
  real_T t300;
  real_T t301;
  real_T t302;
  real_T t303;
  real_T t304;
  real_T t308;
  real_T t309;
  real_T t310;
  real_T t311;
  real_T t316;
  real_T t317;
  real_T t318;
  real_T t319;
  real_T t320;
  real_T t321;
  real_T t330;
  real_T t332;
  real_T t337;
  real_T t338;
  real_T t325;
  real_T t327;
  real_T t328;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T d39;
  real_T d40;
  real_T d41;
  real_T d42;
  real_T d43;
  real_T d44;
  real_T d45;
  real_T d46;
  real_T Crow_tmp;
  real_T b_Crow_tmp;
  real_T c_Crow_tmp;
  real_T d_Crow_tmp;
  real_T e_Crow_tmp;
  real_T f_Crow_tmp;
  real_T g_Crow_tmp;

  /*  CORIOLIS_ROW_1 - Computation of the robot specific Coriolis matrix row for joint 1 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_1(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_1(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 1 of 6 for Quantec Ultra SE 100.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     Crow:  [1x6] row of the robot Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function.  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also coriolis. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  /*  Bugfix */
  /*   In some versions the symbolic toolbox writes the constant $pi$ in */
  /*   capital letters. This way autogenerated functions might not work properly. */
  /*   To fix this issue a local variable is introduced: */
  /*     This function was generated by the Symbolic Math Toolbox version 8.5. */
  /*     02-Mar-2021 15:13:07 */
  t2 = muDoubleScalarCos(in2[1]);
  t3 = muDoubleScalarCos(in2[2]);
  t4 = muDoubleScalarCos(in2[3]);
  t5 = muDoubleScalarCos(in2[4]);
  t6 = muDoubleScalarSin(in2[1]);
  t7 = muDoubleScalarSin(in2[2]);
  t8 = muDoubleScalarSin(in2[3]);
  t9 = muDoubleScalarSin(in2[4]);
  t10 = in2[1] * 2.0;
  t11 = in2[2] * 2.0;
  t12 = in2[3] * 2.0;
  t13 = in2[4] * 2.0;
  t14 = muDoubleScalarCos(t10);
  t15 = muDoubleScalarCos(t11);
  t16 = muDoubleScalarCos(t12);
  t17 = muDoubleScalarCos(t13);
  t18 = t2 * t2;
  t19 = t3 * t3;
  t20 = t4 * t4;
  t21 = t5 * t5;
  t22 = muDoubleScalarSin(t10);
  t23 = muDoubleScalarSin(t11);
  t24 = muDoubleScalarSin(t12);
  t25 = muDoubleScalarSin(t13);
  t27_tmp_tmp = in3[3] * t2;
  t27_tmp = t27_tmp_tmp * t3;
  b_t27_tmp_tmp = t27_tmp * t5;
  b_t27_tmp = b_t27_tmp_tmp * t9;
  t27 = b_t27_tmp * 0.00024;
  t28_tmp = in3[4] * t2;
  t28_tmp_tmp = t28_tmp * t3;
  b_t28_tmp = t28_tmp_tmp * t4;
  c_t28_tmp = b_t28_tmp * t8;
  t28 = c_t28_tmp * 0.00012;
  t29_tmp = in3[0] * t2;
  t11 = t29_tmp * t5;
  b_t29_tmp = t11 * t6;
  c_t29_tmp = b_t29_tmp * t9;
  t29 = c_t29_tmp * 0.00024;
  t30_tmp_tmp = in3[0] * t3;
  t12 = t30_tmp_tmp * t5;
  t30_tmp = t12 * t7;
  b_t30_tmp = t30_tmp * t9;
  t30 = b_t30_tmp * 0.00024;
  t31_tmp = in3[3] * t5;
  b_t31_tmp = t31_tmp * t6 * t7;
  t31 = b_t31_tmp * t9 * 0.00024;
  t32_tmp = in3[4] * t4;
  t32_tmp_tmp = t32_tmp * t6 * t7;
  b_t32_tmp = t32_tmp_tmp * t8;
  t32 = b_t32_tmp * 0.00012;
  t39_tmp = t28_tmp * t5 * t7;
  t39 = t39_tmp * t8 * t9 * 0.00024;
  t40_tmp = in3[4] * t3;
  b_t40_tmp = t40_tmp * t5 * t6;
  t40 = b_t40_tmp * t8 * t9 * 0.00024;
  t41_tmp = in3[0] * t4;
  b_t41_tmp = t41_tmp * t9;
  t41 = b_t41_tmp * 37.66134;
  t51_tmp = t29_tmp * t3;
  t51 = t51_tmp * t8 * 0.89341;
  t52 = b_t29_tmp * 75.32268;
  t53 = t30_tmp * 75.32268;
  t60 = t51_tmp * 3.5022645;
  t61_tmp_tmp = in3[0] * t6;
  t61_tmp = t61_tmp_tmp * t7;
  t61 = t61_tmp * t8 * 0.89341;
  t64_tmp = t29_tmp * t7;
  t64 = t64_tmp * 64.605506;
  t65_tmp = t30_tmp_tmp * t6;
  t65 = t65_tmp * 64.605506;
  t66 = t61_tmp * 3.5022645;
  t67_tmp_tmp = in3[1] * t2;
  t67_tmp = t67_tmp_tmp * t4;
  b_t67_tmp = t67_tmp * t5 * t7;
  t67 = b_t67_tmp * t8 * t9 * 0.00024;
  t68_tmp_tmp = in3[1] * t3;
  t68_tmp = t68_tmp_tmp * t4;
  b_t68_tmp = t68_tmp * t5 * t6;
  t68 = b_t68_tmp * t8 * t9 * 0.00024;
  t69_tmp_tmp = in3[2] * t2;
  t10 = t69_tmp_tmp * t4;
  t69_tmp = t10 * t5 * t7;
  t69 = t69_tmp * t8 * t9 * 0.00024;
  t70_tmp_tmp = in3[2] * t3;
  t70_tmp = t70_tmp_tmp * t4;
  b_t70_tmp = t70_tmp * t5 * t6;
  t70 = b_t70_tmp * t8 * t9 * 0.00024;
  t74_tmp = t67_tmp * t7;
  t74 = t74_tmp * 0.1046566;
  t75_tmp = t68_tmp * t6;
  t75 = t75_tmp * 0.1046566;
  t76_tmp = t10 * t7;
  t76 = t76_tmp * 0.1046566;
  t77_tmp = t70_tmp * t6;
  t77 = t77_tmp * 0.1046566;
  t80_tmp_tmp = t29_tmp * t6;
  t80_tmp = t80_tmp_tmp * t8;
  t80 = t80_tmp * 0.2093132;
  t81_tmp_tmp = t30_tmp_tmp * t7;
  t81_tmp = t81_tmp_tmp * t8;
  t81 = t81_tmp * 0.2093132;
  t85_tmp = in3[0] * t5;
  t85 = t85_tmp * 1.54411494;
  t86_tmp = t67_tmp_tmp * t3;
  b_t86_tmp = t86_tmp * t8;
  t86 = b_t86_tmp * t9 * 37.66134;
  t87_tmp = t69_tmp_tmp * t3;
  b_t87_tmp = t87_tmp * t8;
  t87 = b_t87_tmp * t9 * 37.66134;
  t89_tmp_tmp = in3[1] * t6;
  b_t89_tmp_tmp = t89_tmp_tmp * t7;
  t89_tmp = b_t89_tmp_tmp * t8;
  t89 = t89_tmp * t9 * 37.66134;
  t90_tmp_tmp = in3[2] * t6 * t7;
  t90_tmp = t90_tmp_tmp * t8;
  t90 = t90_tmp * t9 * 37.66134;
  t93 = t86_tmp * 0.75031128;
  t94 = t87_tmp * 0.75031128;
  t95 = b_t89_tmp_tmp * 0.75031128;
  t96 = t90_tmp_tmp * 0.75031128;
  t101 = t11 * t7 * 13.181469;
  t102 = t12 * t6 * 13.181469;
  t115_tmp = t51_tmp * t4;
  t115 = t115_tmp * t9 * 13.181469;
  t116 = t41_tmp * t6 * t7 * t9 * 13.181469;
  t125_tmp_tmp = t51_tmp * t6;
  b_t125_tmp_tmp = t125_tmp_tmp * t7;
  t125 = b_t125_tmp_tmp * 29.28878512;
  t127_tmp_tmp = t115_tmp * t6;
  t127_tmp = t127_tmp_tmp * t7;
  t127 = t127_tmp * t9 * 150.64536;
  t129_tmp_tmp = t29_tmp * t4;
  t129_tmp = t129_tmp_tmp * t6;
  b_t129_tmp = t129_tmp * t9;
  t129 = b_t129_tmp * 3.08822988;
  t130_tmp_tmp = t30_tmp_tmp * t4;
  t130_tmp = t130_tmp_tmp * t7;
  b_t130_tmp = t130_tmp * t9;
  t130 = b_t130_tmp * 3.08822988;
  t131_tmp = t67_tmp_tmp * t7;
  b_t131_tmp = t131_tmp * t8;
  t131 = b_t131_tmp * t9 * 1.54411494;
  t132_tmp = t68_tmp_tmp * t6;
  b_t132_tmp = t132_tmp * t8;
  t132 = b_t132_tmp * t9 * 1.54411494;
  t133_tmp = t69_tmp_tmp * t7;
  b_t133_tmp = t133_tmp * t8;
  t133 = b_t133_tmp * t9 * 1.54411494;
  t134_tmp = t70_tmp_tmp * t6;
  t134_tmp_tmp = t134_tmp * t8;
  t134 = t134_tmp_tmp * t9 * 1.54411494;
  t143_tmp_tmp = t51_tmp * t5 * t6;
  t143_tmp = t143_tmp_tmp * t7;
  t143 = t143_tmp * 6.17645976;
  t147_tmp = in3[0] * t8;
  b_t147_tmp = t147_tmp * t9;
  t147 = b_t147_tmp * 4.0E-6;
  t149_tmp = t67_tmp_tmp * t5 * t7;
  t149 = t149_tmp * 4.0E-6;
  t150_tmp_tmp = t68_tmp_tmp * t5;
  t150_tmp = t150_tmp_tmp * t6;
  t150 = t150_tmp * 4.0E-6;
  t151_tmp = t69_tmp_tmp * t5 * t7;
  t151 = t151_tmp * 4.0E-6;
  t152_tmp_tmp = t70_tmp_tmp * t5;
  t152_tmp = t152_tmp_tmp * t6;
  t152 = t152_tmp * 4.0E-6;
  t153_tmp = t27_tmp * t4;
  t12 = t153_tmp * t8;
  t153 = t12 * 5.4E-5;
  t154_tmp = t129_tmp * t8;
  t154 = t154_tmp * 5.4E-5;
  t155_tmp = t130_tmp * t8;
  t155 = t155_tmp * 5.4E-5;
  t156_tmp = in3[3] * t4;
  t156_tmp_tmp_tmp = t156_tmp * t6 * t7;
  t13 = t156_tmp_tmp_tmp * t8;
  t156 = t13 * 5.4E-5;
  t166_tmp_tmp = t86_tmp * t4;
  t166_tmp = t166_tmp_tmp * t9;
  t166 = t166_tmp * 4.0E-6;
  t11 = t87_tmp * t4;
  t167_tmp = t11 * t9;
  t167 = t167_tmp * 4.0E-6;
  t10 = t28_tmp * t4;
  t168_tmp = t10 * t5;
  t168_tmp_tmp = t168_tmp * t7;
  t168 = t168_tmp_tmp * 4.0E-6;
  t169_tmp = t40_tmp * t4;
  b_t169_tmp = t169_tmp * t5;
  c_t169_tmp = b_t169_tmp * t6;
  t169 = c_t169_tmp * 4.0E-6;
  t170_tmp = in3[1] * t4;
  t170_tmp_tmp = t170_tmp * t6;
  b_t170_tmp = t170_tmp_tmp * t7;
  t170 = b_t170_tmp * t9 * 4.0E-6;
  t171_tmp = in3[2] * t4;
  b_t171_tmp = t171_tmp * t6 * t7;
  t171 = b_t171_tmp * t9 * 4.0E-6;
  t184_tmp = t153_tmp * t5;
  t184 = t184_tmp * t8 * 8.0E-6;
  t185_tmp_tmp_tmp = t129_tmp_tmp * t5;
  t185_tmp_tmp = t185_tmp_tmp_tmp * t6;
  t185_tmp = t185_tmp_tmp * t8;
  t185 = t185_tmp * 8.0E-6;
  t186_tmp_tmp_tmp = t130_tmp_tmp * t5;
  t186_tmp_tmp = t186_tmp_tmp_tmp * t7;
  t186_tmp = t186_tmp_tmp * t8;
  t186 = t186_tmp * 8.0E-6;
  t187_tmp = t156_tmp * t5;
  b_t187_tmp = t187_tmp * t6 * t7;
  t187 = b_t187_tmp * t8 * 8.0E-6;
  t188 = t41_tmp * 0.000116;
  t194_tmp = t85_tmp * t8;
  t194 = t194_tmp * 0.0421722;
  t197_tmp = b_t125_tmp_tmp * t8;
  b_t197_tmp = t197_tmp * t9;
  t197 = b_t197_tmp * 1.6E-5;
  t198 = t147_tmp * 2.5327982;
  t204_tmp = t131_tmp * t9;
  t204 = t204_tmp * 0.0421722;
  t205_tmp = t132_tmp * t9;
  t205 = t205_tmp * 0.0421722;
  t206_tmp = t133_tmp * t9;
  t206 = t206_tmp * 0.0421722;
  t207_tmp = t134_tmp * t9;
  t207 = t207_tmp * 0.0421722;
  t216 = b_t86_tmp * 0.000116;
  t217 = b_t87_tmp * 0.000116;
  t218 = t89_tmp * 0.000116;
  t219 = t90_tmp * 0.000116;
  t222 = t166_tmp_tmp * t5 * 0.0421722;
  t223 = t11 * t5 * 0.0421722;
  t224_tmp = t170_tmp * t5 * t6 * t7;
  t224 = t224_tmp * 0.0421722;
  t225_tmp = t171_tmp * t5 * t6 * t7;
  t225 = t225_tmp * 0.0421722;
  t226 = t10 * t7 * t9 * 0.0421722;
  t227 = t169_tmp * t6 * t9 * 0.0421722;
  t228 = t166_tmp_tmp * 2.5327982;
  t229 = t11 * 2.5327982;
  t230 = b_t170_tmp * 2.5327982;
  t231 = b_t171_tmp * 2.5327982;
  t242 = t12 * t9 * 0.0843444;
  t243_tmp = t154_tmp * t9;
  t243 = t243_tmp * 0.0843444;
  t244_tmp = t155_tmp * t9;
  t244 = t244_tmp * 0.0843444;
  t245 = t13 * t9 * 0.0843444;
  t246 = t131_tmp * 0.16200394;
  t247 = t132_tmp * 0.16200394;
  t248 = t133_tmp * 0.16200394;
  t249 = t134_tmp * 0.16200394;
  t262 = t127_tmp * 0.000464;
  t267 = t143_tmp * t8 * 0.1686888;
  t269 = t197_tmp * 10.1311928;
  t271 = t27_tmp * 12.10302007431482;
  t272_tmp = in3[3] * t6 * t7;
  t272 = t272_tmp * 12.10302007431482;
  t278_tmp = t74_tmp * t8;
  t278 = t278_tmp * 11.63809377431482;
  t75_tmp *= t8;
  t279 = t75_tmp * 11.63809377431482;
  t76_tmp *= t8;
  t280 = t76_tmp * 11.63809377431482;
  t77_tmp *= t8;
  t281 = t77_tmp * 11.63809377431482;
  t282_tmp_tmp = t41_tmp * t5;
  t197_tmp = t282_tmp_tmp * t9;
  t282 = t197_tmp * 11.89030757431482;
  t283_tmp_tmp = t28_tmp * t7;
  t283_tmp = t283_tmp_tmp * t8;
  t283 = t283_tmp * 11.992308574314819;
  t284_tmp_tmp = t40_tmp * t6;
  t284_tmp = t284_tmp_tmp * t8;
  t284 = t284_tmp * 11.992308574314819;
  t306_tmp_tmp = in3[1] * t5;
  t306_tmp = t306_tmp_tmp * t6 * t7;
  t306 = t306_tmp * t8 * t9 * 11.89030757431482;
  t307_tmp = in3[2] * t5;
  t307_tmp_tmp = t307_tmp * t6 * t7;
  t307 = t307_tmp_tmp * t8 * t9 * 11.89030757431482;
  t312_tmp = t86_tmp * t5;
  t312 = t312_tmp * t8 * t9 * 11.89030757431482;
  t313_tmp = t87_tmp * t5;
  t313 = t313_tmp * t8 * t9 * 11.89030757431482;
  t323_tmp = b_t28_tmp * t5;
  t323 = t323_tmp * t8 * t9 * 11.89030757431482;
  t329_tmp = t32_tmp * t5;
  b_t329_tmp = t329_tmp * t6 * t7;
  t329 = b_t329_tmp * t8 * t9 * 11.89030757431482;
  t331_tmp_tmp = t115_tmp * t5 * t6;
  t331_tmp = t331_tmp_tmp * t7;
  t331 = t331_tmp * t9 * 47.5612302972593;
  t26 = t41_tmp * t21 * 0.00024;
  t33_tmp = t41_tmp * t18;
  t33 = t33_tmp * t21 * 0.00048;
  t34_tmp = t41_tmp * t19;
  t34 = t34_tmp * t21 * 0.00048;
  t42 = b_t86_tmp * t21 * 0.00024;
  t43 = b_t87_tmp * t21 * 0.00024;
  t44 = t89_tmp * t21 * 0.00024;
  t45 = t90_tmp * t21 * 0.00024;
  t10 = c_t29_tmp * t19;
  t46 = t10 * 0.00048;
  t11 = b_t30_tmp * t18;
  t47 = t11 * 0.00048;
  t55 = c_t28_tmp * t21 * 0.00024;
  t58 = t20 * t29;
  t59 = t20 * t30;
  t62 = t20 * t31;
  t63 = b_t32_tmp * t21 * 0.00024;
  t71_tmp = t33_tmp * t19;
  t71 = t71_tmp * t21 * 0.00096;
  t72 = t127_tmp * t21 * 0.00096;
  t78 = b_t27_tmp * t20 * -0.00024;
  t12 = b_t41_tmp * t18;
  t98 = t12 * 75.32268;
  t99 = b_t41_tmp * t19 * 75.32268;
  t100_tmp = in3[0] * t19;
  t100 = t100_tmp * 14.64439256;
  t111 = b_t29_tmp * t19 * 150.64536;
  t112 = t30_tmp * t18 * 150.64536;
  t113 = t10 * t20 * -0.00048;
  t114 = t11 * t20 * -0.00048;
  t119_tmp = t80_tmp * t19;
  t119 = t119_tmp * 0.4186264;
  t120_tmp = t81_tmp * t18;
  t120 = t120_tmp * 0.4186264;
  t121_tmp = t85_tmp * t18;
  t121 = t121_tmp * 3.08822988;
  t122_tmp_tmp = t85_tmp * t19;
  t122 = t122_tmp_tmp * 3.08822988;
  t124_tmp = in3[0] * t18;
  b_t124_tmp = t124_tmp * t19;
  t124 = b_t124_tmp * 29.28878512;
  t126 = t12 * t19 * 150.64536;
  t142_tmp = t121_tmp * t19;
  t142 = t142_tmp * 6.17645976;
  t145_tmp = b_t129_tmp * t19;
  t145 = t145_tmp * 6.17645976;
  t146_tmp = b_t130_tmp * t18;
  t146 = t146_tmp * 6.17645976;
  t157 = t131_tmp * t20 * 5.4E-5;
  t158 = t132_tmp * t20 * 5.4E-5;
  t159 = t133_tmp * t20 * 5.4E-5;
  t160 = t134_tmp * t20 * 5.4E-5;
  t164_tmp = b_t147_tmp * t18;
  t164 = t164_tmp * 8.0E-6;
  t165_tmp = b_t147_tmp * t19;
  t165 = t165_tmp * 8.0E-6;
  t176 = t149_tmp * t20 * 8.0E-6;
  t177 = t150_tmp * t20 * 8.0E-6;
  t178 = t151_tmp * t20 * 8.0E-6;
  t179 = t152_tmp * t20 * 8.0E-6;
  t180_tmp = t28_tmp_tmp * t9;
  t180 = t180_tmp * t20 * 4.0E-6;
  t181_tmp_tmp = in3[4] * t6 * t7;
  t181_tmp = t181_tmp_tmp * t9;
  t181 = t181_tmp * t20 * 4.0E-6;
  t182 = t154_tmp * t19 * 0.000108;
  t183 = t155_tmp * t18 * 0.000108;
  t195_tmp = t164_tmp * t19;
  t195 = t195_tmp * 1.6E-5;
  t203 = in3[0] * t23 * 89.586374315;
  t208 = t185_tmp * t19 * 1.6E-5;
  t209 = t186_tmp * t18 * 1.6E-5;
  t210 = t33_tmp * 0.000232;
  t211 = t34_tmp * 0.000232;
  t10 = t194_tmp * t18;
  t234 = t10 * 0.0843444;
  t235 = t194_tmp * t19 * 0.0843444;
  t11 = t147_tmp * t18;
  t236 = t11 * 5.0655964;
  t237 = t147_tmp * t19 * 5.0655964;
  t250 = t28_tmp_tmp * t5 * t20 * 0.0421722;
  t251 = t204_tmp * t20 * 0.0843444;
  t252 = t205_tmp * t20 * 0.0843444;
  t253 = t206_tmp * t20 * 0.0843444;
  t254 = t207_tmp * t20 * 0.0843444;
  t255_tmp = in3[4] * t5;
  t255 = t255_tmp * t6 * t7 * t20 * 0.0421722;
  t12 = t80_tmp_tmp * t19;
  t256 = t12 * 358.34549726;
  t13 = t81_tmp_tmp * t18;
  t257 = t13 * 358.34549726;
  t261 = t71_tmp * 0.000464;
  t266 = t10 * t19 * 0.1686888;
  t268 = t11 * t19 * 10.1311928;
  t276 = t243_tmp * t19 * 0.1686888;
  t277 = t244_tmp * t18 * 0.1686888;
  t11 = t27_tmp * t20;
  t285 = t11 * 11.63809377431482;
  t286 = t80_tmp_tmp * t20 * 11.63809377431482;
  t287 = t81_tmp_tmp * t20 * 11.63809377431482;
  t288 = t272_tmp * t20 * 11.63809377431482;
  t299 = t27_tmp * t21 * 11.89030757431482;
  t300 = t80_tmp_tmp * t21 * 11.89030757431482;
  t301 = t81_tmp_tmp * t21 * 11.89030757431482;
  t302 = t272_tmp * t21 * 11.89030757431482;
  t10 = t197_tmp * t18;
  t303 = t10 * 23.78061514862965;
  t304 = t197_tmp * t19 * 23.78061514862965;
  t308 = t283_tmp * t21 * 11.89030757431482;
  t309 = t284_tmp * t21 * 11.89030757431482;
  t197_tmp = t12 * t20;
  t310 = t197_tmp * 23.27618754862965;
  t74_tmp = t13 * t20;
  t311 = t74_tmp * 23.27618754862965;
  t316 = t12 * t21 * 23.78061514862965;
  t317 = t13 * t21 * 23.78061514862965;
  t318 = t278_tmp * t21 * 11.89030757431482;
  t319 = t75_tmp * t21 * 11.89030757431482;
  t320 = t76_tmp * t21 * 11.89030757431482;
  t321 = t77_tmp * t21 * 11.89030757431482;
  t330 = t10 * t19 * 47.5612302972593;
  t332 = t11 * t21 * -11.89030757431482;
  t337 = t197_tmp * t21 * -23.78061514862965;
  t338 = t74_tmp * t21 * -23.78061514862965;
  t325 = t20 * t300;
  t327 = t20 * t301;
  t328 = t20 * t302;
  d = in3[2] * t7;
  d1 = in3[1] * t7;
  d2 = in3[1] * t14;
  d3 = in3[4] * t9;
  d4 = in3[1] * t22;
  d5 = in3[3] * t24;
  d6 = t70_tmp_tmp * t8;
  d7 = t307_tmp * t7;
  d8 = t156_tmp * t7;
  d9 = t40_tmp * t9;
  d10 = in3[3] * t8;
  d11 = in3[3] * t16;
  d12 = in3[4] * t17;
  d13 = d10 * t9;
  d14 = t31_tmp * t16;
  d15 = in3[3] * t9;
  d16 = in3[2] * t14;
  d17 = in3[4] * t16;
  d18 = in3[3] * t3;
  d19 = d18 * t4;
  d20 = t307_tmp * t14;
  d21 = t156_tmp * t14;
  d22 = in3[1] * t15;
  d23 = in3[2] * t15;
  d24 = d2 * t23;
  d25 = d22 * t22;
  d26 = d16 * t23;
  d27 = d23 * t22;
  d28 = t70_tmp * t9;
  d29 = t329_tmp * t7;
  d30 = in3[3] * t7 * t8 * t9;
  d31 = t170_tmp * t14 * t15;
  d32 = t171_tmp * t14 * t15;
  t11 = d17 * t17;
  t12 = in3[3] * t17;
  d33 = t27_tmp_tmp * t4;
  d34 = d33 * t7;
  d35 = d19 * t6;
  t13 = in3[1] * t8;
  t197_tmp = t13 * t14;
  t74_tmp = in3[2] * t8;
  t75_tmp = t74_tmp * t14;
  t76_tmp = in3[3] * t14 * t15;
  t77_tmp = in3[4] * t14 * t15;
  c_t29_tmp = d10 * t14;
  d10 *= t15;
  b_t30_tmp = d3 * t14;
  c_t28_tmp = d20 * t23;
  b_t32_tmp = t307_tmp * t15 * t22;
  b_t27_tmp = d2 * t16;
  b_t41_tmp = d22 * t16;
  b_t147_tmp = d16 * t16;
  t154_tmp = d23 * t16;
  t155_tmp = c_t29_tmp * t23;
  t185_tmp = d10 * t22;
  t186_tmp = t170_tmp * t22 * t23;
  t194_tmp = t171_tmp * t22 * t23;
  t147_tmp = b_t27_tmp * t23;
  t204_tmp = b_t41_tmp * t22;
  t205_tmp = b_t147_tmp * t23;
  t206_tmp = t154_tmp * t22;
  t207_tmp = t76_tmp * t24;
  t243_tmp = d3 * t22 * t23;
  t244_tmp = in3[3] * t22 * t23 * t24;
  t278_tmp = t329_tmp * t14;
  t40_tmp = t170_tmp * t9;
  t70_tmp = t40_tmp * t14;
  d36 = t171_tmp * t9;
  d37 = d36 * t14;
  d38 = t156_tmp * t9;
  d39 = t255_tmp * t8;
  d40 = d13 * t14;
  d41 = in3[4] * t8 * t9;
  d42 = t306_tmp_tmp * t8;
  d43 = t307_tmp * t8;
  d44 = d18 * t6;
  d45 = d44 * t8 * t9;
  d46 = t32_tmp * t14;
  t10 = t32_tmp * t15;
  t32_tmp = in3[1] * t9;
  Crow_tmp = in3[2] * t9;
  b_Crow_tmp = t77_tmp * t16;
  c_Crow_tmp = t306_tmp_tmp * t14;
  d_Crow_tmp = t13 * t9;
  e_Crow_tmp = t74_tmp * t9;
  f_Crow_tmp = b_t30_tmp * t15;
  g_Crow_tmp = t306_tmp_tmp * t15 * t22;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t67_tmp_tmp
    * 0.118692 - t70_tmp_tmp * 5.75372025) - t89_tmp_tmp * 169.168797) +
    t156_tmp * 0.0523283) - d * 106.137617) - d3 * 18.83067) + d2 * 0.57959792)
    - d11 * 1.35E-5) - d12 * 3.0E-5) - d4 * 265.5932773) + d5 *
    1.4232349967893529) + in3[4] * t25 * 1.4862884467893529) - t86_tmp *
    3.5022645) - t87_tmp * 3.5022645) - t131_tmp * 64.605506) - t132_tmp *
    64.605506) - t133_tmp * 64.605506) - t134_tmp * 64.605506) - d6 * 1.467745)
    + t329_tmp * 0.77205747) + b_t89_tmp_tmp * 3.5022645) - d7 * 21.6552705) -
    d8 * 1.467745) + t90_tmp_tmp * 3.5022645) - d9 * 21.6552705) - t68_tmp_tmp *
    t14 * 11.5074405) - t70_tmp_tmp * t14 * 5.75372025) - d13 * 0.77205747) - d1
    * t14 * 212.275234) - d * t14 * 106.137617) + d14 * 2.0E-6) - t68_tmp_tmp *
    t22 * 212.275234) - t70_tmp_tmp * t22 * 106.137617) - d15 * t16 * 0.0210861)
    + d1 * t22 * 11.5074405) - d2 * t15 * 7.32219628) + d * t22 * 5.75372025) -
    d16 * t15 * 7.32219628) - t255_tmp * t24 * 0.01054305) - d3 * t24 * 1.0E-6)
    + t11 * 3.0E-5) - d24 * 91.135716211789344) - d25 * 91.135716211789344) -
    d26 * 91.135716211789344) - d27 * 91.135716211789344) - t12 * t24 *
    1.4862884467893529) - d17 * t25 * 1.4862884467893529) + d4 * t23 *
    7.32219628) + in3[2] * t22 * t23 * 7.32219628) - d5 * t25 * 3.0E-5) -
    b_t86_tmp * 0.89341) - t149_tmp * 13.181469) - t150_tmp * 13.181469) -
    b_t87_tmp * 0.89341) - t151_tmp * 13.181469) - t152_tmp * 13.181469) - d34 *
    0.89341) - d35 * 0.89341) - d28 * 21.6552705) - t180_tmp * 13.181469) - d29 *
    21.6552705) + t89_tmp * 0.89341) + t90_tmp * 0.89341) - t68_tmp_tmp * t8 *
    t14 * 2.93549) + t181_tmp * 13.181469) - t306_tmp_tmp * t7 * t14 * 43.310541)
    - d6 * t14 * 1.467745) + d30 * 21.6552705) - d7 * t14 * 21.6552705) - d8 *
    t14 * 1.467745) - d9 * t14 * 21.6552705) - t150_tmp_tmp * t22 * 43.310541) -
    t152_tmp_tmp * t22 * 21.6552705) - d19 * t22 * 1.467745) + d31 * 4.0E-6) -
    c_Crow_tmp * t15 * 1.54411494) + d32 * 4.0E-6) - d20 * t15 * 1.54411494) -
    d21 * t15 * 0.0523283) + d1 * t8 * t22 * 2.93549) - t197_tmp * t15 *
    2.5327982) + d * t8 * t22 * 1.467745) - t75_tmp * t15 * 2.5327982) + in3[4] *
    t7 * t9 * t22 * 21.6552705) - f_Crow_tmp * 18.83067) - c_Crow_tmp * t23 *
    37.66134) - g_Crow_tmp * 37.66134) - c_t28_tmp * 37.66134) - b_t32_tmp *
    37.66134) - d21 * t23 * 1.2663991) - t156_tmp * t15 * t22 * 1.2663991) +
    t197_tmp * t23 * 0.1046566) + t13 * t15 * t22 * 0.1046566) + t75_tmp * t23 *
    0.1046566) + t74_tmp * t15 * t22 * 0.1046566) - t155_tmp * 2.0E-6) -
    t185_tmp * 2.0E-6) - t76_tmp * t16 * 1.35E-5) - t186_tmp * 4.0E-6) +
    b_t30_tmp * t23 * 0.77205747) + d3 * t15 * t22 * 0.77205747) + t77_tmp * t17
    * 9.0E-5) + t306_tmp_tmp * t22 * t23 * 1.54411494) - t194_tmp * 4.0E-6) +
    t307_tmp * t22 * t23 * 1.54411494) + t156_tmp * t22 * t23 * 0.0523283) + t13
    * t22 * t23 * 2.5327982) + t147_tmp * 1.4232349967893529) + t204_tmp *
    1.4232349967893529) - d2 * t17 * t23 * 4.4588653403680594) - d22 * t17 * t22
    * 4.4588653403680594) + t74_tmp * t22 * t23 * 2.5327982) + t205_tmp *
    1.4232349967893529) + t206_tmp * 1.4232349967893529) - d16 * t17 * t23 *
    4.4588653403680594) - d23 * t17 * t22 * 4.4588653403680594) + t207_tmp *
    1.4232349967893529) + t243_tmp * 18.83067) - t77_tmp * t25 *
    4.4588653403680594) + d24 * t24 * 1.35E-5) + d25 * t24 * 1.35E-5) - d24 *
    t25 * 9.0E-5) - d25 * t25 * 9.0E-5) + d26 * t24 * 1.35E-5) + d27 * t24 *
    1.35E-5) - d26 * t25 * 9.0E-5) - d27 * t25 * 9.0E-5) + d11 * t22 * t23 *
    1.35E-5) - d12 * t22 * t23 * 9.0E-5) - t244_tmp * 1.4232349967893529) + in3
    [4] * t22 * t23 * t25 * 4.4588653403680594) - t166_tmp * 13.181469) -
    t167_tmp * 13.181469) - t168_tmp_tmp * 13.181469) - t169_tmp * t5 * t6 *
    13.181469) + t170_tmp_tmp * t7 * t9 * 13.181469) + t171_tmp * t6 * t7 * t9 *
    13.181469) + t27_tmp_tmp * t7 * t8 * t9 * 13.181469) + d45 * 13.181469) -
    t68_tmp * t9 * t14 * 43.310541) - d28 * t14 * 21.6552705) - d29 * t14 *
    21.6552705) - b_t169_tmp * t22 * 21.6552705) + d30 * t14 * 21.6552705) -
    t278_tmp * t15 * 0.77205747) + t170_tmp * t7 * t9 * t22 * 43.310541) -
    t70_tmp * t15 * 37.66134) - d42 * t14 * t15 * 0.0421722) + t171_tmp * t7 *
    t9 * t22 * 21.6552705) - d37 * t15 * 37.66134) - d43 * t14 * t15 * 0.0421722)
    + d18 * t8 * t9 * t22 * 21.6552705) - d_Crow_tmp * t14 * t15 * 4.0E-6) -
    e_Crow_tmp * t14 * t15 * 4.0E-6) - t187_tmp * t14 * t23 * 0.0210861) -
    t187_tmp * t15 * t22 * 0.0210861) + d40 * t15 * 0.77205747) - t278_tmp * t23
    * 18.83067) - t329_tmp * t15 * t22 * 18.83067) + t70_tmp * t23 * 1.54411494)
    + t40_tmp * t15 * t22 * 1.54411494) + d31 * t17 * 0.00012) + d37 * t23 *
    1.54411494) + d36 * t15 * t22 * 1.54411494) + d32 * t17 * 0.00012) - d38 *
    t14 * t23 * 2.0E-6) - d38 * t15 * t22 * 2.0E-6) + t31_tmp * t14 * t15 * t16 *
    2.0E-6) - d39 * t14 * t23 * 2.0E-6) - d39 * t15 * t22 * 2.0E-6) + d40 * t23 *
    18.83067) + d13 * t15 * t22 * 18.83067) - d15 * t14 * t15 * t16 * 0.0210861)
    + t329_tmp * t22 * t23 * 0.77205747) + d41 * t14 * t23 * 0.0210861) + d41 *
    t15 * t22 * 0.0210861) + t40_tmp * t22 * t23 * 37.66134) - d31 * t25 *
    5.9451537871574116) + d42 * t22 * t23 * 0.0421722) + d36 * t22 * t23 *
    37.66134) - d32 * t25 * 5.9451537871574116) + d43 * t22 * t23 * 0.0421722) -
    d46 * t17 * t23 * 5.9451537871574116) - t10 * t17 * t22 * 5.9451537871574116)
    - t255_tmp * t14 * t15 * t24 * 0.01054305) + d_Crow_tmp * t22 * t23 * 4.0E-6)
    + e_Crow_tmp * t22 * t23 * 4.0E-6) - in3[3] * t8 * t9 * t22 * t23 *
    0.77205747) - c_t29_tmp * t17 * t23 * 6.0E-5) - d10 * t17 * t22 * 6.0E-5) -
    f_Crow_tmp * t24 * 1.0E-6) + b_Crow_tmp * t17 * 3.0E-5) - t170_tmp * t17 *
    t22 * t23 * 0.00012) - in3[1] * t5 * t14 * t23 * t24 * 2.0E-6) - g_Crow_tmp *
    t24 * 2.0E-6) - t171_tmp * t17 * t22 * t23 * 0.00012) - c_t28_tmp * t24 *
    2.0E-6) - b_t32_tmp * t24 * 2.0E-6) - d14 * t22 * t23 * 2.0E-6) - d46 * t23 *
    t25 * 0.00012) - t10 * t22 * t25 * 0.00012) + t32_tmp * t14 * t23 * t24 *
    0.0210861) + t32_tmp * t15 * t22 * t24 * 0.0210861) - b_t27_tmp * t17 * t23 *
    1.4862884467893529) - b_t41_tmp * t17 * t22 * 1.4862884467893529) + Crow_tmp
    * t14 * t23 * t24 * 0.0210861) + Crow_tmp * t15 * t22 * t24 * 0.0210861) -
                       b_t147_tmp * t17 * t23 * 1.4862884467893529) - t154_tmp *
                      t17 * t22 * 1.4862884467893529) + t155_tmp * t25 *
                     2.9725768935787058) + t185_tmp * t25 * 2.9725768935787058)
                   + in3[3] * t9 * t16 * t22 * t23 * 0.0210861) - t76_tmp * t17 *
                  t24 * 1.4862884467893529) - b_Crow_tmp * t25 *
                 1.4862884467893529) + t186_tmp * t25 * 5.9451537871574116) +
               t194_tmp * t25 * 5.9451537871574116) + t255_tmp * t22 * t23 * t24
              * 0.01054305) - t147_tmp * t25 * 3.0E-5) - t204_tmp * t25 * 3.0E-5)
           - t205_tmp * t25 * 3.0E-5) - t206_tmp * t25 * 3.0E-5) - t207_tmp *
         t25 * 3.0E-5) + t243_tmp * t24 * 1.0E-6) - t11 * t22 * t23 * 3.0E-5) +
      t12 * t22 * t23 * t24 * 1.4862884467893529) + d17 * t22 * t23 * t25 *
     1.4862884467893529) + t244_tmp * t25 * 3.0E-5;
  t32_tmp = in3[0] * t7;
  Crow_tmp = t30_tmp_tmp * t8;
  b_Crow_tmp = t85_tmp * t7;
  c_Crow_tmp = t80_tmp_tmp * t7;
  d_Crow_tmp = t130_tmp_tmp * t9;
  e_Crow_tmp = in3[0] * t22;
  f_Crow_tmp = t30_tmp_tmp * t18;
  g_Crow_tmp = t32_tmp * t18;
  t75_tmp = Crow_tmp * t18;
  t76_tmp = b_Crow_tmp * t18;
  t77_tmp = c_Crow_tmp * t8;
  c_t29_tmp = d_Crow_tmp * t18;
  b_t30_tmp = t129_tmp * t7 * t9;
  Crow[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((in3[0] * -7.9017942 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32)
    + -t33) + -t34) + t39) + t40) + t44) + t45) + -t41) + -t42) + -t43) + t52) +
    t53) + -t46) + -t47) + t58) + t59) + t61) + t62) + t63) + t66) + t67) + t68)
    + t69) + t70) + t71) + -t51) + t74) + t75) + t76) + t77) + t78) + -t55) +
    -t60) + -t64) + -t65) + t86) + t87) + -t72) + -t80) + -t81) + t95) + t96) +
    -t85) + t98) + t99) + t100) + -t89) + -t90) + -t93) + -t94) + -t101) + -t102)
    + t113) + t114) + t116) + -t111) + -t112) + t119) + t120) + t121) + t122) +
    -t115) + t125) + t127) + -t124) + -t126) + -t129) + -t130) + -t131) + -t132)
    + -t133) + -t134) + t143) + -t142) + t145) + t146) + -t147) + t149) + t150)
    + t151) + t152) + t153) + t157) + t158) + t159) + t160) + -t154) + -t155) +
    -t156) + t164) + t165) + t170) + t171) + -t166) + -t167) + -t168) + -t169) +
    t181) + t182) + t183) + t185) + t186) + t187) + -t176) + -t177) + -t178) +
    -t179) + -t180) + -t184) + t197) + -t188) + -t194) + -t195) + -t198) + t203)
    + t210) + t211) + -t204) + -t205) + -t206) + -t207) + t216) + t217) + -t208)
    + -t209) + t224) + t225) + t226) + t227) + t230) + t231) + -t218) + -t219) +
    t234) + t235) + t236) + t237) + -t222) + -t223) + -t228) + -t229) + t242) +
    t246) + t247) + t248) + t249) + t251) + t252) + t253) + t254) + t255) +
    -t243) + -t244) + -t245) + t262) + -t250) + -t256) + -t257) + t267) + t269)
    + -t261) + t272) + -t266) + -t268) + -t271) + t276) + t277) + t285) + -t278)
    + -t279) + -t280) + -t281) + -t282) + -t283) + -t284) + -t286) + -t287) +
    -t288) + t299) + t300) + t301) + t303) + t304) + -t302) + t308) + t309) +
    t310) + t311) + t312) + t313) + -t306) + -t307) + t318) + t319) + t320) +
    t321) + t323) + -t316) + t325) + -t317) + t327) + t328) + t331) + t332) +
    -t329) + -t330) + t337) + t338) + t29_tmp * 0.118692) + t30_tmp_tmp *
    11.5074405) + t67_tmp_tmp * 18.25116472) - t61_tmp_tmp * 169.168797) +
                      t32_tmp * 212.275234) - t89_tmp_tmp * 0.11686308) +
                    t124_tmp * 15.8035884) - e_Crow_tmp * 176.006902985) -
                  t67_tmp * 2.93549) + Crow_tmp * 2.93549) + b_Crow_tmp *
                43.310541) - f_Crow_tmp * 23.014881) - g_Crow_tmp * 424.550468)
             - t125_tmp_tmp * 424.550468) + c_Crow_tmp * 23.014881) + d_Crow_tmp
           * 43.310541) + t67_tmp_tmp * t8 * t9 * 43.310541) - t75_tmp * 5.87098)
        - t76_tmp * 86.621082) - t143_tmp_tmp * 86.621082) + t77_tmp * 5.87098)
     - c_t29_tmp * 86.621082) + b_t30_tmp * 86.621082;
  Crow[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((in3[0]
    * -7.32219628 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32) + -t33) +
    -t34) + t39) + t40) + t44) + t45) + -t41) + -t42) + -t43) + t52) + t53) +
    -t46) + -t47) + t58) + t59) + t61) + t62) + t63) + t66) + t67) + t68) + t69)
    + t70) + t71) + -t51) + t74) + t75) + t76) + t77) + t78) + -t55) + -t60) +
    -t64) + -t65) + t86) + t87) + -t72) + -t80) + -t81) + t95) + t96) + -t85) +
    t98) + t99) + t100) + -t89) + -t90) + -t93) + -t94) + -t101) + -t102) + t113)
    + t114) + t116) + -t111) + -t112) + t119) + t120) + t121) + t122) + -t115) +
    t125) + t127) + -t124) + -t126) + -t129) + -t130) + -t131) + -t132) + -t133)
    + -t134) + t143) + -t142) + t145) + t146) + -t147) + t149) + t150) + t151) +
    t152) + t153) + t157) + t158) + t159) + t160) + -t154) + -t155) + -t156) +
    t164) + t165) + t170) + t171) + -t166) + -t167) + -t168) + -t169) + t181) +
    t182) + t183) + t185) + t186) + t187) + -t176) + -t177) + -t178) + -t179) +
    -t180) + -t184) + t197) + -t188) + -t194) + -t195) + -t198) + t203) + t210)
    + t211) + -t204) + -t205) + -t206) + -t207) + t216) + t217) + -t208) + -t209)
    + t224) + t225) + t226) + t227) + t230) + t231) + -t218) + -t219) + t234) +
    t235) + t236) + t237) + -t222) + -t223) + -t228) + -t229) + t242) + t246) +
    t247) + t248) + t249) + t251) + t252) + t253) + t254) + t255) + -t243) +
    -t244) + -t245) + t262) + -t250) + -t256) + -t257) + t267) + t269) + -t261)
    + t272) + -t266) + -t268) + -t271) + t276) + t277) + t285) + -t278) + -t279)
    + -t280) + -t281) + -t282) + -t283) + -t284) + -t286) + -t287) + -t288) +
    t299) + t300) + t301) + t303) + t304) + -t302) + t308) + t309) + t310) +
    t311) + t312) + t313) + -t306) + -t307) + t318) + t319) + t320) + t321) +
    t323) + -t316) + t325) + -t317) + t327) + t328) + t331) + t332) + -t329) +
                  -t330) + t337) + t338) + t124_tmp * 14.64439256) + e_Crow_tmp *
              89.586374315) - f_Crow_tmp * 11.5074405) - g_Crow_tmp * 212.275234)
           - t125_tmp_tmp * 212.275234) + c_Crow_tmp * 11.5074405) - t75_tmp *
         2.93549) - t76_tmp * 43.310541) - t143_tmp_tmp * 43.310541) + t77_tmp *
      2.93549) - c_t29_tmp * 43.310541) + b_t30_tmp * 43.310541;
  d = in3[0] * t9;
  d1 = in3[0] * t20;
  d2 = t41_tmp * t8;
  d3 = d * t18;
  d4 = d * t19;
  d5 = t27_tmp * t8;
  d6 = t272_tmp * t8;
  d7 = t86_tmp * t20;
  d8 = t87_tmp * t20;
  d9 = d2 * t18;
  d10 = d2 * t19;
  d11 = b_t89_tmp_tmp * t20;
  d12 = t90_tmp_tmp * t20;
  d14 = t124_tmp * t20;
  d15 = t100_tmp * t20;
  d16 = d3 * t19;
  d17 = b_t124_tmp * t20;
  d20 = b_t170_tmp * t8;
  d21 = b_t171_tmp * t8;
  d22 = t312_tmp * t9;
  d23 = t313_tmp * t9;
  d24 = t80_tmp * t9;
  d25 = t282_tmp_tmp * t8;
  d26 = d25 * t9;
  d27 = t81_tmp * t9;
  d28 = t306_tmp * t9;
  d29 = t307_tmp_tmp * t9;
  d30 = d9 * t19;
  d31 = t129_tmp * t19;
  d32 = t130_tmp * t18;
  t74_tmp = b_t29_tmp * t8;
  Crow_tmp = t74_tmp * t9;
  t197_tmp = t30_tmp * t8;
  b_Crow_tmp = t197_tmp * t9;
  d_Crow_tmp = d26 * t18;
  e_Crow_tmp = t127_tmp * t8;
  t12 = in3[2] * t2 * t3 * t4 * t8;
  t13 = in3[0] * t2 * t3 * t6 * t7 * t9;
  f_Crow_tmp = t185_tmp_tmp * t19;
  g_Crow_tmp = t186_tmp_tmp * t18;
  t75_tmp = b_t125_tmp_tmp * t20;
  t76_tmp = d24 * t19;
  t77_tmp = d27 * t18;
  c_t29_tmp = t224_tmp * t8;
  b_t30_tmp = t225_tmp * t8;
  t10 = t331_tmp * t8;
  t11 = in3[1] * t2 * t3 * t4 * t8;
  Crow[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((in3[0] * 2.7E-5 - t85_tmp * 4.0E-6) + t156_tmp * 0.89341) + d *
    0.0421722) - t124_tmp * 2.7E-5) - t100_tmp * 2.7E-5) - d1 * 5.4E-5) + in3[0]
    * t24 * 5.8190468871574117) - t86_tmp * 12.10302007431482) - t87_tmp *
    12.10302007431482) + d33 * 2.93549) - t283_tmp_tmp * 0.00012) - t284_tmp_tmp
    * 0.00012) + t329_tmp * 13.181469) + b_t89_tmp_tmp * 12.10302007431482) +
    t90_tmp_tmp * 12.10302007431482) - d13 * 13.181469) + t33_tmp * 0.1046566) +
    t34_tmp * 0.1046566) + t121_tmp * 4.0E-6) + t122_tmp_tmp * 4.0E-6) + t85_tmp
    * t20 * 8.0E-6) - in3[0] * t9 * t18 * 0.0421722) - d4 * 0.0421722) - d * t20
    * 0.0843444) + b_t124_tmp * 5.4E-5) + d14 * 5.4E-5) + d15 * 5.4E-5) +
    t129_tmp * 2.5327982) + t153_tmp * 2.5327982) - t129_tmp_tmp * t7 * 0.89341)
    - t130_tmp_tmp * t6 * 0.89341) + b_t28_tmp * 0.102001) + t130_tmp *
    2.5327982) + t168_tmp * 43.310541) - t80_tmp * 0.000116) - d5 * 0.000116) -
    d34 * 0.1046566) - d35 * 0.1046566) - t81_tmp * 0.000116) - t156_tmp_tmp_tmp
    * 2.5327982) - t32_tmp_tmp * 0.102001) - t27_tmp_tmp * t8 * t9 * 43.310541)
    + d6 * 0.000116) + d7 * 11.63809377431482) + t86_tmp * t21 *
    11.89030757431482) + d8 * 11.63809377431482) + t87_tmp * t21 *
    11.89030757431482) - t41_tmp * t7 * t18 * 2.93549) - d9 * 11.63809377431482)
    - d10 * 11.63809377431482) - d2 * t21 * 11.89030757431482) - d11 *
    11.63809377431482) + t283_tmp_tmp * t21 * 0.00024) + t284_tmp_tmp * t21 *
    0.00024) - t164_tmp * 1.54411494) - b_t89_tmp_tmp * t21 * 11.89030757431482)
    - d12 * 11.63809377431482) - t165_tmp * 1.54411494) - t90_tmp_tmp * t21 *
    11.89030757431482) - t71_tmp * 0.2093132) - t142_tmp * 8.0E-6) - t121_tmp *
    t20 * 8.0E-6) - t122_tmp_tmp * t20 * 8.0E-6) + d16 * 0.0843444) + d3 * t20 *
    0.0843444) + d4 * t20 * 0.0843444) - d17 * 0.000108) - t127_tmp_tmp *
    2.93549) + t185_tmp_tmp * 0.0421722) + t184_tmp * 0.0421722) -
    b_t125_tmp_tmp * 5.4E-5) + t166_tmp_tmp * t8 * 5.4E-5) + t28_tmp_tmp * t4 *
    t5 * 37.66134) + t30_tmp_tmp * t4 * t5 * t7 * 0.0421722) + t12 * 5.4E-5) +
    d22 * 0.00024) + b_t129_tmp * 4.0E-6) + d23 * 0.00024) + t153_tmp * t9 *
    4.0E-6) - t168_tmp_tmp * 1.54411494) - c_t169_tmp * 1.54411494) + b_t130_tmp
    * 4.0E-6) - d24 * 37.66134) - d5 * t9 * 37.66134) - b_t187_tmp * 0.0421722)
    + t64_tmp * t8 * t9 * 13.181469) + t65_tmp * t8 * t9 * 13.181469) - d26 *
    0.00024) - d20 * 5.4E-5) - b_t329_tmp * 37.66134) - d27 * 37.66134) - d21 *
    5.4E-5) - t39_tmp * t9 * 11.89030757431482) - b_t40_tmp * t9 *
    11.89030757431482) - d28 * 0.00024) - d29 * 0.00024) + in3[3] * t2 * t7 * t8
    * t9 * 1.54411494) + d45 * 1.54411494) - t156_tmp_tmp_tmp * t9 * 4.0E-6) -
    d31 * 5.0655964) - d32 * 5.0655964) + d6 * t9 * 37.66134) + b_t28_tmp * t21 *
    11.89030757431482) + t119_tmp * 0.000232) + t120_tmp * 0.000232) + t80_tmp *
    t21 * 0.00024) + d5 * t21 * 0.00024) + t81_tmp * t21 * 0.00024) + t32_tmp *
    t8 * t9 * t18 * 43.310541) - t32_tmp_tmp * t21 * 11.89030757431482) - d6 *
    t21 * 0.00024) - d7 * t21 * 11.89030757431482) - d8 * t21 *
    11.89030757431482) + d30 * 23.27618754862965) + d9 * t21 * 11.89030757431482)
    + d10 * t21 * 11.89030757431482) + t195_tmp * 3.08822988) + d11 * t21 *
    11.89030757431482) + d12 * t21 * 11.89030757431482) + t142_tmp * t20 *
    1.6E-5) - d16 * t20 * 0.1686888) + t115_tmp * t6 * t7 * 0.2093132) + t51_tmp
    * t5 * t6 * t7 * 8.0E-6) - t86_tmp * t4 * t5 * t8 * 8.0E-6) - t69_tmp_tmp *
    t3 * t4 * t5 * t8 * 8.0E-6) - t13 * 0.0843444) + t11 * t9 * 0.0843444) +
    t323_tmp * t9 * 0.00024) + t125_tmp_tmp * t8 * t9 * 43.310541) + t12 * t9 *
    0.0843444) - Crow_tmp * 11.89030757431482) - b_t27_tmp_tmp * t8 * t9 *
    11.89030757431482) + c_t29_tmp * 8.0E-6) - b_Crow_tmp * 11.89030757431482) +
    b_t30_tmp * 8.0E-6) - d20 * t9 * 0.0843444) - b_t329_tmp * t9 * 0.00024) -
    f_Crow_tmp * 0.0843444) - d21 * t9 * 0.0843444) - g_Crow_tmp * 0.0843444) +
    t75_tmp * 0.000108) + b_t31_tmp * t8 * t9 * 11.89030757431482) - t145_tmp *
    8.0E-6) - d22 * t20 * 0.00024) - t146_tmp * 8.0E-6) - d23 * t20 * 0.00024) +
                     t76_tmp * 75.32268) + d_Crow_tmp * 0.00024) + t77_tmp *
                   75.32268) + d26 * t19 * 0.00024) + d28 * t20 * 0.00024) + d29
                * t20 * 0.00024) - t119_tmp * t21 * 0.00048) - t120_tmp * t21 *
              0.00048) - d30 * t21 * 23.78061514862965) - e_Crow_tmp *
            23.27618754862965) - b_t197_tmp * 3.08822988) - t143_tmp * t20 *
          1.6E-5) + t13 * t20 * 0.1686888) + Crow_tmp * t19 * 23.78061514862965)
       + b_Crow_tmp * t18 * 23.78061514862965) - d_Crow_tmp * t19 * 0.00048) +
     e_Crow_tmp * t21 * 23.78061514862965) + t10 * t9 * 0.00048;
  d5 = t4 * t18;
  d6 = t4 * t19;
  d7 = t85_tmp * t9;
  d8 = in3[3] * t2 * t7;
  d9 = d33 * t5;
  d10 = t80_tmp_tmp * t9;
  d11 = t81_tmp_tmp * t9;
  d12 = d7 * t18;
  d13 = d7 * t19;
  d2 *= t9;
  t32_tmp = d12 * t19;
  Crow_tmp = t185_tmp_tmp * t9;
  b_Crow_tmp = t186_tmp_tmp * t9;
  d_Crow_tmp = t143_tmp * t9;
  Crow[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d
    * -37.66134 + t124_tmp * 0.00012) + t100_tmp * 0.00012) - d1 * 0.00012) + t4
    * t27) + t4 * t44) + t4 * t45) + t4 * t204) + t4 * t205) + t4 * t206) + t4 *
    t207) + t4 * t299) + t4 * t312) + t4 * t313) - d8 * 0.00012) - d44 * 0.00012)
    + t187_tmp * 13.181469) - d41 * 13.181469) + d3 * 37.66134) + d4 * 37.66134)
    - b_t124_tmp * 0.00024) + d14 * 0.00012) - t124_tmp * t21 * 0.00024) + d15 *
    0.00012) - t100_tmp * t21 * 0.00024) + d1 * t21 * 0.00024) + d5 * t85) + d6 *
    t85) + d5 * t147) + d6 * t147) + d5 * t194) + d6 * t194) - t129_tmp *
    11.89030757431482) + t153_tmp * 0.102001) - t51_tmp * t9 * 13.181469) -
    t130_tmp * 11.89030757431482) + d9 * 43.310541) - d10 * 1.54411494) - d25 *
    0.0421722) - b_t131_tmp * 11.992308574314819) - b_t132_tmp *
    11.992308574314819) - t39_tmp * 4.0E-6) - b_t40_tmp * 4.0E-6) - d11 *
    1.54411494) - b_t133_tmp * 11.992308574314819) - t134_tmp_tmp *
    11.992308574314819) - t156_tmp_tmp_tmp * 0.102001) - d2 * 4.0E-6) + t61_tmp *
    t9 * 13.181469) + t283_tmp_tmp * t9 * 0.0421722) + t284_tmp_tmp * t9 *
    0.0421722) - t28_tmp * t8 * t9 * 43.310541) - t30_tmp_tmp * t9 * t18 *
    43.310541) + d12 * 11.89030757431482) + d13 * 11.89030757431482) + d8 * t21 *
    0.00024) + d44 * t21 * 0.00024) - d7 * t20 * 11.89030757431482) - d16 *
    75.32268) - d17 * 0.00024) + b_t124_tmp * t21 * 0.00048) - d14 * t21 *
    0.00024) - d15 * t21 * 0.00024) + t29_tmp * t4 * t5 * t6 * 37.66134) +
    t27_tmp_tmp * t3 * t4 * t5 * 37.66134) + b_t125_tmp_tmp * 0.00024) -
    t185_tmp_tmp_tmp * t7 * 13.181469) - t186_tmp_tmp_tmp * t6 * 13.181469) +
    t11 * 0.00012) - t323_tmp * 0.0421722) + t186_tmp_tmp * 37.66134) -
    b_t67_tmp * 4.0E-6) - b_t68_tmp * 4.0E-6) + t12 * 0.00012) - t69_tmp *
    4.0E-6) - b_t70_tmp * 4.0E-6) + t74_tmp * 4.0E-6) - d9 * t7 * 1.54411494) -
    d19 * t5 * t6 * 1.54411494) - b_t28_tmp * t9 * 4.0E-6) + t197_tmp * 4.0E-6)
    + c_Crow_tmp * t9 * 43.310541) - d24 * 0.0421722) - b_t187_tmp * 37.66134) -
    d20 * 0.00012) - t27_tmp_tmp * t5 * t7 * t9 * 11.89030757431482) - d18 * t5 *
    t6 * t9 * 11.89030757431482) - t28_tmp_tmp * t8 * t9 * 37.66134) +
    b_t329_tmp * 0.0421722) - d27 * 0.0421722) - d21 * 0.00012) + t283_tmp * t9 *
    1.54411494) + t284_tmp * t9 * 1.54411494) + t32_tmp_tmp * t9 * 4.0E-6) + d31
    * 23.78061514862965) - t312_tmp * t20 * 0.0421722) + d32 * 23.78061514862965)
    - t313_tmp * t20 * 0.0421722) + t129_tmp * t21 * 23.78061514862965) -
    t282_tmp_tmp * t7 * t18 * 43.310541) + t181_tmp_tmp * t8 * t9 * 37.66134) +
    t130_tmp * t21 * 23.78061514862965) - t86_tmp * t9 * t20 * 4.0E-6) + d10 *
    t19 * 3.08822988) - t87_tmp * t9 * t20 * 4.0E-6) + d11 * t18 * 3.08822988) +
    b_t131_tmp * t21 * 11.89030757431482) + b_t132_tmp * t21 * 11.89030757431482)
    + t306_tmp * t20 * 0.0421722) + b_t133_tmp * t21 * 11.89030757431482) +
    t134_tmp_tmp * t21 * 11.89030757431482) + t307_tmp_tmp * t20 * 0.0421722) -
    t156_tmp_tmp_tmp * t21 * 11.89030757431482) + b_t89_tmp_tmp * t9 * t20 *
    4.0E-6) + t90_tmp_tmp * t9 * t20 * 4.0E-6) - t282_tmp_tmp * t18 * t19 *
    3.08822988) - t32_tmp * 23.78061514862965) + d12 * t20 * 11.89030757431482)
    + d13 * t20 * 11.89030757431482) + d17 * t21 * 0.00048) - t331_tmp_tmp *
    43.310541) + Crow_tmp * 0.00048) + t13 * 75.32268) + b_Crow_tmp * 0.00048) +
    t149_tmp * t8 * t9 * 0.00024) + t150_tmp * t8 * t9 * 0.00024) + t151_tmp *
    t8 * t9 * 0.00024) + t152_tmp * t8 * t9 * 0.00024) - b_t187_tmp * t9 *
    0.00024) - f_Crow_tmp * 75.32268) - g_Crow_tmp * 75.32268) + t75_tmp *
    0.00024) - b_t125_tmp_tmp * t21 * 0.00048) - t11 * t21 * 0.00024) - t74_tmp *
                       t19 * 8.0E-6) - t12 * t21 * 0.00024) - t197_tmp * t18 *
                     8.0E-6) + t76_tmp * 0.0843444) + t77_tmp * 0.0843444) - d31
                  * t21 * 47.5612302972593) - d32 * t21 * 47.5612302972593) -
                d25 * t18 * t19 * 0.0843444) - d2 * t18 * t19 * 8.0E-6) -
              t32_tmp * t20 * 23.78061514862965) + t331_tmp * 3.08822988) +
            d_Crow_tmp * 23.78061514862965) - c_t29_tmp * t9 * 11.89030757431482)
          - b_t30_tmp * t9 * 11.89030757431482) - Crow_tmp * t19 * 0.00096) -
        b_Crow_tmp * t18 * 0.00096) - t75_tmp * t21 * 0.00048) + t10 * 0.0843444)
     + e_Crow_tmp * t9 * 8.0E-6) + d_Crow_tmp * t20 * 23.78061514862965;
  Crow[5] = 0.0;
}

static void coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
  Crow[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18_tmp;
  real_T t20_tmp;
  real_T b_t20_tmp;
  real_T t21_tmp;
  real_T b_t21_tmp;
  real_T t32_tmp;
  real_T b_t32_tmp;
  real_T c_t32_tmp;
  real_T t33_tmp_tmp;
  real_T t33_tmp;
  real_T b_t33_tmp;
  real_T t35_tmp_tmp;
  real_T b_t35_tmp_tmp;
  real_T t36_tmp;
  real_T t36_tmp_tmp;
  real_T b_t36_tmp_tmp;
  real_T t40_tmp;
  real_T t41_tmp;
  real_T t42_tmp;
  real_T t43_tmp_tmp;
  real_T b_t43_tmp_tmp;
  real_T t43_tmp;
  real_T t47_tmp;
  real_T t47;
  real_T t48_tmp;
  real_T t48;
  real_T t53_tmp;
  real_T b_t53_tmp;
  real_T t58_tmp;
  real_T t59_tmp;
  real_T t61_tmp_tmp;
  real_T t61_tmp;
  real_T b_t61_tmp;
  real_T t62_tmp_tmp;
  real_T t62_tmp;
  real_T b_t62_tmp;
  real_T t63_tmp;
  real_T t64_tmp;
  real_T t69_tmp;
  real_T t70_tmp;
  real_T b_t70_tmp;
  real_T t81_tmp;
  real_T b_t81_tmp;
  real_T t82_tmp;
  real_T b_t82_tmp;
  real_T t95_tmp;
  real_T t106_tmp;
  real_T t107_tmp;
  real_T t30_tmp;
  real_T t31_tmp;
  real_T b_t31_tmp;
  real_T t97_tmp;
  real_T t98_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T d39;
  real_T d40;
  real_T d41;
  real_T d42;
  real_T d43;
  real_T d44;
  real_T d45;
  real_T d46;
  real_T d47;
  real_T d48;
  real_T d49;
  real_T d50;
  real_T d51;
  real_T d52;
  real_T d53;
  real_T d54;
  real_T d55;
  real_T d56;
  real_T d57;
  real_T d58;
  real_T d59;
  real_T d60;
  real_T d61;
  real_T d62;
  real_T d63;
  real_T d64;
  real_T d65;
  real_T d66;
  real_T d67;
  real_T d68;
  real_T d69;

  /*  CORIOLIS_ROW_4 - Computation of the robot specific Coriolis matrix row for joint 4 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_4(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_4(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 4 of 6 for Quantec Ultra SE 100.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     Crow:  [1x6] row of the robot Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function.  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also coriolis. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  /*  Bugfix */
  /*   In some versions the symbolic toolbox writes the constant $pi$ in */
  /*   capital letters. This way autogenerated functions might not work properly. */
  /*   To fix this issue a local variable is introduced: */
  /*     This function was generated by the Symbolic Math Toolbox version 8.5. */
  /*     02-Mar-2021 15:13:16 */
  t2 = muDoubleScalarCos(in2[1]);
  t3 = muDoubleScalarCos(in2[2]);
  t4 = muDoubleScalarCos(in2[3]);
  t5 = muDoubleScalarCos(in2[4]);
  t6 = muDoubleScalarSin(in2[1]);
  t7 = muDoubleScalarSin(in2[2]);
  t8 = muDoubleScalarSin(in2[3]);
  t9 = muDoubleScalarSin(in2[4]);
  t11 = in2[4] * 2.0;
  t12 = t2 * t2;
  t13 = t3 * t3;
  t14 = t4 * t4;
  t15 = t5 * t5;
  t16 = muDoubleScalarSin(in2[3] * 2.0);
  t17 = muDoubleScalarSin(t11);
  t18_tmp = in3[4] * t5;
  t20_tmp = in3[1] * t4;
  b_t20_tmp = t20_tmp * t5;
  t21_tmp = in3[2] * t4;
  b_t21_tmp = t21_tmp * t5;
  t32_tmp = in3[0] * t2;
  b_t32_tmp = t32_tmp * t3;
  c_t32_tmp = b_t32_tmp * t8;
  t33_tmp_tmp = in3[0] * t6;
  t33_tmp = t33_tmp_tmp * t7;
  b_t33_tmp = t33_tmp * t8;
  t35_tmp_tmp = t32_tmp * t4;
  b_t35_tmp_tmp = t35_tmp_tmp * t7;
  t36_tmp = in3[0] * t3;
  t36_tmp_tmp = t36_tmp * t4;
  b_t36_tmp_tmp = t36_tmp_tmp * t6;
  t40_tmp = in3[1] * t8;
  t41_tmp = in3[2] * t8;
  t42_tmp = b_t32_tmp * t4;
  t43_tmp_tmp = in3[0] * t4;
  b_t43_tmp_tmp = t43_tmp_tmp * t6;
  t43_tmp = b_t43_tmp_tmp * t7;
  t47_tmp = in3[1] * t5;
  t47 = t47_tmp * 4.0E-6;
  t48_tmp = in3[2] * t5;
  t48 = t48_tmp * 4.0E-6;
  t53_tmp = in3[4] * t4;
  b_t53_tmp = t53_tmp * t5;
  t58_tmp = t42_tmp * t8;
  t59_tmp = t43_tmp * t8;
  t61_tmp_tmp = t32_tmp * t7;
  t61_tmp = t61_tmp_tmp * t8;
  b_t61_tmp = t61_tmp * t9;
  t62_tmp_tmp = t36_tmp * t6;
  t62_tmp = t62_tmp_tmp * t8;
  b_t62_tmp = t62_tmp * t9;
  t63_tmp = in3[1] * t9;
  t64_tmp = in3[2] * t9;
  t69_tmp = t42_tmp * t5;
  t70_tmp = t43_tmp_tmp * t5;
  b_t70_tmp = t70_tmp * t6 * t7;
  t81_tmp = t32_tmp * t5;
  b_t81_tmp = t81_tmp * t7;
  t82_tmp = t36_tmp * t5;
  b_t82_tmp = t82_tmp * t6;
  t95_tmp = in3[4] * t8;
  t106_tmp = t35_tmp_tmp * t5;
  t107_tmp = t36_tmp_tmp * t5;
  t30_tmp = b_t32_tmp * t5;
  t31_tmp = in3[0] * t5;
  b_t31_tmp = t31_tmp * t6 * t7;
  t97_tmp = b_t32_tmp * t14;
  t98_tmp = t33_tmp * t14;
  d = in3[1] * t6;
  d1 = in3[0] * t9;
  d2 = in3[0] * t12;
  d3 = in3[0] * t13;
  d4 = in3[4] * t2;
  d5 = in3[1] * t2;
  d6 = in3[2] * t2;
  d7 = d6 * t3;
  d8 = d5 * t3;
  d9 = d * t7;
  d10 = in3[2] * t6 * t7;
  d11 = d4 * t7;
  d12 = in3[4] * t3;
  d13 = d12 * t6;
  d14 = t43_tmp_tmp * t12;
  d15 = t31_tmp * t12;
  d16 = t31_tmp * t13;
  d17 = d1 * t12;
  d18 = d1 * t13;
  d19 = d2 * t13;
  d20 = t35_tmp_tmp * t6;
  d21 = in3[1] * t3;
  d22 = in3[2] * t3;
  d23 = t43_tmp_tmp * t8;
  d24 = in3[0] * t8 * t9;
  d25 = d8 * t4;
  d26 = d5 * t4;
  d27 = d26 * t7;
  d28 = d21 * t4;
  d29 = d22 * t4;
  d30 = d29 * t6;
  d31 = t32_tmp * t6 * t8;
  d32 = t20_tmp * t6;
  d33 = t36_tmp * t7 * t8;
  d34 = d5 * t7 * t8;
  d35 = d21 * t6 * t8;
  d36 = d6 * t7 * t8;
  d37 = d22 * t6 * t8;
  d38 = d28 * t6;
  d39 = d6 * t4;
  d40 = d39 * t7;
  d41 = d8 * t14;
  d42 = d7 * t14;
  d43 = t53_tmp * t6 * t7;
  d44 = d23 * t12;
  d45 = d23 * t13;
  d46 = d24 * t12;
  d47 = d9 * t14;
  d48 = d15 * t13;
  d49 = d10 * t14;
  d50 = d17 * t13;
  d51 = t42_tmp * t6;
  d52 = t106_tmp * t6;
  d53 = t107_tmp * t7;
  d54 = b_t32_tmp * t6 * t7;
  d55 = d7 * t4;
  d56 = d55 * t8;
  d57 = d20 * t9;
  d58 = d4 * t3;
  d59 = in3[0] * t3 * t4 * t7;
  d60 = d32 * t7;
  d61 = t21_tmp * t6 * t7;
  d62 = d60 * t8;
  d63 = d61 * t8;
  d64 = d31 * t9;
  d65 = t70_tmp * t8 * t9;
  d66 = d33 * t9;
  d67 = d31 * t13;
  d68 = d33 * t12;
  d69 = d44 * t13;
  t81_tmp = t81_tmp * t6 * t8 * t9;
  t36_tmp_tmp = t82_tmp * t7 * t8 * t9;
  t35_tmp_tmp = d65 * t12;
  t32_tmp = in3[0] * t2 * t3 * t4 * t6 * t7 * t8;
  t36_tmp = d58 * t4;
  t70_tmp = t30_tmp * t6 * t7;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((in3[0] * -2.7E-5 + t31_tmp * 4.0E-6) - d1 * 0.0421722) + d2 *
    2.7E-5) + d3 * 2.7E-5) + in3[0] * t14 * 5.4E-5) - in3[0] * t16 *
    5.8190468871574117) - d8 * 0.4649263) - d7 * 0.4649263) - d11 * 0.00012) -
    d13 * 0.00012) + d9 * 0.4649263) - d * t8 * 2.93549) + d10 * 0.4649263) -
    d14 * 0.1046566) - t43_tmp_tmp * t13 * 0.1046566) - d15 * 4.0E-6) - d16 *
    4.0E-6) - t31_tmp * t14 * 8.0E-6) + d17 * 0.0421722) + d18 * 0.0421722) + d1
    * t14 * 0.0843444) - d19 * 5.4E-5) - d2 * t14 * 5.4E-5) - d3 * t14 * 5.4E-5)
    - d20 * 2.5327982) + b_t35_tmp_tmp * 0.89341) + b_t36_tmp_tmp * 0.89341) -
    t36_tmp * 11.992308574314819) - d59 * 2.5327982) - in3[1] * t2 * t3 * t8 *
    0.1046566) - d27 * 0.000116) - d38 * 0.000116) - d7 * t8 * 0.1046566) - d40 *
    0.000116) - d30 * 0.000116) + d31 * 0.000116) + d33 * 0.000116) - d34 *
    2.5327982) - d35 * 2.5327982) - d36 * 2.5327982) - d37 * 2.5327982) - d41 *
    11.63809377431482) - d32 * t9 * 43.310541) - d42 * 11.63809377431482) + d43 *
    11.992308574314819) + d9 * t8 * 0.1046566) + t43_tmp_tmp * t7 * t12 *
    2.93549) + d10 * t8 * 0.1046566) + d44 * 11.63809377431482) + d45 *
    11.63809377431482) + d23 * t15 * 11.89030757431482) + d47 *
    11.63809377431482) + d11 * t15 * 0.00024) + d13 * t15 * 0.00024) + d14 * t13
    * 0.2093132) + d46 * 1.54411494) + d49 * 11.63809377431482) + d48 * 8.0E-6)
    + d24 * t13 * 1.54411494) + d15 * t14 * 8.0E-6) + d16 * t14 * 8.0E-6) - d50 *
    0.0843444) - d17 * t14 * 0.0843444) - d18 * t14 * 0.0843444) + d19 * t14 *
    0.000108) + d51 * 2.93549) - d52 * 0.0421722) + d54 * 5.4E-5) - d25 * t8 *
    5.4E-5) - d53 * 0.0421722) - d25 * t9 * 1.54411494) - d56 * 5.4E-5) - d55 *
    t9 * 1.54411494) - d57 * 4.0E-6) + d58 * t5 * t8 * 4.0E-6) - d59 * t9 *
    4.0E-6) - d27 * t9 * 37.66134) - d5 * t5 * t7 * t8 * 0.0421722) - d38 * t9 *
    37.66134) - d21 * t5 * t6 * t8 * 0.0421722) - d6 * t4 * t7 * t9 * 37.66134)
    - d6 * t5 * t7 * t8 * 0.0421722) - d30 * t9 * 37.66134) - d22 * t5 * t6 * t8
    * 0.0421722) + d20 * t13 * 5.0655964) + d64 * 37.66134) - b_t61_tmp *
    13.181469) + d59 * t12 * 5.0655964) - b_t62_tmp * 13.181469) + d65 * 0.00024)
    + d62 * 5.4E-5) - d58 * t8 * t9 * 0.0421722) + d66 * 37.66134) - d34 * t9 *
    4.0E-6) - d35 * t9 * 4.0E-6) + d60 * t9 * 1.54411494) + d63 * 5.4E-5) - d4 *
    t5 * t7 * t9 * 11.89030757431482) - d12 * t5 * t6 * t9 * 11.89030757431482)
    - d36 * t9 * 4.0E-6) - d37 * t9 * 4.0E-6) + d61 * t9 * 1.54411494) + t36_tmp
    * t15 * 11.89030757431482) - d67 * 0.000232) + d27 * t15 * 0.00024) + d38 *
    t15 * 0.00024) - d68 * 0.000232) + d40 * t15 * 0.00024) + d30 * t15 *
    0.00024) - t18_tmp * t6 * t7 * t8 * 4.0E-6) - d31 * t15 * 0.00024) - d33 *
    t15 * 0.00024) + in3[4] * t6 * t7 * t8 * t9 * 0.0421722) + d41 * t15 *
    11.89030757431482) - in3[0] * t7 * t8 * t9 * t12 * 43.310541) + d42 * t15 *
    11.89030757431482) - d43 * t15 * 11.89030757431482) - d69 *
    23.27618754862965) - d44 * t15 * 11.89030757431482) - d45 * t15 *
    11.89030757431482) - d46 * t13 * 3.08822988) - d47 * t15 * 11.89030757431482)
    - d48 * t14 * 1.6E-5) - d49 * t15 * 11.89030757431482) + d50 * t14 *
    0.1686888) - d51 * t7 * 0.2093132) - t70_tmp * 8.0E-6) + d25 * t5 * t8 *
    8.0E-6) + d55 * t5 * t8 * 8.0E-6) + d54 * t9 * 0.0843444) - d5 * t3 * t4 *
    t8 * t9 * 0.0843444) + t36_tmp * t5 * t9 * 0.00024) - in3[0] * t2 * t3 * t6 *
    t8 * t9 * 43.310541) - d26 * t5 * t7 * t9 * 11.89030757431482) - d28 * t5 *
    t6 * t9 * 11.89030757431482) - d56 * t9 * 0.0843444) - d39 * t5 * t7 * t9 *
    11.89030757431482) - d29 * t5 * t6 * t9 * 11.89030757431482) + d52 * t13 *
    0.0843444) + t81_tmp * 11.89030757431482) + d53 * t12 * 0.0843444) -
    b_t20_tmp * t6 * t7 * t8 * 8.0E-6) - d54 * t14 * 0.000108) + t36_tmp_tmp *
    11.89030757431482) - b_t21_tmp * t6 * t7 * t8 * 8.0E-6) + d57 * t13 * 8.0E-6)
    + d8 * t5 * t9 * t14 * 0.00024) + in3[0] * t3 * t4 * t7 * t9 * t12 * 8.0E-6)
    + d62 * t9 * 0.0843444) + d7 * t5 * t9 * t14 * 0.00024) - b_t53_tmp * t6 *
                       t7 * t9 * 0.00024) + d63 * t9 * 0.0843444) - d64 * t13 *
                     75.32268) - t35_tmp_tmp * 0.00024) - d66 * t12 * 75.32268)
                  - d65 * t13 * 0.00024) - t47_tmp * t6 * t7 * t9 * t14 *
                 0.00024) - t48_tmp * t6 * t7 * t9 * t14 * 0.00024) + d67 * t15 *
               0.00048) + d68 * t15 * 0.00048) + d69 * t15 * 23.78061514862965)
            + t32_tmp * 23.27618754862965) + d54 * t8 * t9 * 3.08822988) +
          t70_tmp * t14 * 1.6E-5) - in3[0] * t2 * t3 * t6 * t7 * t9 * t14 *
         0.1686888) - t81_tmp * t13 * 23.78061514862965) - t36_tmp_tmp * t12 *
       23.78061514862965) + t35_tmp_tmp * t13 * 0.00048) - t32_tmp * t15 *
     23.78061514862965) - t69_tmp * t6 * t7 * t8 * t9 * 0.00048;
  t81_tmp = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((-(t18_tmp *
    t8 * t9 * 0.00024) + -(b_t20_tmp * t8 * t9 * 0.00024)) + -(b_t21_tmp * t8 *
    t9 * 0.00024)) + b_t35_tmp_tmp * t15 * 0.00024) + b_t36_tmp_tmp * t15 *
    0.00024) + -(t20_tmp * 0.1046566)) + -(t21_tmp * 0.1046566)) + t30_tmp * t9 *
    t14 * 0.00024) + b_t33_tmp * 0.1046566) + -(b_t31_tmp * t9 * t14 * 0.00024))
    + -(c_t32_tmp * 0.1046566)) + -(b_t35_tmp_tmp * t9 * 37.66134)) +
    -(b_t36_tmp_tmp * t9 * 37.66134)) + t40_tmp * t9 * 1.54411494) + t41_tmp *
    t9 * 1.54411494) + t43_tmp * t9 * 1.54411494) + -(t42_tmp * t9 * 1.54411494))
    + in3[1] * 2.7E-5) + in3[2] * 2.7E-5) + -t47) + -t48) + b_t53_tmp * 4.0E-6)
    + -(in3[1] * t14 * 5.4E-5)) + -(in3[2] * t14 * 5.4E-5)) + t47_tmp * t14 *
    8.0E-6) + t48_tmp * t14 * 8.0E-6) + t59_tmp * 5.4E-5) + -(t58_tmp * 5.4E-5))
    + t63_tmp * 0.0421722) + t64_tmp * 0.0421722) + -(b_t61_tmp * 4.0E-6)) +
    -(b_t62_tmp * 4.0E-6)) + t33_tmp * 0.4649263) + t69_tmp * t8 * 8.0E-6) +
    -(b_t32_tmp * 0.4649263)) + -(b_t70_tmp * t8 * 8.0E-6)) + -(t53_tmp * t9 *
    0.0421722)) + -(t63_tmp * t14 * 0.0843444)) + -(t64_tmp * t14 * 0.0843444))
    + -(b_t35_tmp_tmp * 0.000116)) + -(b_t36_tmp_tmp * 0.000116)) + -(b_t81_tmp *
    t8 * 0.0421722)) + -(b_t82_tmp * t8 * 0.0421722)) + -(t61_tmp * 2.5327982))
    + -(t62_tmp * 2.5327982)) + in3[1] * t16 * 5.8190468871574117) + in3[2] *
                        t16 * 5.8190468871574117) + t59_tmp * t9 * 0.0843444) +
                      t95_tmp * 11.992308574314819) + -(t58_tmp * t9 * 0.0843444))
                    + t98_tmp * 11.63809377431482) + -(t97_tmp *
    11.63809377431482)) + -(t95_tmp * t15 * 11.89030757431482)) + -(t20_tmp * t8
    * t15 * 11.89030757431482)) + -(t21_tmp * t8 * t15 * 11.89030757431482)) +
               -(t106_tmp * t7 * t9 * 11.89030757431482)) + -(t107_tmp * t6 * t9
    * 11.89030757431482)) + t97_tmp * t15 * 11.89030757431482) + -(t98_tmp * t15
    * 11.89030757431482);
  Crow[1] = (((t81_tmp + t20_tmp * t7 * 2.93549) - t33_tmp_tmp * t8 * 2.93549) -
             b_t43_tmp_tmp * t9 * 43.310541) - in3[1] * t7 * t8 * t9 * 43.310541;
  Crow[2] = t81_tmp;
  Crow[3] = in3[4] * t17 * 5.9451537871574116 - in3[4] * muDoubleScalarCos(t11) *
    0.00012;
  Crow[4] = (((((((((((((((((((((((((((((in3[3] * 0.00012 + t40_tmp *
    11.992308574314819) + t18_tmp * 4.0E-6) + t41_tmp * 11.992308574314819) -
    in3[4] * t9 * 0.0421722) - in3[3] * t15 * 0.00024) + in3[3] * t17 *
    5.9451537871574116) + t4 * t47) + t4 * t48) - t61_tmp_tmp * 0.00012) -
    t62_tmp_tmp * 0.00012) - t20_tmp * t9 * 0.0421722) - t21_tmp * t9 *
    0.0421722) - t40_tmp * t15 * 11.89030757431482) - t41_tmp * t15 *
    11.89030757431482) - t42_tmp * 11.992308574314819) + t43_tmp *
    11.992308574314819) - t47_tmp * t8 * t9 * 0.00024) + t61_tmp_tmp * t15 *
                        0.00024) + t62_tmp_tmp * t15 * 0.00024) - t48_tmp * t8 *
                      t9 * 0.00024) + t30_tmp * t8 * 4.0E-6) - c_t32_tmp * t9 *
                    0.0421722) - b_t81_tmp * t9 * 11.89030757431482) - b_t82_tmp
                  * t9 * 11.89030757431482) + t42_tmp * t15 * 11.89030757431482)
                - b_t31_tmp * t8 * 4.0E-6) + b_t33_tmp * t9 * 0.0421722) -
              t43_tmp * t15 * 11.89030757431482) + t69_tmp * t9 * 0.00024) -
    b_t70_tmp * t9 * 0.00024;
  Crow[5] = 0.0;
}

void coriolis_100(const real_T q[6], const real_T qd[6], real_T C[36])
{
  real_T b_dv[6];
  int32_T i;
  real_T t2_tmp;
  real_T t3_tmp;
  real_T t4_tmp;
  real_T t5_tmp;
  real_T t6_tmp;
  real_T t7_tmp;
  real_T t8_tmp;
  real_T t9_tmp;
  real_T t12_tmp;
  real_T t13_tmp;
  real_T t14_tmp;
  real_T t15_tmp;
  real_T t16_tmp;
  real_T t17_tmp;
  real_T t27_tmp;
  real_T t35_tmp_tmp;
  real_T t50_tmp_tmp;
  real_T t30_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T d39;
  real_T d40;
  real_T t56_tmp;
  real_T d41;
  real_T d42;
  real_T d43;
  real_T d44;
  real_T d45;
  real_T d46;
  real_T d47;
  real_T d48;
  real_T d49;
  real_T d50;
  real_T d51;
  real_T d52;
  real_T d53;
  real_T d54;
  real_T d55;
  real_T C_tmp;
  real_T b_C_tmp;
  real_T c_C_tmp;
  real_T d56;
  real_T d_C_tmp;
  real_T t34_tmp;
  real_T b_t35_tmp_tmp;
  real_T d57;
  real_T d58;
  real_T t35_tmp;
  real_T d59;
  real_T t46_tmp;
  real_T t49_tmp;
  real_T b_t50_tmp_tmp;
  real_T t50_tmp;
  real_T b_t50_tmp;
  real_T t52_tmp_tmp;
  real_T t52_tmp;
  real_T t53_tmp_tmp;
  real_T t53_tmp;
  real_T d60;
  real_T b_t56_tmp;
  real_T t30;
  real_T t34;
  real_T e_C_tmp;
  real_T d61;
  real_T t16;
  real_T t17;
  real_T f_C_tmp;
  real_T t18;
  real_T g_C_tmp;
  real_T t19;
  real_T t45_tmp;
  real_T C_tmp_tmp;
  real_T b_C_tmp_tmp;
  real_T h_C_tmp;
  real_T c_C_tmp_tmp;
  real_T i_C_tmp;
  real_T j_C_tmp;
  real_T k_C_tmp;
  real_T l_C_tmp;
  real_T d_C_tmp_tmp;
  real_T m_C_tmp;
  real_T n_C_tmp;
  real_T o_C_tmp;
  real_T e_C_tmp_tmp;
  real_T p_C_tmp;
  real_T q_C_tmp;
  real_T r_C_tmp;
  real_T s_C_tmp;
  real_T t_C_tmp;
  real_T u_C_tmp;
  real_T v_C_tmp;
  real_T w_C_tmp;
  real_T x_C_tmp;
  real_T y_C_tmp;
  real_T ab_C_tmp;
  real_T bb_C_tmp;
  real_T f_C_tmp_tmp;
  real_T g_C_tmp_tmp;
  real_T h_C_tmp_tmp;
  real_T i_C_tmp_tmp;
  real_T j_C_tmp_tmp;
  real_T cb_C_tmp;
  real_T db_C_tmp;
  real_T b_t45_tmp;
  real_T b_t46_tmp;
  real_T eb_C_tmp;
  real_T fb_C_tmp;
  real_T gb_C_tmp;
  real_T k_C_tmp_tmp;
  real_T hb_C_tmp;
  real_T ib_C_tmp;
  real_T l_C_tmp_tmp;
  real_T t61;
  real_T m_C_tmp_tmp;
  real_T t69;
  real_T jb_C_tmp;

  /*  CORIOLIS - Coriolis matrix for the Quantec Ultra SE 100 arm  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis(rob,q,qd)  */
  /*     Crow = rob.coriolis(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives the function computes the  */
  /*     Coriolis matrix of the robot.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     C:  [6x6] Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function!  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also inertia. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  memset(&C[0], 0, 36U * sizeof(real_T));
  coriolis_row_1(q, qd, b_dv);
  for (i = 0; i < 6; i++) {
    C[6 * i] = b_dv[i];
  }

  /*  CORIOLIS_ROW_2 - Computation of the robot specific Coriolis matrix row for joint 2 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_2(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_2(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 2 of 6 for Quantec Ultra SE 100.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     Crow:  [1x6] row of the robot Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function.  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also coriolis. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  /*  Bugfix */
  /*   In some versions the symbolic toolbox writes the constant $pi$ in */
  /*   capital letters. This way autogenerated functions might not work properly. */
  /*   To fix this issue a local variable is introduced: */
  /*     This function was generated by the Symbolic Math Toolbox version 8.5. */
  /*     02-Mar-2021 15:13:10 */
  t2_tmp = muDoubleScalarCos(q[1]);
  t3_tmp = muDoubleScalarCos(q[2]);
  t4_tmp = muDoubleScalarCos(q[3]);
  t5_tmp = muDoubleScalarCos(q[4]);
  t6_tmp = muDoubleScalarSin(q[1]);
  t7_tmp = muDoubleScalarSin(q[2]);
  t8_tmp = muDoubleScalarSin(q[3]);
  t9_tmp = muDoubleScalarSin(q[4]);
  t12_tmp = t2_tmp * t2_tmp;
  t13_tmp = t3_tmp * t3_tmp;
  t14_tmp = t4_tmp * t4_tmp;
  t15_tmp = t5_tmp * t5_tmp;
  t16_tmp = muDoubleScalarSin(q[3] * 2.0);
  t17_tmp = muDoubleScalarSin(q[4] * 2.0);
  t27_tmp = qd[0] * t2_tmp;
  t35_tmp_tmp = qd[0] * t3_tmp;
  t50_tmp_tmp = qd[0] * t5_tmp;
  t30_tmp = qd[0] * t4_tmp;
  d = qd[0] * t6_tmp;
  d1 = qd[0] * t8_tmp;
  d2 = qd[3] * t6_tmp;
  d3 = qd[0] * t7_tmp;
  d4 = qd[0] * t12_tmp;
  d5 = t27_tmp * t3_tmp;
  d6 = qd[3] * t2_tmp;
  d7 = d6 * t3_tmp;
  d8 = d * t7_tmp;
  d9 = t35_tmp_tmp * t8_tmp;
  d10 = t50_tmp_tmp * t7_tmp;
  d11 = d2 * t7_tmp;
  d12 = t30_tmp * t9_tmp;
  d13 = t50_tmp_tmp * t8_tmp;
  d14 = t30_tmp * t12_tmp;
  d15 = d1 * t9_tmp;
  d16 = t50_tmp_tmp * t12_tmp;
  d17 = t30_tmp * t13_tmp;
  d18 = t27_tmp * t7_tmp;
  d19 = t35_tmp_tmp * t6_tmp;
  d20 = qd[0] * muDoubleScalarSin(q[1] * 2.0);
  d21 = qd[0] * muDoubleScalarSin(q[2] * 2.0) * 89.586374315;
  d22 = d1 * t12_tmp;
  d23 = t27_tmp * t6_tmp;
  d24 = qd[4] * t2_tmp;
  d25 = d24 * t3_tmp;
  d26 = qd[3] * t3_tmp;
  d27 = t35_tmp_tmp * t7_tmp;
  d28 = qd[4] * t5_tmp;
  d29 = d28 * t6_tmp;
  d30 = t35_tmp_tmp * t4_tmp;
  d31 = d25 * t5_tmp;
  d32 = d23 * t7_tmp;
  d33 = t35_tmp_tmp * t5_tmp;
  d34 = d33 * t7_tmp;
  d35 = d6 * t4_tmp;
  d36 = d35 * t7_tmp;
  d37 = d26 * t4_tmp;
  d38 = d37 * t6_tmp;
  d39 = qd[4] * t3_tmp;
  d40 = d30 * t9_tmp;
  t56_tmp = qd[3] * t4_tmp;
  d41 = t56_tmp * t6_tmp;
  d42 = d23 * t8_tmp;
  d43 = d6 * t7_tmp * t8_tmp;
  d44 = d26 * t6_tmp * t8_tmp;
  d45 = d27 * t8_tmp;
  d46 = t30_tmp * t5_tmp;
  d47 = d46 * t9_tmp;
  d48 = d29 * t7_tmp;
  d49 = d25 * t9_tmp;
  d50 = d23 * t13_tmp;
  d51 = d27 * t12_tmp;
  d52 = d24 * t7_tmp * t8_tmp;
  d53 = d39 * t6_tmp * t8_tmp;
  d54 = d23 * t14_tmp;
  d55 = d7 * t14_tmp;
  C_tmp = d12 * t12_tmp;
  b_C_tmp = d13 * t12_tmp;
  c_C_tmp = d27 * t14_tmp;
  d56 = qd[4] * t6_tmp * t7_tmp * t9_tmp;
  d_C_tmp = d15 * t12_tmp;
  t34_tmp = d14 * t13_tmp;
  b_t35_tmp_tmp = d11 * t14_tmp;
  d57 = d8 * t8_tmp;
  d58 = d5 * t5_tmp;
  t35_tmp = d5 * t4_tmp;
  d59 = t35_tmp * t9_tmp;
  t46_tmp = d5 * t6_tmp;
  t49_tmp = t46_tmp * t7_tmp;
  b_t50_tmp_tmp = t27_tmp * t4_tmp;
  t50_tmp = d30 * t7_tmp;
  b_t50_tmp = d41 * t7_tmp;
  t52_tmp_tmp = t50_tmp * t8_tmp;
  t52_tmp = t27_tmp * t5_tmp;
  t53_tmp_tmp = t52_tmp * t6_tmp;
  t50_tmp *= t9_tmp;
  t53_tmp = d24 * t5_tmp * t7_tmp * t8_tmp;
  d60 = d39 * t5_tmp;
  b_t56_tmp = d60 * t6_tmp * t8_tmp;
  t30 = d34 * t9_tmp;
  t34 = b_t50_tmp * t8_tmp;
  e_C_tmp = d47 * t12_tmp;
  d61 = qd[4] * t4_tmp;
  t16 = d61 * t6_tmp * t7_tmp * t8_tmp;
  t17 = d50 * t14_tmp;
  f_C_tmp = d51 * t14_tmp;
  t18 = t30_tmp * t6_tmp;
  g_C_tmp = t18 * t7_tmp;
  t19 = g_C_tmp * t9_tmp;
  t45_tmp = d26 * t5_tmp;
  C_tmp_tmp = qd[0] * t2_tmp * t4_tmp * t6_tmp;
  b_C_tmp_tmp = C_tmp_tmp * t8_tmp;
  h_C_tmp = t53_tmp_tmp * t9_tmp;
  c_C_tmp_tmp = t35_tmp * t6_tmp * t7_tmp;
  i_C_tmp = b_C_tmp_tmp * t9_tmp;
  j_C_tmp = t52_tmp_tmp * t9_tmp;
  k_C_tmp = h_C_tmp * t13_tmp;
  l_C_tmp = t30 * t12_tmp;
  d_C_tmp_tmp = qd[3] * t5_tmp;
  m_C_tmp = d61 * t5_tmp;
  n_C_tmp = t56_tmp * t5_tmp;
  o_C_tmp = t35_tmp * t5_tmp;
  e_C_tmp_tmp = b_t50_tmp_tmp * t5_tmp;
  p_C_tmp = d7 * t4_tmp;
  q_C_tmp = d58 * t6_tmp;
  r_C_tmp = e_C_tmp_tmp * t6_tmp * t8_tmp;
  s_C_tmp = t52_tmp * t7_tmp;
  t_C_tmp = d5 * t8_tmp;
  u_C_tmp = C_tmp_tmp * t7_tmp * t9_tmp;
  v_C_tmp = qd[0] * t2_tmp * t4_tmp * t6_tmp * t9_tmp;
  w_C_tmp = qd[4] * t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  x_C_tmp = qd[3] * t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  y_C_tmp = qd[0] * t2_tmp * t3_tmp * t5_tmp * t6_tmp * t7_tmp * t8_tmp *
    0.1686888;
  ab_C_tmp = qd[4] * t2_tmp * t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp *
    11.89030757431482;
  bb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t7_tmp * t8_tmp;
  C[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((qd[0] * 7.9017942 + d20 * 176.006902985) - d21) -
    t27_tmp * 0.118692) - t35_tmp_tmp * 11.5074405) + t30_tmp * 0.000116) +
    t50_tmp_tmp * 1.54411494) + d * 169.168797) - d3 * 212.275234) + d1 *
    2.5327982) - d4 * 15.8035884) - qd[0] * t13_tmp * 14.64439256) + d5 *
    3.5022645) + d7 * 0.4649263) + d18 * 64.605506) + d19 * 64.605506) - d9 *
    2.93549) - d10 * 43.310541) + d12 * 37.66134) + d13 * 0.0421722) - d8 *
    3.5022645) + t35_tmp_tmp * t12_tmp * 23.014881) - d14 * 0.000232) - d11 *
    0.4649263) - d17 * 0.000232) - d16 * 3.08822988) + d15 * 4.0E-6) + d2 *
    t8_tmp * 2.93549) - t50_tmp_tmp * t13_tmp * 3.08822988) - t30_tmp * t15_tmp *
    0.00024) + d3 * t12_tmp * 424.550468) - d22 * 5.0655964) - d1 * t13_tmp *
    5.0655964) + d4 * t13_tmp * 29.28878512) + t46_tmp * 424.550468) + t_C_tmp *
    0.89341) - t27_tmp * t5_tmp * t6_tmp * 75.32268) + s_C_tmp * 13.181469) +
    qd[0] * t3_tmp * t5_tmp * t6_tmp * 13.181469) + d31 * 0.0421722) - d32 *
    23.014881) - d34 * 75.32268) + d42 * 0.2093132) - d40 * 43.310541) + d7 *
    t8_tmp * 0.1046566) + d36 * 0.000116) + d38 * 0.000116) + d45 * 0.2093132) +
    d47 * 11.89030757431482) + d49 * 4.0E-6) + d43 * 2.5327982) + d44 *
    2.5327982) + d50 * 358.34549726) - d57 * 0.89341) + d52 * 0.102001) + d53 *
    0.102001) + d54 * 11.63809377431482) + d51 * 358.34549726) + d55 *
    11.63809377431482) + d41 * t9_tmp * 43.310541) - d48 * 0.0421722) - d23 *
    t15_tmp * 11.89030757431482) + d9 * t12_tmp * 5.87098) + d29 * t8_tmp *
    43.310541) + c_C_tmp * 11.63809377431482) + d10 * t12_tmp * 86.621082) - d11
    * t8_tmp * 0.1046566) - d27 * t15_tmp * 11.89030757431482) - C_tmp *
    75.32268) - b_C_tmp * 0.0843444) - d12 * t13_tmp * 75.32268) - d13 * t13_tmp
    * 0.0843444) - d56 * 4.0E-6) + t34_tmp * 0.000464) - d_C_tmp * 8.0E-6) + d16
    * t13_tmp * 6.17645976) - d15 * t13_tmp * 8.0E-6) - b_t35_tmp_tmp *
    11.63809377431482) + d14 * t15_tmp * 0.00048) + d17 * t15_tmp * 0.00048) +
    d22 * t13_tmp * 10.1311928) + q_C_tmp * 86.621082) + d59 * 13.181469) -
    t49_tmp * 29.28878512) + b_t50_tmp_tmp * t6_tmp * t8_tmp * 5.4E-5) + p_C_tmp
    * t8_tmp * 5.4E-5) + b_t50_tmp_tmp * t6_tmp * t9_tmp * 3.08822988) + p_C_tmp
    * t9_tmp * 1.54411494) + d25 * t4_tmp * t8_tmp * 0.00012) - t27_tmp * t5_tmp
    * t6_tmp * t9_tmp * 0.00024) + t52_tmp_tmp * 5.4E-5) + d31 * t8_tmp *
    1.54411494) - d32 * t8_tmp * 5.87098) + t50_tmp * 3.08822988) - t30 *
    0.00024) + d36 * t9_tmp * 37.66134) + d6 * t5_tmp * t7_tmp * t8_tmp *
    0.0421722) + d38 * t9_tmp * 37.66134) + t45_tmp * t6_tmp * t8_tmp *
    0.0421722) + t53_tmp_tmp * t13_tmp * 150.64536) - t19 * 13.181469) + t53_tmp
    * 37.66134) + b_t56_tmp * 37.66134) + d34 * t12_tmp * 150.64536) + d40 *
    t12_tmp * 86.621082) - t34 * 5.4E-5) - d31 * t14_tmp * 0.0421722) - d42 *
    t13_tmp * 0.4186264) + d43 * t9_tmp * 4.0E-6) + d44 * t9_tmp * 4.0E-6) -
    b_t50_tmp * t9_tmp * 1.54411494) - t16 * 0.00012) - d45 * t12_tmp *
    0.4186264) - e_C_tmp * 23.78061514862965) - d48 * t8_tmp * 1.54411494) - d47
    * t13_tmp * 23.78061514862965) - d36 * t15_tmp * 0.00024) - d38 * t15_tmp *
    0.00024) - d49 * t14_tmp * 4.0E-6) - t17 * 23.27618754862965) + d50 *
    t15_tmp * 23.78061514862965) - f_C_tmp * 23.27618754862965) + d52 * t15_tmp *
    11.89030757431482) + d53 * t15_tmp * 11.89030757431482) + d48 * t14_tmp *
    0.0421722) - d54 * t15_tmp * 11.89030757431482) + d51 * t15_tmp *
    23.78061514862965) - d55 * t15_tmp * 11.89030757431482) + C_tmp * t13_tmp *
    150.64536) + b_C_tmp * t13_tmp * 0.1686888) - c_C_tmp * t15_tmp *
    11.89030757431482) + d56 * t14_tmp * 4.0E-6) + d_C_tmp * t13_tmp * 1.6E-5) -
    t34_tmp * t15_tmp * 0.00096) + b_t35_tmp_tmp * t15_tmp * 11.89030757431482)
    - c_C_tmp_tmp * 0.000464) - q_C_tmp * t7_tmp * 6.17645976) - r_C_tmp *
    8.0E-6) - p_C_tmp * t5_tmp * t8_tmp * 8.0E-6) - t27_tmp * t3_tmp * t6_tmp *
    t7_tmp * t8_tmp * 10.1311928) - d30 * t5_tmp * t7_tmp * t8_tmp * 8.0E-6) -
    u_C_tmp * 86.621082) + i_C_tmp * 0.0843444) + x_C_tmp * t9_tmp * 0.0843444)
    + d35 * t5_tmp * t7_tmp * t9_tmp * 11.89030757431482) + d37 * t5_tmp *
    t6_tmp * t9_tmp * 11.89030757431482) + j_C_tmp * 0.0843444) - b_C_tmp_tmp *
    t13_tmp * 0.000108) + n_C_tmp * t6_tmp * t7_tmp * t8_tmp * 8.0E-6) - v_C_tmp
    * t13_tmp * 6.17645976) - t52_tmp_tmp * t12_tmp * 0.000108) + k_C_tmp *
    0.00048) - t50_tmp * t12_tmp * 6.17645976) + t53_tmp * t9_tmp * 0.00024) +
    b_t56_tmp * t9_tmp * 0.00024) - h_C_tmp * t14_tmp * 0.00024) + l_C_tmp *
    0.00048) - d7 * t5_tmp * t9_tmp * t14_tmp * 0.00024) - w_C_tmp * t15_tmp *
    0.00024) - t34 * t9_tmp * 0.0843444) - t30 * t14_tmp * 0.00024) + e_C_tmp *
                     t13_tmp * 47.5612302972593) + d_C_tmp_tmp * t6_tmp * t7_tmp
                    * t9_tmp * t14_tmp * 0.00024) + t16 * t15_tmp * 0.00024) +
                  t17 * t15_tmp * 23.78061514862965) + f_C_tmp * t15_tmp *
                 23.78061514862965) - c_C_tmp_tmp * t9_tmp * 150.64536) -
               y_C_tmp) - t49_tmp * t8_tmp * t9_tmp * 1.6E-5) + ab_C_tmp) +
            c_C_tmp_tmp * t15_tmp * 0.00096) + r_C_tmp * t13_tmp * 1.6E-5) +
          bb_C_tmp * t12_tmp * 1.6E-5) - i_C_tmp * t13_tmp * 0.1686888) -
        j_C_tmp * t12_tmp * 0.1686888) - m_C_tmp * t6_tmp * t7_tmp * t8_tmp *
       t9_tmp * 11.89030757431482) + k_C_tmp * t14_tmp * 0.00048) + l_C_tmp *
     t14_tmp * 0.00048) - o_C_tmp * t6_tmp * t7_tmp * t9_tmp * 47.5612302972593;
  C_tmp_tmp = t4_tmp * t5_tmp;
  h_C_tmp = C_tmp_tmp * t8_tmp;
  c_C_tmp_tmp = t4_tmp * t8_tmp;
  i_C_tmp = t5_tmp * t9_tmp;
  j_C_tmp = t8_tmp * t9_tmp * 3.08822988;
  k_C_tmp = t3_tmp * t8_tmp;
  l_C_tmp = t5_tmp * t7_tmp;
  p_C_tmp = t3_tmp * t4_tmp * t9_tmp;
  C[7] = (qd[3] * ((((((((((((t4_tmp * 0.2093132 + t5_tmp * 8.0E-6) - t9_tmp *
    0.0843444) + t14_tmp * 0.000108) - t16_tmp * 11.63809377431482) - t4_tmp *
    t7_tmp * 5.87098) - j_C_tmp) - t5_tmp * t14_tmp * 1.6E-5) + t9_tmp * t14_tmp
                       * 0.1686888) + t7_tmp * t8_tmp * t9_tmp * 86.621082) +
                     c_C_tmp_tmp * t15_tmp * 23.78061514862965) + h_C_tmp *
                    t9_tmp * 0.00048) - 5.4E-5) / 2.0 - qd[2] * ((((t3_tmp *
              23.014881 + t7_tmp * 424.550468) + k_C_tmp * 5.87098) + l_C_tmp *
            86.621082) + p_C_tmp * 86.621082) / 2.0) - qd[4] * (((((((((((t9_tmp
    * 75.32268 - t14_tmp * 0.00024) - t15_tmp * 0.00048) + t17_tmp *
    11.89030757431482) - C_tmp_tmp * 3.08822988) + t3_tmp * t9_tmp * 86.621082)
    + t14_tmp * t15_tmp * 0.00048) + C_tmp_tmp * t7_tmp * 86.621082) - h_C_tmp *
    0.0843444) - c_C_tmp_tmp * t9_tmp * 8.0E-6) - i_C_tmp * t14_tmp *
    23.78061514862965) + 0.00024) / 2.0;
  f_C_tmp_tmp = qd[1] * t3_tmp;
  g_C_tmp_tmp = qd[2] * t3_tmp;
  h_C_tmp = qd[3] * t9_tmp;
  q_C_tmp = qd[4] * t14_tmp;
  h_C_tmp_tmp = qd[1] * t5_tmp;
  i_C_tmp_tmp = qd[2] * t5_tmp;
  j_C_tmp_tmp = qd[3] * t8_tmp;
  r_C_tmp = j_C_tmp_tmp * t9_tmp;
  cb_C_tmp = qd[1] * t7_tmp;
  db_C_tmp = qd[2] * t7_tmp;
  C[13] = (((((((((((((((((((((((((((((((((qd[3] * -2.7E-5 - qd[4] * 0.00012) -
    f_C_tmp_tmp * 11.5074405) - g_C_tmp_tmp * 11.5074405) + t56_tmp * 0.1046566)
    - cb_C_tmp * 212.275234) + d_C_tmp_tmp * 4.0E-6) - db_C_tmp * 212.275234) -
    h_C_tmp * 0.0421722) - qd[4] * t9_tmp * 37.66134) + qd[3] * t14_tmp * 5.4E-5)
    + q_C_tmp * 0.00012) - qd[3] * t16_tmp * 5.8190468871574117) + qd[4] *
    t15_tmp * 0.00024) - qd[4] * t17_tmp * 5.9451537871574116) - f_C_tmp_tmp *
    t8_tmp * 2.93549) - h_C_tmp_tmp * t7_tmp * 43.310541) - g_C_tmp_tmp * t8_tmp
    * 2.93549) + m_C_tmp * 1.54411494) - i_C_tmp_tmp * t7_tmp * 43.310541) -
                        t56_tmp * t7_tmp * 2.93549) - d39 * t9_tmp * 43.310541)
                      - r_C_tmp * 1.54411494) - d_C_tmp_tmp * t14_tmp * 8.0E-6)
                    + h_C_tmp * t14_tmp * 0.0843444) - q_C_tmp * t15_tmp *
                   0.00024) - f_C_tmp_tmp * t4_tmp * t9_tmp * 43.310541) -
                 g_C_tmp_tmp * t4_tmp * t9_tmp * 43.310541) - m_C_tmp * t7_tmp *
                43.310541) + m_C_tmp * t8_tmp * 0.0421722) + d61 * t8_tmp *
              t9_tmp * 4.0E-6) + qd[3] * t7_tmp * t8_tmp * t9_tmp * 43.310541) +
            t56_tmp * t8_tmp * t15_tmp * 11.89030757431482) + d28 * t9_tmp *
           t14_tmp * 11.89030757431482) + n_C_tmp * t8_tmp * t9_tmp * 0.00024;
  b_t45_tmp = qd[1] * t4_tmp;
  b_t46_tmp = qd[2] * t4_tmp;
  d2 = qd[2] * t9_tmp;
  d4 = qd[4] * t8_tmp;
  d7 = d28 * t8_tmp;
  d9 = qd[1] * t9_tmp;
  d10 = qd[1] * t14_tmp;
  d11 = qd[2] * t14_tmp;
  d12 = d_C_tmp_tmp * t8_tmp;
  d13 = qd[1] * -2.7E-5 - qd[2] * 2.7E-5;
  h_C_tmp = b_t50_tmp_tmp * t7_tmp;
  m_C_tmp = d30 * t6_tmp;
  q_C_tmp = d18 * t8_tmp;
  eb_C_tmp = d19 * t8_tmp;
  fb_C_tmp = d5 * t14_tmp;
  gb_C_tmp = d8 * t14_tmp;
  d_C_tmp = t35_tmp * t8_tmp;
  e_C_tmp = g_C_tmp * t8_tmp;
  t16 = b_t45_tmp * t5_tmp;
  t17 = b_t46_tmp * t5_tmp;
  k_C_tmp_tmp = t50_tmp_tmp * t6_tmp;
  f_C_tmp = k_C_tmp_tmp * t7_tmp;
  g_C_tmp = t16 * t8_tmp;
  C_tmp = t17 * t8_tmp;
  b_C_tmp = b_t45_tmp * t8_tmp;
  c_C_tmp = b_t46_tmp * t8_tmp;
  s_C_tmp *= t8_tmp;
  t34 = d33 * t6_tmp * t8_tmp;
  o_C_tmp *= t8_tmp;
  t30 = d46 * t6_tmp * t7_tmp * t8_tmp;
  hb_C_tmp = qd[1] * t16_tmp * 5.8190468871574117;
  ib_C_tmp = qd[2] * t16_tmp * 5.8190468871574117;
  l_C_tmp_tmp = qd[1] * t8_tmp;
  t61 = l_C_tmp_tmp * t9_tmp * 1.54411494;
  m_C_tmp_tmp = qd[2] * t8_tmp;
  t69 = m_C_tmp_tmp * t9_tmp * 1.54411494;
  jb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t6_tmp * t9_tmp *
    11.89030757431482;
  C[19] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d13 +
    b_t45_tmp * 0.1046566) + h_C_tmp_tmp * 4.0E-6) + b_t46_tmp * 0.1046566) +
    i_C_tmp_tmp * 4.0E-6) - t56_tmp * 0.000116) - d9 * 0.0421722) - d2 *
    0.0421722) - j_C_tmp_tmp * 2.5327982) - d4 * 0.102001) + d10 * 5.4E-5) + d11
    * 5.4E-5) - hb_C_tmp) - ib_C_tmp) + d5 * 0.4649263) - b_t45_tmp * t7_tmp *
    2.93549) - d8 * 0.4649263) - b_t46_tmp * t7_tmp * 2.93549) + d * t8_tmp *
    2.93549) - d26 * t8_tmp * 2.93549) - t56_tmp * t9_tmp * 37.66134) - d12 *
    0.0421722) - d7 * 37.66134) - t61) - t69) - h_C_tmp_tmp * t14_tmp * 8.0E-6)
    - r_C_tmp * 4.0E-6) - i_C_tmp_tmp * t14_tmp * 8.0E-6) + t56_tmp * t15_tmp *
    0.00024) + d9 * t14_tmp * 0.0843444) + d2 * t14_tmp * 0.0843444) - d4 *
    t15_tmp * 11.89030757431482) + t_C_tmp * 0.1046566) + h_C_tmp * 0.000116) +
    m_C_tmp * 0.000116) + q_C_tmp * 2.5327982) + eb_C_tmp * 2.5327982) +
    fb_C_tmp * 11.63809377431482) + t18 * t9_tmp * 43.310541) - d37 * t9_tmp *
    43.310541) - d60 * t8_tmp * 43.310541) - d57 * 0.1046566) - n_C_tmp * t9_tmp
    * 11.89030757431482) + cb_C_tmp * t8_tmp * t9_tmp * 43.310541) + db_C_tmp *
    t8_tmp * t9_tmp * 43.310541) - d7 * t9_tmp * 0.00024) - gb_C_tmp *
    11.63809377431482) + b_C_tmp * t15_tmp * 11.89030757431482) + c_C_tmp *
    t15_tmp * 11.89030757431482) + d_C_tmp * 5.4E-5) + d59 * 1.54411494) +
    h_C_tmp * t9_tmp * 37.66134) + s_C_tmp * 0.0421722) + m_C_tmp * t9_tmp *
                       37.66134) + t34 * 0.0421722) - e_C_tmp * 5.4E-5) +
                    q_C_tmp * t9_tmp * 4.0E-6) + eb_C_tmp * t9_tmp * 4.0E-6) -
                  t19 * 1.54411494) + g_C_tmp * t9_tmp * 0.00024) - h_C_tmp *
                t15_tmp * 0.00024) - m_C_tmp * t15_tmp * 0.00024) + C_tmp *
              t9_tmp * 0.00024) - fb_C_tmp * t15_tmp * 11.89030757431482) +
            gb_C_tmp * t15_tmp * 11.89030757431482) - o_C_tmp * 8.0E-6) +
          d_C_tmp * t9_tmp * 0.0843444) + e_C_tmp_tmp * t7_tmp * t9_tmp *
         11.89030757431482) + jb_C_tmp) + t30 * 8.0E-6) - d58 * t9_tmp * t14_tmp
      * 0.00024) - e_C_tmp * t9_tmp * 0.0843444) + f_C_tmp * t9_tmp * t14_tmp *
    0.00024;
  d = qd[1] * -0.00012 - qd[2] * 0.00012;
  h_C_tmp = d5 * t9_tmp;
  m_C_tmp = d8 * t9_tmp;
  n_C_tmp = qd[1] * t17_tmp * 5.9451537871574116;
  r_C_tmp = qd[2] * t17_tmp * 5.9451537871574116;
  C[25] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((d + d28 *
    1.54411494) - d9 * 37.66134) - d2 * 37.66134) - j_C_tmp_tmp * 0.102001) +
    d10 * 0.00012) + qd[1] * t15_tmp * 0.00024) + d11 * 0.00012) + qd[2] *
    t15_tmp * 0.00024) - n_C_tmp) - r_C_tmp) + t16 * 1.54411494) + t17 *
    1.54411494) - f_C_tmp_tmp * t9_tmp * 43.310541) - g_C_tmp_tmp * t9_tmp *
    43.310541) - qd[3] * t5_tmp * t8_tmp * 37.66134) - d28 * t7_tmp * 43.310541)
    - d61 * t9_tmp * 37.66134) + d7 * 0.0421722) + d4 * t9_tmp * 4.0E-6) -
    j_C_tmp_tmp * t15_tmp * 11.89030757431482) - d10 * t15_tmp * 0.00024) - d11 *
    t15_tmp * 0.00024) + d58 * 0.0421722) + h_C_tmp * 4.0E-6) + q_C_tmp *
    0.102001) + eb_C_tmp * 0.102001) - t16 * t7_tmp * 43.310541) - f_C_tmp *
    0.0421722) + g_C_tmp * 0.0421722) - t17 * t7_tmp * 43.310541) + k_C_tmp_tmp *
    t8_tmp * 43.310541) + C_tmp * 0.0421722) - t45_tmp * t8_tmp * 43.310541) -
    d39 * t4_tmp * t9_tmp * 43.310541) - m_C_tmp * 4.0E-6) + b_C_tmp * t9_tmp *
    4.0E-6) + c_C_tmp * t9_tmp * 4.0E-6) - d12 * t9_tmp * 0.00024) + h_C_tmp_tmp
    * t9_tmp * t14_tmp * 11.89030757431482) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    11.89030757431482) + d_C_tmp * 0.00012) + d58 * t8_tmp * 1.54411494) +
    s_C_tmp * 37.66134) + t34 * 37.66134) - d58 * t14_tmp * 0.0421722) - e_C_tmp
                      * 0.00012) - f_C_tmp * t8_tmp * 1.54411494) - h_C_tmp *
                    t14_tmp * 4.0E-6) + q_C_tmp * t15_tmp * 11.89030757431482) +
                  eb_C_tmp * t15_tmp * 11.89030757431482) + f_C_tmp * t14_tmp *
                 0.0421722) + m_C_tmp * t14_tmp * 4.0E-6) + s_C_tmp * t9_tmp *
               0.00024) + t34 * t9_tmp * 0.00024) - d_C_tmp * t15_tmp * 0.00024)
            + e_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t9_tmp *
           11.89030757431482) - t30 * t9_tmp * 11.89030757431482;
  C[31] = 0.0;

  /*  CORIOLIS_ROW_3 - Computation of the robot specific Coriolis matrix row for joint 3 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_3(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_3(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 3 of 6 for Quantec Ultra SE 100.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     Crow:  [1x6] row of the robot Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function.  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also coriolis. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  /*  Bugfix */
  /*   In some versions the symbolic toolbox writes the constant $pi$ in */
  /*   capital letters. This way autogenerated functions might not work properly. */
  /*   To fix this issue a local variable is introduced: */
  /*     This function was generated by the Symbolic Math Toolbox version 8.5. */
  /*     02-Mar-2021 15:13:12 */
  t30 = t5_tmp * 8.0E-6;
  t34 = t9_tmp * 0.0843444;
  t18 = t15_tmp * 0.00048;
  t19 = t14_tmp * 0.00024;
  t45_tmp = C_tmp_tmp * t8_tmp;
  d5 = d6 * t3_tmp;
  d7 = qd[0] * t6_tmp * t7_tmp;
  d8 = qd[3] * t6_tmp * t7_tmp;
  d10 = t30_tmp * t9_tmp;
  d11 = t50_tmp_tmp * t8_tmp;
  d12 = t30_tmp * t12_tmp;
  d14 = d1 * t9_tmp;
  d15 = t50_tmp_tmp * t12_tmp;
  d16 = t30_tmp * t13_tmp;
  d17 = t27_tmp * t3_tmp;
  d18 = t27_tmp * t7_tmp;
  d19 = t35_tmp_tmp * t6_tmp;
  d22 = t27_tmp * t5_tmp;
  d23 = t35_tmp_tmp * t5_tmp;
  d25 = t27_tmp * t6_tmp;
  d27 = d24 * t3_tmp;
  d29 = t35_tmp_tmp * t7_tmp;
  d30 = d27 * t5_tmp;
  d31 = d25 * t7_tmp;
  d32 = d23 * t7_tmp;
  d33 = d6 * t4_tmp;
  d34 = d33 * t7_tmp;
  d35 = d26 * t4_tmp;
  d36 = d35 * t6_tmp;
  d37 = d22 * t6_tmp;
  d38 = d25 * t8_tmp;
  d40 = d6 * t7_tmp * t8_tmp;
  d41 = d26 * t6_tmp * t8_tmp;
  d42 = d29 * t8_tmp;
  d43 = t30_tmp * t5_tmp;
  d44 = d43 * t9_tmp;
  d45 = d28 * t6_tmp * t7_tmp;
  d46 = d27 * t9_tmp;
  d47 = d25 * t13_tmp;
  d48 = d29 * t12_tmp;
  d49 = d24 * t7_tmp * t8_tmp;
  d50 = d39 * t6_tmp * t8_tmp;
  d51 = d25 * t14_tmp;
  d52 = d5 * t14_tmp;
  d53 = d10 * t12_tmp;
  d54 = d11 * t12_tmp;
  d55 = d29 * t14_tmp;
  C_tmp = d14 * t12_tmp;
  b_C_tmp = d12 * t13_tmp;
  c_C_tmp = d8 * t14_tmp;
  d_C_tmp = d7 * t8_tmp;
  d22 *= t7_tmp;
  d23 *= t6_tmp;
  t34_tmp = d17 * t5_tmp;
  b_t35_tmp_tmp = d17 * t4_tmp;
  d57 = b_t35_tmp_tmp * t9_tmp;
  d58 = qd[0] * t2_tmp * t3_tmp * t6_tmp * t7_tmp;
  t35_tmp = t27_tmp * t4_tmp;
  d59 = t35_tmp_tmp * t4_tmp;
  t46_tmp = d59 * t7_tmp;
  t49_tmp = t56_tmp * t6_tmp * t7_tmp;
  b_t50_tmp_tmp = t46_tmp * t8_tmp;
  t46_tmp *= t9_tmp;
  d24 = d24 * t5_tmp * t7_tmp * t8_tmp;
  d39 = d39 * t5_tmp * t6_tmp * t8_tmp;
  t50_tmp = d32 * t9_tmp;
  b_t50_tmp = t49_tmp * t8_tmp;
  t52_tmp_tmp = d44 * t12_tmp;
  t52_tmp = d61 * t6_tmp * t7_tmp * t8_tmp;
  t53_tmp_tmp = d47 * t14_tmp;
  t53_tmp = d48 * t14_tmp;
  d60 = t30_tmp * t6_tmp * t7_tmp;
  b_t56_tmp = d60 * t9_tmp;
  h_C_tmp = d37 * t9_tmp;
  e_C_tmp_tmp = b_t35_tmp_tmp * t6_tmp * t7_tmp;
  m_C_tmp = h_C_tmp * t13_tmp;
  o_C_tmp = t50_tmp * t12_tmp;
  q_C_tmp = b_t35_tmp_tmp * t5_tmp;
  k_C_tmp_tmp = t35_tmp * t5_tmp;
  s_C_tmp = qd[0] * t12_tmp;
  t_C_tmp = d1 * t12_tmp;
  cb_C_tmp = t35_tmp * t6_tmp;
  db_C_tmp = d5 * t4_tmp;
  eb_C_tmp = t34_tmp * t6_tmp;
  fb_C_tmp = d17 * t6_tmp;
  gb_C_tmp = k_C_tmp_tmp * t6_tmp * t8_tmp;
  C[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((qd[0] * 7.32219628 - d20 * 89.586374315) - d21) + t30_tmp *
    0.000116) + t50_tmp_tmp * 1.54411494) + d1 * 2.5327982) - s_C_tmp *
    14.64439256) - qd[0] * t13_tmp * 14.64439256) + d17 * 3.5022645) + d5 *
    0.4649263) + d18 * 64.605506) + d19 * 64.605506) + d10 * 37.66134) + d11 *
    0.0421722) - d7 * 3.5022645) + t35_tmp_tmp * t12_tmp * 11.5074405) - d12 *
    0.000232) - d8 * 0.4649263) - d16 * 0.000232) - d15 * 3.08822988) + d14 *
    4.0E-6) - t50_tmp_tmp * t13_tmp * 3.08822988) - t30_tmp * t15_tmp * 0.00024)
    + d3 * t12_tmp * 212.275234) - t_C_tmp * 5.0655964) - d1 * t13_tmp *
    5.0655964) + s_C_tmp * t13_tmp * 29.28878512) + fb_C_tmp * 212.275234) + qd
    [0] * t2_tmp * t3_tmp * t8_tmp * 0.89341) - d37 * 75.32268) + d22 *
    13.181469) + d23 * 13.181469) + d30 * 0.0421722) - d31 * 11.5074405) - d32 *
    75.32268) + d38 * 0.2093132) + d5 * t8_tmp * 0.1046566) + d34 * 0.000116) +
    d36 * 0.000116) + d42 * 0.2093132) + d44 * 11.89030757431482) + d46 * 4.0E-6)
    + d40 * 2.5327982) + d41 * 2.5327982) + d47 * 358.34549726) - d_C_tmp *
    0.89341) + d49 * 0.102001) + d50 * 0.102001) + d51 * 11.63809377431482) +
    d48 * 358.34549726) + d52 * 11.63809377431482) - d45 * 0.0421722) - d25 *
    t15_tmp * 11.89030757431482) + t35_tmp_tmp * t8_tmp * t12_tmp * 2.93549) +
    d55 * 11.63809377431482) + t50_tmp_tmp * t7_tmp * t12_tmp * 43.310541) - d8 *
    t8_tmp * 0.1046566) - d29 * t15_tmp * 11.89030757431482) - d53 * 75.32268) -
    d54 * 0.0843444) - d10 * t13_tmp * 75.32268) - d11 * t13_tmp * 0.0843444) -
    d56 * 4.0E-6) + b_C_tmp * 0.000464) - C_tmp * 8.0E-6) + d15 * t13_tmp *
    6.17645976) - d14 * t13_tmp * 8.0E-6) - c_C_tmp * 11.63809377431482) +
    t_C_tmp * t13_tmp * 10.1311928) + d12 * t18) + d16 * t18) + eb_C_tmp *
    43.310541) + d57 * 13.181469) - d58 * 29.28878512) + cb_C_tmp * t8_tmp *
    5.4E-5) + db_C_tmp * t8_tmp * 5.4E-5) + cb_C_tmp * t9_tmp * 3.08822988) +
    db_C_tmp * t9_tmp * 1.54411494) + d27 * t4_tmp * t8_tmp * 0.00012) - t27_tmp
    * t5_tmp * t6_tmp * t9_tmp * 0.00024) + b_t50_tmp_tmp * 5.4E-5) + d30 *
    t8_tmp * 1.54411494) - d31 * t8_tmp * 2.93549) + t46_tmp * 3.08822988) -
    t50_tmp * 0.00024) + d34 * t9_tmp * 37.66134) + d6 * t5_tmp * t7_tmp *
    t8_tmp * 0.0421722) + d36 * t9_tmp * 37.66134) + d26 * t5_tmp * t6_tmp *
    t8_tmp * 0.0421722) + d37 * t13_tmp * 150.64536) - b_t56_tmp * 13.181469) +
    d24 * 37.66134) + d39 * 37.66134) + d32 * t12_tmp * 150.64536) + d59 *
    t9_tmp * t12_tmp * 43.310541) - b_t50_tmp * 5.4E-5) - d30 * t14_tmp *
    0.0421722) - d38 * t13_tmp * 0.4186264) + d40 * t9_tmp * 4.0E-6) + d41 *
    t9_tmp * 4.0E-6) - t49_tmp * t9_tmp * 1.54411494) - t52_tmp * 0.00012) - d42
    * t12_tmp * 0.4186264) - t52_tmp_tmp * 23.78061514862965) - d45 * t8_tmp *
    1.54411494) - d44 * t13_tmp * 23.78061514862965) - d34 * t15_tmp * 0.00024)
    - d36 * t15_tmp * 0.00024) - d46 * t14_tmp * 4.0E-6) - t53_tmp_tmp *
    23.27618754862965) + d47 * t15_tmp * 23.78061514862965) - t53_tmp *
    23.27618754862965) + d49 * t15_tmp * 11.89030757431482) + d50 * t15_tmp *
    11.89030757431482) + d45 * t14_tmp * 0.0421722) - d51 * t15_tmp *
    11.89030757431482) + d48 * t15_tmp * 23.78061514862965) - d52 * t15_tmp *
    11.89030757431482) + d53 * t13_tmp * 150.64536) + d54 * t13_tmp * 0.1686888)
    - d55 * t15_tmp * 11.89030757431482) + d56 * t14_tmp * 4.0E-6) + C_tmp *
    t13_tmp * 1.6E-5) - b_C_tmp * t15_tmp * 0.00096) + c_C_tmp * t15_tmp *
    11.89030757431482) - e_C_tmp_tmp * 0.000464) - eb_C_tmp * t7_tmp *
    6.17645976) - gb_C_tmp * 8.0E-6) - db_C_tmp * t5_tmp * t8_tmp * 8.0E-6) -
    fb_C_tmp * t7_tmp * t8_tmp * 10.1311928) - d59 * t5_tmp * t7_tmp * t8_tmp *
    8.0E-6) - u_C_tmp * 43.310541) + d33 * t5_tmp * t7_tmp * t9_tmp *
    11.89030757431482) + d35 * t5_tmp * t6_tmp * t9_tmp * 11.89030757431482) -
    b_C_tmp_tmp * t13_tmp * 0.000108) - v_C_tmp * t13_tmp * 6.17645976) -
    b_t50_tmp_tmp * t12_tmp * 0.000108) + m_C_tmp * 0.00048) - t46_tmp * t12_tmp
    * 6.17645976) + d24 * t9_tmp * 0.00024) + d39 * t9_tmp * 0.00024) - h_C_tmp *
    t14_tmp * 0.00024) + o_C_tmp * 0.00048) - d5 * t5_tmp * t9_tmp * t14_tmp *
    0.00024) - w_C_tmp * t15_tmp * 0.00024) - b_t50_tmp * t9_tmp * 0.0843444) -
    t50_tmp * t14_tmp * 0.00024) + t52_tmp_tmp * t13_tmp * 47.5612302972593) +
    t52_tmp * t15_tmp * 0.00024) + d_C_tmp_tmp * t6_tmp * t7_tmp * t9_tmp * t19)
                      + t53_tmp_tmp * t15_tmp * 23.78061514862965) + t53_tmp *
                     t15_tmp * 23.78061514862965) + b_C_tmp_tmp * t34) + x_C_tmp
                   * t34) + b_t50_tmp_tmp * t34) + b_t50_tmp * t30) -
                e_C_tmp_tmp * t9_tmp * 150.64536) - y_C_tmp) - d58 * t8_tmp *
              t9_tmp * 1.6E-5) + ab_C_tmp) + e_C_tmp_tmp * t15_tmp * 0.00096) +
           gb_C_tmp * t13_tmp * 1.6E-5) + bb_C_tmp * t12_tmp * 1.6E-5) -
         b_C_tmp_tmp * t9_tmp * t13_tmp * 0.1686888) - b_t50_tmp_tmp * t9_tmp *
        t12_tmp * 0.1686888) - d61 * t5_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
       11.89030757431482) + m_C_tmp * t14_tmp * 0.00048) + o_C_tmp * t14_tmp *
     0.00048) - q_C_tmp * t6_tmp * t7_tmp * t9_tmp * 47.5612302972593;
  h_C_tmp = qd[4] * (((((((((t18 + t19) + t14_tmp * t15_tmp * -0.00048) +
    -(t9_tmp * 75.32268)) + C_tmp_tmp * 3.08822988) + c_C_tmp_tmp * t9_tmp *
    8.0E-6) + t45_tmp * 0.0843444) + -(t17_tmp * 11.89030757431482)) + i_C_tmp *
                      t14_tmp * 23.78061514862965) - 0.00024) / 2.0 + qd[3] *
    ((((((((((t45_tmp * t9_tmp * 0.00048 + t4_tmp * 0.2093132) + -j_C_tmp) +
            t14_tmp * 0.000108) + t30) + -(t5_tmp * t14_tmp * 1.6E-5)) + -t34) +
        t9_tmp * t14_tmp * 0.1686888) + -(t16_tmp * 11.63809377431482)) +
      c_C_tmp_tmp * t15_tmp * 23.78061514862965) - 5.4E-5) / 2.0;
  C[8] = h_C_tmp + qd[1] * ((((t3_tmp * 11.5074405 + t7_tmp * 212.275234) +
    k_C_tmp * 2.93549) + l_C_tmp * 43.310541) + p_C_tmp * 43.310541);
  C[14] = h_C_tmp;
  d1 = qd[1] * t14_tmp;
  d3 = qd[2] * t14_tmp;
  d5 = d_C_tmp_tmp * t8_tmp;
  h_C_tmp = t35_tmp * t7_tmp;
  i_C_tmp = d59 * t6_tmp;
  j_C_tmp = d18 * t8_tmp;
  k_C_tmp = d19 * t8_tmp;
  l_C_tmp = d17 * t14_tmp;
  m_C_tmp = d7 * t14_tmp;
  o_C_tmp = d60 * t8_tmp;
  p_C_tmp = b_t35_tmp_tmp * t8_tmp;
  s_C_tmp = b_t45_tmp * t5_tmp;
  t_C_tmp = b_t46_tmp * t5_tmp;
  C_tmp_tmp = d28 * t8_tmp;
  u_C_tmp = t50_tmp_tmp * t6_tmp * t7_tmp;
  v_C_tmp = s_C_tmp * t8_tmp;
  w_C_tmp = t_C_tmp * t8_tmp;
  x_C_tmp = b_t45_tmp * t8_tmp;
  y_C_tmp = b_t46_tmp * t8_tmp;
  ab_C_tmp = d22 * t8_tmp;
  bb_C_tmp = d23 * t8_tmp;
  q_C_tmp *= t8_tmp;
  C[20] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d13 +
    b_t45_tmp * 0.1046566) + h_C_tmp_tmp * 4.0E-6) + b_t46_tmp * 0.1046566) +
    i_C_tmp_tmp * 4.0E-6) - t56_tmp * 0.000116) - d9 * 0.0421722) - d2 *
    0.0421722) - j_C_tmp_tmp * 2.5327982) - d4 * 0.102001) + d1 * 5.4E-5) + d3 *
    5.4E-5) - hb_C_tmp) - ib_C_tmp) + d17 * 0.4649263) - d7 * 0.4649263) -
    t56_tmp * t9_tmp * 37.66134) - d5 * 0.0421722) - C_tmp_tmp * 37.66134) - t61)
    - t69) - h_C_tmp_tmp * t14_tmp * 8.0E-6) - j_C_tmp_tmp * t9_tmp * 4.0E-6) -
    i_C_tmp_tmp * t14_tmp * 8.0E-6) + t56_tmp * t15_tmp * 0.00024) - d4 *
    t15_tmp * 11.89030757431482) + d1 * t34) + d3 * t34) + d17 * t8_tmp *
    0.1046566) + h_C_tmp * 0.000116) + i_C_tmp * 0.000116) + j_C_tmp * 2.5327982)
    + k_C_tmp * 2.5327982) + l_C_tmp * 11.63809377431482) - d_C_tmp * 0.1046566)
    - t56_tmp * t5_tmp * t9_tmp * 11.89030757431482) - C_tmp_tmp * t9_tmp *
    0.00024) - m_C_tmp * 11.63809377431482) + x_C_tmp * t15_tmp *
    11.89030757431482) + y_C_tmp * t15_tmp * 11.89030757431482) + p_C_tmp *
    5.4E-5) + d57 * 1.54411494) + h_C_tmp * t9_tmp * 37.66134) + ab_C_tmp *
    0.0421722) + i_C_tmp * t9_tmp * 37.66134) + bb_C_tmp * 0.0421722) - o_C_tmp *
    5.4E-5) + j_C_tmp * t9_tmp * 4.0E-6) + k_C_tmp * t9_tmp * 4.0E-6) -
                        b_t56_tmp * 1.54411494) + v_C_tmp * t9_tmp * 0.00024) -
                      h_C_tmp * t15_tmp * 0.00024) - i_C_tmp * t15_tmp * 0.00024)
                    + w_C_tmp * t9_tmp * 0.00024) - l_C_tmp * t15_tmp *
                   11.89030757431482) + m_C_tmp * t15_tmp * 11.89030757431482) -
                 q_C_tmp * 8.0E-6) + k_C_tmp_tmp * t7_tmp * t9_tmp *
                11.89030757431482) + jb_C_tmp) - t34_tmp * t9_tmp * t14_tmp *
              0.00024) - o_C_tmp * t9_tmp * 0.0843444) + u_C_tmp * t9_tmp * t19)
           + p_C_tmp * t34) + o_C_tmp * t30;
  h_C_tmp = d17 * t9_tmp;
  i_C_tmp = d7 * t9_tmp;
  C[26] = (((((((((((((((((((((((((((((((((((((((((((((((((d + d28 * 1.54411494)
    - d9 * 37.66134) - d2 * 37.66134) - j_C_tmp_tmp * 0.102001) + d1 * 0.00012)
    + qd[1] * t15_tmp * 0.00024) + d3 * 0.00012) + qd[2] * t15_tmp * 0.00024) -
    n_C_tmp) - r_C_tmp) + s_C_tmp * 1.54411494) + t_C_tmp * 1.54411494) - d5 *
    37.66134) - d61 * t9_tmp * 37.66134) + C_tmp_tmp * 0.0421722) + d4 * t9_tmp *
    4.0E-6) - j_C_tmp_tmp * t15_tmp * 11.89030757431482) - d1 * t15_tmp *
    0.00024) - d3 * t15_tmp * 0.00024) + t34_tmp * 0.0421722) + h_C_tmp * 4.0E-6)
    + j_C_tmp * 0.102001) + k_C_tmp * 0.102001) - u_C_tmp * 0.0421722) + v_C_tmp
    * 0.0421722) + w_C_tmp * 0.0421722) - i_C_tmp * 4.0E-6) + x_C_tmp * t9_tmp *
    4.0E-6) + y_C_tmp * t9_tmp * 4.0E-6) - d5 * t9_tmp * 0.00024) + h_C_tmp_tmp *
    t9_tmp * t14_tmp * 11.89030757431482) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    11.89030757431482) + p_C_tmp * 0.00012) + t34_tmp * t8_tmp * 1.54411494) +
    ab_C_tmp * 37.66134) + bb_C_tmp * 37.66134) - t34_tmp * t14_tmp * 0.0421722)
                      - o_C_tmp * 0.00012) - u_C_tmp * t8_tmp * 1.54411494) -
                    h_C_tmp * t14_tmp * 4.0E-6) + j_C_tmp * t15_tmp *
                   11.89030757431482) + k_C_tmp * t15_tmp * 11.89030757431482) +
                 u_C_tmp * t14_tmp * 0.0421722) + i_C_tmp * t14_tmp * 4.0E-6) +
               ab_C_tmp * t9_tmp * 0.00024) + bb_C_tmp * t9_tmp * 0.00024) -
             p_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t15_tmp * 0.00024) +
           q_C_tmp * t9_tmp * 11.89030757431482) - d43 * t6_tmp * t7_tmp *
    t8_tmp * t9_tmp * 11.89030757431482;
  C[32] = 0.0;
  coriolis_row_4(q, qd, b_dv);
  for (i = 0; i < 6; i++) {
    C[6 * i + 3] = b_dv[i];
  }

  /*  CORIOLIS_ROW_5 - Computation of the robot specific Coriolis matrix row for joint 5 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_5(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_5(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 5 of 6 for Quantec Ultra SE 100.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 100 specific class  */
  /*     qd:  6-element vector of generalized  */
  /*     q:  6-element vector of generalized  */
  /*      */
  /*   Output::  */
  /*     Crow:  [1x6] row of the robot Coriolis matrix  */
  /*      */
  /*   Example::  */
  /*     ---  */
  /*      */
  /*   Known Bugs::  */
  /*     ---  */
  /*      */
  /*   TODO::  */
  /*     ---  */
  /*      */
  /*   References::  */
  /*     1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar  */
  /*     2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano  */
  /*     3) Introduction to Robotics, Mechanics and Control - Craig  */
  /*     4) Modeling, Identification & Control of Robots - Khalil & Dombre  */
  /*      */
  /*   Authors::  */
  /*     This is an autogenerated function.  */
  /*     Code generator written by:  */
  /*     Joern Malzahn  */
  /*     2012 RST, Technische Universitaet Dortmund, Germany  */
  /*     http://www.rst.e-technik.tu-dortmund.de  */
  /*      */
  /*   See also coriolis. */
  /*      */
  /*  Copyright (C) 1993-2021, by Peter I. Corke  */
  /*  Copyright (C) 2012-2021, by Joern Malzahn  */
  /*   */
  /*  This file has been automatically generated with The Robotics Toolbox for Matlab (RTB).  */
  /*   */
  /*  RTB and code generated with RTB is free software: you can redistribute it and/or modify  */
  /*  it under the terms of the GNU Lesser General Public License as published by  */
  /*  the Free Software Foundation, either version 3 of the License, or  */
  /*  (at your option) any later version.  */
  /*    */
  /*  RTB is distributed in the hope that it will be useful,  */
  /*  but WITHOUT ANY WARRANTY; without even the implied warranty of  */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU Lesser General Public License for more details.  */
  /*    */
  /*  You should have received a copy of the GNU Leser General Public License  */
  /*  along with RTB.  If not, see <http://www.gnu.org/licenses/>.  */
  /*   */
  /*  http://www.petercorke.com  */
  /*   */
  /*  The code generation module emerged during the work on a project funded by  */
  /*  the German Research Foundation (DFG, BE1569/7-1). The authors gratefully   */
  /*  acknowledge the financial support.  */
  /*  Bugfix */
  /*   In some versions the symbolic toolbox writes the constant $pi$ in */
  /*   capital letters. This way autogenerated functions might not work properly. */
  /*   To fix this issue a local variable is introduced: */
  /*     This function was generated by the Symbolic Math Toolbox version 8.5. */
  /*     02-Mar-2021 15:13:18 */
  t16 = qd[1] * 0.00012;
  t17 = qd[2] * 0.00012;
  f_C_tmp = t27_tmp * t3_tmp;
  g_C_tmp = f_C_tmp * t4_tmp;
  C_tmp = g_C_tmp * t8_tmp;
  b_C_tmp = t30_tmp * t6_tmp * t7_tmp;
  c_C_tmp = b_C_tmp * t8_tmp;
  t30 = t27_tmp * t5_tmp;
  d_C_tmp = t30 * t7_tmp;
  t34_tmp = d_C_tmp * t8_tmp;
  t34 = t35_tmp_tmp * t5_tmp;
  b_t35_tmp_tmp = t34 * t6_tmp;
  t35_tmp = b_t35_tmp_tmp * t8_tmp;
  t45_tmp = b_t45_tmp * t5_tmp;
  t46_tmp = b_t46_tmp * t5_tmp;
  e_C_tmp = f_C_tmp * t5_tmp;
  t49_tmp = e_C_tmp * t8_tmp;
  b_t50_tmp_tmp = t50_tmp_tmp * t6_tmp;
  t50_tmp = b_t50_tmp_tmp * t7_tmp;
  b_t50_tmp = t50_tmp * t8_tmp;
  t52_tmp_tmp = t27_tmp * t7_tmp;
  t52_tmp = t52_tmp_tmp * t8_tmp;
  t53_tmp_tmp = t35_tmp_tmp * t6_tmp;
  t53_tmp = t53_tmp_tmp * t8_tmp;
  b_t56_tmp = t56_tmp * t5_tmp;
  k_C_tmp_tmp = qd[0] * t6_tmp * t7_tmp;
  hb_C_tmp = k_C_tmp_tmp * t9_tmp;
  ib_C_tmp = f_C_tmp * t9_tmp;
  t61 = ib_C_tmp * 4.0E-6;
  t69 = e_C_tmp * 0.0421722;
  jb_C_tmp = g_C_tmp * t5_tmp;
  cb_C_tmp = t30_tmp * t5_tmp;
  db_C_tmp = cb_C_tmp * t6_tmp * t7_tmp;
  t18 = qd[1] * t15_tmp * 0.00024;
  t19 = qd[2] * t15_tmp * 0.00024;
  d = qd[0] * t9_tmp;
  d1 = qd[0] * t12_tmp;
  d2 = qd[0] * t13_tmp;
  d3 = qd[0] * t14_tmp;
  d4 = qd[1] * t2_tmp;
  d5 = d4 * t3_tmp;
  d7 = qd[2] * t2_tmp;
  d8 = d7 * t3_tmp;
  d9 = h_C_tmp_tmp * t6_tmp;
  d10 = t50_tmp_tmp * t9_tmp;
  d11 = d26 * t6_tmp;
  d12 = d * t12_tmp;
  d13 = d1 * t13_tmp;
  d14 = d1 * t14_tmp;
  d15 = d2 * t14_tmp;
  d16 = t27_tmp * t4_tmp;
  d17 = t35_tmp_tmp * t4_tmp;
  d18 = d8 * t5_tmp;
  d19 = d6 * t3_tmp;
  d20 = d16 * t6_tmp;
  d21 = t27_tmp * t6_tmp;
  d22 = d5 * t5_tmp;
  d23 = d17 * t7_tmp;
  d24 = d19 * t4_tmp;
  d25 = t35_tmp_tmp * t7_tmp;
  d27 = d9 * t7_tmp;
  d28 = cb_C_tmp * t8_tmp;
  d29 = d5 * t9_tmp;
  d30 = i_C_tmp_tmp * t6_tmp * t7_tmp;
  d31 = d21 * t9_tmp;
  d32 = d8 * t9_tmp;
  d33 = d25 * t9_tmp;
  d34 = cb_C_tmp * t12_tmp;
  d35 = t30_tmp * t8_tmp * t9_tmp;
  d36 = d4 * t7_tmp * t8_tmp;
  d37 = f_C_tmp_tmp * t6_tmp * t8_tmp;
  d38 = d7 * t7_tmp * t8_tmp;
  d39 = g_C_tmp_tmp * t6_tmp * t8_tmp;
  d40 = t56_tmp * t6_tmp * t7_tmp;
  d41 = qd[1] * t6_tmp * t7_tmp * t9_tmp;
  d42 = d10 * t12_tmp;
  d43 = qd[2] * t6_tmp * t7_tmp * t9_tmp;
  d16 *= t5_tmp;
  d44 = d16 * t6_tmp;
  d45 = f_C_tmp * t6_tmp * t7_tmp;
  d46 = d4 * t5_tmp * t7_tmp * t8_tmp;
  d47 = f_C_tmp_tmp * t5_tmp * t6_tmp * t8_tmp;
  d48 = t30 * t6_tmp * t8_tmp;
  d7 = d7 * t5_tmp * t7_tmp * t8_tmp;
  d49 = g_C_tmp_tmp * t5_tmp * t6_tmp * t8_tmp;
  d50 = t34 * t7_tmp * t8_tmp;
  d51 = d21 * t8_tmp * t9_tmp;
  d52 = d20 * t13_tmp;
  d25 = d25 * t8_tmp * t9_tmp;
  d53 = d23 * t12_tmp;
  d54 = d28 * t12_tmp;
  d55 = d35 * t12_tmp;
  h_C_tmp = t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  i_C_tmp = t4_tmp * t6_tmp * t7_tmp * t8_tmp;
  j_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t7_tmp;
  k_C_tmp = jb_C_tmp * t6_tmp;
  l_C_tmp = d44 * t9_tmp;
  m_C_tmp = j_C_tmp * t9_tmp;
  o_C_tmp = d45 * t14_tmp;
  p_C_tmp = k_C_tmp * t7_tmp;
  q_C_tmp = e_C_tmp * t6_tmp * t7_tmp * t9_tmp;
  s_C_tmp = d17 * t5_tmp;
  t_C_tmp = d10 * t13_tmp;
  u_C_tmp = d42 * t13_tmp;
  C[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d *
    37.66134 - d1 * 0.00012) - d2 * 0.00012) + d3 * 0.00012) + qd[3] * t2_tmp *
    t7_tmp * 0.00012) + d11 * 0.00012) - d12 * 37.66134) - d * t13_tmp *
    37.66134) + d13 * 0.00024) - d14 * 0.00012) + d1 * t15_tmp * 0.00024) - d15 *
    0.00012) + d2 * t15_tmp * 0.00024) - d3 * t15_tmp * 0.00024) - d22 *
    0.0421722) + d20 * 11.89030757431482) - d18 * 0.0421722) + d24 *
    11.992308574314819) + ib_C_tmp * 13.181469) + d23 * 11.89030757431482) - d29
    * 4.0E-6) - d32 * 4.0E-6) + d31 * 1.54411494) + d28 * 0.0421722) - d36 *
    0.102001) - d37 * 0.102001) + d33 * 1.54411494) + d27 * 0.0421722) - d38 *
    0.102001) - d39 * 0.102001) - d34 * 1.54411494) - d9 * t8_tmp * 43.310541) +
    d30 * 0.0421722) - d40 * 11.992308574314819) - cb_C_tmp * t13_tmp *
    1.54411494) + d35 * 4.0E-6) - hb_C_tmp * 13.181469) + t35_tmp_tmp * t9_tmp *
    t12_tmp * 43.310541) + d41 * 4.0E-6) + d43 * 4.0E-6) - d42 *
    11.89030757431482) - t_C_tmp * 11.89030757431482) - d6 * t7_tmp * t15_tmp *
    0.00024) - d11 * t15_tmp * 0.00024) + d10 * t14_tmp * 11.89030757431482) +
    d12 * t13_tmp * 75.32268) + d13 * t14_tmp * 0.00024) - d13 * t15_tmp *
    0.00048) + d14 * t15_tmp * 0.00024) + d15 * t15_tmp * 0.00024) - d44 *
    37.66134) - d45 * 0.00024) + d16 * t7_tmp * 13.181469) + s_C_tmp * t6_tmp *
    13.181469) - d5 * t4_tmp * t8_tmp * 0.00012) - s_C_tmp * t7_tmp * 37.66134)
    - d4 * t3_tmp * t5_tmp * t8_tmp * 1.54411494) - d8 * t4_tmp * t8_tmp *
    0.00012) - d18 * t8_tmp * 1.54411494) - d48 * 4.0E-6) - d19 * t5_tmp *
    t8_tmp * 4.0E-6) - d50 * 4.0E-6) - d46 * 37.66134) - d47 * 37.66134) - d52 *
    23.78061514862965) - d21 * t7_tmp * t9_tmp * 43.310541) + d22 * t14_tmp *
    0.0421722) - d7 * 37.66134) - d49 * 37.66134) + d51 * 0.0421722) - d53 *
    23.78061514862965) + d18 * t14_tmp * 0.0421722) + d19 * t8_tmp * t9_tmp *
    0.0421722) - d20 * t15_tmp * 23.78061514862965) - d24 * t15_tmp *
    11.89030757431482) + d6 * t5_tmp * t7_tmp * t9_tmp * 11.89030757431482) +
    d26 * t5_tmp * t6_tmp * t9_tmp * 11.89030757431482) + d25 * 0.0421722) +
    cb_C_tmp * t7_tmp * t12_tmp * 43.310541) + d27 * t8_tmp * 1.54411494) - d23 *
    t15_tmp * 23.78061514862965) - d54 * 0.0421722) + d29 * t14_tmp * 4.0E-6) +
    d30 * t8_tmp * 1.54411494) - d31 * t13_tmp * 3.08822988) - d28 * t13_tmp *
    0.0421722) + d32 * t14_tmp * 4.0E-6) + d_C_tmp_tmp * t6_tmp * t7_tmp *
    t8_tmp * 4.0E-6) - d33 * t12_tmp * 3.08822988) + d34 * t13_tmp * 3.08822988)
    - d55 * 4.0E-6) - d36 * t15_tmp * 11.89030757431482) - d37 * t15_tmp *
    11.89030757431482) - d27 * t14_tmp * 0.0421722) - d35 * t13_tmp * 4.0E-6) -
    d38 * t15_tmp * 11.89030757431482) - d39 * t15_tmp * 11.89030757431482) -
    d30 * t14_tmp * 0.0421722) - qd[3] * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
    0.0421722) + d40 * t15_tmp * 11.89030757431482) - d41 * t14_tmp * 4.0E-6) +
    u_C_tmp * 23.78061514862965) - d43 * t14_tmp * 4.0E-6) - d42 * t14_tmp *
    11.89030757431482) - t_C_tmp * t14_tmp * 11.89030757431482) - d1 * t13_tmp *
    t14_tmp * t15_tmp * 0.00048) + h_C_tmp * t18) + h_C_tmp * t19) + i_C_tmp *
    t16) + i_C_tmp * t17) + k_C_tmp * 43.310541) - l_C_tmp * 0.00048) - d24 *
    t5_tmp * t9_tmp * 0.00024) - d45 * t9_tmp * 75.32268) - m_C_tmp * 0.00048) +
    d44 * t13_tmp * 75.32268) + j_C_tmp * t12_tmp * 75.32268) - o_C_tmp *
    0.00024) + d45 * t15_tmp * 0.00048) - d46 * t9_tmp * 0.00024) - d47 * t9_tmp
    * 0.00024) + d48 * t13_tmp * 8.0E-6) - d7 * t9_tmp * 0.00024) - d49 * t9_tmp
    * 0.00024) + d50 * t12_tmp * 8.0E-6) + b_t56_tmp * t6_tmp * t7_tmp * t9_tmp *
    0.00024) - d51 * t13_tmp * 0.0843444) + d52 * t15_tmp * 47.5612302972593) -
                      d25 * t12_tmp * 0.0843444) + d53 * t15_tmp *
                     47.5612302972593) + d54 * t13_tmp * 0.0843444) - b_t45_tmp *
                   t6_tmp * t7_tmp * t8_tmp * t15_tmp * 0.00024) - b_t46_tmp *
                  t6_tmp * t7_tmp * t8_tmp * t15_tmp * 0.00024) + d55 * t13_tmp *
                 8.0E-6) + u_C_tmp * t14_tmp * 23.78061514862965) - p_C_tmp *
               3.08822988) - q_C_tmp * 23.78061514862965) - qd[1] * t2_tmp *
             t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp * 11.89030757431482) -
            qd[2] * t2_tmp * t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp *
            11.89030757431482) + l_C_tmp * t13_tmp * 0.00096) + m_C_tmp *
          t12_tmp * 0.00096) + t45_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
         11.89030757431482) + t46_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
        11.89030757431482) + o_C_tmp * t15_tmp * 0.00048) - p_C_tmp * t8_tmp *
      0.0843444) - g_C_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp * 8.0E-6) -
    q_C_tmp * t14_tmp * 23.78061514862965;
  h_C_tmp = (((((((((((((((((((((((((((((((((((((((((((((((t16 + t17) + -t18) +
    -t19) + qd[1] * t14_tmp * -0.00012) + qd[2] * t14_tmp * -0.00012) +
    d_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + t14_tmp * t18) + t14_tmp * t19) +
    c_C_tmp * 0.00012) + qd[1] * t9_tmp * 37.66134) + qd[2] * t9_tmp * 37.66134)
    + -(C_tmp * 0.00012)) + -(t34_tmp * t9_tmp * 0.00024)) + -(t35_tmp * t9_tmp *
    0.00024)) + C_tmp * t15_tmp * 0.00024) + -(c_C_tmp * t15_tmp * 0.00024)) +
    -(t34_tmp * 37.66134)) + -(t35_tmp * 37.66134)) + -(t45_tmp * 1.54411494)) +
    -(t46_tmp * 1.54411494)) + b_t50_tmp * 1.54411494) + -(t49_tmp * 1.54411494))
    + -(t52_tmp * 0.102001)) + -(t53_tmp * 0.102001)) + -(b_t56_tmp * 4.0E-6)) +
    hb_C_tmp * 4.0E-6) + -(b_t45_tmp * t8_tmp * t9_tmp * 4.0E-6)) + -(b_t46_tmp *
    t8_tmp * t9_tmp * 4.0E-6)) + -t61) + t14_tmp * t61) + hb_C_tmp * t14_tmp *
    -4.0E-6) + t56_tmp * t9_tmp * 0.0421722) + t50_tmp * 0.0421722) + -t69) +
    -(t45_tmp * t8_tmp * 0.0421722)) + -(t46_tmp * t8_tmp * 0.0421722)) +
                       t14_tmp * t69) + t50_tmp * t14_tmp * -0.0421722) +
                     -(j_C_tmp_tmp * 11.992308574314819)) + n_C_tmp) + r_C_tmp)
                  + j_C_tmp_tmp * t15_tmp * 11.89030757431482) + -(h_C_tmp_tmp *
    t9_tmp * t14_tmp * 11.89030757431482)) + -(i_C_tmp_tmp * t9_tmp * t14_tmp *
    11.89030757431482)) + -(t52_tmp * t15_tmp * 11.89030757431482)) + -(t53_tmp *
    t15_tmp * 11.89030757431482)) + db_C_tmp * t8_tmp * t9_tmp *
             11.89030757431482) + -(jb_C_tmp * t8_tmp * t9_tmp *
    11.89030757431482);
  C[10] = ((h_C_tmp + f_C_tmp_tmp * t9_tmp * 43.310541) + t45_tmp * t7_tmp *
           43.310541) - b_t50_tmp_tmp * t8_tmp * 43.310541;
  C[16] = h_C_tmp;
  C[22] = (((((((((((((((((((((((((((qd[3] * -0.00012 - l_C_tmp_tmp *
    11.992308574314819) - m_C_tmp_tmp * 11.992308574314819) + qd[3] * t15_tmp *
    0.00024) - qd[3] * t17_tmp * 5.9451537871574116) + t52_tmp_tmp * 0.00012) +
    t53_tmp_tmp * 0.00012) - t45_tmp * 4.0E-6) - t46_tmp * 4.0E-6) + b_t45_tmp *
    t9_tmp * 0.0421722) + b_t46_tmp * t9_tmp * 0.0421722) + l_C_tmp_tmp *
    t15_tmp * 11.89030757431482) + m_C_tmp_tmp * t15_tmp * 11.89030757431482) +
    g_C_tmp * 11.992308574314819) - b_C_tmp * 11.992308574314819) - t52_tmp_tmp *
                       t15_tmp * 0.00024) - t53_tmp_tmp * t15_tmp * 0.00024) +
                     h_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + i_C_tmp_tmp *
                    t8_tmp * t9_tmp * 0.00024) - t49_tmp * 4.0E-6) + f_C_tmp *
                  t8_tmp * t9_tmp * 0.0421722) - g_C_tmp * t15_tmp *
                 11.89030757431482) + d_C_tmp * t9_tmp * 11.89030757431482) +
               b_t35_tmp_tmp * t9_tmp * 11.89030757431482) + b_t50_tmp * 4.0E-6)
             - k_C_tmp_tmp * t8_tmp * t9_tmp * 0.0421722) + b_C_tmp * t15_tmp *
            11.89030757431482) - jb_C_tmp * t9_tmp * 0.00024) + db_C_tmp *
    t9_tmp * 0.00024;
  C[28] = 0.0;
  C[34] = 0.0;
  for (i = 0; i < 6; i++) {
    C[6 * i + 5] = 0.0;
  }
}

/* End of code generation (coriolis_100.c) */
