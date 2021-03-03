/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * coriolis_125.c
 *
 * Code generation for function 'coriolis_125'
 *
 */

/* Include files */
#include "coriolis_125.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include <string.h>

/* Function Declarations */
static void b_coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);
static void b_coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);

/* Function Definitions */
static void b_coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
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
  real_T t30_tmp;
  real_T b_t30_tmp;
  real_T c_t30_tmp;
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
  real_T t49_tmp;
  real_T t49;
  real_T t56;
  real_T t57_tmp_tmp;
  real_T t57_tmp;
  real_T t57;
  real_T t60_tmp;
  real_T t60;
  real_T t61_tmp;
  real_T t61;
  real_T t62;
  real_T t63_tmp_tmp;
  real_T t63_tmp;
  real_T b_t63_tmp;
  real_T t63;
  real_T t64_tmp_tmp;
  real_T t64_tmp;
  real_T b_t64_tmp;
  real_T t64;
  real_T t65_tmp_tmp;
  real_T t65_tmp;
  real_T t65;
  real_T t66_tmp_tmp;
  real_T t66_tmp;
  real_T b_t66_tmp;
  real_T t66;
  real_T t70_tmp;
  real_T t70;
  real_T t71_tmp;
  real_T t71;
  real_T t72_tmp;
  real_T t72;
  real_T t73_tmp;
  real_T t73;
  real_T t76_tmp_tmp;
  real_T t76_tmp;
  real_T t76;
  real_T t77_tmp_tmp;
  real_T t77_tmp;
  real_T t77;
  real_T t84_tmp;
  real_T t84;
  real_T t85_tmp;
  real_T t85;
  real_T t86_tmp_tmp;
  real_T b_t86_tmp_tmp;
  real_T t86;
  real_T t87_tmp_tmp;
  real_T t87;
  real_T t98_tmp_tmp;
  real_T b_t98_tmp_tmp;
  real_T t98;
  real_T t100_tmp;
  real_T b_t100_tmp;
  real_T t100;
  real_T t102_tmp;
  real_T t102;
  real_T t103_tmp_tmp;
  real_T t103_tmp;
  real_T t103;
  real_T t104_tmp;
  real_T t104;
  real_T t105_tmp_tmp;
  real_T t105_tmp;
  real_T t105;
  real_T t106_tmp;
  real_T b_t106_tmp;
  real_T t106;
  real_T t107_tmp;
  real_T t107_tmp_tmp;
  real_T b_t107_tmp;
  real_T t107;
  real_T t108_tmp;
  real_T t108_tmp_tmp;
  real_T b_t108_tmp;
  real_T t108;
  real_T t109_tmp;
  real_T t109_tmp_tmp_tmp;
  real_T b_t109_tmp;
  real_T t109;
  real_T t119_tmp_tmp;
  real_T t119_tmp;
  real_T t119;
  real_T t120_tmp;
  real_T t120;
  real_T t121_tmp;
  real_T t121_tmp_tmp;
  real_T t121;
  real_T t122_tmp;
  real_T b_t122_tmp;
  real_T c_t122_tmp;
  real_T t122;
  real_T t123_tmp;
  real_T t123_tmp_tmp;
  real_T b_t123_tmp;
  real_T t123;
  real_T t124_tmp;
  real_T b_t124_tmp;
  real_T t124;
  real_T t137_tmp;
  real_T b_t137_tmp;
  real_T t137;
  real_T t138_tmp;
  real_T t138;
  real_T t139_tmp_tmp_tmp;
  real_T t139_tmp_tmp;
  real_T t139_tmp;
  real_T t139;
  real_T t140_tmp_tmp_tmp;
  real_T t140_tmp_tmp;
  real_T t140_tmp;
  real_T t140;
  real_T t141_tmp;
  real_T b_t141_tmp;
  real_T t141;
  real_T t142;
  real_T t148_tmp;
  real_T b_t148_tmp;
  real_T t148;
  real_T t152_tmp;
  real_T b_t152_tmp;
  real_T t152;
  real_T t153;
  real_T t155;
  real_T t156;
  real_T t161_tmp;
  real_T b_t161_tmp;
  real_T t161;
  real_T t162_tmp;
  real_T b_t162_tmp;
  real_T t162;
  real_T t163_tmp;
  real_T b_t163_tmp;
  real_T t163;
  real_T t164_tmp;
  real_T b_t164_tmp;
  real_T t164;
  real_T t165;
  real_T t170_tmp;
  real_T t170;
  real_T t171_tmp;
  real_T t171;
  real_T t172;
  real_T t173;
  real_T t174_tmp;
  real_T t174;
  real_T t175_tmp;
  real_T t175;
  real_T t180;
  real_T t181;
  real_T t183;
  real_T t184;
  real_T t189;
  real_T t190;
  real_T t191_tmp;
  real_T t191;
  real_T t192_tmp;
  real_T t192;
  real_T t193;
  real_T t194;
  real_T t195;
  real_T t196;
  real_T t201;
  real_T t202;
  real_T t211_tmp;
  real_T t211;
  real_T t214;
  real_T t217;
  real_T t218;
  real_T t219_tmp;
  real_T t219;
  real_T t221;
  real_T t222;
  real_T t223;
  real_T t224;
  real_T t225;
  real_T t242_tmp_tmp;
  real_T t242_tmp;
  real_T t242;
  real_T t248_tmp_tmp;
  real_T t248_tmp;
  real_T t248;
  real_T t249;
  real_T t251;
  real_T t253_tmp;
  real_T t253;
  real_T t254_tmp;
  real_T t254;
  real_T t255_tmp;
  real_T t255;
  real_T t256_tmp;
  real_T t256;
  real_T t257_tmp;
  real_T t257;
  real_T t258_tmp_tmp;
  real_T t258;
  real_T t271;
  real_T t275;
  real_T t276_tmp;
  real_T t276;
  real_T t278_tmp_tmp;
  real_T t278;
  real_T t279_tmp_tmp;
  real_T t279_tmp;
  real_T t279;
  real_T t280_tmp_tmp;
  real_T t280_tmp;
  real_T t280;
  real_T t284;
  real_T t285;
  real_T t286;
  real_T t287;
  real_T t304_tmp;
  real_T t304;
  real_T t305_tmp;
  real_T t305;
  real_T t306_tmp_tmp;
  real_T t306_tmp;
  real_T t306;
  real_T t307_tmp;
  real_T t307_tmp_tmp;
  real_T t307;
  real_T t314_tmp;
  real_T t314;
  real_T t322_tmp;
  real_T b_t322_tmp;
  real_T t322;
  real_T t333_tmp_tmp;
  real_T t333_tmp;
  real_T t333;
  real_T t26;
  real_T t33_tmp;
  real_T t33;
  real_T t34_tmp;
  real_T t34;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t46;
  real_T t51;
  real_T t54;
  real_T t55;
  real_T t58;
  real_T t59;
  real_T t67_tmp;
  real_T t67;
  real_T t68;
  real_T t74;
  real_T t88_tmp;
  real_T t88;
  real_T t93;
  real_T t94;
  real_T t95_tmp;
  real_T t95;
  real_T t96_tmp;
  real_T t96;
  real_T t97_tmp;
  real_T b_t97_tmp;
  real_T t97;
  real_T t110;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t117_tmp;
  real_T t117;
  real_T t118_tmp;
  real_T t118;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t132;
  real_T t133_tmp;
  real_T t133;
  real_T t134_tmp_tmp;
  real_T t134_tmp;
  real_T t134;
  real_T t135;
  real_T t136;
  real_T t150_tmp;
  real_T t150;
  real_T t160;
  real_T t166;
  real_T t167;
  real_T t168;
  real_T t169;
  real_T t185;
  real_T t186;
  real_T t205;
  real_T t206;
  real_T t207;
  real_T t208;
  real_T t215;
  real_T t216;
  real_T t226;
  real_T t229;
  real_T t230;
  real_T t231;
  real_T t232;
  real_T t233_tmp;
  real_T t233;
  real_T t234;
  real_T t235;
  real_T t236_tmp;
  real_T t236;
  real_T t237_tmp_tmp;
  real_T t237;
  real_T t241;
  real_T t246;
  real_T t247;
  real_T t250;
  real_T t268;
  real_T t269;
  real_T t270_tmp;
  real_T t270;
  real_T t273_tmp;
  real_T t273;
  real_T t274_tmp;
  real_T t274;
  real_T t288;
  real_T t289;
  real_T t290;
  real_T t291;
  real_T t292;
  real_T t293;
  real_T t294;
  real_T t295;
  real_T t308;
  real_T t309;
  real_T t310;
  real_T t311;
  real_T t315;
  real_T t316;
  real_T t317;
  real_T t319;
  real_T t323;
  real_T t324;
  real_T t325;
  real_T t326;
  real_T t331;
  real_T t332;
  real_T t337;
  real_T t338;
  real_T t318;
  real_T t320;
  real_T t321;
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
  /*     Coriolis matrix row number 1 of 6 for Quantec Ultra SE 125.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  /*     02-Mar-2021 15:30:45 */
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
  t30_tmp = in3[0] * t3;
  t12 = t30_tmp * t5;
  b_t30_tmp = t12 * t7;
  c_t30_tmp = b_t30_tmp * t9;
  t30 = c_t30_tmp * 0.00024;
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
  t49_tmp = t29_tmp * t3;
  t49 = t49_tmp * t8 * 0.89341;
  t56 = t49_tmp * 3.8610145;
  t57_tmp_tmp = in3[0] * t6;
  t57_tmp = t57_tmp_tmp * t7;
  t57 = t57_tmp * t8 * 0.89341;
  t60_tmp = t29_tmp * t7;
  t60 = t60_tmp * 73.355506;
  t61_tmp = t30_tmp * t6;
  t61 = t61_tmp * 73.355506;
  t62 = t57_tmp * 3.8610145;
  t63_tmp_tmp = in3[1] * t2;
  t63_tmp = t63_tmp_tmp * t4;
  b_t63_tmp = t63_tmp * t5 * t7;
  t63 = b_t63_tmp * t8 * t9 * 0.00024;
  t64_tmp_tmp = in3[1] * t3;
  t64_tmp = t64_tmp_tmp * t4;
  b_t64_tmp = t64_tmp * t5 * t6;
  t64 = b_t64_tmp * t8 * t9 * 0.00024;
  t65_tmp_tmp = in3[2] * t2;
  t10 = t65_tmp_tmp * t4;
  t65_tmp = t10 * t5 * t7;
  t65 = t65_tmp * t8 * t9 * 0.00024;
  t66_tmp_tmp = in3[2] * t3;
  t66_tmp = t66_tmp_tmp * t4;
  b_t66_tmp = t66_tmp * t5 * t6;
  t66 = b_t66_tmp * t8 * t9 * 0.00024;
  t70_tmp = t63_tmp * t7;
  t70 = t70_tmp * 0.1046566;
  t71_tmp = t64_tmp * t6;
  t71 = t71_tmp * 0.1046566;
  t72_tmp = t10 * t7;
  t72 = t72_tmp * 0.1046566;
  t73_tmp = t66_tmp * t6;
  t73 = t73_tmp * 0.1046566;
  t76_tmp_tmp = t29_tmp * t6;
  t76_tmp = t76_tmp_tmp * t8;
  t76 = t76_tmp * 0.2093132;
  t77_tmp_tmp = t30_tmp * t7;
  t77_tmp = t77_tmp_tmp * t8;
  t77 = t77_tmp * 0.2093132;
  t84_tmp = t63_tmp_tmp * t3;
  t84 = t84_tmp * 0.75031128;
  t85_tmp = t65_tmp_tmp * t3;
  t85 = t85_tmp * 0.75031128;
  t86_tmp_tmp = in3[1] * t6;
  b_t86_tmp_tmp = t86_tmp_tmp * t7;
  t86 = b_t86_tmp_tmp * 0.75031128;
  t87_tmp_tmp = in3[2] * t6 * t7;
  t87 = t87_tmp_tmp * 0.75031128;
  t98_tmp_tmp = t49_tmp * t6;
  b_t98_tmp_tmp = t98_tmp_tmp * t7;
  t98 = b_t98_tmp_tmp * 33.38878512;
  t100_tmp = in3[0] * t8;
  b_t100_tmp = t100_tmp * t9;
  t100 = b_t100_tmp * 4.0E-6;
  t102_tmp = t63_tmp_tmp * t5 * t7;
  t102 = t102_tmp * 4.0E-6;
  t103_tmp_tmp = t64_tmp_tmp * t5;
  t103_tmp = t103_tmp_tmp * t6;
  t103 = t103_tmp * 4.0E-6;
  t104_tmp = t65_tmp_tmp * t5 * t7;
  t104 = t104_tmp * 4.0E-6;
  t105_tmp_tmp = t66_tmp_tmp * t5;
  t105_tmp = t105_tmp_tmp * t6;
  t105 = t105_tmp * 4.0E-6;
  t106_tmp = t27_tmp * t4;
  b_t106_tmp = t106_tmp * t8;
  t106 = b_t106_tmp * 5.4E-5;
  t107_tmp = t29_tmp * t4;
  t107_tmp_tmp = t107_tmp * t6;
  b_t107_tmp = t107_tmp_tmp * t8;
  t107 = b_t107_tmp * 5.4E-5;
  t108_tmp = t30_tmp * t4;
  t108_tmp_tmp = t108_tmp * t7;
  b_t108_tmp = t108_tmp_tmp * t8;
  t108 = b_t108_tmp * 5.4E-5;
  t109_tmp = in3[3] * t4;
  t109_tmp_tmp_tmp = t109_tmp * t6 * t7;
  b_t109_tmp = t109_tmp_tmp_tmp * t8;
  t109 = b_t109_tmp * 5.4E-5;
  t119_tmp_tmp = t84_tmp * t4;
  t119_tmp = t119_tmp_tmp * t9;
  t119 = t119_tmp * 4.0E-6;
  t13 = t85_tmp * t4;
  t120_tmp = t13 * t9;
  t120 = t120_tmp * 4.0E-6;
  t10 = t28_tmp * t4;
  t121_tmp = t10 * t5;
  t121_tmp_tmp = t121_tmp * t7;
  t121 = t121_tmp_tmp * 4.0E-6;
  t122_tmp = t40_tmp * t4;
  b_t122_tmp = t122_tmp * t5;
  c_t122_tmp = b_t122_tmp * t6;
  t122 = c_t122_tmp * 4.0E-6;
  t123_tmp = in3[1] * t4;
  t123_tmp_tmp = t123_tmp * t6;
  b_t123_tmp = t123_tmp_tmp * t7;
  t123 = b_t123_tmp * t9 * 4.0E-6;
  t124_tmp = in3[2] * t4;
  b_t124_tmp = t124_tmp * t6 * t7;
  t124 = b_t124_tmp * t9 * 4.0E-6;
  t137_tmp = in3[0] * t4;
  b_t137_tmp = t137_tmp * t9;
  t137 = b_t137_tmp * 46.16134;
  t138_tmp = t106_tmp * t5;
  t138 = t138_tmp * t8 * 8.0E-6;
  t139_tmp_tmp_tmp = t107_tmp * t5;
  t139_tmp_tmp = t139_tmp_tmp_tmp * t6;
  t139_tmp = t139_tmp_tmp * t8;
  t139 = t139_tmp * 8.0E-6;
  t140_tmp_tmp_tmp = t108_tmp * t5;
  t140_tmp_tmp = t140_tmp_tmp_tmp * t7;
  t140_tmp = t140_tmp_tmp * t8;
  t140 = t140_tmp * 8.0E-6;
  t141_tmp = t109_tmp * t5;
  b_t141_tmp = t141_tmp * t6 * t7;
  t141 = b_t141_tmp * t8 * 8.0E-6;
  t142 = t137_tmp * 0.000116;
  t148_tmp = in3[0] * t5;
  b_t148_tmp = t148_tmp * t8;
  t148 = b_t148_tmp * 0.0421722;
  t152_tmp = b_t98_tmp_tmp * t8;
  b_t152_tmp = t152_tmp * t9;
  t152 = b_t152_tmp * 1.6E-5;
  t153 = t100_tmp * 2.5327982;
  t155 = b_t29_tmp * 92.32268;
  t156 = b_t30_tmp * 92.32268;
  t161_tmp = t63_tmp_tmp * t7;
  b_t161_tmp = t161_tmp * t9;
  t161 = b_t161_tmp * 0.0421722;
  t162_tmp = t64_tmp_tmp * t6;
  b_t162_tmp = t162_tmp * t9;
  t162 = b_t162_tmp * 0.0421722;
  t163_tmp = t65_tmp_tmp * t7;
  b_t163_tmp = t163_tmp * t9;
  t163 = b_t163_tmp * 0.0421722;
  t164_tmp = t66_tmp_tmp * t6;
  b_t164_tmp = t164_tmp * t9;
  t164 = b_t164_tmp * 0.0421722;
  t165 = t148_tmp * 1.89261494;
  t170_tmp = t84_tmp * t8;
  t170 = t170_tmp * t9 * 46.16134;
  t171_tmp = t85_tmp * t8;
  t171 = t171_tmp * t9 * 46.16134;
  t172 = t11 * t7 * 16.156469;
  t173 = t12 * t6 * 16.156469;
  t174_tmp = b_t86_tmp_tmp * t8;
  t174 = t174_tmp * t9 * 46.16134;
  t175_tmp = t87_tmp_tmp * t8;
  t175 = t175_tmp * t9 * 46.16134;
  t180 = t170_tmp * 0.000116;
  t181 = t171_tmp * 0.000116;
  t183 = t174_tmp * 0.000116;
  t184 = t175_tmp * 0.000116;
  t189 = t119_tmp_tmp * t5 * 0.0421722;
  t190 = t13 * t5 * 0.0421722;
  t191_tmp = t123_tmp * t5 * t6 * t7;
  t191 = t191_tmp * 0.0421722;
  t192_tmp = t124_tmp * t5 * t6 * t7;
  t192 = t192_tmp * 0.0421722;
  t193 = t10 * t7 * t9 * 0.0421722;
  t194 = t122_tmp * t6 * t9 * 0.0421722;
  t195 = t119_tmp_tmp * 2.5327982;
  t196 = t13 * 2.5327982;
  t201 = b_t123_tmp * 2.5327982;
  t202 = b_t124_tmp * 2.5327982;
  t211_tmp = t49_tmp * t4;
  t211 = t211_tmp * t9 * 16.156469;
  t214 = t137_tmp * t6 * t7 * t9 * 16.156469;
  t217 = b_t106_tmp * t9 * 0.0843444;
  b_t106_tmp = b_t107_tmp * t9;
  t218 = b_t106_tmp * 0.0843444;
  t219_tmp = b_t108_tmp * t9;
  t219 = t219_tmp * 0.0843444;
  t221 = b_t109_tmp * t9 * 0.0843444;
  t222 = t161_tmp * 0.16200394;
  t223 = t162_tmp * 0.16200394;
  t224 = t163_tmp * 0.16200394;
  t225 = t164_tmp * 0.16200394;
  t242_tmp_tmp = t211_tmp * t6;
  t242_tmp = t242_tmp_tmp * t7;
  t242 = t242_tmp * 0.000464;
  t248_tmp_tmp = t49_tmp * t5 * t6;
  t248_tmp = t248_tmp_tmp * t7;
  t248 = t248_tmp * t8 * 0.1686888;
  t249 = t242_tmp * t9 * 184.64536;
  t251 = t152_tmp * 10.1311928;
  t253_tmp = t107_tmp_tmp * t9;
  t253 = t253_tmp * 3.78522988;
  t254_tmp = t108_tmp_tmp * t9;
  t254 = t254_tmp * 3.78522988;
  t255_tmp = t161_tmp * t8;
  t255 = t255_tmp * t9 * 1.89261494;
  t256_tmp = t162_tmp * t8;
  t256 = t256_tmp * t9 * 1.89261494;
  t257_tmp = t163_tmp * t8;
  t257 = t257_tmp * t9 * 1.89261494;
  t258_tmp_tmp = t164_tmp * t8;
  t258 = t258_tmp_tmp * t9 * 1.89261494;
  t271 = t248_tmp * 7.57045976;
  t275 = t27_tmp * 14.98244588424709;
  t276_tmp = in3[3] * t6 * t7;
  t276 = t276_tmp * 14.98244588424709;
  t278_tmp_tmp = t137_tmp * t5;
  t152_tmp = t278_tmp_tmp * t9;
  t278 = t152_tmp * 14.76973338424709;
  t279_tmp_tmp = t28_tmp * t7;
  t279_tmp = t279_tmp_tmp * t8;
  t279 = t279_tmp * 14.871734384247089;
  t280_tmp_tmp = t40_tmp * t6;
  t280_tmp = t280_tmp_tmp * t8;
  t280 = t280_tmp * 14.871734384247089;
  t70_tmp *= t8;
  t284 = t70_tmp * 14.51751958424709;
  t71_tmp *= t8;
  t285 = t71_tmp * 14.51751958424709;
  t72_tmp *= t8;
  t286 = t72_tmp * 14.51751958424709;
  t73_tmp *= t8;
  t287 = t73_tmp * 14.51751958424709;
  t304_tmp = t84_tmp * t5;
  t304 = t304_tmp * t8 * t9 * 14.76973338424709;
  t305_tmp = t85_tmp * t5;
  t305 = t305_tmp * t8 * t9 * 14.76973338424709;
  t306_tmp_tmp = in3[1] * t5;
  t306_tmp = t306_tmp_tmp * t6 * t7;
  t306 = t306_tmp * t8 * t9 * 14.76973338424709;
  t307_tmp = in3[2] * t5;
  t307_tmp_tmp = t307_tmp * t6 * t7;
  t307 = t307_tmp_tmp * t8 * t9 * 14.76973338424709;
  t314_tmp = b_t28_tmp * t5;
  t314 = t314_tmp * t8 * t9 * 14.76973338424709;
  t322_tmp = t32_tmp * t5;
  b_t322_tmp = t322_tmp * t6 * t7;
  t322 = b_t322_tmp * t8 * t9 * 14.76973338424709;
  t333_tmp_tmp = t211_tmp * t5 * t6;
  t333_tmp = t333_tmp_tmp * t7;
  t333 = t333_tmp * t9 * 59.07893353698838;
  t26 = t137_tmp * t21 * 0.00024;
  t33_tmp = t137_tmp * t18;
  t33 = t33_tmp * t21 * 0.00048;
  t34_tmp = t137_tmp * t19;
  t34 = t34_tmp * t21 * 0.00048;
  t41 = t170_tmp * t21 * 0.00024;
  t42 = t171_tmp * t21 * 0.00024;
  t43 = t174_tmp * t21 * 0.00024;
  t44 = t175_tmp * t21 * 0.00024;
  t10 = c_t29_tmp * t19;
  t45 = t10 * 0.00048;
  t11 = c_t30_tmp * t18;
  t46 = t11 * 0.00048;
  t51 = c_t28_tmp * t21 * 0.00024;
  t54 = t20 * t29;
  t55 = t20 * t30;
  t58 = t20 * t31;
  t59 = b_t32_tmp * t21 * 0.00024;
  t67_tmp = t33_tmp * t19;
  t67 = t67_tmp * t21 * 0.00096;
  t68 = t242_tmp * t21 * 0.00096;
  t74 = b_t27_tmp * t20 * -0.00024;
  t88_tmp = in3[0] * t19;
  t88 = t88_tmp * 16.69439256;
  t93 = t10 * t20 * -0.00048;
  t94 = t11 * t20 * -0.00048;
  t95_tmp = t76_tmp * t19;
  t95 = t95_tmp * 0.4186264;
  t96_tmp = t77_tmp * t18;
  t96 = t96_tmp * 0.4186264;
  t97_tmp = in3[0] * t18;
  b_t97_tmp = t97_tmp * t19;
  t97 = b_t97_tmp * 33.38878512;
  t110 = t161_tmp * t20 * 5.4E-5;
  t111 = t162_tmp * t20 * 5.4E-5;
  t112 = t163_tmp * t20 * 5.4E-5;
  t113 = t164_tmp * t20 * 5.4E-5;
  t117_tmp = b_t100_tmp * t18;
  t117 = t117_tmp * 8.0E-6;
  t118_tmp = b_t100_tmp * t19;
  t118 = t118_tmp * 8.0E-6;
  t129 = t102_tmp * t20 * 8.0E-6;
  t130 = t103_tmp * t20 * 8.0E-6;
  t131 = t104_tmp * t20 * 8.0E-6;
  t132 = t105_tmp * t20 * 8.0E-6;
  t133_tmp = t28_tmp_tmp * t9;
  t133 = t133_tmp * t20 * 4.0E-6;
  t134_tmp_tmp = in3[4] * t6 * t7;
  t134_tmp = t134_tmp_tmp * t9;
  t134 = t134_tmp * t20 * 4.0E-6;
  t135 = b_t107_tmp * t19 * 0.000108;
  t136 = b_t108_tmp * t18 * 0.000108;
  t150_tmp = t117_tmp * t19;
  t150 = t150_tmp * 1.6E-5;
  t160 = in3[0] * t23 * 102.065361815;
  t166 = t139_tmp * t19 * 1.6E-5;
  t167 = t140_tmp * t18 * 1.6E-5;
  t168 = t33_tmp * 0.000232;
  t169 = t34_tmp * 0.000232;
  t12 = b_t137_tmp * t18;
  t185 = t12 * 92.32268;
  t186 = b_t137_tmp * t19 * 92.32268;
  t10 = b_t148_tmp * t18;
  t205 = t10 * 0.0843444;
  t206 = b_t148_tmp * t19 * 0.0843444;
  t11 = t100_tmp * t18;
  t207 = t11 * 5.0655964;
  t208 = t100_tmp * t19 * 5.0655964;
  t215 = b_t29_tmp * t19 * 184.64536;
  t216 = b_t30_tmp * t18 * 184.64536;
  t226 = t28_tmp_tmp * t5 * t20 * 0.0421722;
  t229 = b_t161_tmp * t20 * 0.0843444;
  t230 = b_t162_tmp * t20 * 0.0843444;
  t231 = b_t163_tmp * t20 * 0.0843444;
  t232 = b_t164_tmp * t20 * 0.0843444;
  t233_tmp = in3[4] * t5;
  t233 = t233_tmp * t6 * t7 * t20 * 0.0421722;
  t13 = t76_tmp_tmp * t19;
  t234 = t13 * 408.26144726;
  b_t109_tmp = t77_tmp_tmp * t18;
  t235 = b_t109_tmp * 408.26144726;
  t236_tmp = t148_tmp * t18;
  t236 = t236_tmp * 3.78522988;
  t237_tmp_tmp = t148_tmp * t19;
  t237 = t237_tmp_tmp * 3.78522988;
  t241 = t67_tmp * 0.000464;
  t246 = t10 * t19 * 0.1686888;
  t247 = t12 * t19 * 184.64536;
  t250 = t11 * t19 * 10.1311928;
  t268 = b_t106_tmp * t19 * 0.1686888;
  t269 = t219_tmp * t18 * 0.1686888;
  t270_tmp = t236_tmp * t19;
  t270 = t270_tmp * 7.57045976;
  t273_tmp = t253_tmp * t19;
  t273 = t273_tmp * 7.57045976;
  t274_tmp = t254_tmp * t18;
  t274 = t274_tmp * 7.57045976;
  t10 = t27_tmp * t20;
  t288 = t10 * 14.51751958424709;
  t289 = t27_tmp * t21 * 14.76973338424709;
  t290 = t76_tmp_tmp * t20 * 14.51751958424709;
  t291 = t76_tmp_tmp * t21 * 14.76973338424709;
  t292 = t77_tmp_tmp * t20 * 14.51751958424709;
  t293 = t77_tmp_tmp * t21 * 14.76973338424709;
  t294 = t276_tmp * t20 * 14.51751958424709;
  t295 = t276_tmp * t21 * 14.76973338424709;
  t11 = t152_tmp * t18;
  t308 = t11 * 29.53946676849419;
  t309 = t152_tmp * t19 * 29.53946676849419;
  t310 = t279_tmp * t21 * 14.76973338424709;
  t311 = t280_tmp * t21 * 14.76973338424709;
  t12 = t13 * t20;
  t315 = t12 * 29.03503916849419;
  t316 = t13 * t21 * 29.53946676849419;
  t13 = b_t109_tmp * t20;
  t317 = t13 * 29.03503916849419;
  t319 = b_t109_tmp * t21 * 29.53946676849419;
  t323 = t70_tmp * t21 * 14.76973338424709;
  t324 = t71_tmp * t21 * 14.76973338424709;
  t325 = t72_tmp * t21 * 14.76973338424709;
  t326 = t73_tmp * t21 * 14.76973338424709;
  t331 = t10 * t21 * -14.76973338424709;
  t332 = t11 * t19 * 59.07893353698838;
  t337 = t12 * t21 * -29.53946676849419;
  t338 = t13 * t21 * -29.53946676849419;
  t318 = t20 * t291;
  t320 = t20 * t293;
  t321 = t20 * t295;
  d = in3[2] * t7;
  d1 = in3[1] * t7;
  d2 = in3[1] * t14;
  d3 = in3[4] * t9;
  d4 = in3[1] * t22;
  d5 = in3[3] * t24;
  d6 = t66_tmp_tmp * t8;
  d7 = t307_tmp * t7;
  d8 = t109_tmp * t7;
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
  d21 = t109_tmp * t14;
  d22 = in3[1] * t15;
  d23 = in3[2] * t15;
  d24 = d2 * t23;
  d25 = d22 * t22;
  d26 = d16 * t23;
  d27 = d23 * t22;
  d28 = t66_tmp * t9;
  d29 = t322_tmp * t7;
  d30 = in3[3] * t7 * t8 * t9;
  d31 = t123_tmp * t14 * t15;
  d32 = t124_tmp * t14 * t15;
  t11 = d17 * t17;
  t12 = in3[3] * t17;
  d33 = t27_tmp_tmp * t4;
  d34 = d33 * t7;
  d35 = d19 * t6;
  t13 = in3[1] * t8;
  b_t106_tmp = t13 * t14;
  b_t109_tmp = in3[2] * t8;
  t152_tmp = b_t109_tmp * t14;
  t70_tmp = in3[3] * t14 * t15;
  t71_tmp = in3[4] * t14 * t15;
  t72_tmp = d10 * t14;
  d10 *= t15;
  t73_tmp = d3 * t14;
  c_t29_tmp = d20 * t23;
  c_t30_tmp = t307_tmp * t15 * t22;
  c_t28_tmp = d2 * t16;
  b_t32_tmp = d22 * t16;
  b_t27_tmp = d16 * t16;
  b_t100_tmp = d23 * t16;
  b_t107_tmp = t72_tmp * t23;
  b_t108_tmp = d10 * t22;
  t139_tmp = t123_tmp * t22 * t23;
  t140_tmp = t124_tmp * t22 * t23;
  b_t137_tmp = c_t28_tmp * t23;
  b_t148_tmp = b_t32_tmp * t22;
  t100_tmp = b_t27_tmp * t23;
  b_t161_tmp = b_t100_tmp * t22;
  b_t162_tmp = t70_tmp * t24;
  b_t163_tmp = d3 * t22 * t23;
  b_t164_tmp = in3[3] * t22 * t23 * t24;
  t219_tmp = t322_tmp * t14;
  t40_tmp = t123_tmp * t9;
  t66_tmp = t40_tmp * t14;
  d36 = t124_tmp * t9;
  d37 = d36 * t14;
  d38 = t109_tmp * t9;
  d39 = t233_tmp * t8;
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
  b_Crow_tmp = t71_tmp * t16;
  c_Crow_tmp = t306_tmp_tmp * t14;
  d_Crow_tmp = t13 * t9;
  e_Crow_tmp = b_t109_tmp * t9;
  f_Crow_tmp = t73_tmp * t15;
  g_Crow_tmp = t306_tmp_tmp * t15 * t22;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t63_tmp_tmp
    * 0.118692 - t66_tmp_tmp * 6.34309525) - t86_tmp_tmp * 179.231297) +
    t109_tmp * 0.0523283) - d * 120.512617) - d3 * 23.08067) + d2 * 0.57959792)
    - d11 * 1.35E-5) - d12 * 3.0E-5) - d4 * 282.1245273) + d5 *
    1.7831632230308869) + in3[4] * t25 * 1.8462166730308871) - t84_tmp *
    3.8610145) - t85_tmp * 3.8610145) - t161_tmp * 73.355506) - t162_tmp *
    73.355506) - t163_tmp * 73.355506) - t164_tmp * 73.355506) - d6 * 1.467745)
    + t322_tmp * 0.94630747) + b_t86_tmp_tmp * 3.8610145) - d7 * 26.5427705) -
    d8 * 1.467745) + t87_tmp_tmp * 3.8610145) - d9 * 26.5427705) - t64_tmp_tmp *
    t14 * 12.6861905) - t66_tmp_tmp * t14 * 6.34309525) - d13 * 0.94630747) - d1
    * t14 * 241.025234) - d * t14 * 120.512617) + d14 * 2.0E-6) - t64_tmp_tmp *
    t22 * 241.025234) - t66_tmp_tmp * t22 * 120.512617) - d15 * t16 * 0.0210861)
    + d1 * t22 * 12.6861905) - d2 * t15 * 8.34719628) + d * t22 * 6.34309525) -
    d16 * t15 * 8.34719628) - t233_tmp * t24 * 0.01054305) - d3 * t24 * 1.0E-6)
    + t11 * 3.0E-5) - d24 * 103.9746319380309) - d25 * 103.9746319380309) - d26 *
    103.9746319380309) - d27 * 103.9746319380309) - t12 * t24 *
    1.8462166730308871) - d17 * t25 * 1.8462166730308871) + d4 * t23 *
    8.34719628) + in3[2] * t22 * t23 * 8.34719628) - d5 * t25 * 3.0E-5) -
    t170_tmp * 0.89341) - t102_tmp * 16.156469) - t103_tmp * 16.156469) -
    t171_tmp * 0.89341) - t104_tmp * 16.156469) - t105_tmp * 16.156469) - d34 *
    0.89341) - d35 * 0.89341) - d28 * 26.5427705) - t133_tmp * 16.156469) - d29 *
    26.5427705) + t174_tmp * 0.89341) + t175_tmp * 0.89341) - t64_tmp_tmp * t8 *
    t14 * 2.93549) + t134_tmp * 16.156469) - t306_tmp_tmp * t7 * t14 * 53.085541)
    - d6 * t14 * 1.467745) + d30 * 26.5427705) - d7 * t14 * 26.5427705) - d8 *
    t14 * 1.467745) - d9 * t14 * 26.5427705) - t103_tmp_tmp * t22 * 53.085541) -
    t105_tmp_tmp * t22 * 26.5427705) - d19 * t22 * 1.467745) + d31 * 4.0E-6) -
    c_Crow_tmp * t15 * 1.89261494) + d32 * 4.0E-6) - d20 * t15 * 1.89261494) -
    d21 * t15 * 0.0523283) + d1 * t8 * t22 * 2.93549) - b_t106_tmp * t15 *
    2.5327982) + d * t8 * t22 * 1.467745) - t152_tmp * t15 * 2.5327982) + in3[4]
    * t7 * t9 * t22 * 26.5427705) - f_Crow_tmp * 23.08067) - c_Crow_tmp * t23 *
    46.16134) - g_Crow_tmp * 46.16134) - c_t29_tmp * 46.16134) - c_t30_tmp *
    46.16134) - d21 * t23 * 1.2663991) - t109_tmp * t15 * t22 * 1.2663991) +
    b_t106_tmp * t23 * 0.1046566) + t13 * t15 * t22 * 0.1046566) + t152_tmp *
    t23 * 0.1046566) + b_t109_tmp * t15 * t22 * 0.1046566) - b_t107_tmp * 2.0E-6)
    - b_t108_tmp * 2.0E-6) - t70_tmp * t16 * 1.35E-5) - t139_tmp * 4.0E-6) +
    t73_tmp * t23 * 0.94630747) + d3 * t15 * t22 * 0.94630747) + t71_tmp * t17 *
    9.0E-5) + t306_tmp_tmp * t22 * t23 * 1.89261494) - t140_tmp * 4.0E-6) +
    t307_tmp * t22 * t23 * 1.89261494) + t109_tmp * t22 * t23 * 0.0523283) + t13
    * t22 * t23 * 2.5327982) + b_t137_tmp * 1.7831632230308869) + b_t148_tmp *
    1.7831632230308869) - d2 * t17 * t23 * 5.53865001909266) - d22 * t17 * t22 *
    5.53865001909266) + b_t109_tmp * t22 * t23 * 2.5327982) + t100_tmp *
    1.7831632230308869) + b_t161_tmp * 1.7831632230308869) - d16 * t17 * t23 *
    5.53865001909266) - d23 * t17 * t22 * 5.53865001909266) + b_t162_tmp *
    1.7831632230308869) + b_t163_tmp * 23.08067) - t71_tmp * t25 *
    5.53865001909266) + d24 * t24 * 1.35E-5) + d25 * t24 * 1.35E-5) - d24 * t25 *
    9.0E-5) - d25 * t25 * 9.0E-5) + d26 * t24 * 1.35E-5) + d27 * t24 * 1.35E-5)
    - d26 * t25 * 9.0E-5) - d27 * t25 * 9.0E-5) + d11 * t22 * t23 * 1.35E-5) -
    d12 * t22 * t23 * 9.0E-5) - b_t164_tmp * 1.7831632230308869) + in3[4] * t22 *
    t23 * t25 * 5.53865001909266) - t119_tmp * 16.156469) - t120_tmp * 16.156469)
    - t121_tmp_tmp * 16.156469) - t122_tmp * t5 * t6 * 16.156469) + t123_tmp_tmp
    * t7 * t9 * 16.156469) + t124_tmp * t6 * t7 * t9 * 16.156469) + t27_tmp_tmp *
    t7 * t8 * t9 * 16.156469) + d45 * 16.156469) - t64_tmp * t9 * t14 *
    53.085541) - d28 * t14 * 26.5427705) - d29 * t14 * 26.5427705) - b_t122_tmp *
    t22 * 26.5427705) + d30 * t14 * 26.5427705) - t219_tmp * t15 * 0.94630747) +
    t123_tmp * t7 * t9 * t22 * 53.085541) - t66_tmp * t15 * 46.16134) - d42 *
    t14 * t15 * 0.0421722) + t124_tmp * t7 * t9 * t22 * 26.5427705) - d37 * t15 *
    46.16134) - d43 * t14 * t15 * 0.0421722) + d18 * t8 * t9 * t22 * 26.5427705)
    - d_Crow_tmp * t14 * t15 * 4.0E-6) - e_Crow_tmp * t14 * t15 * 4.0E-6) -
    t141_tmp * t14 * t23 * 0.0210861) - t141_tmp * t15 * t22 * 0.0210861) + d40 *
    t15 * 0.94630747) - t219_tmp * t23 * 23.08067) - t322_tmp * t15 * t22 *
    23.08067) + t66_tmp * t23 * 1.89261494) + t40_tmp * t15 * t22 * 1.89261494)
    + d31 * t17 * 0.00012) + d37 * t23 * 1.89261494) + d36 * t15 * t22 *
    1.89261494) + d32 * t17 * 0.00012) - d38 * t14 * t23 * 2.0E-6) - d38 * t15 *
    t22 * 2.0E-6) + t31_tmp * t14 * t15 * t16 * 2.0E-6) - d39 * t14 * t23 *
    2.0E-6) - d39 * t15 * t22 * 2.0E-6) + d40 * t23 * 23.08067) + d13 * t15 *
    t22 * 23.08067) - d15 * t14 * t15 * t16 * 0.0210861) + t322_tmp * t22 * t23 *
    0.94630747) + d41 * t14 * t23 * 0.0210861) + d41 * t15 * t22 * 0.0210861) +
    t40_tmp * t22 * t23 * 46.16134) - d31 * t25 * 7.3848666921235466) + d42 *
    t22 * t23 * 0.0421722) + d36 * t22 * t23 * 46.16134) - d32 * t25 *
    7.3848666921235466) + d43 * t22 * t23 * 0.0421722) - d46 * t17 * t23 *
    7.3848666921235466) - t10 * t17 * t22 * 7.3848666921235466) - t233_tmp * t14
    * t15 * t24 * 0.01054305) + d_Crow_tmp * t22 * t23 * 4.0E-6) + e_Crow_tmp *
    t22 * t23 * 4.0E-6) - in3[3] * t8 * t9 * t22 * t23 * 0.94630747) - t72_tmp *
    t17 * t23 * 6.0E-5) - d10 * t17 * t22 * 6.0E-5) - f_Crow_tmp * t24 * 1.0E-6)
    + b_Crow_tmp * t17 * 3.0E-5) - t123_tmp * t17 * t22 * t23 * 0.00012) - in3[1]
    * t5 * t14 * t23 * t24 * 2.0E-6) - g_Crow_tmp * t24 * 2.0E-6) - t124_tmp *
    t17 * t22 * t23 * 0.00012) - c_t29_tmp * t24 * 2.0E-6) - c_t30_tmp * t24 *
    2.0E-6) - d14 * t22 * t23 * 2.0E-6) - d46 * t23 * t25 * 0.00012) - t10 * t22
    * t25 * 0.00012) + t32_tmp * t14 * t23 * t24 * 0.0210861) + t32_tmp * t15 *
    t22 * t24 * 0.0210861) - c_t28_tmp * t17 * t23 * 1.8462166730308871) -
    b_t32_tmp * t17 * t22 * 1.8462166730308871) + Crow_tmp * t14 * t23 * t24 *
    0.0210861) + Crow_tmp * t15 * t22 * t24 * 0.0210861) - b_t27_tmp * t17 * t23
                       * 1.8462166730308871) - b_t100_tmp * t17 * t22 *
                      1.8462166730308871) + b_t107_tmp * t25 *
                     3.6924333460617742) + b_t108_tmp * t25 * 3.6924333460617742)
                   + in3[3] * t9 * t16 * t22 * t23 * 0.0210861) - t70_tmp * t17 *
                  t24 * 1.8462166730308871) - b_Crow_tmp * t25 *
                 1.8462166730308871) + t139_tmp * t25 * 7.3848666921235466) +
               t140_tmp * t25 * 7.3848666921235466) + t233_tmp * t22 * t23 * t24
              * 0.01054305) - b_t137_tmp * t25 * 3.0E-5) - b_t148_tmp * t25 *
            3.0E-5) - t100_tmp * t25 * 3.0E-5) - b_t161_tmp * t25 * 3.0E-5) -
         b_t162_tmp * t25 * 3.0E-5) + b_t163_tmp * t24 * 1.0E-6) - t11 * t22 *
       t23 * 3.0E-5) + t12 * t22 * t23 * t24 * 1.8462166730308871) + d17 * t22 *
     t23 * t25 * 1.8462166730308871) + b_t164_tmp * t25 * 3.0E-5;
  t32_tmp = in3[0] * t7;
  Crow_tmp = t30_tmp * t8;
  b_Crow_tmp = t148_tmp * t7;
  c_Crow_tmp = t76_tmp_tmp * t7;
  d_Crow_tmp = t108_tmp * t9;
  e_Crow_tmp = in3[0] * t22;
  f_Crow_tmp = t30_tmp * t18;
  g_Crow_tmp = t32_tmp * t18;
  t152_tmp = Crow_tmp * t18;
  t70_tmp = b_Crow_tmp * t18;
  t71_tmp = c_Crow_tmp * t8;
  t72_tmp = d_Crow_tmp * t18;
  t73_tmp = t107_tmp_tmp * t7 * t9;
  Crow[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((in3[0] * -8.9267942 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32)
    + -t33) + -t34) + t39) + t40) + t43) + t44) + -t41) + -t42) + -t45) + -t46)
    + t54) + t55) + t57) + t58) + t59) + t62) + t63) + t64) + t65) + t66) + t67)
    + -t49) + t70) + t71) + t72) + t73) + t74) + -t51) + -t56) + -t60) + -t61) +
    -t68) + -t76) + -t77) + t86) + t87) + t88) + -t84) + -t85) + t93) + t94) +
    t95) + t96) + t98) + -t97) + -t100) + t102) + t103) + t104) + t105) + t106)
    + t110) + t111) + t112) + t113) + -t107) + -t108) + -t109) + t117) + t118) +
    t123) + t124) + -t119) + -t120) + -t121) + -t122) + t134) + t135) + t136) +
    t139) + t140) + t141) + -t129) + -t130) + -t131) + -t132) + -t133) + -t137)
    + -t138) + t152) + -t142) + t155) + t156) + -t148) + -t150) + -t153) + t160)
    + t168) + t169) + t170) + t171) + -t161) + -t162) + -t163) + -t164) + t180)
    + t181) + -t165) + t185) + t186) + -t166) + -t167) + t191) + t192) + t193) +
    t194) + -t172) + -t173) + -t174) + -t175) + t201) + t202) + -t183) + -t184)
    + t205) + t206) + t207) + t208) + -t189) + -t190) + -t195) + -t196) + t214)
    + t217) + -t211) + t222) + t223) + t224) + t225) + -t215) + -t216) + t229) +
    t230) + t231) + t232) + t233) + t236) + t237) + -t218) + -t219) + -t221) +
    t242) + -t226) + -t234) + -t235) + t248) + t249) + t251) + -t241) + -t246) +
    -t247) + -t250) + -t253) + -t254) + -t255) + -t256) + -t257) + -t258) + t268)
    + t269) + t271) + -t270) + t273) + t274) + t276) + -t275) + -t278) + -t279)
    + -t280) + t288) + t289) + t291) + t293) + -t284) + -t285) + -t286) + -t287)
    + -t290) + -t292) + -t294) + -t295) + t304) + t305) + t308) + t309) + t310)
    + t311) + -t306) + -t307) + t314) + t315) + t317) + t318) + t320) + t321) +
    t323) + t324) + t325) + t326) + -t316) + -t319) + -t322) + t331) + t333) +
    -t332) + t337) + t338) + t29_tmp * 0.118692) + t30_tmp * 12.6861905) +
    t63_tmp_tmp * 18.25116472) - t57_tmp_tmp * 179.231297) + t32_tmp *
                      241.025234) - t86_tmp_tmp * 0.11686308) + t97_tmp *
                    17.8535884) - e_Crow_tmp * 180.059165485) - t63_tmp *
                  2.93549) + Crow_tmp * 2.93549) + b_Crow_tmp * 53.085541) -
               f_Crow_tmp * 25.372381) - g_Crow_tmp * 482.050468) - t98_tmp_tmp *
             482.050468) + c_Crow_tmp * 25.372381) + d_Crow_tmp * 53.085541) +
          t63_tmp_tmp * t8 * t9 * 53.085541) - t152_tmp * 5.87098) - t70_tmp *
        106.171082) - t248_tmp_tmp * 106.171082) + t71_tmp * 5.87098) - t72_tmp *
     106.171082) + t73_tmp * 106.171082;
  Crow[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((in3[0]
    * -8.34719628 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32) + -t33) +
    -t34) + t39) + t40) + t43) + t44) + -t41) + -t42) + -t45) + -t46) + t54) +
    t55) + t57) + t58) + t59) + t62) + t63) + t64) + t65) + t66) + t67) + -t49)
    + t70) + t71) + t72) + t73) + t74) + -t51) + -t56) + -t60) + -t61) + -t68) +
    -t76) + -t77) + t86) + t87) + t88) + -t84) + -t85) + t93) + t94) + t95) +
    t96) + t98) + -t97) + -t100) + t102) + t103) + t104) + t105) + t106) + t110)
    + t111) + t112) + t113) + -t107) + -t108) + -t109) + t117) + t118) + t123) +
    t124) + -t119) + -t120) + -t121) + -t122) + t134) + t135) + t136) + t139) +
    t140) + t141) + -t129) + -t130) + -t131) + -t132) + -t133) + -t137) + -t138)
    + t152) + -t142) + t155) + t156) + -t148) + -t150) + -t153) + t160) + t168)
    + t169) + t170) + t171) + -t161) + -t162) + -t163) + -t164) + t180) + t181)
    + -t165) + t185) + t186) + -t166) + -t167) + t191) + t192) + t193) + t194) +
    -t172) + -t173) + -t174) + -t175) + t201) + t202) + -t183) + -t184) + t205)
    + t206) + t207) + t208) + -t189) + -t190) + -t195) + -t196) + t214) + t217)
    + -t211) + t222) + t223) + t224) + t225) + -t215) + -t216) + t229) + t230) +
    t231) + t232) + t233) + t236) + t237) + -t218) + -t219) + -t221) + t242) +
    -t226) + -t234) + -t235) + t248) + t249) + t251) + -t241) + -t246) + -t247)
    + -t250) + -t253) + -t254) + -t255) + -t256) + -t257) + -t258) + t268) +
    t269) + t271) + -t270) + t273) + t274) + t276) + -t275) + -t278) + -t279) +
    -t280) + t288) + t289) + t291) + t293) + -t284) + -t285) + -t286) + -t287) +
    -t290) + -t292) + -t294) + -t295) + t304) + t305) + t308) + t309) + t310) +
    t311) + -t306) + -t307) + t314) + t315) + t317) + t318) + t320) + t321) +
    t323) + t324) + t325) + t326) + -t316) + -t319) + -t322) + t331) + t333) +
                  -t332) + t337) + t338) + t97_tmp * 16.69439256) + e_Crow_tmp *
              102.065361815) - f_Crow_tmp * 12.6861905) - g_Crow_tmp *
            241.025234) - t98_tmp_tmp * 241.025234) + c_Crow_tmp * 12.6861905) -
         t152_tmp * 2.93549) - t70_tmp * 53.085541) - t248_tmp_tmp * 53.085541)
      + t71_tmp * 2.93549) - t72_tmp * 53.085541) + t73_tmp * 53.085541;
  d = in3[0] * t9;
  d1 = in3[0] * t20;
  d2 = t137_tmp * t8;
  d3 = d * t18;
  d4 = d * t19;
  d5 = t27_tmp * t8;
  d6 = t276_tmp * t8;
  d7 = t84_tmp * t20;
  d8 = t85_tmp * t20;
  d9 = d2 * t18;
  d10 = d2 * t19;
  d11 = b_t86_tmp_tmp * t20;
  d12 = t87_tmp_tmp * t20;
  d14 = t97_tmp * t20;
  d15 = t88_tmp * t20;
  d16 = d3 * t19;
  d17 = b_t97_tmp * t20;
  d20 = b_t123_tmp * t8;
  d21 = b_t124_tmp * t8;
  d22 = t304_tmp * t9;
  d23 = t305_tmp * t9;
  d24 = t76_tmp * t9;
  d25 = t278_tmp_tmp * t8;
  d26 = d25 * t9;
  d27 = t77_tmp * t9;
  d28 = t306_tmp * t9;
  d29 = t307_tmp_tmp * t9;
  d30 = d9 * t19;
  d31 = t107_tmp_tmp * t19;
  d32 = t108_tmp_tmp * t18;
  b_t109_tmp = b_t29_tmp * t8;
  Crow_tmp = b_t109_tmp * t9;
  b_t106_tmp = b_t30_tmp * t8;
  b_Crow_tmp = b_t106_tmp * t9;
  d_Crow_tmp = d26 * t18;
  e_Crow_tmp = t242_tmp * t8;
  t12 = in3[2] * t2 * t3 * t4 * t8;
  t13 = in3[0] * t2 * t3 * t6 * t7 * t9;
  f_Crow_tmp = t139_tmp_tmp * t19;
  g_Crow_tmp = t140_tmp_tmp * t18;
  t152_tmp = b_t98_tmp_tmp * t20;
  t70_tmp = d24 * t19;
  t71_tmp = d27 * t18;
  t72_tmp = t191_tmp * t8;
  t73_tmp = t192_tmp * t8;
  t10 = t333_tmp * t8;
  t11 = in3[1] * t2 * t3 * t4 * t8;
  Crow[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((in3[0] * 2.7E-5 - t148_tmp * 4.0E-6) + t109_tmp * 0.89341) + d *
    0.0421722) - t97_tmp * 2.7E-5) - t88_tmp * 2.7E-5) - d1 * 5.4E-5) + in3[0] *
    t24 * 7.2587597921235467) - t84_tmp * 14.98244588424709) - t85_tmp *
    14.98244588424709) + d33 * 2.93549) - t279_tmp_tmp * 0.00012) - t280_tmp_tmp
    * 0.00012) + t322_tmp * 16.156469) + b_t86_tmp_tmp * 14.98244588424709) +
    t87_tmp_tmp * 14.98244588424709) - d13 * 16.156469) + t33_tmp * 0.1046566) +
    t34_tmp * 0.1046566) + t236_tmp * 4.0E-6) + t237_tmp_tmp * 4.0E-6) +
    t148_tmp * t20 * 8.0E-6) - in3[0] * t9 * t18 * 0.0421722) - d4 * 0.0421722)
    - d * t20 * 0.0843444) + b_t97_tmp * 5.4E-5) + d14 * 5.4E-5) + d15 * 5.4E-5)
    + t107_tmp_tmp * 2.5327982) + t106_tmp * 2.5327982) - t107_tmp * t7 *
    0.89341) - t108_tmp * t6 * 0.89341) + b_t28_tmp * 0.102001) + t108_tmp_tmp *
    2.5327982) + t121_tmp * 53.085541) - t76_tmp * 0.000116) - d5 * 0.000116) -
    d34 * 0.1046566) - d35 * 0.1046566) - t77_tmp * 0.000116) - t109_tmp_tmp_tmp
    * 2.5327982) - t32_tmp_tmp * 0.102001) - t27_tmp_tmp * t8 * t9 * 53.085541)
    + d6 * 0.000116) + d7 * 14.51751958424709) + t84_tmp * t21 *
    14.76973338424709) + d8 * 14.51751958424709) + t85_tmp * t21 *
    14.76973338424709) - t137_tmp * t7 * t18 * 2.93549) - d9 * 14.51751958424709)
    - d10 * 14.51751958424709) - d2 * t21 * 14.76973338424709) - d11 *
    14.51751958424709) + t279_tmp_tmp * t21 * 0.00024) + t280_tmp_tmp * t21 *
    0.00024) - t117_tmp * 1.89261494) - b_t86_tmp_tmp * t21 * 14.76973338424709)
    - d12 * 14.51751958424709) - t118_tmp * 1.89261494) - t87_tmp_tmp * t21 *
    14.76973338424709) - t67_tmp * 0.2093132) - t270_tmp * 8.0E-6) - t236_tmp *
    t20 * 8.0E-6) - t237_tmp_tmp * t20 * 8.0E-6) + d16 * 0.0843444) + d3 * t20 *
    0.0843444) + d4 * t20 * 0.0843444) - d17 * 0.000108) - t242_tmp_tmp *
    2.93549) + t139_tmp_tmp * 0.0421722) + t138_tmp * 0.0421722) - b_t98_tmp_tmp
    * 5.4E-5) + t119_tmp_tmp * t8 * 5.4E-5) + t28_tmp_tmp * t4 * t5 * 46.16134)
    + t30_tmp * t4 * t5 * t7 * 0.0421722) + t12 * 5.4E-5) + d22 * 0.00024) +
    t253_tmp * 4.0E-6) + d23 * 0.00024) + t106_tmp * t9 * 4.0E-6) - t121_tmp_tmp
    * 1.89261494) - c_t122_tmp * 1.89261494) + t254_tmp * 4.0E-6) - d24 *
    46.16134) - d5 * t9 * 46.16134) - b_t141_tmp * 0.0421722) + t60_tmp * t8 *
    t9 * 16.156469) + t61_tmp * t8 * t9 * 16.156469) - d26 * 0.00024) - d20 *
    5.4E-5) - b_t322_tmp * 46.16134) - d27 * 46.16134) - d21 * 5.4E-5) - t39_tmp
    * t9 * 14.76973338424709) - b_t40_tmp * t9 * 14.76973338424709) - d28 *
    0.00024) - d29 * 0.00024) + in3[3] * t2 * t7 * t8 * t9 * 1.89261494) + d45 *
    1.89261494) - t109_tmp_tmp_tmp * t9 * 4.0E-6) - d31 * 5.0655964) - d32 *
    5.0655964) + d6 * t9 * 46.16134) + b_t28_tmp * t21 * 14.76973338424709) +
    t95_tmp * 0.000232) + t96_tmp * 0.000232) + t76_tmp * t21 * 0.00024) + d5 *
    t21 * 0.00024) + t77_tmp * t21 * 0.00024) + t32_tmp * t8 * t9 * t18 *
    53.085541) - t32_tmp_tmp * t21 * 14.76973338424709) - d6 * t21 * 0.00024) -
    d7 * t21 * 14.76973338424709) - d8 * t21 * 14.76973338424709) + d30 *
    29.03503916849419) + d9 * t21 * 14.76973338424709) + d10 * t21 *
    14.76973338424709) + t150_tmp * 3.78522988) + d11 * t21 * 14.76973338424709)
    + d12 * t21 * 14.76973338424709) + t270_tmp * t20 * 1.6E-5) - d16 * t20 *
    0.1686888) + t211_tmp * t6 * t7 * 0.2093132) + t49_tmp * t5 * t6 * t7 *
    8.0E-6) - t84_tmp * t4 * t5 * t8 * 8.0E-6) - t65_tmp_tmp * t3 * t4 * t5 * t8
    * 8.0E-6) - t13 * 0.0843444) + t11 * t9 * 0.0843444) + t314_tmp * t9 *
    0.00024) + t98_tmp_tmp * t8 * t9 * 53.085541) + t12 * t9 * 0.0843444) -
    Crow_tmp * 14.76973338424709) - b_t27_tmp_tmp * t8 * t9 * 14.76973338424709)
    + t72_tmp * 8.0E-6) - b_Crow_tmp * 14.76973338424709) + t73_tmp * 8.0E-6) -
    d20 * t9 * 0.0843444) - b_t322_tmp * t9 * 0.00024) - f_Crow_tmp * 0.0843444)
    - d21 * t9 * 0.0843444) - g_Crow_tmp * 0.0843444) + t152_tmp * 0.000108) +
    b_t31_tmp * t8 * t9 * 14.76973338424709) - t273_tmp * 8.0E-6) - d22 * t20 *
    0.00024) - t274_tmp * 8.0E-6) - d23 * t20 * 0.00024) + t70_tmp * 92.32268) +
                    d_Crow_tmp * 0.00024) + t71_tmp * 92.32268) + d26 * t19 *
                  0.00024) + d28 * t20 * 0.00024) + d29 * t20 * 0.00024) -
               t95_tmp * t21 * 0.00048) - t96_tmp * t21 * 0.00048) - d30 * t21 *
             29.53946676849419) - e_Crow_tmp * 29.03503916849419) - b_t152_tmp *
           3.78522988) - t248_tmp * t20 * 1.6E-5) + t13 * t20 * 0.1686888) +
        Crow_tmp * t19 * 29.53946676849419) + b_Crow_tmp * t18 *
       29.53946676849419) - d_Crow_tmp * t19 * 0.00048) + e_Crow_tmp * t21 *
     29.53946676849419) + t10 * t9 * 0.00048;
  d5 = t4 * t18;
  d6 = t4 * t19;
  d7 = t148_tmp * t9;
  d8 = in3[3] * t2 * t7;
  d9 = d33 * t5;
  d10 = t76_tmp_tmp * t9;
  d11 = t77_tmp_tmp * t9;
  d12 = d7 * t18;
  d13 = d7 * t19;
  d2 *= t9;
  t32_tmp = d12 * t19;
  Crow_tmp = t139_tmp_tmp * t9;
  b_Crow_tmp = t140_tmp_tmp * t9;
  d_Crow_tmp = t248_tmp * t9;
  Crow[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d
    * -46.16134 + t97_tmp * 0.00012) + t88_tmp * 0.00012) - d1 * 0.00012) + t4 *
    t27) + t4 * t43) + t4 * t44) + t4 * t161) + t4 * t162) + t4 * t163) + t4 *
    t164) + t4 * t289) + t4 * t304) + t4 * t305) - d8 * 0.00012) - d44 * 0.00012)
    + t141_tmp * 16.156469) - d41 * 16.156469) + d3 * 46.16134) + d4 * 46.16134)
    - b_t97_tmp * 0.00024) + d14 * 0.00012) - t97_tmp * t21 * 0.00024) + d15 *
    0.00012) - t88_tmp * t21 * 0.00024) + d1 * t21 * 0.00024) + d5 * t100) + d6 *
    t100) + d5 * t148) + d6 * t148) + d5 * t165) + d6 * t165) - t107_tmp_tmp *
    14.76973338424709) + t106_tmp * 0.102001) - t49_tmp * t9 * 16.156469) -
    t108_tmp_tmp * 14.76973338424709) + d9 * 53.085541) - d10 * 1.89261494) -
    d25 * 0.0421722) - t255_tmp * 14.871734384247089) - t256_tmp *
    14.871734384247089) - t39_tmp * 4.0E-6) - b_t40_tmp * 4.0E-6) - d11 *
    1.89261494) - t257_tmp * 14.871734384247089) - t258_tmp_tmp *
    14.871734384247089) - t109_tmp_tmp_tmp * 0.102001) - d2 * 4.0E-6) + t57_tmp *
    t9 * 16.156469) + t279_tmp_tmp * t9 * 0.0421722) + t280_tmp_tmp * t9 *
    0.0421722) - t28_tmp * t8 * t9 * 53.085541) - t30_tmp * t9 * t18 * 53.085541)
    + d12 * 14.76973338424709) + d13 * 14.76973338424709) + d8 * t21 * 0.00024)
    + d44 * t21 * 0.00024) - d7 * t20 * 14.76973338424709) - d16 * 92.32268) -
    d17 * 0.00024) + b_t97_tmp * t21 * 0.00048) - d14 * t21 * 0.00024) - d15 *
    t21 * 0.00024) + t29_tmp * t4 * t5 * t6 * 46.16134) + t27_tmp_tmp * t3 * t4 *
    t5 * 46.16134) + b_t98_tmp_tmp * 0.00024) - t139_tmp_tmp_tmp * t7 *
    16.156469) - t140_tmp_tmp_tmp * t6 * 16.156469) + t11 * 0.00012) - t314_tmp *
    0.0421722) + t140_tmp_tmp * 46.16134) - b_t63_tmp * 4.0E-6) - b_t64_tmp *
    4.0E-6) + t12 * 0.00012) - t65_tmp * 4.0E-6) - b_t66_tmp * 4.0E-6) +
    b_t109_tmp * 4.0E-6) - d9 * t7 * 1.89261494) - d19 * t5 * t6 * 1.89261494) -
    b_t28_tmp * t9 * 4.0E-6) + b_t106_tmp * 4.0E-6) + c_Crow_tmp * t9 *
    53.085541) - d24 * 0.0421722) - b_t141_tmp * 46.16134) - d20 * 0.00012) -
    t27_tmp_tmp * t5 * t7 * t9 * 14.76973338424709) - d18 * t5 * t6 * t9 *
    14.76973338424709) - t28_tmp_tmp * t8 * t9 * 46.16134) + b_t322_tmp *
    0.0421722) - d27 * 0.0421722) - d21 * 0.00012) + t279_tmp * t9 * 1.89261494)
    + t280_tmp * t9 * 1.89261494) + t32_tmp_tmp * t9 * 4.0E-6) + d31 *
    29.53946676849419) - t304_tmp * t20 * 0.0421722) + d32 * 29.53946676849419)
    - t305_tmp * t20 * 0.0421722) + t107_tmp_tmp * t21 * 29.53946676849419) -
    t278_tmp_tmp * t7 * t18 * 53.085541) + t134_tmp_tmp * t8 * t9 * 46.16134) +
    t108_tmp_tmp * t21 * 29.53946676849419) - t84_tmp * t9 * t20 * 4.0E-6) + d10
    * t19 * 3.78522988) - t85_tmp * t9 * t20 * 4.0E-6) + d11 * t18 * 3.78522988)
    + t255_tmp * t21 * 14.76973338424709) + t256_tmp * t21 * 14.76973338424709)
    + t306_tmp * t20 * 0.0421722) + t257_tmp * t21 * 14.76973338424709) +
    t258_tmp_tmp * t21 * 14.76973338424709) + t307_tmp_tmp * t20 * 0.0421722) -
    t109_tmp_tmp_tmp * t21 * 14.76973338424709) + b_t86_tmp_tmp * t9 * t20 *
    4.0E-6) + t87_tmp_tmp * t9 * t20 * 4.0E-6) - t278_tmp_tmp * t18 * t19 *
    3.78522988) - t32_tmp * 29.53946676849419) + d12 * t20 * 14.76973338424709)
    + d13 * t20 * 14.76973338424709) + d17 * t21 * 0.00048) - t333_tmp_tmp *
    53.085541) + Crow_tmp * 0.00048) + t13 * 92.32268) + b_Crow_tmp * 0.00048) +
    t102_tmp * t8 * t9 * 0.00024) + t103_tmp * t8 * t9 * 0.00024) + t104_tmp *
    t8 * t9 * 0.00024) + t105_tmp * t8 * t9 * 0.00024) - b_t141_tmp * t9 *
    0.00024) - f_Crow_tmp * 92.32268) - g_Crow_tmp * 92.32268) + t152_tmp *
    0.00024) - b_t98_tmp_tmp * t21 * 0.00048) - t11 * t21 * 0.00024) -
                       b_t109_tmp * t19 * 8.0E-6) - t12 * t21 * 0.00024) -
                     b_t106_tmp * t18 * 8.0E-6) + t70_tmp * 0.0843444) + t71_tmp
                   * 0.0843444) - d31 * t21 * 59.07893353698838) - d32 * t21 *
                 59.07893353698838) - d25 * t18 * t19 * 0.0843444) - d2 * t18 *
               t19 * 8.0E-6) - t32_tmp * t20 * 29.53946676849419) + t333_tmp *
             3.78522988) + d_Crow_tmp * 29.53946676849419) - t72_tmp * t9 *
           14.76973338424709) - t73_tmp * t9 * 14.76973338424709) - Crow_tmp *
         t19 * 0.00096) - b_Crow_tmp * t18 * 0.00096) - t152_tmp * t21 * 0.00048)
      + t10 * 0.0843444) + e_Crow_tmp * t9 * 8.0E-6) + d_Crow_tmp * t20 *
    29.53946676849419;
  Crow[5] = 0.0;
}

static void b_coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
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
  real_T t32_tmp_tmp;
  real_T t32_tmp;
  real_T b_t32_tmp;
  real_T t33_tmp_tmp;
  real_T t33_tmp;
  real_T b_t33_tmp;
  real_T t38_tmp;
  real_T t38;
  real_T t39_tmp;
  real_T t39;
  real_T t44_tmp;
  real_T b_t44_tmp;
  real_T t49_tmp;
  real_T b_t49_tmp;
  real_T t50_tmp;
  real_T t50_tmp_tmp_tmp;
  real_T t50_tmp_tmp;
  real_T b_t50_tmp;
  real_T t52_tmp_tmp;
  real_T t52_tmp;
  real_T b_t52_tmp;
  real_T t53_tmp;
  real_T t53_tmp_tmp;
  real_T b_t53_tmp;
  real_T c_t53_tmp;
  real_T t54_tmp;
  real_T t55_tmp;
  real_T t60_tmp;
  real_T t61_tmp;
  real_T b_t61_tmp;
  real_T t68_tmp_tmp;
  real_T b_t68_tmp_tmp;
  real_T t69_tmp_tmp;
  real_T b_t69_tmp_tmp;
  real_T t74_tmp;
  real_T b_t74_tmp;
  real_T t75_tmp;
  real_T b_t75_tmp;
  real_T t82_tmp;
  real_T t83_tmp;
  real_T t94_tmp;
  real_T t106_tmp;
  real_T t107_tmp;
  real_T t30_tmp;
  real_T t31_tmp;
  real_T b_t31_tmp;
  real_T t99_tmp;
  real_T t102_tmp;
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
  /*     Coriolis matrix row number 4 of 6 for Quantec Ultra SE 125.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  /*     02-Mar-2021 15:31:02 */
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
  t32_tmp_tmp = in3[0] * t2;
  t32_tmp = t32_tmp_tmp * t3;
  b_t32_tmp = t32_tmp * t8;
  t33_tmp_tmp = in3[0] * t6;
  t33_tmp = t33_tmp_tmp * t7;
  b_t33_tmp = t33_tmp * t8;
  t38_tmp = in3[1] * t5;
  t38 = t38_tmp * 4.0E-6;
  t39_tmp = in3[2] * t5;
  t39 = t39_tmp * 4.0E-6;
  t44_tmp = in3[4] * t4;
  b_t44_tmp = t44_tmp * t5;
  t49_tmp = t32_tmp * t4;
  b_t49_tmp = t49_tmp * t8;
  t50_tmp = in3[0] * t4;
  t50_tmp_tmp_tmp = t50_tmp * t6;
  t50_tmp_tmp = t50_tmp_tmp_tmp * t7;
  b_t50_tmp = t50_tmp_tmp * t8;
  t52_tmp_tmp = t32_tmp_tmp * t7;
  t52_tmp = t52_tmp_tmp * t8;
  b_t52_tmp = t52_tmp * t9;
  t53_tmp = in3[0] * t3;
  t53_tmp_tmp = t53_tmp * t6;
  b_t53_tmp = t53_tmp_tmp * t8;
  c_t53_tmp = b_t53_tmp * t9;
  t54_tmp = in3[1] * t9;
  t55_tmp = in3[2] * t9;
  t60_tmp = t49_tmp * t5;
  t61_tmp = t50_tmp * t5;
  b_t61_tmp = t61_tmp * t6 * t7;
  t68_tmp_tmp = t32_tmp_tmp * t4;
  b_t68_tmp_tmp = t68_tmp_tmp * t7;
  t69_tmp_tmp = t53_tmp * t4;
  b_t69_tmp_tmp = t69_tmp_tmp * t6;
  t74_tmp = t32_tmp_tmp * t5;
  b_t74_tmp = t74_tmp * t7;
  t75_tmp = t53_tmp * t5;
  b_t75_tmp = t75_tmp * t6;
  t82_tmp = in3[1] * t8;
  t83_tmp = in3[2] * t8;
  t94_tmp = in3[4] * t8;
  t106_tmp = t68_tmp_tmp * t5;
  t107_tmp = t69_tmp_tmp * t5;
  t30_tmp = t32_tmp * t5;
  t31_tmp = in3[0] * t5;
  b_t31_tmp = t31_tmp * t6 * t7;
  t99_tmp = t32_tmp * t14;
  t102_tmp = t33_tmp * t14;
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
  d14 = t50_tmp * t12;
  d15 = t31_tmp * t12;
  d16 = t31_tmp * t13;
  d17 = d1 * t12;
  d18 = d1 * t13;
  d19 = d2 * t13;
  d20 = t68_tmp_tmp * t6;
  d21 = in3[1] * t3;
  d22 = in3[2] * t3;
  d23 = t50_tmp * t8;
  d24 = in3[0] * t8 * t9;
  d25 = d8 * t4;
  d26 = d5 * t4;
  d27 = d26 * t7;
  d28 = d21 * t4;
  d29 = d22 * t4;
  d30 = d29 * t6;
  d31 = t32_tmp_tmp * t6 * t8;
  d32 = t20_tmp * t6;
  d33 = t53_tmp * t7 * t8;
  d34 = d5 * t7 * t8;
  d35 = d21 * t6 * t8;
  d36 = d6 * t7 * t8;
  d37 = d22 * t6 * t8;
  d38 = d28 * t6;
  d39 = d6 * t4;
  d40 = d39 * t7;
  d41 = d8 * t14;
  d42 = d7 * t14;
  d43 = t44_tmp * t6 * t7;
  d44 = d23 * t12;
  d45 = d23 * t13;
  d46 = d24 * t12;
  d47 = d9 * t14;
  d48 = d15 * t13;
  d49 = d10 * t14;
  d50 = d17 * t13;
  d51 = t49_tmp * t6;
  d52 = t106_tmp * t6;
  d53 = t107_tmp * t7;
  d54 = t32_tmp * t6 * t7;
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
  d65 = t61_tmp * t8 * t9;
  d66 = d33 * t9;
  d67 = d31 * t13;
  d68 = d33 * t12;
  d69 = d44 * t13;
  t74_tmp = t74_tmp * t6 * t8 * t9;
  t69_tmp_tmp = t75_tmp * t7 * t8 * t9;
  t68_tmp_tmp = d65 * t12;
  t32_tmp_tmp = in3[0] * t2 * t3 * t4 * t6 * t7 * t8;
  t53_tmp = d58 * t4;
  t61_tmp = t30_tmp * t6 * t7;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((in3[0] * -2.7E-5 + t31_tmp * 4.0E-6) - d1 * 0.0421722) + d2 *
    2.7E-5) + d3 * 2.7E-5) + in3[0] * t14 * 5.4E-5) - in3[0] * t16 *
    7.2587597921235467) - d8 * 0.4649263) - d7 * 0.4649263) - d11 * 0.00012) -
    d13 * 0.00012) + d9 * 0.4649263) - d * t8 * 2.93549) + d10 * 0.4649263) -
    d14 * 0.1046566) - t50_tmp * t13 * 0.1046566) - d15 * 4.0E-6) - d16 * 4.0E-6)
    - t31_tmp * t14 * 8.0E-6) + d17 * 0.0421722) + d18 * 0.0421722) + d1 * t14 *
    0.0843444) - d19 * 5.4E-5) - d2 * t14 * 5.4E-5) - d3 * t14 * 5.4E-5) - d20 *
    2.5327982) + b_t68_tmp_tmp * 0.89341) + b_t69_tmp_tmp * 0.89341) - t53_tmp *
    14.871734384247089) - d59 * 2.5327982) - in3[1] * t2 * t3 * t8 * 0.1046566)
    - d27 * 0.000116) - d38 * 0.000116) - d7 * t8 * 0.1046566) - d40 * 0.000116)
    - d30 * 0.000116) + d31 * 0.000116) + d33 * 0.000116) - d34 * 2.5327982) -
    d35 * 2.5327982) - d36 * 2.5327982) - d37 * 2.5327982) - d41 *
    14.51751958424709) - d32 * t9 * 53.085541) - d42 * 14.51751958424709) + d43 *
    14.871734384247089) + d9 * t8 * 0.1046566) + t50_tmp * t7 * t12 * 2.93549) +
    d10 * t8 * 0.1046566) + d44 * 14.51751958424709) + d45 * 14.51751958424709)
    + d23 * t15 * 14.76973338424709) + d47 * 14.51751958424709) + d11 * t15 *
    0.00024) + d13 * t15 * 0.00024) + d14 * t13 * 0.2093132) + d46 * 1.89261494)
    + d49 * 14.51751958424709) + d48 * 8.0E-6) + d24 * t13 * 1.89261494) + d15 *
    t14 * 8.0E-6) + d16 * t14 * 8.0E-6) - d50 * 0.0843444) - d17 * t14 *
    0.0843444) - d18 * t14 * 0.0843444) + d19 * t14 * 0.000108) + d51 * 2.93549)
    - d52 * 0.0421722) + d54 * 5.4E-5) - d25 * t8 * 5.4E-5) - d53 * 0.0421722) -
    d25 * t9 * 1.89261494) - d56 * 5.4E-5) - d55 * t9 * 1.89261494) - d57 *
    4.0E-6) + d58 * t5 * t8 * 4.0E-6) - d59 * t9 * 4.0E-6) - d27 * t9 * 46.16134)
    - d5 * t5 * t7 * t8 * 0.0421722) - d38 * t9 * 46.16134) - d21 * t5 * t6 * t8
    * 0.0421722) - d6 * t4 * t7 * t9 * 46.16134) - d6 * t5 * t7 * t8 * 0.0421722)
    - d30 * t9 * 46.16134) - d22 * t5 * t6 * t8 * 0.0421722) + d20 * t13 *
    5.0655964) + d64 * 46.16134) - b_t52_tmp * 16.156469) + d59 * t12 *
    5.0655964) - c_t53_tmp * 16.156469) + d65 * 0.00024) + d62 * 5.4E-5) - d58 *
    t8 * t9 * 0.0421722) + d66 * 46.16134) - d34 * t9 * 4.0E-6) - d35 * t9 *
    4.0E-6) + d60 * t9 * 1.89261494) + d63 * 5.4E-5) - d4 * t5 * t7 * t9 *
    14.76973338424709) - d12 * t5 * t6 * t9 * 14.76973338424709) - d36 * t9 *
    4.0E-6) - d37 * t9 * 4.0E-6) + d61 * t9 * 1.89261494) + t53_tmp * t15 *
    14.76973338424709) - d67 * 0.000232) + d27 * t15 * 0.00024) + d38 * t15 *
    0.00024) - d68 * 0.000232) + d40 * t15 * 0.00024) + d30 * t15 * 0.00024) -
    t18_tmp * t6 * t7 * t8 * 4.0E-6) - d31 * t15 * 0.00024) - d33 * t15 *
    0.00024) + in3[4] * t6 * t7 * t8 * t9 * 0.0421722) + d41 * t15 *
    14.76973338424709) - in3[0] * t7 * t8 * t9 * t12 * 53.085541) + d42 * t15 *
    14.76973338424709) - d43 * t15 * 14.76973338424709) - d69 *
    29.03503916849419) - d44 * t15 * 14.76973338424709) - d45 * t15 *
    14.76973338424709) - d46 * t13 * 3.78522988) - d47 * t15 * 14.76973338424709)
    - d48 * t14 * 1.6E-5) - d49 * t15 * 14.76973338424709) + d50 * t14 *
    0.1686888) - d51 * t7 * 0.2093132) - t61_tmp * 8.0E-6) + d25 * t5 * t8 *
    8.0E-6) + d55 * t5 * t8 * 8.0E-6) + d54 * t9 * 0.0843444) - d5 * t3 * t4 *
    t8 * t9 * 0.0843444) + t53_tmp * t5 * t9 * 0.00024) - in3[0] * t2 * t3 * t6 *
    t8 * t9 * 53.085541) - d26 * t5 * t7 * t9 * 14.76973338424709) - d28 * t5 *
    t6 * t9 * 14.76973338424709) - d56 * t9 * 0.0843444) - d39 * t5 * t7 * t9 *
    14.76973338424709) - d29 * t5 * t6 * t9 * 14.76973338424709) + d52 * t13 *
    0.0843444) + t74_tmp * 14.76973338424709) + d53 * t12 * 0.0843444) -
    b_t20_tmp * t6 * t7 * t8 * 8.0E-6) - d54 * t14 * 0.000108) + t69_tmp_tmp *
    14.76973338424709) - b_t21_tmp * t6 * t7 * t8 * 8.0E-6) + d57 * t13 * 8.0E-6)
    + d8 * t5 * t9 * t14 * 0.00024) + in3[0] * t3 * t4 * t7 * t9 * t12 * 8.0E-6)
    + d62 * t9 * 0.0843444) + d7 * t5 * t9 * t14 * 0.00024) - b_t44_tmp * t6 *
                       t7 * t9 * 0.00024) + d63 * t9 * 0.0843444) - d64 * t13 *
                     92.32268) - t68_tmp_tmp * 0.00024) - d66 * t12 * 92.32268)
                  - d65 * t13 * 0.00024) - t38_tmp * t6 * t7 * t9 * t14 *
                 0.00024) - t39_tmp * t6 * t7 * t9 * t14 * 0.00024) + d67 * t15 *
               0.00048) + d68 * t15 * 0.00048) + d69 * t15 * 29.53946676849419)
            + t32_tmp_tmp * 29.03503916849419) + d54 * t8 * t9 * 3.78522988) +
          t61_tmp * t14 * 1.6E-5) - in3[0] * t2 * t3 * t6 * t7 * t9 * t14 *
         0.1686888) - t74_tmp * t13 * 29.53946676849419) - t69_tmp_tmp * t12 *
       29.53946676849419) + t68_tmp_tmp * t13 * 0.00048) - t32_tmp_tmp * t15 *
     29.53946676849419) - t60_tmp * t6 * t7 * t8 * t9 * 0.00048;
  t74_tmp = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((-(t18_tmp *
    t8 * t9 * 0.00024) + -(b_t20_tmp * t8 * t9 * 0.00024)) + -(b_t21_tmp * t8 *
    t9 * 0.00024)) + b_t68_tmp_tmp * t15 * 0.00024) + b_t69_tmp_tmp * t15 *
    0.00024) + -(t20_tmp * 0.1046566)) + -(t21_tmp * 0.1046566)) + t30_tmp * t9 *
    t14 * 0.00024) + b_t33_tmp * 0.1046566) + -(b_t31_tmp * t9 * t14 * 0.00024))
    + -(b_t32_tmp * 0.1046566)) + in3[1] * 2.7E-5) + in3[2] * 2.7E-5) + -t38) +
    -t39) + b_t44_tmp * 4.0E-6) + -(in3[1] * t14 * 5.4E-5)) + -(in3[2] * t14 *
    5.4E-5)) + t38_tmp * t14 * 8.0E-6) + t39_tmp * t14 * 8.0E-6) + b_t50_tmp *
    5.4E-5) + -(b_t49_tmp * 5.4E-5)) + t54_tmp * 0.0421722) + t55_tmp *
    0.0421722) + -(b_t52_tmp * 4.0E-6)) + -(c_t53_tmp * 4.0E-6)) + t33_tmp *
    0.4649263) + t60_tmp * t8 * 8.0E-6) + -(t32_tmp * 0.4649263)) + -(b_t61_tmp *
    t8 * 8.0E-6)) + -(t44_tmp * t9 * 0.0421722)) + -(t54_tmp * t14 * 0.0843444))
    + -(t55_tmp * t14 * 0.0843444)) + -(b_t68_tmp_tmp * t9 * 46.16134)) +
    -(b_t69_tmp_tmp * t9 * 46.16134)) + -(b_t68_tmp_tmp * 0.000116)) +
    -(b_t69_tmp_tmp * 0.000116)) + t82_tmp * t9 * 1.89261494) + t83_tmp * t9 *
    1.89261494) + -(b_t74_tmp * t8 * 0.0421722)) + -(b_t75_tmp * t8 * 0.0421722))
    + -(t52_tmp * 2.5327982)) + -(b_t53_tmp * 2.5327982)) + b_t50_tmp * t9 *
    0.0843444) + -(b_t49_tmp * t9 * 0.0843444)) + t50_tmp_tmp * t9 * 1.89261494)
                        + -(t49_tmp * t9 * 1.89261494)) + t94_tmp *
                       14.871734384247089) + in3[1] * t16 * 7.2587597921235467)
                     + in3[2] * t16 * 7.2587597921235467) + -(t94_tmp * t15 *
    14.76973338424709)) + t102_tmp * 14.51751958424709) + -(t99_tmp *
    14.51751958424709)) + -(t20_tmp * t8 * t15 * 14.76973338424709)) + -(t21_tmp
    * t8 * t15 * 14.76973338424709)) + -(t106_tmp * t7 * t9 * 14.76973338424709))
              + -(t107_tmp * t6 * t9 * 14.76973338424709)) + t99_tmp * t15 *
             14.76973338424709) + -(t102_tmp * t15 * 14.76973338424709);
  Crow[1] = (((t74_tmp + t20_tmp * t7 * 2.93549) - t33_tmp_tmp * t8 * 2.93549) -
             t50_tmp_tmp_tmp * t9 * 53.085541) - in3[1] * t7 * t8 * t9 *
    53.085541;
  Crow[2] = t74_tmp;
  Crow[3] = in3[4] * t17 * 7.3848666921235466 - in3[4] * muDoubleScalarCos(t11) *
    0.00012;
  Crow[4] = (((((((((((((((((((((((((((((in3[3] * 0.00012 + t82_tmp *
    14.871734384247089) + t18_tmp * 4.0E-6) + t83_tmp * 14.871734384247089) -
    in3[4] * t9 * 0.0421722) - in3[3] * t15 * 0.00024) + in3[3] * t17 *
    7.3848666921235466) + t4 * t38) + t4 * t39) - t52_tmp_tmp * 0.00012) -
    t53_tmp_tmp * 0.00012) - t20_tmp * t9 * 0.0421722) - t21_tmp * t9 *
    0.0421722) - t82_tmp * t15 * 14.76973338424709) - t83_tmp * t15 *
    14.76973338424709) - t49_tmp * 14.871734384247089) + t50_tmp_tmp *
    14.871734384247089) - t38_tmp * t8 * t9 * 0.00024) + t52_tmp_tmp * t15 *
                        0.00024) + t53_tmp_tmp * t15 * 0.00024) - t39_tmp * t8 *
                      t9 * 0.00024) + t30_tmp * t8 * 4.0E-6) - b_t32_tmp * t9 *
                    0.0421722) - b_t74_tmp * t9 * 14.76973338424709) - b_t75_tmp
                  * t9 * 14.76973338424709) + t49_tmp * t15 * 14.76973338424709)
                - b_t31_tmp * t8 * 4.0E-6) + b_t33_tmp * t9 * 0.0421722) -
              t50_tmp_tmp * t15 * 14.76973338424709) + t60_tmp * t9 * 0.00024) -
    b_t61_tmp * t9 * 0.00024;
  Crow[5] = 0.0;
}

void coriolis_125(const real_T q[6], const real_T qd[6], real_T C[36])
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
  real_T t33_tmp;
  real_T t61_tmp_tmp;
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
  real_T t43_tmp;
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
  real_T t32_tmp;
  real_T t33_tmp_tmp;
  real_T d57;
  real_T d58;
  real_T b_t33_tmp;
  real_T d59;
  real_T t39_tmp_tmp;
  real_T t39_tmp;
  real_T t40_tmp_tmp;
  real_T t40_tmp;
  real_T b_t43_tmp;
  real_T t47_tmp_tmp;
  real_T t47_tmp;
  real_T t48_tmp;
  real_T t48;
  real_T d60;
  real_T t58;
  real_T t25;
  real_T t30;
  real_T e_C_tmp;
  real_T d61;
  real_T t16;
  real_T t17;
  real_T f_C_tmp;
  real_T t18;
  real_T g_C_tmp;
  real_T t19;
  real_T d62;
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
  real_T t45_tmp;
  real_T t46_tmp;
  real_T eb_C_tmp;
  real_T fb_C_tmp;
  real_T gb_C_tmp;
  real_T k_C_tmp_tmp;
  real_T hb_C_tmp;
  real_T ib_C_tmp;
  real_T l_C_tmp_tmp;
  real_T jb_C_tmp;
  real_T m_C_tmp_tmp;
  real_T kb_C_tmp;
  real_T lb_C_tmp;

  /*  CORIOLIS - Coriolis matrix for the Quantec Ultra SE 125 arm  */
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
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  b_coriolis_row_1(q, qd, b_dv);
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
  /*     Coriolis matrix row number 2 of 6 for Quantec Ultra SE 125.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  /*     02-Mar-2021 15:30:52 */
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
  t33_tmp = qd[0] * t3_tmp;
  t61_tmp_tmp = qd[0] * t5_tmp;
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
  d9 = t33_tmp * t8_tmp;
  d10 = t61_tmp_tmp * t7_tmp;
  d11 = d2 * t7_tmp;
  d12 = t30_tmp * t9_tmp;
  d13 = t61_tmp_tmp * t8_tmp;
  d14 = t30_tmp * t12_tmp;
  d15 = d1 * t9_tmp;
  d16 = t61_tmp_tmp * t12_tmp;
  d17 = t30_tmp * t13_tmp;
  d18 = t27_tmp * t7_tmp;
  d19 = t33_tmp * t6_tmp;
  d20 = qd[0] * muDoubleScalarSin(q[1] * 2.0);
  d21 = qd[0] * muDoubleScalarSin(q[2] * 2.0) * 102.065361815;
  d22 = d1 * t12_tmp;
  d23 = t27_tmp * t6_tmp;
  d24 = qd[4] * t2_tmp;
  d25 = d24 * t3_tmp;
  d26 = qd[3] * t3_tmp;
  d27 = t33_tmp * t7_tmp;
  d28 = qd[4] * t5_tmp;
  d29 = d28 * t6_tmp;
  d30 = t33_tmp * t4_tmp;
  d31 = d25 * t5_tmp;
  d32 = d23 * t7_tmp;
  d33 = t33_tmp * t5_tmp;
  d34 = d33 * t7_tmp;
  d35 = d6 * t4_tmp;
  d36 = d35 * t7_tmp;
  d37 = d26 * t4_tmp;
  d38 = d37 * t6_tmp;
  d39 = qd[4] * t3_tmp;
  d40 = d30 * t9_tmp;
  t43_tmp = qd[3] * t4_tmp;
  d41 = t43_tmp * t6_tmp;
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
  t32_tmp = d14 * t13_tmp;
  t33_tmp_tmp = d11 * t14_tmp;
  d57 = d8 * t8_tmp;
  d58 = d5 * t5_tmp;
  b_t33_tmp = d5 * t4_tmp;
  d59 = b_t33_tmp * t9_tmp;
  t39_tmp_tmp = d5 * t6_tmp;
  t39_tmp = t39_tmp_tmp * t7_tmp;
  t40_tmp_tmp = t27_tmp * t4_tmp;
  t40_tmp = d30 * t7_tmp;
  b_t43_tmp = d41 * t7_tmp;
  t47_tmp_tmp = t40_tmp * t8_tmp;
  t47_tmp = t27_tmp * t5_tmp;
  t48_tmp = t47_tmp * t6_tmp;
  t40_tmp *= t9_tmp;
  t48 = d24 * t5_tmp * t7_tmp * t8_tmp;
  d60 = d39 * t5_tmp;
  t58 = d60 * t6_tmp * t8_tmp;
  t25 = d34 * t9_tmp;
  t30 = b_t43_tmp * t8_tmp;
  e_C_tmp = d47 * t12_tmp;
  d61 = qd[4] * t4_tmp;
  t16 = d61 * t6_tmp * t7_tmp * t8_tmp;
  t17 = d50 * t14_tmp;
  f_C_tmp = d51 * t14_tmp;
  t18 = t30_tmp * t6_tmp;
  g_C_tmp = t18 * t7_tmp;
  t19 = g_C_tmp * t9_tmp;
  d62 = d26 * t5_tmp;
  C_tmp_tmp = qd[0] * t2_tmp * t4_tmp * t6_tmp;
  b_C_tmp_tmp = C_tmp_tmp * t8_tmp;
  h_C_tmp = t48_tmp * t9_tmp;
  c_C_tmp_tmp = b_t33_tmp * t6_tmp * t7_tmp;
  i_C_tmp = b_C_tmp_tmp * t9_tmp;
  j_C_tmp = t47_tmp_tmp * t9_tmp;
  k_C_tmp = h_C_tmp * t13_tmp;
  l_C_tmp = t25 * t12_tmp;
  d_C_tmp_tmp = qd[3] * t5_tmp;
  m_C_tmp = d61 * t5_tmp;
  n_C_tmp = t43_tmp * t5_tmp;
  o_C_tmp = b_t33_tmp * t5_tmp;
  e_C_tmp_tmp = t40_tmp_tmp * t5_tmp;
  p_C_tmp = d7 * t4_tmp;
  q_C_tmp = d58 * t6_tmp;
  r_C_tmp = e_C_tmp_tmp * t6_tmp * t8_tmp;
  s_C_tmp = t47_tmp * t7_tmp;
  t_C_tmp = d5 * t8_tmp;
  u_C_tmp = C_tmp_tmp * t7_tmp * t9_tmp;
  v_C_tmp = qd[0] * t2_tmp * t4_tmp * t6_tmp * t9_tmp;
  w_C_tmp = qd[4] * t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  x_C_tmp = qd[3] * t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  y_C_tmp = qd[0] * t2_tmp * t3_tmp * t5_tmp * t6_tmp * t7_tmp * t8_tmp *
    0.1686888;
  ab_C_tmp = qd[4] * t2_tmp * t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp *
    14.76973338424709;
  bb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t7_tmp * t8_tmp;
  C[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((qd[0] * 8.9267942 + d20 * 180.059165485) - d21) -
    t27_tmp * 0.118692) - t33_tmp * 12.6861905) + t30_tmp * 0.000116) +
    t61_tmp_tmp * 1.89261494) + d * 179.231297) - d3 * 241.025234) + d1 *
    2.5327982) - d4 * 17.8535884) - qd[0] * t13_tmp * 16.69439256) + d5 *
    3.8610145) + d7 * 0.4649263) + d18 * 73.355506) + d19 * 73.355506) - d9 *
    2.93549) - d10 * 53.085541) + d12 * 46.16134) + d13 * 0.0421722) - d8 *
    3.8610145) + t33_tmp * t12_tmp * 25.372381) - d14 * 0.000232) - d11 *
    0.4649263) - d17 * 0.000232) - d16 * 3.78522988) + d15 * 4.0E-6) + d2 *
    t8_tmp * 2.93549) - t61_tmp_tmp * t13_tmp * 3.78522988) - t30_tmp * t15_tmp *
    0.00024) + d3 * t12_tmp * 482.050468) - d22 * 5.0655964) - d1 * t13_tmp *
    5.0655964) + d4 * t13_tmp * 33.38878512) + t39_tmp_tmp * 482.050468) +
    t_C_tmp * 0.89341) - t27_tmp * t5_tmp * t6_tmp * 92.32268) + s_C_tmp *
    16.156469) + qd[0] * t3_tmp * t5_tmp * t6_tmp * 16.156469) + d31 * 0.0421722)
    - d32 * 25.372381) - d34 * 92.32268) + d42 * 0.2093132) - d40 * 53.085541) +
    d7 * t8_tmp * 0.1046566) + d36 * 0.000116) + d38 * 0.000116) + d45 *
    0.2093132) + d47 * 14.76973338424709) + d49 * 4.0E-6) + d43 * 2.5327982) +
    d44 * 2.5327982) + d50 * 408.26144726) - d57 * 0.89341) + d52 * 0.102001) +
    d53 * 0.102001) + d54 * 14.51751958424709) + d51 * 408.26144726) + d55 *
    14.51751958424709) + d41 * t9_tmp * 53.085541) - d48 * 0.0421722) - d23 *
    t15_tmp * 14.76973338424709) + d9 * t12_tmp * 5.87098) + d29 * t8_tmp *
    53.085541) + c_C_tmp * 14.51751958424709) + d10 * t12_tmp * 106.171082) -
    d11 * t8_tmp * 0.1046566) - d27 * t15_tmp * 14.76973338424709) - C_tmp *
    92.32268) - b_C_tmp * 0.0843444) - d12 * t13_tmp * 92.32268) - d13 * t13_tmp
    * 0.0843444) - d56 * 4.0E-6) + t32_tmp * 0.000464) - d_C_tmp * 8.0E-6) + d16
    * t13_tmp * 7.57045976) - d15 * t13_tmp * 8.0E-6) - t33_tmp_tmp *
    14.51751958424709) + d14 * t15_tmp * 0.00048) + d17 * t15_tmp * 0.00048) +
    d22 * t13_tmp * 10.1311928) + q_C_tmp * 106.171082) + d59 * 16.156469) -
    t39_tmp * 33.38878512) + t40_tmp_tmp * t6_tmp * t8_tmp * 5.4E-5) + p_C_tmp *
    t8_tmp * 5.4E-5) + t40_tmp_tmp * t6_tmp * t9_tmp * 3.78522988) + p_C_tmp *
    t9_tmp * 1.89261494) + d25 * t4_tmp * t8_tmp * 0.00012) - t27_tmp * t5_tmp *
    t6_tmp * t9_tmp * 0.00024) + t47_tmp_tmp * 5.4E-5) + d31 * t8_tmp *
    1.89261494) - d32 * t8_tmp * 5.87098) + t40_tmp * 3.78522988) - t25 *
    0.00024) + d36 * t9_tmp * 46.16134) + d6 * t5_tmp * t7_tmp * t8_tmp *
    0.0421722) + d38 * t9_tmp * 46.16134) + d62 * t6_tmp * t8_tmp * 0.0421722) +
    t48_tmp * t13_tmp * 184.64536) - t19 * 16.156469) + t48 * 46.16134) + t58 *
    46.16134) + d34 * t12_tmp * 184.64536) + d40 * t12_tmp * 106.171082) - t30 *
    5.4E-5) - d31 * t14_tmp * 0.0421722) - d42 * t13_tmp * 0.4186264) + d43 *
    t9_tmp * 4.0E-6) + d44 * t9_tmp * 4.0E-6) - b_t43_tmp * t9_tmp * 1.89261494)
    - t16 * 0.00012) - d45 * t12_tmp * 0.4186264) - e_C_tmp * 29.53946676849419)
    - d48 * t8_tmp * 1.89261494) - d47 * t13_tmp * 29.53946676849419) - d36 *
    t15_tmp * 0.00024) - d38 * t15_tmp * 0.00024) - d49 * t14_tmp * 4.0E-6) -
    t17 * 29.03503916849419) + d50 * t15_tmp * 29.53946676849419) - f_C_tmp *
    29.03503916849419) + d52 * t15_tmp * 14.76973338424709) + d53 * t15_tmp *
    14.76973338424709) + d48 * t14_tmp * 0.0421722) - d54 * t15_tmp *
    14.76973338424709) + d51 * t15_tmp * 29.53946676849419) - d55 * t15_tmp *
    14.76973338424709) + C_tmp * t13_tmp * 184.64536) + b_C_tmp * t13_tmp *
    0.1686888) - c_C_tmp * t15_tmp * 14.76973338424709) + d56 * t14_tmp * 4.0E-6)
    + d_C_tmp * t13_tmp * 1.6E-5) - t32_tmp * t15_tmp * 0.00096) + t33_tmp_tmp *
    t15_tmp * 14.76973338424709) - c_C_tmp_tmp * 0.000464) - q_C_tmp * t7_tmp *
    7.57045976) - r_C_tmp * 8.0E-6) - p_C_tmp * t5_tmp * t8_tmp * 8.0E-6) -
    t27_tmp * t3_tmp * t6_tmp * t7_tmp * t8_tmp * 10.1311928) - d30 * t5_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - u_C_tmp * 106.171082) + i_C_tmp * 0.0843444) +
    x_C_tmp * t9_tmp * 0.0843444) + d35 * t5_tmp * t7_tmp * t9_tmp *
    14.76973338424709) + d37 * t5_tmp * t6_tmp * t9_tmp * 14.76973338424709) +
    j_C_tmp * 0.0843444) - b_C_tmp_tmp * t13_tmp * 0.000108) + n_C_tmp * t6_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - v_C_tmp * t13_tmp * 7.57045976) - t47_tmp_tmp *
    t12_tmp * 0.000108) + k_C_tmp * 0.00048) - t40_tmp * t12_tmp * 7.57045976) +
    t48 * t9_tmp * 0.00024) + t58 * t9_tmp * 0.00024) - h_C_tmp * t14_tmp *
    0.00024) + l_C_tmp * 0.00048) - d7 * t5_tmp * t9_tmp * t14_tmp * 0.00024) -
    w_C_tmp * t15_tmp * 0.00024) - t30 * t9_tmp * 0.0843444) - t25 * t14_tmp *
                      0.00024) + e_C_tmp * t13_tmp * 59.07893353698838) +
                    d_C_tmp_tmp * t6_tmp * t7_tmp * t9_tmp * t14_tmp * 0.00024)
                   + t16 * t15_tmp * 0.00024) + t17 * t15_tmp *
                  29.53946676849419) + f_C_tmp * t15_tmp * 29.53946676849419) -
                c_C_tmp_tmp * t9_tmp * 184.64536) - y_C_tmp) - t39_tmp * t8_tmp *
              t9_tmp * 1.6E-5) + ab_C_tmp) + c_C_tmp_tmp * t15_tmp * 0.00096) +
           r_C_tmp * t13_tmp * 1.6E-5) + bb_C_tmp * t12_tmp * 1.6E-5) - i_C_tmp *
         t13_tmp * 0.1686888) - j_C_tmp * t12_tmp * 0.1686888) - m_C_tmp *
       t6_tmp * t7_tmp * t8_tmp * t9_tmp * 14.76973338424709) + k_C_tmp *
      t14_tmp * 0.00048) + l_C_tmp * t14_tmp * 0.00048) - o_C_tmp * t6_tmp *
    t7_tmp * t9_tmp * 59.07893353698838;
  C_tmp_tmp = t4_tmp * t5_tmp;
  c_C_tmp_tmp = t4_tmp * t8_tmp;
  h_C_tmp = C_tmp_tmp * t8_tmp;
  i_C_tmp = t5_tmp * t9_tmp;
  j_C_tmp = t8_tmp * t9_tmp * 3.78522988;
  k_C_tmp = t3_tmp * t8_tmp;
  l_C_tmp = t5_tmp * t7_tmp;
  p_C_tmp = t3_tmp * t4_tmp * t9_tmp;
  C[7] = (qd[4] * (((((((((((t9_tmp * 92.32268 - t14_tmp * 0.00024) - t15_tmp *
    0.00048) + t17_tmp * 14.76973338424709) - C_tmp_tmp * 3.78522988) + t3_tmp *
    t9_tmp * 106.171082) + t14_tmp * t15_tmp * 0.00048) + C_tmp_tmp * t7_tmp *
                       106.171082) - h_C_tmp * 0.0843444) - c_C_tmp_tmp * t9_tmp
                     * 8.0E-6) - i_C_tmp * t14_tmp * 29.53946676849419) +
                   0.00024) * -0.5 - qd[2] * ((((t3_tmp * 25.372381 + t7_tmp *
              482.050468) + k_C_tmp * 5.87098) + l_C_tmp * 106.171082) + p_C_tmp
           * 106.171082) / 2.0) + qd[3] * ((((((((((((t4_tmp * 0.2093132 +
    t5_tmp * 8.0E-6) - t9_tmp * 0.0843444) + t14_tmp * 0.000108) - t16_tmp *
    14.51751958424709) - t4_tmp * t7_tmp * 5.87098) - j_C_tmp) - t5_tmp *
    t14_tmp * 1.6E-5) + t9_tmp * t14_tmp * 0.1686888) + t7_tmp * t8_tmp * t9_tmp
    * 106.171082) + c_C_tmp_tmp * t15_tmp * 29.53946676849419) + h_C_tmp *
    t9_tmp * 0.00048) - 5.4E-5) / 2.0;
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
    f_C_tmp_tmp * 12.6861905) - g_C_tmp_tmp * 12.6861905) + t43_tmp * 0.1046566)
    - cb_C_tmp * 241.025234) + d_C_tmp_tmp * 4.0E-6) - db_C_tmp * 241.025234) -
    h_C_tmp * 0.0421722) - qd[4] * t9_tmp * 46.16134) + qd[3] * t14_tmp * 5.4E-5)
    + q_C_tmp * 0.00012) - qd[3] * t16_tmp * 7.2587597921235467) + qd[4] *
    t15_tmp * 0.00024) - qd[4] * t17_tmp * 7.3848666921235466) - f_C_tmp_tmp *
    t8_tmp * 2.93549) - h_C_tmp_tmp * t7_tmp * 53.085541) - g_C_tmp_tmp * t8_tmp
    * 2.93549) + m_C_tmp * 1.89261494) - i_C_tmp_tmp * t7_tmp * 53.085541) -
                        t43_tmp * t7_tmp * 2.93549) - d39 * t9_tmp * 53.085541)
                      - r_C_tmp * 1.89261494) - d_C_tmp_tmp * t14_tmp * 8.0E-6)
                    + h_C_tmp * t14_tmp * 0.0843444) - q_C_tmp * t15_tmp *
                   0.00024) - f_C_tmp_tmp * t4_tmp * t9_tmp * 53.085541) -
                 g_C_tmp_tmp * t4_tmp * t9_tmp * 53.085541) - m_C_tmp * t7_tmp *
                53.085541) + m_C_tmp * t8_tmp * 0.0421722) + d61 * t8_tmp *
              t9_tmp * 4.0E-6) + qd[3] * t7_tmp * t8_tmp * t9_tmp * 53.085541) +
            t43_tmp * t8_tmp * t15_tmp * 14.76973338424709) + d28 * t9_tmp *
           t14_tmp * 14.76973338424709) + n_C_tmp * t8_tmp * t9_tmp * 0.00024;
  t45_tmp = qd[1] * t4_tmp;
  t46_tmp = qd[2] * t4_tmp;
  d2 = qd[2] * t9_tmp;
  d4 = qd[4] * t8_tmp;
  d7 = d28 * t8_tmp;
  d9 = qd[1] * t9_tmp;
  d10 = qd[1] * t14_tmp;
  d11 = qd[2] * t14_tmp;
  d12 = d_C_tmp_tmp * t8_tmp;
  d13 = qd[1] * -2.7E-5 - qd[2] * 2.7E-5;
  h_C_tmp = t40_tmp_tmp * t7_tmp;
  m_C_tmp = d30 * t6_tmp;
  q_C_tmp = d18 * t8_tmp;
  eb_C_tmp = d19 * t8_tmp;
  fb_C_tmp = d5 * t14_tmp;
  gb_C_tmp = d8 * t14_tmp;
  d_C_tmp = b_t33_tmp * t8_tmp;
  e_C_tmp = g_C_tmp * t8_tmp;
  t16 = t45_tmp * t5_tmp;
  t17 = t46_tmp * t5_tmp;
  k_C_tmp_tmp = t61_tmp_tmp * t6_tmp;
  f_C_tmp = k_C_tmp_tmp * t7_tmp;
  g_C_tmp = t16 * t8_tmp;
  C_tmp = t17 * t8_tmp;
  b_C_tmp = t45_tmp * t8_tmp;
  c_C_tmp = t46_tmp * t8_tmp;
  s_C_tmp *= t8_tmp;
  t30 = d33 * t6_tmp * t8_tmp;
  o_C_tmp *= t8_tmp;
  t25 = d46 * t6_tmp * t7_tmp * t8_tmp;
  hb_C_tmp = qd[1] * t16_tmp * 7.2587597921235467;
  ib_C_tmp = qd[2] * t16_tmp * 7.2587597921235467;
  l_C_tmp_tmp = qd[1] * t8_tmp;
  jb_C_tmp = l_C_tmp_tmp * t9_tmp * 1.89261494;
  m_C_tmp_tmp = qd[2] * t8_tmp;
  kb_C_tmp = m_C_tmp_tmp * t9_tmp * 1.89261494;
  lb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t6_tmp * t9_tmp *
    14.76973338424709;
  C[19] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d13 +
    t45_tmp * 0.1046566) + h_C_tmp_tmp * 4.0E-6) + t46_tmp * 0.1046566) +
    i_C_tmp_tmp * 4.0E-6) - t43_tmp * 0.000116) - d9 * 0.0421722) - d2 *
    0.0421722) - j_C_tmp_tmp * 2.5327982) - d4 * 0.102001) + d10 * 5.4E-5) + d11
    * 5.4E-5) - hb_C_tmp) - ib_C_tmp) + d5 * 0.4649263) - t45_tmp * t7_tmp *
    2.93549) - d8 * 0.4649263) - t46_tmp * t7_tmp * 2.93549) + d * t8_tmp *
    2.93549) - d26 * t8_tmp * 2.93549) - t43_tmp * t9_tmp * 46.16134) - d12 *
    0.0421722) - d7 * 46.16134) - jb_C_tmp) - kb_C_tmp) - h_C_tmp_tmp * t14_tmp *
    8.0E-6) - r_C_tmp * 4.0E-6) - i_C_tmp_tmp * t14_tmp * 8.0E-6) + t43_tmp *
    t15_tmp * 0.00024) + d9 * t14_tmp * 0.0843444) + d2 * t14_tmp * 0.0843444) -
    d4 * t15_tmp * 14.76973338424709) + t_C_tmp * 0.1046566) + h_C_tmp *
    0.000116) + m_C_tmp * 0.000116) + q_C_tmp * 2.5327982) + eb_C_tmp *
    2.5327982) + fb_C_tmp * 14.51751958424709) + t18 * t9_tmp * 53.085541) - d37
    * t9_tmp * 53.085541) - d60 * t8_tmp * 53.085541) - d57 * 0.1046566) -
    n_C_tmp * t9_tmp * 14.76973338424709) + cb_C_tmp * t8_tmp * t9_tmp *
    53.085541) + db_C_tmp * t8_tmp * t9_tmp * 53.085541) - d7 * t9_tmp * 0.00024)
    - gb_C_tmp * 14.51751958424709) + b_C_tmp * t15_tmp * 14.76973338424709) +
    c_C_tmp * t15_tmp * 14.76973338424709) + d_C_tmp * 5.4E-5) + d59 *
    1.89261494) + h_C_tmp * t9_tmp * 46.16134) + s_C_tmp * 0.0421722) + m_C_tmp *
                       t9_tmp * 46.16134) + t30 * 0.0421722) - e_C_tmp * 5.4E-5)
                    + q_C_tmp * t9_tmp * 4.0E-6) + eb_C_tmp * t9_tmp * 4.0E-6) -
                  t19 * 1.89261494) + g_C_tmp * t9_tmp * 0.00024) - h_C_tmp *
                t15_tmp * 0.00024) - m_C_tmp * t15_tmp * 0.00024) + C_tmp *
              t9_tmp * 0.00024) - fb_C_tmp * t15_tmp * 14.76973338424709) +
            gb_C_tmp * t15_tmp * 14.76973338424709) - o_C_tmp * 8.0E-6) +
          d_C_tmp * t9_tmp * 0.0843444) + e_C_tmp_tmp * t7_tmp * t9_tmp *
         14.76973338424709) + lb_C_tmp) + t25 * 8.0E-6) - d58 * t9_tmp * t14_tmp
      * 0.00024) - e_C_tmp * t9_tmp * 0.0843444) + f_C_tmp * t9_tmp * t14_tmp *
    0.00024;
  d = qd[1] * -0.00012 - qd[2] * 0.00012;
  h_C_tmp = d5 * t9_tmp;
  m_C_tmp = d8 * t9_tmp;
  n_C_tmp = qd[1] * t17_tmp * 7.3848666921235466;
  r_C_tmp = qd[2] * t17_tmp * 7.3848666921235466;
  C[25] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((d + d28 *
    1.89261494) - d9 * 46.16134) - d2 * 46.16134) - j_C_tmp_tmp * 0.102001) +
    d10 * 0.00012) + qd[1] * t15_tmp * 0.00024) + d11 * 0.00012) + qd[2] *
    t15_tmp * 0.00024) - n_C_tmp) - r_C_tmp) + t16 * 1.89261494) + t17 *
    1.89261494) - f_C_tmp_tmp * t9_tmp * 53.085541) - g_C_tmp_tmp * t9_tmp *
    53.085541) - qd[3] * t5_tmp * t8_tmp * 46.16134) - d28 * t7_tmp * 53.085541)
    - d61 * t9_tmp * 46.16134) + d7 * 0.0421722) + d4 * t9_tmp * 4.0E-6) -
    j_C_tmp_tmp * t15_tmp * 14.76973338424709) - d10 * t15_tmp * 0.00024) - d11 *
    t15_tmp * 0.00024) + d58 * 0.0421722) + h_C_tmp * 4.0E-6) + q_C_tmp *
    0.102001) + eb_C_tmp * 0.102001) - t16 * t7_tmp * 53.085541) - f_C_tmp *
    0.0421722) + g_C_tmp * 0.0421722) - t17 * t7_tmp * 53.085541) + k_C_tmp_tmp *
    t8_tmp * 53.085541) + C_tmp * 0.0421722) - d62 * t8_tmp * 53.085541) - d39 *
    t4_tmp * t9_tmp * 53.085541) - m_C_tmp * 4.0E-6) + b_C_tmp * t9_tmp * 4.0E-6)
    + c_C_tmp * t9_tmp * 4.0E-6) - d12 * t9_tmp * 0.00024) + h_C_tmp_tmp *
    t9_tmp * t14_tmp * 14.76973338424709) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    14.76973338424709) + d_C_tmp * 0.00012) + d58 * t8_tmp * 1.89261494) +
    s_C_tmp * 46.16134) + t30 * 46.16134) - d58 * t14_tmp * 0.0421722) - e_C_tmp
                      * 0.00012) - f_C_tmp * t8_tmp * 1.89261494) - h_C_tmp *
                    t14_tmp * 4.0E-6) + q_C_tmp * t15_tmp * 14.76973338424709) +
                  eb_C_tmp * t15_tmp * 14.76973338424709) + f_C_tmp * t14_tmp *
                 0.0421722) + m_C_tmp * t14_tmp * 4.0E-6) + s_C_tmp * t9_tmp *
               0.00024) + t30 * t9_tmp * 0.00024) - d_C_tmp * t15_tmp * 0.00024)
            + e_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t9_tmp *
           14.76973338424709) - t25 * t9_tmp * 14.76973338424709;
  C[31] = 0.0;

  /*  CORIOLIS_ROW_3 - Computation of the robot specific Coriolis matrix row for joint 3 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_3(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_3(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 3 of 6 for Quantec Ultra SE 125.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  /*     02-Mar-2021 15:30:56 */
  t25 = t5_tmp * 8.0E-6;
  t30 = t9_tmp * 0.0843444;
  t18 = t15_tmp * 0.00048;
  t19 = t14_tmp * 0.00024;
  e_C_tmp = C_tmp_tmp * t8_tmp;
  d5 = d6 * t3_tmp;
  d7 = qd[0] * t6_tmp * t7_tmp;
  d8 = qd[3] * t6_tmp * t7_tmp;
  d10 = t30_tmp * t9_tmp;
  d11 = t61_tmp_tmp * t8_tmp;
  d12 = t30_tmp * t12_tmp;
  d14 = d1 * t9_tmp;
  d15 = t61_tmp_tmp * t12_tmp;
  d16 = t30_tmp * t13_tmp;
  d17 = t27_tmp * t3_tmp;
  d18 = t27_tmp * t7_tmp;
  d19 = t33_tmp * t6_tmp;
  d22 = t27_tmp * t5_tmp;
  d23 = t33_tmp * t5_tmp;
  d25 = t27_tmp * t6_tmp;
  d27 = d24 * t3_tmp;
  d29 = t33_tmp * t7_tmp;
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
  t32_tmp = d17 * t5_tmp;
  t33_tmp_tmp = d17 * t4_tmp;
  d57 = t33_tmp_tmp * t9_tmp;
  d58 = qd[0] * t2_tmp * t3_tmp * t6_tmp * t7_tmp;
  b_t33_tmp = t27_tmp * t4_tmp;
  d59 = t33_tmp * t4_tmp;
  t39_tmp_tmp = d59 * t7_tmp;
  t39_tmp = t43_tmp * t6_tmp * t7_tmp;
  t40_tmp_tmp = t39_tmp_tmp * t8_tmp;
  t39_tmp_tmp *= t9_tmp;
  d24 = d24 * t5_tmp * t7_tmp * t8_tmp;
  d39 = d39 * t5_tmp * t6_tmp * t8_tmp;
  t40_tmp = d32 * t9_tmp;
  b_t43_tmp = t39_tmp * t8_tmp;
  t47_tmp_tmp = d44 * t12_tmp;
  t47_tmp = d61 * t6_tmp * t7_tmp * t8_tmp;
  t48_tmp = d47 * t14_tmp;
  t48 = d48 * t14_tmp;
  d60 = t30_tmp * t6_tmp * t7_tmp;
  t58 = d60 * t9_tmp;
  h_C_tmp = d37 * t9_tmp;
  e_C_tmp_tmp = t33_tmp_tmp * t6_tmp * t7_tmp;
  m_C_tmp = h_C_tmp * t13_tmp;
  o_C_tmp = t40_tmp * t12_tmp;
  q_C_tmp = t33_tmp_tmp * t5_tmp;
  k_C_tmp_tmp = b_t33_tmp * t5_tmp;
  s_C_tmp = qd[0] * t12_tmp;
  t_C_tmp = d1 * t12_tmp;
  cb_C_tmp = b_t33_tmp * t6_tmp;
  db_C_tmp = d5 * t4_tmp;
  eb_C_tmp = t32_tmp * t6_tmp;
  fb_C_tmp = d17 * t6_tmp;
  gb_C_tmp = k_C_tmp_tmp * t6_tmp * t8_tmp;
  C[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((qd[0] * 8.34719628 - d20 * 102.065361815) - d21) + t30_tmp *
    0.000116) + t61_tmp_tmp * 1.89261494) + d1 * 2.5327982) - s_C_tmp *
    16.69439256) - qd[0] * t13_tmp * 16.69439256) + d17 * 3.8610145) + d5 *
    0.4649263) + d18 * 73.355506) + d19 * 73.355506) + d10 * 46.16134) + d11 *
    0.0421722) - d7 * 3.8610145) + t33_tmp * t12_tmp * 12.6861905) - d12 *
    0.000232) - d8 * 0.4649263) - d16 * 0.000232) - d15 * 3.78522988) + d14 *
    4.0E-6) - t61_tmp_tmp * t13_tmp * 3.78522988) - t30_tmp * t15_tmp * 0.00024)
    + d3 * t12_tmp * 241.025234) - t_C_tmp * 5.0655964) - d1 * t13_tmp *
    5.0655964) + s_C_tmp * t13_tmp * 33.38878512) + fb_C_tmp * 241.025234) + qd
    [0] * t2_tmp * t3_tmp * t8_tmp * 0.89341) - d37 * 92.32268) + d22 *
    16.156469) + d23 * 16.156469) + d30 * 0.0421722) - d31 * 12.6861905) - d32 *
    92.32268) + d38 * 0.2093132) + d5 * t8_tmp * 0.1046566) + d34 * 0.000116) +
    d36 * 0.000116) + d42 * 0.2093132) + d44 * 14.76973338424709) + d46 * 4.0E-6)
    + d40 * 2.5327982) + d41 * 2.5327982) + d47 * 408.26144726) - d_C_tmp *
    0.89341) + d49 * 0.102001) + d50 * 0.102001) + d51 * 14.51751958424709) +
    d48 * 408.26144726) + d52 * 14.51751958424709) - d45 * 0.0421722) - d25 *
    t15_tmp * 14.76973338424709) + t33_tmp * t8_tmp * t12_tmp * 2.93549) + d55 *
    14.51751958424709) + t61_tmp_tmp * t7_tmp * t12_tmp * 53.085541) - d8 *
    t8_tmp * 0.1046566) - d29 * t15_tmp * 14.76973338424709) - d53 * 92.32268) -
    d54 * 0.0843444) - d10 * t13_tmp * 92.32268) - d11 * t13_tmp * 0.0843444) -
    d56 * 4.0E-6) + b_C_tmp * 0.000464) - C_tmp * 8.0E-6) + d15 * t13_tmp *
    7.57045976) - d14 * t13_tmp * 8.0E-6) - c_C_tmp * 14.51751958424709) +
    t_C_tmp * t13_tmp * 10.1311928) + d12 * t18) + d16 * t18) + eb_C_tmp *
    53.085541) + d57 * 16.156469) - d58 * 33.38878512) + cb_C_tmp * t8_tmp *
    5.4E-5) + db_C_tmp * t8_tmp * 5.4E-5) + cb_C_tmp * t9_tmp * 3.78522988) +
    db_C_tmp * t9_tmp * 1.89261494) + d27 * t4_tmp * t8_tmp * 0.00012) - t27_tmp
    * t5_tmp * t6_tmp * t9_tmp * 0.00024) + t40_tmp_tmp * 5.4E-5) + d30 * t8_tmp
    * 1.89261494) - d31 * t8_tmp * 2.93549) + t39_tmp_tmp * 3.78522988) -
    t40_tmp * 0.00024) + d34 * t9_tmp * 46.16134) + d6 * t5_tmp * t7_tmp *
    t8_tmp * 0.0421722) + d36 * t9_tmp * 46.16134) + d26 * t5_tmp * t6_tmp *
    t8_tmp * 0.0421722) + d37 * t13_tmp * 184.64536) - t58 * 16.156469) + d24 *
    46.16134) + d39 * 46.16134) + d32 * t12_tmp * 184.64536) + d59 * t9_tmp *
    t12_tmp * 53.085541) - b_t43_tmp * 5.4E-5) - d30 * t14_tmp * 0.0421722) -
    d38 * t13_tmp * 0.4186264) + d40 * t9_tmp * 4.0E-6) + d41 * t9_tmp * 4.0E-6)
    - t39_tmp * t9_tmp * 1.89261494) - t47_tmp * 0.00012) - d42 * t12_tmp *
    0.4186264) - t47_tmp_tmp * 29.53946676849419) - d45 * t8_tmp * 1.89261494) -
    d44 * t13_tmp * 29.53946676849419) - d34 * t15_tmp * 0.00024) - d36 *
    t15_tmp * 0.00024) - d46 * t14_tmp * 4.0E-6) - t48_tmp * 29.03503916849419)
    + d47 * t15_tmp * 29.53946676849419) - t48 * 29.03503916849419) + d49 *
    t15_tmp * 14.76973338424709) + d50 * t15_tmp * 14.76973338424709) + d45 *
    t14_tmp * 0.0421722) - d51 * t15_tmp * 14.76973338424709) + d48 * t15_tmp *
    29.53946676849419) - d52 * t15_tmp * 14.76973338424709) + d53 * t13_tmp *
    184.64536) + d54 * t13_tmp * 0.1686888) - d55 * t15_tmp * 14.76973338424709)
    + d56 * t14_tmp * 4.0E-6) + C_tmp * t13_tmp * 1.6E-5) - b_C_tmp * t15_tmp *
    0.00096) + c_C_tmp * t15_tmp * 14.76973338424709) - e_C_tmp_tmp * 0.000464)
    - eb_C_tmp * t7_tmp * 7.57045976) - gb_C_tmp * 8.0E-6) - db_C_tmp * t5_tmp *
    t8_tmp * 8.0E-6) - fb_C_tmp * t7_tmp * t8_tmp * 10.1311928) - d59 * t5_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - u_C_tmp * 53.085541) + d33 * t5_tmp * t7_tmp *
    t9_tmp * 14.76973338424709) + d35 * t5_tmp * t6_tmp * t9_tmp *
    14.76973338424709) - b_C_tmp_tmp * t13_tmp * 0.000108) - v_C_tmp * t13_tmp *
    7.57045976) - t40_tmp_tmp * t12_tmp * 0.000108) + m_C_tmp * 0.00048) -
    t39_tmp_tmp * t12_tmp * 7.57045976) + d24 * t9_tmp * 0.00024) + d39 * t9_tmp
    * 0.00024) - h_C_tmp * t14_tmp * 0.00024) + o_C_tmp * 0.00048) - d5 * t5_tmp
    * t9_tmp * t14_tmp * 0.00024) - w_C_tmp * t15_tmp * 0.00024) - b_t43_tmp *
    t9_tmp * 0.0843444) - t40_tmp * t14_tmp * 0.00024) + t47_tmp_tmp * t13_tmp *
    59.07893353698838) + t47_tmp * t15_tmp * 0.00024) + d_C_tmp_tmp * t6_tmp *
                       t7_tmp * t9_tmp * t19) + b_C_tmp_tmp * t30) + t48_tmp *
                     t15_tmp * 29.53946676849419) + x_C_tmp * t30) + t48 *
                   t15_tmp * 29.53946676849419) + t40_tmp_tmp * t30) + b_t43_tmp
                 * t25) - e_C_tmp_tmp * t9_tmp * 184.64536) - y_C_tmp) - d58 *
              t8_tmp * t9_tmp * 1.6E-5) + ab_C_tmp) + e_C_tmp_tmp * t15_tmp *
            0.00096) + gb_C_tmp * t13_tmp * 1.6E-5) + bb_C_tmp * t12_tmp *
          1.6E-5) - b_C_tmp_tmp * t9_tmp * t13_tmp * 0.1686888) - t40_tmp_tmp *
        t9_tmp * t12_tmp * 0.1686888) - d61 * t5_tmp * t6_tmp * t7_tmp * t8_tmp *
       t9_tmp * 14.76973338424709) + m_C_tmp * t14_tmp * 0.00048) + o_C_tmp *
     t14_tmp * 0.00048) - q_C_tmp * t6_tmp * t7_tmp * t9_tmp * 59.07893353698838;
  h_C_tmp = qd[4] * (((((((((t18 + t19) + t14_tmp * t15_tmp * -0.00048) +
    c_C_tmp_tmp * t9_tmp * 8.0E-6) + -(t9_tmp * 92.32268)) + e_C_tmp * 0.0843444)
                        + C_tmp_tmp * 3.78522988) + -(t17_tmp *
    14.76973338424709)) + i_C_tmp * t14_tmp * 29.53946676849419) - 0.00024) /
    2.0 + qd[3] * ((((((((((e_C_tmp * t9_tmp * 0.00048 + t4_tmp * 0.2093132) +
    t14_tmp * 0.000108) + t25) + -(t5_tmp * t14_tmp * 1.6E-5)) + -t30) + t9_tmp *
                       t14_tmp * 0.1686888) + -j_C_tmp) + -(t16_tmp *
    14.51751958424709)) + c_C_tmp_tmp * t15_tmp * 29.53946676849419) - 5.4E-5) /
    2.0;
  C[8] = h_C_tmp + qd[1] * ((((t3_tmp * 12.6861905 + t7_tmp * 241.025234) +
    k_C_tmp * 2.93549) + l_C_tmp * 53.085541) + p_C_tmp * 53.085541);
  C[14] = h_C_tmp;
  d1 = qd[1] * t14_tmp;
  d3 = qd[2] * t14_tmp;
  d5 = d_C_tmp_tmp * t8_tmp;
  h_C_tmp = b_t33_tmp * t7_tmp;
  i_C_tmp = d59 * t6_tmp;
  j_C_tmp = d18 * t8_tmp;
  k_C_tmp = d19 * t8_tmp;
  l_C_tmp = d17 * t14_tmp;
  m_C_tmp = d7 * t14_tmp;
  o_C_tmp = d60 * t8_tmp;
  p_C_tmp = t33_tmp_tmp * t8_tmp;
  s_C_tmp = t45_tmp * t5_tmp;
  t_C_tmp = t46_tmp * t5_tmp;
  C_tmp_tmp = d28 * t8_tmp;
  u_C_tmp = t61_tmp_tmp * t6_tmp * t7_tmp;
  v_C_tmp = s_C_tmp * t8_tmp;
  w_C_tmp = t_C_tmp * t8_tmp;
  x_C_tmp = t45_tmp * t8_tmp;
  y_C_tmp = t46_tmp * t8_tmp;
  ab_C_tmp = d22 * t8_tmp;
  bb_C_tmp = d23 * t8_tmp;
  q_C_tmp *= t8_tmp;
  C[20] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d13 +
    t45_tmp * 0.1046566) + h_C_tmp_tmp * 4.0E-6) + t46_tmp * 0.1046566) +
    i_C_tmp_tmp * 4.0E-6) - t43_tmp * 0.000116) - d9 * 0.0421722) - d2 *
    0.0421722) - j_C_tmp_tmp * 2.5327982) - d4 * 0.102001) + d1 * 5.4E-5) + d3 *
    5.4E-5) - hb_C_tmp) - ib_C_tmp) + d17 * 0.4649263) - d7 * 0.4649263) -
    t43_tmp * t9_tmp * 46.16134) - d5 * 0.0421722) - C_tmp_tmp * 46.16134) -
    jb_C_tmp) - kb_C_tmp) - h_C_tmp_tmp * t14_tmp * 8.0E-6) - j_C_tmp_tmp *
    t9_tmp * 4.0E-6) - i_C_tmp_tmp * t14_tmp * 8.0E-6) + t43_tmp * t15_tmp *
    0.00024) - d4 * t15_tmp * 14.76973338424709) + d1 * t30) + d3 * t30) + d17 *
    t8_tmp * 0.1046566) + h_C_tmp * 0.000116) + i_C_tmp * 0.000116) + j_C_tmp *
    2.5327982) + k_C_tmp * 2.5327982) + l_C_tmp * 14.51751958424709) - d_C_tmp *
    0.1046566) - t43_tmp * t5_tmp * t9_tmp * 14.76973338424709) - C_tmp_tmp *
    t9_tmp * 0.00024) - m_C_tmp * 14.51751958424709) + x_C_tmp * t15_tmp *
    14.76973338424709) + y_C_tmp * t15_tmp * 14.76973338424709) + p_C_tmp *
    5.4E-5) + d57 * 1.89261494) + h_C_tmp * t9_tmp * 46.16134) + ab_C_tmp *
    0.0421722) + i_C_tmp * t9_tmp * 46.16134) + bb_C_tmp * 0.0421722) - o_C_tmp *
    5.4E-5) + j_C_tmp * t9_tmp * 4.0E-6) + k_C_tmp * t9_tmp * 4.0E-6) - t58 *
                        1.89261494) + v_C_tmp * t9_tmp * 0.00024) - h_C_tmp *
                      t15_tmp * 0.00024) - i_C_tmp * t15_tmp * 0.00024) +
                    w_C_tmp * t9_tmp * 0.00024) - l_C_tmp * t15_tmp *
                   14.76973338424709) + m_C_tmp * t15_tmp * 14.76973338424709) -
                 q_C_tmp * 8.0E-6) + k_C_tmp_tmp * t7_tmp * t9_tmp *
                14.76973338424709) + lb_C_tmp) - t32_tmp * t9_tmp * t14_tmp *
              0.00024) - o_C_tmp * t9_tmp * 0.0843444) + u_C_tmp * t9_tmp * t19)
           + p_C_tmp * t30) + o_C_tmp * t25;
  h_C_tmp = d17 * t9_tmp;
  i_C_tmp = d7 * t9_tmp;
  C[26] = (((((((((((((((((((((((((((((((((((((((((((((((((d + d28 * 1.89261494)
    - d9 * 46.16134) - d2 * 46.16134) - j_C_tmp_tmp * 0.102001) + d1 * 0.00012)
    + qd[1] * t15_tmp * 0.00024) + d3 * 0.00012) + qd[2] * t15_tmp * 0.00024) -
    n_C_tmp) - r_C_tmp) + s_C_tmp * 1.89261494) + t_C_tmp * 1.89261494) - d5 *
    46.16134) - d61 * t9_tmp * 46.16134) + C_tmp_tmp * 0.0421722) + d4 * t9_tmp *
    4.0E-6) - j_C_tmp_tmp * t15_tmp * 14.76973338424709) - d1 * t15_tmp *
    0.00024) - d3 * t15_tmp * 0.00024) + t32_tmp * 0.0421722) + h_C_tmp * 4.0E-6)
    + j_C_tmp * 0.102001) + k_C_tmp * 0.102001) - u_C_tmp * 0.0421722) + v_C_tmp
    * 0.0421722) + w_C_tmp * 0.0421722) - i_C_tmp * 4.0E-6) + x_C_tmp * t9_tmp *
    4.0E-6) + y_C_tmp * t9_tmp * 4.0E-6) - d5 * t9_tmp * 0.00024) + h_C_tmp_tmp *
    t9_tmp * t14_tmp * 14.76973338424709) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    14.76973338424709) + p_C_tmp * 0.00012) + t32_tmp * t8_tmp * 1.89261494) +
    ab_C_tmp * 46.16134) + bb_C_tmp * 46.16134) - t32_tmp * t14_tmp * 0.0421722)
                      - o_C_tmp * 0.00012) - u_C_tmp * t8_tmp * 1.89261494) -
                    h_C_tmp * t14_tmp * 4.0E-6) + j_C_tmp * t15_tmp *
                   14.76973338424709) + k_C_tmp * t15_tmp * 14.76973338424709) +
                 u_C_tmp * t14_tmp * 0.0421722) + i_C_tmp * t14_tmp * 4.0E-6) +
               ab_C_tmp * t9_tmp * 0.00024) + bb_C_tmp * t9_tmp * 0.00024) -
             p_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t15_tmp * 0.00024) +
           q_C_tmp * t9_tmp * 14.76973338424709) - d43 * t6_tmp * t7_tmp *
    t8_tmp * t9_tmp * 14.76973338424709;
  C[32] = 0.0;
  b_coriolis_row_4(q, qd, b_dv);
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
  /*     Coriolis matrix row number 5 of 6 for Quantec Ultra SE 125.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 125 specific class  */
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
  /*     02-Mar-2021 15:31:08 */
  t16 = qd[1] * 0.00012;
  t17 = qd[2] * 0.00012;
  f_C_tmp = t27_tmp * t3_tmp;
  g_C_tmp = f_C_tmp * t4_tmp;
  C_tmp = g_C_tmp * t8_tmp;
  b_C_tmp = t30_tmp * t6_tmp * t7_tmp;
  c_C_tmp = b_C_tmp * t8_tmp;
  t25 = t27_tmp * t5_tmp;
  d_C_tmp = t25 * t7_tmp;
  t32_tmp = d_C_tmp * t8_tmp;
  t30 = t33_tmp * t5_tmp;
  t33_tmp_tmp = t30 * t6_tmp;
  b_t33_tmp = t33_tmp_tmp * t8_tmp;
  t39_tmp_tmp = t27_tmp * t7_tmp;
  t39_tmp = t39_tmp_tmp * t8_tmp;
  t40_tmp_tmp = t33_tmp * t6_tmp;
  t40_tmp = t40_tmp_tmp * t8_tmp;
  b_t43_tmp = t43_tmp * t5_tmp;
  t47_tmp_tmp = qd[0] * t6_tmp * t7_tmp;
  t47_tmp = t47_tmp_tmp * t9_tmp;
  t48_tmp = f_C_tmp * t9_tmp;
  t48 = t48_tmp * 4.0E-6;
  e_C_tmp = f_C_tmp * t5_tmp;
  t58 = e_C_tmp * 0.0421722;
  k_C_tmp_tmp = t45_tmp * t5_tmp;
  hb_C_tmp = t46_tmp * t5_tmp;
  ib_C_tmp = t61_tmp_tmp * t6_tmp;
  jb_C_tmp = ib_C_tmp * t7_tmp;
  kb_C_tmp = e_C_tmp * t8_tmp;
  lb_C_tmp = jb_C_tmp * t8_tmp;
  cb_C_tmp = g_C_tmp * t5_tmp;
  db_C_tmp = t30_tmp * t5_tmp;
  eb_C_tmp = db_C_tmp * t6_tmp * t7_tmp;
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
  d10 = t61_tmp_tmp * t9_tmp;
  d11 = d26 * t6_tmp;
  d12 = d * t12_tmp;
  d13 = d1 * t13_tmp;
  d14 = d1 * t14_tmp;
  d15 = d2 * t14_tmp;
  d16 = t27_tmp * t4_tmp;
  d17 = t33_tmp * t4_tmp;
  d18 = d8 * t5_tmp;
  d19 = d6 * t3_tmp;
  d20 = d16 * t6_tmp;
  d21 = t27_tmp * t6_tmp;
  d22 = d5 * t5_tmp;
  d23 = d17 * t7_tmp;
  d24 = d19 * t4_tmp;
  d25 = t33_tmp * t7_tmp;
  d27 = d9 * t7_tmp;
  d28 = db_C_tmp * t8_tmp;
  d29 = d5 * t9_tmp;
  d30 = i_C_tmp_tmp * t6_tmp * t7_tmp;
  d31 = d21 * t9_tmp;
  d32 = d8 * t9_tmp;
  d33 = d25 * t9_tmp;
  d34 = db_C_tmp * t12_tmp;
  d35 = t30_tmp * t8_tmp * t9_tmp;
  d36 = d4 * t7_tmp * t8_tmp;
  d37 = f_C_tmp_tmp * t6_tmp * t8_tmp;
  d38 = d7 * t7_tmp * t8_tmp;
  d39 = g_C_tmp_tmp * t6_tmp * t8_tmp;
  d40 = t43_tmp * t6_tmp * t7_tmp;
  d41 = qd[1] * t6_tmp * t7_tmp * t9_tmp;
  d42 = d10 * t12_tmp;
  d43 = qd[2] * t6_tmp * t7_tmp * t9_tmp;
  d16 *= t5_tmp;
  d44 = d16 * t6_tmp;
  d45 = f_C_tmp * t6_tmp * t7_tmp;
  d46 = d4 * t5_tmp * t7_tmp * t8_tmp;
  d47 = f_C_tmp_tmp * t5_tmp * t6_tmp * t8_tmp;
  d48 = t25 * t6_tmp * t8_tmp;
  d7 = d7 * t5_tmp * t7_tmp * t8_tmp;
  d49 = g_C_tmp_tmp * t5_tmp * t6_tmp * t8_tmp;
  d50 = t30 * t7_tmp * t8_tmp;
  d51 = d21 * t8_tmp * t9_tmp;
  d52 = d20 * t13_tmp;
  d25 = d25 * t8_tmp * t9_tmp;
  d53 = d23 * t12_tmp;
  d54 = d28 * t12_tmp;
  d55 = d35 * t12_tmp;
  h_C_tmp = t2_tmp * t3_tmp * t4_tmp * t8_tmp;
  i_C_tmp = t4_tmp * t6_tmp * t7_tmp * t8_tmp;
  j_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t7_tmp;
  k_C_tmp = cb_C_tmp * t6_tmp;
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
    46.16134 - d1 * 0.00012) - d2 * 0.00012) + d3 * 0.00012) + qd[3] * t2_tmp *
    t7_tmp * 0.00012) + d11 * 0.00012) - d12 * 46.16134) - d * t13_tmp *
    46.16134) + d13 * 0.00024) - d14 * 0.00012) + d1 * t15_tmp * 0.00024) - d15 *
    0.00012) + d2 * t15_tmp * 0.00024) - d3 * t15_tmp * 0.00024) - d22 *
    0.0421722) + d20 * 14.76973338424709) - d18 * 0.0421722) + d24 *
    14.871734384247089) + t48_tmp * 16.156469) + d23 * 14.76973338424709) - d29 *
    4.0E-6) - d32 * 4.0E-6) + d31 * 1.89261494) + d28 * 0.0421722) - d36 *
    0.102001) - d37 * 0.102001) + d33 * 1.89261494) + d27 * 0.0421722) - d38 *
    0.102001) - d39 * 0.102001) - d34 * 1.89261494) - d9 * t8_tmp * 53.085541) +
    d30 * 0.0421722) - d40 * 14.871734384247089) - db_C_tmp * t13_tmp *
    1.89261494) + d35 * 4.0E-6) - t47_tmp * 16.156469) + t33_tmp * t9_tmp *
    t12_tmp * 53.085541) + d41 * 4.0E-6) + d43 * 4.0E-6) - d42 *
    14.76973338424709) - t_C_tmp * 14.76973338424709) - d6 * t7_tmp * t15_tmp *
    0.00024) - d11 * t15_tmp * 0.00024) + d10 * t14_tmp * 14.76973338424709) +
    d12 * t13_tmp * 92.32268) + d13 * t14_tmp * 0.00024) - d13 * t15_tmp *
    0.00048) + d14 * t15_tmp * 0.00024) + d15 * t15_tmp * 0.00024) - d44 *
    46.16134) - d45 * 0.00024) + d16 * t7_tmp * 16.156469) + s_C_tmp * t6_tmp *
    16.156469) - d5 * t4_tmp * t8_tmp * 0.00012) - s_C_tmp * t7_tmp * 46.16134)
    - d4 * t3_tmp * t5_tmp * t8_tmp * 1.89261494) - d8 * t4_tmp * t8_tmp *
    0.00012) - d18 * t8_tmp * 1.89261494) - d48 * 4.0E-6) - d19 * t5_tmp *
    t8_tmp * 4.0E-6) - d50 * 4.0E-6) - d46 * 46.16134) - d47 * 46.16134) - d52 *
    29.53946676849419) - d21 * t7_tmp * t9_tmp * 53.085541) + d22 * t14_tmp *
    0.0421722) - d7 * 46.16134) - d49 * 46.16134) + d51 * 0.0421722) - d53 *
    29.53946676849419) + d18 * t14_tmp * 0.0421722) + d19 * t8_tmp * t9_tmp *
    0.0421722) - d20 * t15_tmp * 29.53946676849419) - d24 * t15_tmp *
    14.76973338424709) + d6 * t5_tmp * t7_tmp * t9_tmp * 14.76973338424709) +
    d26 * t5_tmp * t6_tmp * t9_tmp * 14.76973338424709) + d25 * 0.0421722) +
    db_C_tmp * t7_tmp * t12_tmp * 53.085541) + d27 * t8_tmp * 1.89261494) - d23 *
    t15_tmp * 29.53946676849419) - d54 * 0.0421722) + d29 * t14_tmp * 4.0E-6) +
    d30 * t8_tmp * 1.89261494) - d31 * t13_tmp * 3.78522988) - d28 * t13_tmp *
    0.0421722) + d32 * t14_tmp * 4.0E-6) + d_C_tmp_tmp * t6_tmp * t7_tmp *
    t8_tmp * 4.0E-6) - d33 * t12_tmp * 3.78522988) + d34 * t13_tmp * 3.78522988)
    - d55 * 4.0E-6) - d36 * t15_tmp * 14.76973338424709) - d37 * t15_tmp *
    14.76973338424709) - d27 * t14_tmp * 0.0421722) - d35 * t13_tmp * 4.0E-6) -
    d38 * t15_tmp * 14.76973338424709) - d39 * t15_tmp * 14.76973338424709) -
    d30 * t14_tmp * 0.0421722) - qd[3] * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
    0.0421722) + d40 * t15_tmp * 14.76973338424709) - d41 * t14_tmp * 4.0E-6) +
    u_C_tmp * 29.53946676849419) - d43 * t14_tmp * 4.0E-6) - d42 * t14_tmp *
    14.76973338424709) - t_C_tmp * t14_tmp * 14.76973338424709) - d1 * t13_tmp *
    t14_tmp * t15_tmp * 0.00048) + h_C_tmp * t18) + h_C_tmp * t19) + i_C_tmp *
    t16) + i_C_tmp * t17) + k_C_tmp * 53.085541) - l_C_tmp * 0.00048) - d24 *
    t5_tmp * t9_tmp * 0.00024) - d45 * t9_tmp * 92.32268) - m_C_tmp * 0.00048) +
    d44 * t13_tmp * 92.32268) + j_C_tmp * t12_tmp * 92.32268) - o_C_tmp *
    0.00024) + d45 * t15_tmp * 0.00048) - d46 * t9_tmp * 0.00024) - d47 * t9_tmp
    * 0.00024) + d48 * t13_tmp * 8.0E-6) - d7 * t9_tmp * 0.00024) - d49 * t9_tmp
    * 0.00024) + d50 * t12_tmp * 8.0E-6) + b_t43_tmp * t6_tmp * t7_tmp * t9_tmp *
    0.00024) - d51 * t13_tmp * 0.0843444) + d52 * t15_tmp * 59.07893353698838) -
                      d25 * t12_tmp * 0.0843444) + d53 * t15_tmp *
                     59.07893353698838) + d54 * t13_tmp * 0.0843444) - t45_tmp *
                   t6_tmp * t7_tmp * t8_tmp * t15_tmp * 0.00024) - t46_tmp *
                  t6_tmp * t7_tmp * t8_tmp * t15_tmp * 0.00024) + d55 * t13_tmp *
                 8.0E-6) + u_C_tmp * t14_tmp * 29.53946676849419) - p_C_tmp *
               3.78522988) - q_C_tmp * 29.53946676849419) - qd[1] * t2_tmp *
             t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp * 14.76973338424709) -
            qd[2] * t2_tmp * t3_tmp * t4_tmp * t5_tmp * t8_tmp * t9_tmp *
            14.76973338424709) + l_C_tmp * t13_tmp * 0.00096) + m_C_tmp *
          t12_tmp * 0.00096) + k_C_tmp_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
         14.76973338424709) + hb_C_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp *
        14.76973338424709) + o_C_tmp * t15_tmp * 0.00048) - p_C_tmp * t8_tmp *
      0.0843444) - g_C_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp * 8.0E-6) -
    q_C_tmp * t14_tmp * 29.53946676849419;
  h_C_tmp = (((((((((((((((((((((((((((((((((((((((((((((((t16 + t17) + -t18) +
    -t19) + qd[1] * t14_tmp * -0.00012) + qd[2] * t14_tmp * -0.00012) +
    d_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + t14_tmp * t18) + t14_tmp * t19) +
    c_C_tmp * 0.00012) + -(C_tmp * 0.00012)) + -(t32_tmp * t9_tmp * 0.00024)) +
    -(b_t33_tmp * t9_tmp * 0.00024)) + C_tmp * t15_tmp * 0.00024) + -(c_C_tmp *
    t15_tmp * 0.00024)) + -(t39_tmp * 0.102001)) + -(t40_tmp * 0.102001)) +
    -(b_t43_tmp * 4.0E-6)) + t47_tmp * 4.0E-6) + -(t45_tmp * t8_tmp * t9_tmp *
    4.0E-6)) + -(t46_tmp * t8_tmp * t9_tmp * 4.0E-6)) + -t48) + qd[1] * t9_tmp *
    46.16134) + qd[2] * t9_tmp * 46.16134) + t14_tmp * t48) + t47_tmp * t14_tmp *
    -4.0E-6) + t43_tmp * t9_tmp * 0.0421722) + jb_C_tmp * 0.0421722) + -t58) +
    -(k_C_tmp_tmp * t8_tmp * 0.0421722)) + -(hb_C_tmp * t8_tmp * 0.0421722)) +
    -(t32_tmp * 46.16134)) + -(b_t33_tmp * 46.16134)) + -(k_C_tmp_tmp *
    1.89261494)) + -(hb_C_tmp * 1.89261494)) + t14_tmp * t58) + jb_C_tmp *
                        t14_tmp * -0.0421722) + lb_C_tmp * 1.89261494) +
                      -(kb_C_tmp * 1.89261494)) + -(j_C_tmp_tmp *
    14.871734384247089)) + n_C_tmp) + r_C_tmp) + j_C_tmp_tmp * t15_tmp *
                  14.76973338424709) + -(h_C_tmp_tmp * t9_tmp * t14_tmp *
    14.76973338424709)) + -(i_C_tmp_tmp * t9_tmp * t14_tmp * 14.76973338424709))
               + -(t39_tmp * t15_tmp * 14.76973338424709)) + -(t40_tmp * t15_tmp
    * 14.76973338424709)) + eb_C_tmp * t8_tmp * t9_tmp * 14.76973338424709) +
    -(cb_C_tmp * t8_tmp * t9_tmp * 14.76973338424709);
  C[10] = ((h_C_tmp + f_C_tmp_tmp * t9_tmp * 53.085541) + k_C_tmp_tmp * t7_tmp *
           53.085541) - ib_C_tmp * t8_tmp * 53.085541;
  C[16] = h_C_tmp;
  C[22] = (((((((((((((((((((((((((((qd[3] * -0.00012 - l_C_tmp_tmp *
    14.871734384247089) - m_C_tmp_tmp * 14.871734384247089) + qd[3] * t15_tmp *
    0.00024) - qd[3] * t17_tmp * 7.3848666921235466) + t39_tmp_tmp * 0.00012) +
    t40_tmp_tmp * 0.00012) - k_C_tmp_tmp * 4.0E-6) - hb_C_tmp * 4.0E-6) +
    t45_tmp * t9_tmp * 0.0421722) + t46_tmp * t9_tmp * 0.0421722) + l_C_tmp_tmp *
    t15_tmp * 14.76973338424709) + m_C_tmp_tmp * t15_tmp * 14.76973338424709) +
    g_C_tmp * 14.871734384247089) - b_C_tmp * 14.871734384247089) - t39_tmp_tmp *
                       t15_tmp * 0.00024) - t40_tmp_tmp * t15_tmp * 0.00024) +
                     h_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + i_C_tmp_tmp *
                    t8_tmp * t9_tmp * 0.00024) - kb_C_tmp * 4.0E-6) + f_C_tmp *
                  t8_tmp * t9_tmp * 0.0421722) - g_C_tmp * t15_tmp *
                 14.76973338424709) + d_C_tmp * t9_tmp * 14.76973338424709) +
               t33_tmp_tmp * t9_tmp * 14.76973338424709) + lb_C_tmp * 4.0E-6) -
             t47_tmp_tmp * t8_tmp * t9_tmp * 0.0421722) + b_C_tmp * t15_tmp *
            14.76973338424709) - cb_C_tmp * t9_tmp * 0.00024) + eb_C_tmp *
    t9_tmp * 0.00024;
  C[28] = 0.0;
  C[34] = 0.0;
  for (i = 0; i < 6; i++) {
    C[6 * i + 5] = 0.0;
  }
}

/* End of code generation (coriolis_125.c) */
