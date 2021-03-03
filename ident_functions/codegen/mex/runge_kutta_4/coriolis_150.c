/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * coriolis_150.c
 *
 * Code generation for function 'coriolis_150'
 *
 */

/* Include files */
#include "coriolis_150.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include <string.h>

/* Function Declarations */
static void c_coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);
static void c_coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
  Crow[6]);

/* Function Definitions */
static void c_coriolis_row_1(const real_T in2[6], const real_T in3[6], real_T
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
  real_T t56_tmp_tmp;
  real_T t56_tmp;
  real_T t56;
  real_T t59_tmp;
  real_T t59;
  real_T t60_tmp;
  real_T t60;
  real_T t61_tmp_tmp;
  real_T t61_tmp;
  real_T b_t61_tmp;
  real_T t61;
  real_T t62_tmp_tmp;
  real_T t62_tmp;
  real_T b_t62_tmp;
  real_T t62;
  real_T t63_tmp_tmp;
  real_T t63_tmp;
  real_T t63;
  real_T t64_tmp_tmp;
  real_T t64_tmp;
  real_T b_t64_tmp;
  real_T t64;
  real_T t68_tmp;
  real_T t68;
  real_T t69_tmp;
  real_T t69;
  real_T t70_tmp;
  real_T t70;
  real_T t71_tmp;
  real_T t71;
  real_T t74_tmp_tmp;
  real_T t74_tmp;
  real_T t74;
  real_T t75_tmp_tmp;
  real_T t75_tmp;
  real_T t75;
  real_T t76;
  real_T t79;
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
  real_T t125_tmp;
  real_T b_t125_tmp;
  real_T t125;
  real_T t136;
  real_T t137;
  real_T t141_tmp;
  real_T t141;
  real_T t142_tmp_tmp_tmp;
  real_T t142_tmp_tmp;
  real_T t142_tmp;
  real_T t142;
  real_T t143_tmp_tmp_tmp;
  real_T t143_tmp_tmp;
  real_T t143_tmp;
  real_T t143;
  real_T t144_tmp;
  real_T b_t144_tmp;
  real_T t144;
  real_T t145;
  real_T t151_tmp;
  real_T b_t151_tmp;
  real_T t151;
  real_T t154_tmp;
  real_T b_t154_tmp;
  real_T t154;
  real_T t155;
  real_T t159;
  real_T t164_tmp;
  real_T t164;
  real_T t165_tmp;
  real_T t165;
  real_T t166;
  real_T t167;
  real_T t168_tmp;
  real_T t168;
  real_T t169_tmp;
  real_T t169;
  real_T t170_tmp;
  real_T b_t170_tmp;
  real_T t170;
  real_T t171_tmp;
  real_T b_t171_tmp;
  real_T t171;
  real_T t172_tmp;
  real_T b_t172_tmp;
  real_T t172;
  real_T t173_tmp;
  real_T b_t173_tmp;
  real_T t173;
  real_T t187;
  real_T t188;
  real_T t191;
  real_T t192;
  real_T t195;
  real_T t196;
  real_T t197_tmp;
  real_T t197;
  real_T t198_tmp;
  real_T t198;
  real_T t199_tmp;
  real_T t199;
  real_T t200;
  real_T t201;
  real_T t202;
  real_T t203;
  real_T t204;
  real_T t205;
  real_T t206;
  real_T t223_tmp_tmp;
  real_T t223_tmp;
  real_T t223;
  real_T t224;
  real_T t225;
  real_T t226_tmp;
  real_T t226;
  real_T t227;
  real_T t228_tmp;
  real_T t228;
  real_T t229_tmp;
  real_T t229;
  real_T t230;
  real_T t231;
  real_T t232;
  real_T t233;
  real_T t249;
  real_T t250_tmp;
  real_T t250;
  real_T t251_tmp;
  real_T t251;
  real_T t252_tmp;
  real_T t252;
  real_T t253_tmp_tmp;
  real_T t253;
  real_T t258_tmp_tmp;
  real_T t258_tmp;
  real_T t258;
  real_T t260;
  real_T t262;
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
  real_T t292;
  real_T t293;
  real_T t294;
  real_T t295;
  real_T t308_tmp;
  real_T t308;
  real_T t309_tmp;
  real_T t309;
  real_T t310_tmp_tmp;
  real_T t310_tmp;
  real_T t310;
  real_T t311_tmp;
  real_T t311_tmp_tmp;
  real_T t311;
  real_T t319_tmp;
  real_T t319;
  real_T t327_tmp;
  real_T b_t327_tmp;
  real_T t327;
  real_T t329_tmp_tmp;
  real_T t329_tmp;
  real_T t329;
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
  real_T t57;
  real_T t58;
  real_T t65_tmp;
  real_T t65;
  real_T t66;
  real_T t72;
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
  real_T t130;
  real_T t131;
  real_T t132;
  real_T t133;
  real_T t134_tmp;
  real_T t134;
  real_T t135_tmp_tmp;
  real_T t135_tmp;
  real_T t135;
  real_T t138;
  real_T t139;
  real_T t152_tmp;
  real_T t152;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t175;
  real_T t176;
  real_T t177;
  real_T t178;
  real_T t189;
  real_T t190;
  real_T t211;
  real_T t212;
  real_T t213_tmp;
  real_T t213;
  real_T t214_tmp_tmp;
  real_T t214;
  real_T t215;
  real_T t216;
  real_T t222;
  real_T t234;
  real_T t235;
  real_T t236;
  real_T t237;
  real_T t238;
  real_T t239_tmp;
  real_T t239;
  real_T t240;
  real_T t241;
  real_T t246;
  real_T t257;
  real_T t259_tmp;
  real_T t259;
  real_T t261;
  real_T t271;
  real_T t272;
  real_T t273_tmp;
  real_T t273;
  real_T t274_tmp;
  real_T t274;
  real_T t284;
  real_T t285;
  real_T t286;
  real_T t287;
  real_T t288;
  real_T t289;
  real_T t290;
  real_T t291;
  real_T t304;
  real_T t305;
  real_T t306;
  real_T t307;
  real_T t314;
  real_T t315;
  real_T t316;
  real_T t317;
  real_T t320;
  real_T t321;
  real_T t322;
  real_T t324;
  real_T t328;
  real_T t330;
  real_T t337;
  real_T t338;
  real_T t323;
  real_T t325;
  real_T t326;
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
  /*     Coriolis matrix row number 1 of 6 for Quantec Ultra SE 150.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  /*     02-Mar-2021 15:55:32 */
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
  t56_tmp_tmp = in3[0] * t6;
  t56_tmp = t56_tmp_tmp * t7;
  t56 = t56_tmp * t8 * 0.89341;
  t59_tmp = t29_tmp * t7;
  t59 = t59_tmp * 82.105506;
  t60_tmp = t30_tmp * t6;
  t60 = t60_tmp * 82.105506;
  t61_tmp_tmp = in3[1] * t2;
  t61_tmp = t61_tmp_tmp * t4;
  b_t61_tmp = t61_tmp * t5 * t7;
  t61 = b_t61_tmp * t8 * t9 * 0.00024;
  t62_tmp_tmp = in3[1] * t3;
  t62_tmp = t62_tmp_tmp * t4;
  b_t62_tmp = t62_tmp * t5 * t6;
  t62 = b_t62_tmp * t8 * t9 * 0.00024;
  t63_tmp_tmp = in3[2] * t2;
  t10 = t63_tmp_tmp * t4;
  t63_tmp = t10 * t5 * t7;
  t63 = t63_tmp * t8 * t9 * 0.00024;
  t64_tmp_tmp = in3[2] * t3;
  t64_tmp = t64_tmp_tmp * t4;
  b_t64_tmp = t64_tmp * t5 * t6;
  t64 = b_t64_tmp * t8 * t9 * 0.00024;
  t68_tmp = t61_tmp * t7;
  t68 = t68_tmp * 0.1046566;
  t69_tmp = t62_tmp * t6;
  t69 = t69_tmp * 0.1046566;
  t70_tmp = t10 * t7;
  t70 = t70_tmp * 0.1046566;
  t71_tmp = t64_tmp * t6;
  t71 = t71_tmp * 0.1046566;
  t74_tmp_tmp = t29_tmp * t6;
  t74_tmp = t74_tmp_tmp * t8;
  t74 = t74_tmp * 0.2093132;
  t75_tmp_tmp = t30_tmp * t7;
  t75_tmp = t75_tmp_tmp * t8;
  t75 = t75_tmp * 0.2093132;
  t76 = t49_tmp * 4.2197645;
  t79 = t56_tmp * 4.2197645;
  t84_tmp = t61_tmp_tmp * t3;
  t84 = t84_tmp * 0.75031128;
  t85_tmp = t63_tmp_tmp * t3;
  t85 = t85_tmp * 0.75031128;
  t86_tmp_tmp = in3[1] * t6;
  b_t86_tmp_tmp = t86_tmp_tmp * t7;
  t86 = b_t86_tmp_tmp * 0.75031128;
  t87_tmp_tmp = in3[2] * t6 * t7;
  t87 = t87_tmp_tmp * 0.75031128;
  t98_tmp_tmp = t49_tmp * t6;
  b_t98_tmp_tmp = t98_tmp_tmp * t7;
  t98 = b_t98_tmp_tmp * 37.48878512;
  t100_tmp = in3[0] * t8;
  b_t100_tmp = t100_tmp * t9;
  t100 = b_t100_tmp * 4.0E-6;
  t102_tmp = t61_tmp_tmp * t5 * t7;
  t102 = t102_tmp * 4.0E-6;
  t103_tmp_tmp = t62_tmp_tmp * t5;
  t103_tmp = t103_tmp_tmp * t6;
  t103 = t103_tmp * 4.0E-6;
  t104_tmp = t63_tmp_tmp * t5 * t7;
  t104 = t104_tmp * 4.0E-6;
  t105_tmp_tmp = t64_tmp_tmp * t5;
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
  t125_tmp = in3[0] * t4;
  b_t125_tmp = t125_tmp * t9;
  t125 = b_t125_tmp * 54.66134;
  t136 = b_t29_tmp * 109.32268;
  t137 = b_t30_tmp * 109.32268;
  t141_tmp = t106_tmp * t5;
  t141 = t141_tmp * t8 * 8.0E-6;
  t142_tmp_tmp_tmp = t107_tmp * t5;
  t142_tmp_tmp = t142_tmp_tmp_tmp * t6;
  t142_tmp = t142_tmp_tmp * t8;
  t142 = t142_tmp * 8.0E-6;
  t143_tmp_tmp_tmp = t108_tmp * t5;
  t143_tmp_tmp = t143_tmp_tmp_tmp * t7;
  t143_tmp = t143_tmp_tmp * t8;
  t143 = t143_tmp * 8.0E-6;
  t144_tmp = t109_tmp * t5;
  b_t144_tmp = t144_tmp * t6 * t7;
  t144 = b_t144_tmp * t8 * 8.0E-6;
  t145 = t125_tmp * 0.000116;
  t151_tmp = in3[0] * t5;
  b_t151_tmp = t151_tmp * t8;
  t151 = b_t151_tmp * 0.0421722;
  t154_tmp = b_t98_tmp_tmp * t8;
  b_t154_tmp = t154_tmp * t9;
  t154 = b_t154_tmp * 1.6E-5;
  t155 = t100_tmp * 2.5327982;
  t159 = t151_tmp * 2.24111494;
  t164_tmp = t84_tmp * t8;
  t164 = t164_tmp * t9 * 54.66134;
  t165_tmp = t85_tmp * t8;
  t165 = t165_tmp * t9 * 54.66134;
  t166 = t11 * t7 * 19.131469;
  t167 = t12 * t6 * 19.131469;
  t168_tmp = b_t86_tmp_tmp * t8;
  t168 = t168_tmp * t9 * 54.66134;
  t169_tmp = t87_tmp_tmp * t8;
  t169 = t169_tmp * t9 * 54.66134;
  t170_tmp = t61_tmp_tmp * t7;
  b_t170_tmp = t170_tmp * t9;
  t170 = b_t170_tmp * 0.0421722;
  t171_tmp = t62_tmp_tmp * t6;
  b_t171_tmp = t171_tmp * t9;
  t171 = b_t171_tmp * 0.0421722;
  t172_tmp = t63_tmp_tmp * t7;
  b_t172_tmp = t172_tmp * t9;
  t172 = b_t172_tmp * 0.0421722;
  t173_tmp = t64_tmp_tmp * t6;
  b_t173_tmp = t173_tmp * t9;
  t173 = b_t173_tmp * 0.0421722;
  t187 = t164_tmp * 0.000116;
  t188 = t165_tmp * 0.000116;
  t191 = t168_tmp * 0.000116;
  t192 = t169_tmp * 0.000116;
  t195 = t119_tmp_tmp * t5 * 0.0421722;
  t196 = t13 * t5 * 0.0421722;
  t197_tmp = t49_tmp * t4;
  t197 = t197_tmp * t9 * 19.131469;
  t198_tmp = t123_tmp * t5 * t6 * t7;
  t198 = t198_tmp * 0.0421722;
  t199_tmp = t124_tmp * t5 * t6 * t7;
  t199 = t199_tmp * 0.0421722;
  t200 = t10 * t7 * t9 * 0.0421722;
  t201 = t122_tmp * t6 * t9 * 0.0421722;
  t202 = t119_tmp_tmp * 2.5327982;
  t203 = t13 * 2.5327982;
  t204 = t125_tmp * t6 * t7 * t9 * 19.131469;
  t205 = b_t123_tmp * 2.5327982;
  t206 = b_t124_tmp * 2.5327982;
  t223_tmp_tmp = t197_tmp * t6;
  t223_tmp = t223_tmp_tmp * t7;
  t223 = t223_tmp * t9 * 218.64536;
  t224 = b_t106_tmp * t9 * 0.0843444;
  t13 = b_t107_tmp * t9;
  t225 = t13 * 0.0843444;
  t226_tmp = b_t108_tmp * t9;
  t226 = t226_tmp * 0.0843444;
  t227 = b_t109_tmp * t9 * 0.0843444;
  t228_tmp = t107_tmp_tmp * t9;
  t228 = t228_tmp * 4.48222988;
  t229_tmp = t108_tmp_tmp * t9;
  t229 = t229_tmp * 4.48222988;
  t230 = t170_tmp * 0.16200394;
  t231 = t171_tmp * 0.16200394;
  t232 = t172_tmp * 0.16200394;
  t233 = t173_tmp * 0.16200394;
  t249 = t223_tmp * 0.000464;
  t250_tmp = t170_tmp * t8;
  t250 = t250_tmp * t9 * 2.24111494;
  t251_tmp = t171_tmp * t8;
  t251 = t251_tmp * t9 * 2.24111494;
  t252_tmp = t172_tmp * t8;
  t252 = t252_tmp * t9 * 2.24111494;
  t253_tmp_tmp = t173_tmp * t8;
  t253 = t253_tmp_tmp * t9 * 2.24111494;
  t258_tmp_tmp = t49_tmp * t5 * t6;
  t258_tmp = t258_tmp_tmp * t7;
  t258 = t258_tmp * t8 * 0.1686888;
  t260 = t258_tmp * 8.96445976;
  t262 = t154_tmp * 10.1311928;
  t275 = t27_tmp * 17.8650229011372;
  t276_tmp = in3[3] * t6 * t7;
  t276 = t276_tmp * 17.8650229011372;
  t278_tmp_tmp = t125_tmp * t5;
  t154_tmp = t278_tmp_tmp * t9;
  t278 = t154_tmp * 17.6523104011372;
  t279_tmp_tmp = t28_tmp * t7;
  t279_tmp = t279_tmp_tmp * t8;
  t279 = t279_tmp * 17.7543114011372;
  t280_tmp_tmp = t40_tmp * t6;
  t280_tmp = t280_tmp_tmp * t8;
  t280 = t280_tmp * 17.7543114011372;
  t68_tmp *= t8;
  t292 = t68_tmp * 17.4000966011372;
  t69_tmp *= t8;
  t293 = t69_tmp * 17.4000966011372;
  t70_tmp *= t8;
  t294 = t70_tmp * 17.4000966011372;
  t71_tmp *= t8;
  t295 = t71_tmp * 17.4000966011372;
  t308_tmp = t84_tmp * t5;
  t308 = t308_tmp * t8 * t9 * 17.6523104011372;
  t309_tmp = t85_tmp * t5;
  t309 = t309_tmp * t8 * t9 * 17.6523104011372;
  t310_tmp_tmp = in3[1] * t5;
  t310_tmp = t310_tmp_tmp * t6 * t7;
  t310 = t310_tmp * t8 * t9 * 17.6523104011372;
  t311_tmp = in3[2] * t5;
  t311_tmp_tmp = t311_tmp * t6 * t7;
  t311 = t311_tmp_tmp * t8 * t9 * 17.6523104011372;
  t319_tmp = b_t28_tmp * t5;
  t319 = t319_tmp * t8 * t9 * 17.6523104011372;
  t327_tmp = t32_tmp * t5;
  b_t327_tmp = t327_tmp * t6 * t7;
  t327 = b_t327_tmp * t8 * t9 * 17.6523104011372;
  t329_tmp_tmp = t197_tmp * t5 * t6;
  t329_tmp = t329_tmp_tmp * t7;
  t329 = t329_tmp * t9 * 70.609241604548814;
  t26 = t125_tmp * t21 * 0.00024;
  t33_tmp = t125_tmp * t18;
  t33 = t33_tmp * t21 * 0.00048;
  t34_tmp = t125_tmp * t19;
  t34 = t34_tmp * t21 * 0.00048;
  t41 = t164_tmp * t21 * 0.00024;
  t42 = t165_tmp * t21 * 0.00024;
  t43 = t168_tmp * t21 * 0.00024;
  t44 = t169_tmp * t21 * 0.00024;
  t10 = c_t29_tmp * t19;
  t45 = t10 * 0.00048;
  t11 = c_t30_tmp * t18;
  t46 = t11 * 0.00048;
  t51 = c_t28_tmp * t21 * 0.00024;
  t54 = t20 * t29;
  t55 = t20 * t30;
  t57 = t20 * t31;
  t58 = b_t32_tmp * t21 * 0.00024;
  t65_tmp = t33_tmp * t19;
  t65 = t65_tmp * t21 * 0.00096;
  t66 = t223_tmp * t21 * 0.00096;
  t72 = b_t27_tmp * t20 * -0.00024;
  t88_tmp = in3[0] * t19;
  t88 = t88_tmp * 18.74439256;
  t93 = t10 * t20 * -0.00048;
  t94 = t11 * t20 * -0.00048;
  t95_tmp = t74_tmp * t19;
  t95 = t95_tmp * 0.4186264;
  t96_tmp = t75_tmp * t18;
  t96 = t96_tmp * 0.4186264;
  t97_tmp = in3[0] * t18;
  b_t97_tmp = t97_tmp * t19;
  t97 = b_t97_tmp * 37.48878512;
  t110 = t170_tmp * t20 * 5.4E-5;
  t111 = t171_tmp * t20 * 5.4E-5;
  t112 = t172_tmp * t20 * 5.4E-5;
  t113 = t173_tmp * t20 * 5.4E-5;
  t117_tmp = b_t100_tmp * t18;
  t117 = t117_tmp * 8.0E-6;
  t118_tmp = b_t100_tmp * t19;
  t118 = t118_tmp * 8.0E-6;
  t130 = t102_tmp * t20 * 8.0E-6;
  t131 = t103_tmp * t20 * 8.0E-6;
  t132 = t104_tmp * t20 * 8.0E-6;
  t133 = t105_tmp * t20 * 8.0E-6;
  t134_tmp = t28_tmp_tmp * t9;
  t134 = t134_tmp * t20 * 4.0E-6;
  t135_tmp_tmp = in3[4] * t6 * t7;
  t135_tmp = t135_tmp_tmp * t9;
  t135 = t135_tmp * t20 * 4.0E-6;
  t138 = b_t107_tmp * t19 * 0.000108;
  t139 = b_t108_tmp * t18 * 0.000108;
  t152_tmp = t117_tmp * t19;
  t152 = t152_tmp * 1.6E-5;
  t10 = b_t125_tmp * t18;
  t161 = t10 * 109.32268;
  t162 = b_t125_tmp * t19 * 109.32268;
  t163 = in3[0] * t23 * 114.544349315;
  t175 = t142_tmp * t19 * 1.6E-5;
  t176 = t143_tmp * t18 * 1.6E-5;
  t177 = t33_tmp * 0.000232;
  t178 = t34_tmp * 0.000232;
  t189 = b_t29_tmp * t19 * 218.64536;
  t190 = b_t30_tmp * t18 * 218.64536;
  t11 = b_t151_tmp * t18;
  t211 = t11 * 0.0843444;
  t212 = b_t151_tmp * t19 * 0.0843444;
  t213_tmp = t151_tmp * t18;
  t213 = t213_tmp * 4.48222988;
  t214_tmp_tmp = t151_tmp * t19;
  t214 = t214_tmp_tmp * 4.48222988;
  t12 = t100_tmp * t18;
  t215 = t12 * 5.0655964;
  t216 = t100_tmp * t19 * 5.0655964;
  t222 = t10 * t19 * 218.64536;
  t234 = t28_tmp_tmp * t5 * t20 * 0.0421722;
  t235 = b_t170_tmp * t20 * 0.0843444;
  t236 = b_t171_tmp * t20 * 0.0843444;
  t237 = b_t172_tmp * t20 * 0.0843444;
  t238 = b_t173_tmp * t20 * 0.0843444;
  t239_tmp = in3[4] * t5;
  t239 = t239_tmp * t6 * t7 * t20 * 0.0421722;
  b_t106_tmp = t74_tmp_tmp * t19;
  t240 = b_t106_tmp * 458.17739726;
  b_t109_tmp = t75_tmp_tmp * t18;
  t241 = b_t109_tmp * 458.17739726;
  t246 = t65_tmp * 0.000464;
  t257 = t11 * t19 * 0.1686888;
  t259_tmp = t213_tmp * t19;
  t259 = t259_tmp * 8.96445976;
  t261 = t12 * t19 * 10.1311928;
  t271 = t13 * t19 * 0.1686888;
  t272 = t226_tmp * t18 * 0.1686888;
  t273_tmp = t228_tmp * t19;
  t273 = t273_tmp * 8.96445976;
  t274_tmp = t229_tmp * t18;
  t274 = t274_tmp * 8.96445976;
  t13 = t27_tmp * t20;
  t284 = t13 * 17.4000966011372;
  t285 = t27_tmp * t21 * 17.6523104011372;
  t286 = t74_tmp_tmp * t20 * 17.4000966011372;
  t287 = t74_tmp_tmp * t21 * 17.6523104011372;
  t288 = t75_tmp_tmp * t20 * 17.4000966011372;
  t289 = t75_tmp_tmp * t21 * 17.6523104011372;
  t290 = t276_tmp * t20 * 17.4000966011372;
  t291 = t276_tmp * t21 * 17.6523104011372;
  t12 = t154_tmp * t18;
  t304 = t12 * 35.304620802274407;
  t305 = t154_tmp * t19 * 35.304620802274407;
  t306 = t279_tmp * t21 * 17.6523104011372;
  t307 = t280_tmp * t21 * 17.6523104011372;
  t314 = t68_tmp * t21 * 17.6523104011372;
  t315 = t69_tmp * t21 * 17.6523104011372;
  t316 = t70_tmp * t21 * 17.6523104011372;
  t317 = t71_tmp * t21 * 17.6523104011372;
  t10 = b_t106_tmp * t20;
  t320 = t10 * 34.800193202274407;
  t321 = b_t106_tmp * t21 * 35.304620802274407;
  t11 = b_t109_tmp * t20;
  t322 = t11 * 34.800193202274407;
  t324 = b_t109_tmp * t21 * 35.304620802274407;
  t328 = t12 * t19 * 70.609241604548814;
  t330 = t13 * t21 * -17.6523104011372;
  t337 = t10 * t21 * -35.304620802274407;
  t338 = t11 * t21 * -35.304620802274407;
  t323 = t20 * t287;
  t325 = t20 * t289;
  t326 = t20 * t291;
  d = in3[2] * t7;
  d1 = in3[1] * t7;
  d2 = in3[1] * t14;
  d3 = in3[4] * t9;
  d4 = in3[1] * t22;
  d5 = in3[3] * t24;
  d6 = t64_tmp_tmp * t8;
  d7 = t311_tmp * t7;
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
  d20 = t311_tmp * t14;
  d21 = t109_tmp * t14;
  d22 = in3[1] * t15;
  d23 = in3[2] * t15;
  d24 = d2 * t23;
  d25 = d22 * t22;
  d26 = d16 * t23;
  d27 = d23 * t22;
  d28 = t64_tmp * t9;
  d29 = t327_tmp * t7;
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
  t154_tmp = b_t109_tmp * t14;
  t68_tmp = in3[3] * t14 * t15;
  t69_tmp = in3[4] * t14 * t15;
  t70_tmp = d10 * t14;
  d10 *= t15;
  t71_tmp = d3 * t14;
  c_t29_tmp = d20 * t23;
  c_t30_tmp = t311_tmp * t15 * t22;
  c_t28_tmp = d2 * t16;
  b_t32_tmp = d22 * t16;
  b_t27_tmp = d16 * t16;
  b_t100_tmp = d23 * t16;
  b_t107_tmp = t70_tmp * t23;
  b_t108_tmp = d10 * t22;
  b_t125_tmp = t123_tmp * t22 * t23;
  t142_tmp = t124_tmp * t22 * t23;
  t143_tmp = c_t28_tmp * t23;
  b_t151_tmp = b_t32_tmp * t22;
  t100_tmp = b_t27_tmp * t23;
  b_t170_tmp = b_t100_tmp * t22;
  b_t171_tmp = t68_tmp * t24;
  b_t172_tmp = d3 * t22 * t23;
  b_t173_tmp = in3[3] * t22 * t23 * t24;
  t226_tmp = t327_tmp * t14;
  t40_tmp = t123_tmp * t9;
  t64_tmp = t40_tmp * t14;
  d36 = t124_tmp * t9;
  d37 = d36 * t14;
  d38 = t109_tmp * t9;
  d39 = t239_tmp * t8;
  d40 = d13 * t14;
  d41 = in3[4] * t8 * t9;
  d42 = t310_tmp_tmp * t8;
  d43 = t311_tmp * t8;
  d44 = d18 * t6;
  d45 = d44 * t8 * t9;
  d46 = t32_tmp * t14;
  t10 = t32_tmp * t15;
  t32_tmp = in3[1] * t9;
  Crow_tmp = in3[2] * t9;
  b_Crow_tmp = t69_tmp * t16;
  c_Crow_tmp = t310_tmp_tmp * t14;
  d_Crow_tmp = t13 * t9;
  e_Crow_tmp = b_t109_tmp * t9;
  f_Crow_tmp = t71_tmp * t15;
  g_Crow_tmp = t310_tmp_tmp * t15 * t22;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t61_tmp_tmp
    * 0.118692 - t64_tmp_tmp * 6.93247025) - t86_tmp_tmp * 189.293797) +
    t109_tmp * 0.0523283) - d * 134.887617) - d3 * 27.33067) + d2 * 0.57959792)
    - d11 * 1.35E-5) - d12 * 3.0E-5) - d4 * 298.6557773) + d5 * 2.14348535014215)
    + in3[4] * t25 * 2.20653880014215) - t84_tmp * 4.2197645) - t85_tmp *
    4.2197645) - t170_tmp * 82.105506) - t171_tmp * 82.105506) - t172_tmp *
    82.105506) - t173_tmp * 82.105506) - d6 * 1.467745) + t327_tmp * 1.12055747)
    + b_t86_tmp_tmp * 4.2197645) - d7 * 31.4302705) - d8 * 1.467745) +
    t87_tmp_tmp * 4.2197645) - d9 * 31.4302705) - t62_tmp_tmp * t14 * 13.8649405)
    - t64_tmp_tmp * t14 * 6.93247025) - d13 * 1.12055747) - d1 * t14 *
    269.775234) - d * t14 * 134.887617) + d14 * 2.0E-6) - t62_tmp_tmp * t22 *
    269.775234) - t64_tmp_tmp * t22 * 134.887617) - d15 * t16 * 0.0210861) + d1 *
    t22 * 13.8649405) - d2 * t15 * 9.37219628) + d * t22 * 6.93247025) - d16 *
    t15 * 9.37219628) - t239_tmp * t24 * 0.01054305) - d3 * t24 * 1.0E-6) + t11 *
    3.0E-5) - d24 * 116.8139415651421) - d25 * 116.8139415651421) - d26 *
    116.8139415651421) - d27 * 116.8139415651421) - t12 * t24 * 2.20653880014215)
    - d17 * t25 * 2.20653880014215) + d4 * t23 * 9.37219628) + in3[2] * t22 *
    t23 * 9.37219628) - d5 * t25 * 3.0E-5) - t164_tmp * 0.89341) - t102_tmp *
    19.131469) - t103_tmp * 19.131469) - t165_tmp * 0.89341) - t104_tmp *
    19.131469) - t105_tmp * 19.131469) - d34 * 0.89341) - d35 * 0.89341) - d28 *
    31.4302705) - t134_tmp * 19.131469) - d29 * 31.4302705) + t168_tmp * 0.89341)
    + t169_tmp * 0.89341) - t62_tmp_tmp * t8 * t14 * 2.93549) + t135_tmp *
    19.131469) - t310_tmp_tmp * t7 * t14 * 62.860541) - d6 * t14 * 1.467745) +
    d30 * 31.4302705) - d7 * t14 * 31.4302705) - d8 * t14 * 1.467745) - d9 * t14
    * 31.4302705) - t103_tmp_tmp * t22 * 62.860541) - t105_tmp_tmp * t22 *
    31.4302705) - d19 * t22 * 1.467745) + d31 * 4.0E-6) - c_Crow_tmp * t15 *
    2.24111494) + d32 * 4.0E-6) - d20 * t15 * 2.24111494) - d21 * t15 *
    0.0523283) + d1 * t8 * t22 * 2.93549) - b_t106_tmp * t15 * 2.5327982) + d *
    t8 * t22 * 1.467745) - t154_tmp * t15 * 2.5327982) + in3[4] * t7 * t9 * t22 *
    31.4302705) - f_Crow_tmp * 27.33067) - c_Crow_tmp * t23 * 54.66134) -
    g_Crow_tmp * 54.66134) - c_t29_tmp * 54.66134) - c_t30_tmp * 54.66134) - d21
    * t23 * 1.2663991) - t109_tmp * t15 * t22 * 1.2663991) + b_t106_tmp * t23 *
    0.1046566) + t13 * t15 * t22 * 0.1046566) + t154_tmp * t23 * 0.1046566) +
    b_t109_tmp * t15 * t22 * 0.1046566) - b_t107_tmp * 2.0E-6) - b_t108_tmp *
    2.0E-6) - t68_tmp * t16 * 1.35E-5) - b_t125_tmp * 4.0E-6) + t71_tmp * t23 *
    1.12055747) + d3 * t15 * t22 * 1.12055747) + t69_tmp * t17 * 9.0E-5) +
    t310_tmp_tmp * t22 * t23 * 2.24111494) - t142_tmp * 4.0E-6) + t311_tmp * t22
    * t23 * 2.24111494) + t109_tmp * t22 * t23 * 0.0523283) + t13 * t22 * t23 *
    2.5327982) + t143_tmp * 2.14348535014215) + b_t151_tmp * 2.14348535014215) -
    d2 * t17 * t23 * 6.6196164004264508) - d22 * t17 * t22 * 6.6196164004264508)
    + b_t109_tmp * t22 * t23 * 2.5327982) + t100_tmp * 2.14348535014215) +
    b_t170_tmp * 2.14348535014215) - d16 * t17 * t23 * 6.6196164004264508) - d23
    * t17 * t22 * 6.6196164004264508) + b_t171_tmp * 2.14348535014215) +
    b_t172_tmp * 27.33067) - t69_tmp * t25 * 6.6196164004264508) + d24 * t24 *
    1.35E-5) + d25 * t24 * 1.35E-5) - d24 * t25 * 9.0E-5) - d25 * t25 * 9.0E-5)
    + d26 * t24 * 1.35E-5) + d27 * t24 * 1.35E-5) - d26 * t25 * 9.0E-5) - d27 *
    t25 * 9.0E-5) + d11 * t22 * t23 * 1.35E-5) - d12 * t22 * t23 * 9.0E-5) -
    b_t173_tmp * 2.14348535014215) + in3[4] * t22 * t23 * t25 *
    6.6196164004264508) - t119_tmp * 19.131469) - t120_tmp * 19.131469) -
    t121_tmp_tmp * 19.131469) - t122_tmp * t5 * t6 * 19.131469) + t123_tmp_tmp *
    t7 * t9 * 19.131469) + t124_tmp * t6 * t7 * t9 * 19.131469) + t27_tmp_tmp *
    t7 * t8 * t9 * 19.131469) + d45 * 19.131469) - t62_tmp * t9 * t14 *
    62.860541) - d28 * t14 * 31.4302705) - d29 * t14 * 31.4302705) - b_t122_tmp *
    t22 * 31.4302705) + d30 * t14 * 31.4302705) - t226_tmp * t15 * 1.12055747) +
    t123_tmp * t7 * t9 * t22 * 62.860541) - t64_tmp * t15 * 54.66134) - d42 *
    t14 * t15 * 0.0421722) + t124_tmp * t7 * t9 * t22 * 31.4302705) - d37 * t15 *
    54.66134) - d43 * t14 * t15 * 0.0421722) + d18 * t8 * t9 * t22 * 31.4302705)
    - d_Crow_tmp * t14 * t15 * 4.0E-6) - e_Crow_tmp * t14 * t15 * 4.0E-6) -
    t144_tmp * t14 * t23 * 0.0210861) - t144_tmp * t15 * t22 * 0.0210861) + d40 *
    t15 * 1.12055747) - t226_tmp * t23 * 27.33067) - t327_tmp * t15 * t22 *
    27.33067) + t64_tmp * t23 * 2.24111494) + t40_tmp * t15 * t22 * 2.24111494)
    + d31 * t17 * 0.00012) + d37 * t23 * 2.24111494) + d36 * t15 * t22 *
    2.24111494) + d32 * t17 * 0.00012) - d38 * t14 * t23 * 2.0E-6) - d38 * t15 *
    t22 * 2.0E-6) + t31_tmp * t14 * t15 * t16 * 2.0E-6) - d39 * t14 * t23 *
    2.0E-6) - d39 * t15 * t22 * 2.0E-6) + d40 * t23 * 27.33067) + d13 * t15 *
    t22 * 27.33067) - d15 * t14 * t15 * t16 * 0.0210861) + t327_tmp * t22 * t23 *
    1.12055747) + d41 * t14 * t23 * 0.0210861) + d41 * t15 * t22 * 0.0210861) +
    t40_tmp * t22 * t23 * 54.66134) - d31 * t25 * 8.8261552005686017) + d42 *
    t22 * t23 * 0.0421722) + d36 * t22 * t23 * 54.66134) - d32 * t25 *
    8.8261552005686017) + d43 * t22 * t23 * 0.0421722) - d46 * t17 * t23 *
    8.8261552005686017) - t10 * t17 * t22 * 8.8261552005686017) - t239_tmp * t14
    * t15 * t24 * 0.01054305) + d_Crow_tmp * t22 * t23 * 4.0E-6) + e_Crow_tmp *
    t22 * t23 * 4.0E-6) - in3[3] * t8 * t9 * t22 * t23 * 1.12055747) - t70_tmp *
    t17 * t23 * 6.0E-5) - d10 * t17 * t22 * 6.0E-5) - f_Crow_tmp * t24 * 1.0E-6)
    + b_Crow_tmp * t17 * 3.0E-5) - t123_tmp * t17 * t22 * t23 * 0.00012) - in3[1]
    * t5 * t14 * t23 * t24 * 2.0E-6) - g_Crow_tmp * t24 * 2.0E-6) - t124_tmp *
    t17 * t22 * t23 * 0.00012) - c_t29_tmp * t24 * 2.0E-6) - c_t30_tmp * t24 *
    2.0E-6) - d14 * t22 * t23 * 2.0E-6) - d46 * t23 * t25 * 0.00012) - t10 * t22
    * t25 * 0.00012) + t32_tmp * t14 * t23 * t24 * 0.0210861) + t32_tmp * t15 *
    t22 * t24 * 0.0210861) - c_t28_tmp * t17 * t23 * 2.20653880014215) -
    b_t32_tmp * t17 * t22 * 2.20653880014215) + Crow_tmp * t14 * t23 * t24 *
    0.0210861) + Crow_tmp * t15 * t22 * t24 * 0.0210861) - b_t27_tmp * t17 * t23
                       * 2.20653880014215) - b_t100_tmp * t17 * t22 *
                      2.20653880014215) + b_t107_tmp * t25 * 4.4130776002843008)
                    + b_t108_tmp * t25 * 4.4130776002843008) + in3[3] * t9 * t16
                   * t22 * t23 * 0.0210861) - t68_tmp * t17 * t24 *
                  2.20653880014215) - b_Crow_tmp * t25 * 2.20653880014215) +
                b_t125_tmp * t25 * 8.8261552005686017) + t142_tmp * t25 *
               8.8261552005686017) + t239_tmp * t22 * t23 * t24 * 0.01054305) -
             t143_tmp * t25 * 3.0E-5) - b_t151_tmp * t25 * 3.0E-5) - t100_tmp *
           t25 * 3.0E-5) - b_t170_tmp * t25 * 3.0E-5) - b_t171_tmp * t25 *
         3.0E-5) + b_t172_tmp * t24 * 1.0E-6) - t11 * t22 * t23 * 3.0E-5) + t12 *
      t22 * t23 * t24 * 2.20653880014215) + d17 * t22 * t23 * t25 *
     2.20653880014215) + b_t173_tmp * t25 * 3.0E-5;
  t32_tmp = in3[0] * t7;
  Crow_tmp = t30_tmp * t8;
  b_Crow_tmp = t151_tmp * t7;
  c_Crow_tmp = t74_tmp_tmp * t7;
  d_Crow_tmp = t108_tmp * t9;
  e_Crow_tmp = in3[0] * t22;
  f_Crow_tmp = t30_tmp * t18;
  g_Crow_tmp = t32_tmp * t18;
  t154_tmp = Crow_tmp * t18;
  t68_tmp = b_Crow_tmp * t18;
  t69_tmp = c_Crow_tmp * t8;
  t70_tmp = d_Crow_tmp * t18;
  t71_tmp = t107_tmp_tmp * t7 * t9;
  Crow[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((in3[0] * -9.9517942 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32)
    + -t33) + -t34) + t39) + t40) + t43) + t44) + -t41) + -t42) + -t45) + -t46)
    + t54) + t55) + t56) + t57) + t58) + t61) + t62) + t63) + t64) + t65) + -t49)
    + t68) + t69) + t70) + t71) + t72) + -t51) + -t59) + -t60) + t79) + -t66) +
    -t74) + -t75) + -t76) + t86) + t87) + t88) + -t84) + -t85) + t93) + t94) +
    t95) + t96) + t98) + -t97) + -t100) + t102) + t103) + t104) + t105) + t106)
    + t110) + t111) + t112) + t113) + -t107) + -t108) + -t109) + t117) + t118) +
    t123) + t124) + -t119) + -t120) + -t121) + -t122) + t135) + t136) + t137) +
    t138) + t139) + -t125) + t142) + t143) + t144) + -t130) + -t131) + -t132) +
    -t133) + -t134) + -t141) + t154) + -t145) + -t151) + -t152) + -t155) + t161)
    + t162) + t163) + t164) + t165) + -t159) + t177) + t178) + -t166) + -t167) +
    -t168) + -t169) + -t170) + -t171) + -t172) + -t173) + t187) + t188) + -t175)
    + -t176) + t198) + t199) + t200) + t201) + t204) + t205) + t206) + -t189) +
    -t190) + -t191) + -t192) + t211) + t212) + t213) + t214) + t215) + t216) +
    -t195) + -t196) + -t197) + -t202) + -t203) + t223) + t224) + t230) + t231) +
    t232) + t233) + t235) + t236) + t237) + t238) + t239) + -t222) + -t225) +
    -t226) + -t227) + -t228) + -t229) + t249) + -t234) + -t240) + -t241) + t258)
    + t260) + t262) + -t246) + -t250) + -t251) + -t252) + -t253) + -t257) +
    -t259) + -t261) + t271) + t272) + t273) + t274) + t276) + -t275) + -t278) +
    -t279) + -t280) + t284) + t285) + t287) + t289) + -t286) + -t288) + -t290) +
    -t291) + -t292) + -t293) + -t294) + -t295) + t304) + t305) + t306) + t307) +
    t308) + t309) + -t310) + -t311) + t314) + t315) + t316) + t317) + t319) +
    t320) + t322) + t323) + t325) + t326) + t329) + t330) + -t321) + -t324) +
    -t327) + -t328) + t337) + t338) + t29_tmp * 0.118692) + t30_tmp * 13.8649405)
    + t61_tmp_tmp * 18.25116472) - t56_tmp_tmp * 189.293797) + t32_tmp *
                      269.775234) - t86_tmp_tmp * 0.11686308) + t97_tmp *
                    19.9035884) - e_Crow_tmp * 184.111427985) - t61_tmp *
                  2.93549) + Crow_tmp * 2.93549) + b_Crow_tmp * 62.860541) -
               f_Crow_tmp * 27.729881) - g_Crow_tmp * 539.550468) - t98_tmp_tmp *
             539.550468) + c_Crow_tmp * 27.729881) + d_Crow_tmp * 62.860541) +
          t61_tmp_tmp * t8 * t9 * 62.860541) - t154_tmp * 5.87098) - t68_tmp *
        125.721082) - t258_tmp_tmp * 125.721082) + t69_tmp * 5.87098) - t70_tmp *
     125.721082) + t71_tmp * 125.721082;
  Crow[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((in3[0]
    * -9.37219628 + t26) + t27) + t28) + t29) + t30) + -t31) + -t32) + -t33) +
    -t34) + t39) + t40) + t43) + t44) + -t41) + -t42) + -t45) + -t46) + t54) +
    t55) + t56) + t57) + t58) + t61) + t62) + t63) + t64) + t65) + -t49) + t68)
    + t69) + t70) + t71) + t72) + -t51) + -t59) + -t60) + t79) + -t66) + -t74) +
    -t75) + -t76) + t86) + t87) + t88) + -t84) + -t85) + t93) + t94) + t95) +
    t96) + t98) + -t97) + -t100) + t102) + t103) + t104) + t105) + t106) + t110)
    + t111) + t112) + t113) + -t107) + -t108) + -t109) + t117) + t118) + t123) +
    t124) + -t119) + -t120) + -t121) + -t122) + t135) + t136) + t137) + t138) +
    t139) + -t125) + t142) + t143) + t144) + -t130) + -t131) + -t132) + -t133) +
    -t134) + -t141) + t154) + -t145) + -t151) + -t152) + -t155) + t161) + t162)
    + t163) + t164) + t165) + -t159) + t177) + t178) + -t166) + -t167) + -t168)
    + -t169) + -t170) + -t171) + -t172) + -t173) + t187) + t188) + -t175) +
    -t176) + t198) + t199) + t200) + t201) + t204) + t205) + t206) + -t189) +
    -t190) + -t191) + -t192) + t211) + t212) + t213) + t214) + t215) + t216) +
    -t195) + -t196) + -t197) + -t202) + -t203) + t223) + t224) + t230) + t231) +
    t232) + t233) + t235) + t236) + t237) + t238) + t239) + -t222) + -t225) +
    -t226) + -t227) + -t228) + -t229) + t249) + -t234) + -t240) + -t241) + t258)
    + t260) + t262) + -t246) + -t250) + -t251) + -t252) + -t253) + -t257) +
    -t259) + -t261) + t271) + t272) + t273) + t274) + t276) + -t275) + -t278) +
    -t279) + -t280) + t284) + t285) + t287) + t289) + -t286) + -t288) + -t290) +
    -t291) + -t292) + -t293) + -t294) + -t295) + t304) + t305) + t306) + t307) +
    t308) + t309) + -t310) + -t311) + t314) + t315) + t316) + t317) + t319) +
    t320) + t322) + t323) + t325) + t326) + t329) + t330) + -t321) + -t324) +
                   -t327) + -t328) + t337) + t338) + t97_tmp * 18.74439256) +
              e_Crow_tmp * 114.544349315) - f_Crow_tmp * 13.8649405) -
            g_Crow_tmp * 269.775234) - t98_tmp_tmp * 269.775234) + c_Crow_tmp *
          13.8649405) - t154_tmp * 2.93549) - t68_tmp * 62.860541) -
       t258_tmp_tmp * 62.860541) + t69_tmp * 2.93549) - t70_tmp * 62.860541) +
    t71_tmp * 62.860541;
  d = in3[0] * t9;
  d1 = in3[0] * t20;
  d2 = t125_tmp * t8;
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
  d22 = t308_tmp * t9;
  d23 = t309_tmp * t9;
  d24 = t74_tmp * t9;
  d25 = t278_tmp_tmp * t8;
  d26 = d25 * t9;
  d27 = t75_tmp * t9;
  d28 = t310_tmp * t9;
  d29 = t311_tmp_tmp * t9;
  d30 = d9 * t19;
  d31 = t107_tmp_tmp * t19;
  d32 = t108_tmp_tmp * t18;
  b_t109_tmp = b_t29_tmp * t8;
  Crow_tmp = b_t109_tmp * t9;
  b_t106_tmp = b_t30_tmp * t8;
  b_Crow_tmp = b_t106_tmp * t9;
  d_Crow_tmp = d26 * t18;
  e_Crow_tmp = t223_tmp * t8;
  t12 = in3[2] * t2 * t3 * t4 * t8;
  t13 = in3[0] * t2 * t3 * t6 * t7 * t9;
  f_Crow_tmp = t142_tmp_tmp * t19;
  g_Crow_tmp = t143_tmp_tmp * t18;
  t154_tmp = b_t98_tmp_tmp * t20;
  t68_tmp = d24 * t19;
  t69_tmp = d27 * t18;
  t70_tmp = t198_tmp * t8;
  t71_tmp = t199_tmp * t8;
  t10 = t329_tmp * t8;
  t11 = in3[1] * t2 * t3 * t4 * t8;
  Crow[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((in3[0] * 2.7E-5 - t151_tmp * 4.0E-6) + t109_tmp * 0.89341) + d *
    0.0421722) - t97_tmp * 2.7E-5) - t88_tmp * 2.7E-5) - d1 * 5.4E-5) + in3[0] *
    t24 * 8.7000483005686018) - t84_tmp * 17.8650229011372) - t85_tmp *
    17.8650229011372) + d33 * 2.93549) - t279_tmp_tmp * 0.00012) - t280_tmp_tmp *
    0.00012) + t327_tmp * 19.131469) + b_t86_tmp_tmp * 17.8650229011372) +
    t87_tmp_tmp * 17.8650229011372) - d13 * 19.131469) + t33_tmp * 0.1046566) +
    t34_tmp * 0.1046566) + t213_tmp * 4.0E-6) + t214_tmp_tmp * 4.0E-6) +
    t151_tmp * t20 * 8.0E-6) - in3[0] * t9 * t18 * 0.0421722) - d4 * 0.0421722)
    - d * t20 * 0.0843444) + b_t97_tmp * 5.4E-5) + d14 * 5.4E-5) + d15 * 5.4E-5)
    + t107_tmp_tmp * 2.5327982) + t106_tmp * 2.5327982) - t107_tmp * t7 *
    0.89341) - t108_tmp * t6 * 0.89341) + b_t28_tmp * 0.102001) + t108_tmp_tmp *
    2.5327982) + t121_tmp * 62.860541) - t74_tmp * 0.000116) - d5 * 0.000116) -
    d34 * 0.1046566) - d35 * 0.1046566) - t75_tmp * 0.000116) - t109_tmp_tmp_tmp
    * 2.5327982) - t32_tmp_tmp * 0.102001) - t27_tmp_tmp * t8 * t9 * 62.860541)
    + d6 * 0.000116) + d7 * 17.4000966011372) + t84_tmp * t21 * 17.6523104011372)
    + d8 * 17.4000966011372) + t85_tmp * t21 * 17.6523104011372) - t125_tmp * t7
    * t18 * 2.93549) - d9 * 17.4000966011372) - d10 * 17.4000966011372) - d2 *
    t21 * 17.6523104011372) - d11 * 17.4000966011372) + t279_tmp_tmp * t21 *
    0.00024) + t280_tmp_tmp * t21 * 0.00024) - t117_tmp * 2.24111494) -
    b_t86_tmp_tmp * t21 * 17.6523104011372) - d12 * 17.4000966011372) - t118_tmp
    * 2.24111494) - t87_tmp_tmp * t21 * 17.6523104011372) - t65_tmp * 0.2093132)
    - t259_tmp * 8.0E-6) - t213_tmp * t20 * 8.0E-6) - t214_tmp_tmp * t20 *
    8.0E-6) + d16 * 0.0843444) + d3 * t20 * 0.0843444) + d4 * t20 * 0.0843444) -
    d17 * 0.000108) - t223_tmp_tmp * 2.93549) + t142_tmp_tmp * 0.0421722) +
    t141_tmp * 0.0421722) - b_t98_tmp_tmp * 5.4E-5) + t119_tmp_tmp * t8 * 5.4E-5)
    + t28_tmp_tmp * t4 * t5 * 54.66134) + t30_tmp * t4 * t5 * t7 * 0.0421722) +
    t12 * 5.4E-5) + d22 * 0.00024) + t228_tmp * 4.0E-6) + d23 * 0.00024) +
    t106_tmp * t9 * 4.0E-6) - t121_tmp_tmp * 2.24111494) - c_t122_tmp *
    2.24111494) + t229_tmp * 4.0E-6) - d24 * 54.66134) - d5 * t9 * 54.66134) -
    b_t144_tmp * 0.0421722) + t59_tmp * t8 * t9 * 19.131469) + t60_tmp * t8 * t9
    * 19.131469) - d26 * 0.00024) - d20 * 5.4E-5) - b_t327_tmp * 54.66134) - d27
    * 54.66134) - d21 * 5.4E-5) - t39_tmp * t9 * 17.6523104011372) - b_t40_tmp *
    t9 * 17.6523104011372) - d28 * 0.00024) - d29 * 0.00024) + in3[3] * t2 * t7 *
    t8 * t9 * 2.24111494) + d45 * 2.24111494) - t109_tmp_tmp_tmp * t9 * 4.0E-6)
    - d31 * 5.0655964) - d32 * 5.0655964) + d6 * t9 * 54.66134) + b_t28_tmp *
    t21 * 17.6523104011372) + t95_tmp * 0.000232) + t96_tmp * 0.000232) +
    t74_tmp * t21 * 0.00024) + d5 * t21 * 0.00024) + t75_tmp * t21 * 0.00024) +
    t32_tmp * t8 * t9 * t18 * 62.860541) - t32_tmp_tmp * t21 * 17.6523104011372)
    - d6 * t21 * 0.00024) - d7 * t21 * 17.6523104011372) - d8 * t21 *
    17.6523104011372) + d30 * 34.800193202274407) + d9 * t21 * 17.6523104011372)
    + d10 * t21 * 17.6523104011372) + t152_tmp * 4.48222988) + d11 * t21 *
    17.6523104011372) + d12 * t21 * 17.6523104011372) + t259_tmp * t20 * 1.6E-5)
    - d16 * t20 * 0.1686888) + t197_tmp * t6 * t7 * 0.2093132) + t49_tmp * t5 *
    t6 * t7 * 8.0E-6) - t84_tmp * t4 * t5 * t8 * 8.0E-6) - t63_tmp_tmp * t3 * t4
    * t5 * t8 * 8.0E-6) - t13 * 0.0843444) + t11 * t9 * 0.0843444) + t319_tmp *
    t9 * 0.00024) + t98_tmp_tmp * t8 * t9 * 62.860541) + t12 * t9 * 0.0843444) -
    Crow_tmp * 17.6523104011372) - b_t27_tmp_tmp * t8 * t9 * 17.6523104011372) +
    t70_tmp * 8.0E-6) - b_Crow_tmp * 17.6523104011372) + t71_tmp * 8.0E-6) - d20
    * t9 * 0.0843444) - b_t327_tmp * t9 * 0.00024) - f_Crow_tmp * 0.0843444) -
    d21 * t9 * 0.0843444) - g_Crow_tmp * 0.0843444) + t154_tmp * 0.000108) +
    b_t31_tmp * t8 * t9 * 17.6523104011372) - t273_tmp * 8.0E-6) - d22 * t20 *
    0.00024) - t274_tmp * 8.0E-6) - d23 * t20 * 0.00024) + t68_tmp * 109.32268)
                    + d_Crow_tmp * 0.00024) + t69_tmp * 109.32268) + d26 * t19 *
                  0.00024) + d28 * t20 * 0.00024) + d29 * t20 * 0.00024) -
               t95_tmp * t21 * 0.00048) - t96_tmp * t21 * 0.00048) - d30 * t21 *
             35.304620802274407) - e_Crow_tmp * 34.800193202274407) - b_t154_tmp
           * 4.48222988) - t258_tmp * t20 * 1.6E-5) + t13 * t20 * 0.1686888) +
        Crow_tmp * t19 * 35.304620802274407) + b_Crow_tmp * t18 *
       35.304620802274407) - d_Crow_tmp * t19 * 0.00048) + e_Crow_tmp * t21 *
     35.304620802274407) + t10 * t9 * 0.00048;
  d5 = t4 * t18;
  d6 = t4 * t19;
  d7 = t151_tmp * t9;
  d8 = in3[3] * t2 * t7;
  d9 = d33 * t5;
  d10 = t74_tmp_tmp * t9;
  d11 = t75_tmp_tmp * t9;
  d12 = d7 * t18;
  d13 = d7 * t19;
  d2 *= t9;
  t32_tmp = d12 * t19;
  Crow_tmp = t142_tmp_tmp * t9;
  b_Crow_tmp = t143_tmp_tmp * t9;
  d_Crow_tmp = t258_tmp * t9;
  Crow[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d
    * -54.66134 + t97_tmp * 0.00012) + t88_tmp * 0.00012) - d1 * 0.00012) + t4 *
    t27) + t4 * t43) + t4 * t44) + t4 * t170) + t4 * t171) + t4 * t172) + t4 *
    t173) + t4 * t285) + t4 * t308) + t4 * t309) - d8 * 0.00012) - d44 * 0.00012)
    + t144_tmp * 19.131469) - d41 * 19.131469) + d3 * 54.66134) + d4 * 54.66134)
    - b_t97_tmp * 0.00024) + d14 * 0.00012) - t97_tmp * t21 * 0.00024) + d15 *
    0.00012) - t88_tmp * t21 * 0.00024) + d1 * t21 * 0.00024) + d5 * t100) + d6 *
    t100) + d5 * t151) + d6 * t151) + d5 * t159) + d6 * t159) - t107_tmp_tmp *
    17.6523104011372) + t106_tmp * 0.102001) - t49_tmp * t9 * 19.131469) -
    t108_tmp_tmp * 17.6523104011372) + d9 * 62.860541) - d10 * 2.24111494) - d25
    * 0.0421722) - t250_tmp * 17.7543114011372) - t251_tmp * 17.7543114011372) -
    t39_tmp * 4.0E-6) - b_t40_tmp * 4.0E-6) - d11 * 2.24111494) - t252_tmp *
    17.7543114011372) - t253_tmp_tmp * 17.7543114011372) - t109_tmp_tmp_tmp *
    0.102001) - d2 * 4.0E-6) + t56_tmp * t9 * 19.131469) + t279_tmp_tmp * t9 *
    0.0421722) + t280_tmp_tmp * t9 * 0.0421722) - t28_tmp * t8 * t9 * 62.860541)
    - t30_tmp * t9 * t18 * 62.860541) + d12 * 17.6523104011372) + d13 *
    17.6523104011372) + d8 * t21 * 0.00024) + d44 * t21 * 0.00024) - d7 * t20 *
    17.6523104011372) - d16 * 109.32268) - d17 * 0.00024) + b_t97_tmp * t21 *
    0.00048) - d14 * t21 * 0.00024) - d15 * t21 * 0.00024) + t29_tmp * t4 * t5 *
    t6 * 54.66134) + t27_tmp_tmp * t3 * t4 * t5 * 54.66134) + b_t98_tmp_tmp *
    0.00024) - t142_tmp_tmp_tmp * t7 * 19.131469) - t143_tmp_tmp_tmp * t6 *
    19.131469) + t11 * 0.00012) - t319_tmp * 0.0421722) + t143_tmp_tmp *
    54.66134) - b_t61_tmp * 4.0E-6) - b_t62_tmp * 4.0E-6) + t12 * 0.00012) -
    t63_tmp * 4.0E-6) - b_t64_tmp * 4.0E-6) + b_t109_tmp * 4.0E-6) - d9 * t7 *
    2.24111494) - d19 * t5 * t6 * 2.24111494) - b_t28_tmp * t9 * 4.0E-6) +
    b_t106_tmp * 4.0E-6) + c_Crow_tmp * t9 * 62.860541) - d24 * 0.0421722) -
    b_t144_tmp * 54.66134) - d20 * 0.00012) - t27_tmp_tmp * t5 * t7 * t9 *
    17.6523104011372) - d18 * t5 * t6 * t9 * 17.6523104011372) - t28_tmp_tmp *
    t8 * t9 * 54.66134) + b_t327_tmp * 0.0421722) - d27 * 0.0421722) - d21 *
    0.00012) + t279_tmp * t9 * 2.24111494) + t280_tmp * t9 * 2.24111494) +
    t32_tmp_tmp * t9 * 4.0E-6) + d31 * 35.304620802274407) - t308_tmp * t20 *
    0.0421722) + d32 * 35.304620802274407) - t309_tmp * t20 * 0.0421722) +
    t107_tmp_tmp * t21 * 35.304620802274407) - t278_tmp_tmp * t7 * t18 *
    62.860541) + t135_tmp_tmp * t8 * t9 * 54.66134) + t108_tmp_tmp * t21 *
    35.304620802274407) - t84_tmp * t9 * t20 * 4.0E-6) + d10 * t19 * 4.48222988)
    - t85_tmp * t9 * t20 * 4.0E-6) + d11 * t18 * 4.48222988) + t250_tmp * t21 *
    17.6523104011372) + t251_tmp * t21 * 17.6523104011372) + t310_tmp * t20 *
    0.0421722) + t252_tmp * t21 * 17.6523104011372) + t253_tmp_tmp * t21 *
    17.6523104011372) + t311_tmp_tmp * t20 * 0.0421722) - t109_tmp_tmp_tmp * t21
    * 17.6523104011372) + b_t86_tmp_tmp * t9 * t20 * 4.0E-6) + t87_tmp_tmp * t9 *
    t20 * 4.0E-6) - t278_tmp_tmp * t18 * t19 * 4.48222988) - t32_tmp *
    35.304620802274407) + d12 * t20 * 17.6523104011372) + d13 * t20 *
    17.6523104011372) + d17 * t21 * 0.00048) - t329_tmp_tmp * 62.860541) +
    Crow_tmp * 0.00048) + t13 * 109.32268) + b_Crow_tmp * 0.00048) + t102_tmp *
    t8 * t9 * 0.00024) + t103_tmp * t8 * t9 * 0.00024) + t104_tmp * t8 * t9 *
    0.00024) + t105_tmp * t8 * t9 * 0.00024) - b_t144_tmp * t9 * 0.00024) -
    f_Crow_tmp * 109.32268) - g_Crow_tmp * 109.32268) + t154_tmp * 0.00024) -
    b_t98_tmp_tmp * t21 * 0.00048) - t11 * t21 * 0.00024) - b_t109_tmp * t19 *
                       8.0E-6) - t12 * t21 * 0.00024) - b_t106_tmp * t18 *
                     8.0E-6) + t68_tmp * 0.0843444) + t69_tmp * 0.0843444) - d31
                  * t21 * 70.609241604548814) - d32 * t21 * 70.609241604548814)
                - d25 * t18 * t19 * 0.0843444) - d2 * t18 * t19 * 8.0E-6) -
              t32_tmp * t20 * 35.304620802274407) + t329_tmp * 4.48222988) +
            d_Crow_tmp * 35.304620802274407) - t70_tmp * t9 * 17.6523104011372)
          - t71_tmp * t9 * 17.6523104011372) - Crow_tmp * t19 * 0.00096) -
        b_Crow_tmp * t18 * 0.00096) - t154_tmp * t21 * 0.00048) + t10 *
      0.0843444) + e_Crow_tmp * t9 * 8.0E-6) + d_Crow_tmp * t20 *
    35.304620802274407;
  Crow[5] = 0.0;
}

static void c_coriolis_row_4(const real_T in2[6], const real_T in3[6], real_T
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
  real_T t66_tmp_tmp;
  real_T b_t66_tmp_tmp;
  real_T t67_tmp_tmp;
  real_T b_t67_tmp_tmp;
  real_T t74_tmp;
  real_T t75_tmp;
  real_T t78_tmp;
  real_T b_t78_tmp;
  real_T t79_tmp;
  real_T b_t79_tmp;
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
  /*     Coriolis matrix row number 4 of 6 for Quantec Ultra SE 150.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  /*     02-Mar-2021 15:55:50 */
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
  t66_tmp_tmp = t32_tmp_tmp * t4;
  b_t66_tmp_tmp = t66_tmp_tmp * t7;
  t67_tmp_tmp = t53_tmp * t4;
  b_t67_tmp_tmp = t67_tmp_tmp * t6;
  t74_tmp = in3[1] * t8;
  t75_tmp = in3[2] * t8;
  t78_tmp = t32_tmp_tmp * t5;
  b_t78_tmp = t78_tmp * t7;
  t79_tmp = t53_tmp * t5;
  b_t79_tmp = t79_tmp * t6;
  t94_tmp = in3[4] * t8;
  t106_tmp = t66_tmp_tmp * t5;
  t107_tmp = t67_tmp_tmp * t5;
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
  d20 = t66_tmp_tmp * t6;
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
  t78_tmp = t78_tmp * t6 * t8 * t9;
  t67_tmp_tmp = t79_tmp * t7 * t8 * t9;
  t66_tmp_tmp = d65 * t12;
  t32_tmp_tmp = in3[0] * t2 * t3 * t4 * t6 * t7 * t8;
  t53_tmp = d58 * t4;
  t61_tmp = t30_tmp * t6 * t7;
  Crow[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((in3[0] * -2.7E-5 + t31_tmp * 4.0E-6) - d1 * 0.0421722) + d2 *
    2.7E-5) + d3 * 2.7E-5) + in3[0] * t14 * 5.4E-5) - in3[0] * t16 *
    8.7000483005686018) - d8 * 0.4649263) - d7 * 0.4649263) - d11 * 0.00012) -
    d13 * 0.00012) + d9 * 0.4649263) - d * t8 * 2.93549) + d10 * 0.4649263) -
    d14 * 0.1046566) - t50_tmp * t13 * 0.1046566) - d15 * 4.0E-6) - d16 * 4.0E-6)
    - t31_tmp * t14 * 8.0E-6) + d17 * 0.0421722) + d18 * 0.0421722) + d1 * t14 *
    0.0843444) - d19 * 5.4E-5) - d2 * t14 * 5.4E-5) - d3 * t14 * 5.4E-5) - d20 *
    2.5327982) + b_t66_tmp_tmp * 0.89341) + b_t67_tmp_tmp * 0.89341) - t53_tmp *
    17.7543114011372) - d59 * 2.5327982) - in3[1] * t2 * t3 * t8 * 0.1046566) -
    d27 * 0.000116) - d38 * 0.000116) - d7 * t8 * 0.1046566) - d40 * 0.000116) -
    d30 * 0.000116) + d31 * 0.000116) + d33 * 0.000116) - d34 * 2.5327982) - d35
    * 2.5327982) - d36 * 2.5327982) - d37 * 2.5327982) - d41 * 17.4000966011372)
    - d32 * t9 * 62.860541) - d42 * 17.4000966011372) + d43 * 17.7543114011372)
    + d9 * t8 * 0.1046566) + t50_tmp * t7 * t12 * 2.93549) + d10 * t8 *
    0.1046566) + d44 * 17.4000966011372) + d45 * 17.4000966011372) + d23 * t15 *
    17.6523104011372) + d47 * 17.4000966011372) + d11 * t15 * 0.00024) + d13 *
    t15 * 0.00024) + d14 * t13 * 0.2093132) + d46 * 2.24111494) + d49 *
    17.4000966011372) + d48 * 8.0E-6) + d24 * t13 * 2.24111494) + d15 * t14 *
    8.0E-6) + d16 * t14 * 8.0E-6) - d50 * 0.0843444) - d17 * t14 * 0.0843444) -
    d18 * t14 * 0.0843444) + d19 * t14 * 0.000108) + d51 * 2.93549) - d52 *
    0.0421722) + d54 * 5.4E-5) - d25 * t8 * 5.4E-5) - d53 * 0.0421722) - d25 *
    t9 * 2.24111494) - d56 * 5.4E-5) - d55 * t9 * 2.24111494) - d57 * 4.0E-6) +
    d58 * t5 * t8 * 4.0E-6) - d59 * t9 * 4.0E-6) - d27 * t9 * 54.66134) - d5 *
    t5 * t7 * t8 * 0.0421722) - d38 * t9 * 54.66134) - d21 * t5 * t6 * t8 *
    0.0421722) - d6 * t4 * t7 * t9 * 54.66134) - d6 * t5 * t7 * t8 * 0.0421722)
    - d30 * t9 * 54.66134) - d22 * t5 * t6 * t8 * 0.0421722) + d20 * t13 *
    5.0655964) + d64 * 54.66134) - b_t52_tmp * 19.131469) + d59 * t12 *
    5.0655964) - c_t53_tmp * 19.131469) + d65 * 0.00024) + d62 * 5.4E-5) - d58 *
    t8 * t9 * 0.0421722) + d66 * 54.66134) - d34 * t9 * 4.0E-6) - d35 * t9 *
    4.0E-6) + d60 * t9 * 2.24111494) + d63 * 5.4E-5) - d4 * t5 * t7 * t9 *
    17.6523104011372) - d12 * t5 * t6 * t9 * 17.6523104011372) - d36 * t9 *
    4.0E-6) - d37 * t9 * 4.0E-6) + d61 * t9 * 2.24111494) + t53_tmp * t15 *
    17.6523104011372) - d67 * 0.000232) + d27 * t15 * 0.00024) + d38 * t15 *
    0.00024) - d68 * 0.000232) + d40 * t15 * 0.00024) + d30 * t15 * 0.00024) -
    t18_tmp * t6 * t7 * t8 * 4.0E-6) - d31 * t15 * 0.00024) - d33 * t15 *
    0.00024) + in3[4] * t6 * t7 * t8 * t9 * 0.0421722) + d41 * t15 *
    17.6523104011372) - in3[0] * t7 * t8 * t9 * t12 * 62.860541) + d42 * t15 *
    17.6523104011372) - d43 * t15 * 17.6523104011372) - d69 * 34.800193202274407)
    - d44 * t15 * 17.6523104011372) - d45 * t15 * 17.6523104011372) - d46 * t13 *
    4.48222988) - d47 * t15 * 17.6523104011372) - d48 * t14 * 1.6E-5) - d49 *
    t15 * 17.6523104011372) + d50 * t14 * 0.1686888) - d51 * t7 * 0.2093132) -
    t61_tmp * 8.0E-6) + d25 * t5 * t8 * 8.0E-6) + d55 * t5 * t8 * 8.0E-6) + d54 *
    t9 * 0.0843444) - d5 * t3 * t4 * t8 * t9 * 0.0843444) + t53_tmp * t5 * t9 *
    0.00024) - in3[0] * t2 * t3 * t6 * t8 * t9 * 62.860541) - d26 * t5 * t7 * t9
    * 17.6523104011372) - d28 * t5 * t6 * t9 * 17.6523104011372) - d56 * t9 *
    0.0843444) - d39 * t5 * t7 * t9 * 17.6523104011372) - d29 * t5 * t6 * t9 *
    17.6523104011372) + d52 * t13 * 0.0843444) + t78_tmp * 17.6523104011372) +
    d53 * t12 * 0.0843444) - b_t20_tmp * t6 * t7 * t8 * 8.0E-6) - d54 * t14 *
    0.000108) + t67_tmp_tmp * 17.6523104011372) - b_t21_tmp * t6 * t7 * t8 *
    8.0E-6) + d57 * t13 * 8.0E-6) + d8 * t5 * t9 * t14 * 0.00024) + in3[0] * t3 *
    t4 * t7 * t9 * t12 * 8.0E-6) + d62 * t9 * 0.0843444) + d7 * t5 * t9 * t14 *
    0.00024) - b_t44_tmp * t6 * t7 * t9 * 0.00024) + d63 * t9 * 0.0843444) - d64
                     * t13 * 109.32268) - t66_tmp_tmp * 0.00024) - d66 * t12 *
                   109.32268) - d65 * t13 * 0.00024) - t38_tmp * t6 * t7 * t9 *
                 t14 * 0.00024) - t39_tmp * t6 * t7 * t9 * t14 * 0.00024) + d67 *
               t15 * 0.00048) + d68 * t15 * 0.00048) + d69 * t15 *
             35.304620802274407) + t32_tmp_tmp * 34.800193202274407) + d54 * t8 *
           t9 * 4.48222988) + t61_tmp * t14 * 1.6E-5) - in3[0] * t2 * t3 * t6 *
         t7 * t9 * t14 * 0.1686888) - t78_tmp * t13 * 35.304620802274407) -
       t67_tmp_tmp * t12 * 35.304620802274407) + t66_tmp_tmp * t13 * 0.00048) -
     t32_tmp_tmp * t15 * 35.304620802274407) - t60_tmp * t6 * t7 * t8 * t9 *
    0.00048;
  t78_tmp = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((-(t18_tmp *
    t8 * t9 * 0.00024) + -(b_t20_tmp * t8 * t9 * 0.00024)) + -(b_t21_tmp * t8 *
    t9 * 0.00024)) + b_t66_tmp_tmp * t15 * 0.00024) + b_t67_tmp_tmp * t15 *
    0.00024) + -(t20_tmp * 0.1046566)) + -(t21_tmp * 0.1046566)) + t30_tmp * t9 *
    t14 * 0.00024) + b_t33_tmp * 0.1046566) + -(b_t31_tmp * t9 * t14 * 0.00024))
    + -(b_t32_tmp * 0.1046566)) + in3[1] * 2.7E-5) + in3[2] * 2.7E-5) + -t38) +
    -t39) + b_t44_tmp * 4.0E-6) + -(in3[1] * t14 * 5.4E-5)) + -(in3[2] * t14 *
    5.4E-5)) + t38_tmp * t14 * 8.0E-6) + t39_tmp * t14 * 8.0E-6) + b_t50_tmp *
    5.4E-5) + -(b_t49_tmp * 5.4E-5)) + t54_tmp * 0.0421722) + t55_tmp *
    0.0421722) + -(b_t52_tmp * 4.0E-6)) + -(c_t53_tmp * 4.0E-6)) + t33_tmp *
    0.4649263) + t60_tmp * t8 * 8.0E-6) + -(t32_tmp * 0.4649263)) + -(b_t61_tmp *
    t8 * 8.0E-6)) + -(t44_tmp * t9 * 0.0421722)) + -(b_t66_tmp_tmp * t9 *
    54.66134)) + -(b_t67_tmp_tmp * t9 * 54.66134)) + t74_tmp * t9 * 2.24111494)
    + t75_tmp * t9 * 2.24111494) + -(t54_tmp * t14 * 0.0843444)) + -(t55_tmp *
    t14 * 0.0843444)) + -(b_t66_tmp_tmp * 0.000116)) + -(b_t67_tmp_tmp *
    0.000116)) + -(b_t78_tmp * t8 * 0.0421722)) + -(b_t79_tmp * t8 * 0.0421722))
    + -(t52_tmp * 2.5327982)) + -(b_t53_tmp * 2.5327982)) + b_t50_tmp * t9 *
    0.0843444) + -(b_t49_tmp * t9 * 0.0843444)) + t50_tmp_tmp * t9 * 2.24111494)
                        + -(t49_tmp * t9 * 2.24111494)) + t94_tmp *
                       17.7543114011372) + in3[1] * t16 * 8.7000483005686018) +
                     in3[2] * t16 * 8.7000483005686018) + -(t94_tmp * t15 *
    17.6523104011372)) + t102_tmp * 17.4000966011372) + -(t99_tmp *
    17.4000966011372)) + -(t20_tmp * t8 * t15 * 17.6523104011372)) + -(t21_tmp *
    t8 * t15 * 17.6523104011372)) + -(t106_tmp * t7 * t9 * 17.6523104011372)) +
              -(t107_tmp * t6 * t9 * 17.6523104011372)) + t99_tmp * t15 *
             17.6523104011372) + -(t102_tmp * t15 * 17.6523104011372);
  Crow[1] = (((t78_tmp + t20_tmp * t7 * 2.93549) - t33_tmp_tmp * t8 * 2.93549) -
             t50_tmp_tmp_tmp * t9 * 62.860541) - in3[1] * t7 * t8 * t9 *
    62.860541;
  Crow[2] = t78_tmp;
  Crow[3] = in3[4] * t17 * 8.8261552005686017 - in3[4] * muDoubleScalarCos(t11) *
    0.00012;
  Crow[4] = (((((((((((((((((((((((((((((in3[3] * 0.00012 + t74_tmp *
    17.7543114011372) + t18_tmp * 4.0E-6) + t75_tmp * 17.7543114011372) - in3[4]
    * t9 * 0.0421722) - in3[3] * t15 * 0.00024) + in3[3] * t17 *
    8.8261552005686017) + t4 * t38) + t4 * t39) - t52_tmp_tmp * 0.00012) -
    t53_tmp_tmp * 0.00012) - t20_tmp * t9 * 0.0421722) - t21_tmp * t9 *
    0.0421722) - t74_tmp * t15 * 17.6523104011372) - t75_tmp * t15 *
    17.6523104011372) - t49_tmp * 17.7543114011372) + t50_tmp_tmp *
    17.7543114011372) - t38_tmp * t8 * t9 * 0.00024) + t52_tmp_tmp * t15 *
                        0.00024) + t53_tmp_tmp * t15 * 0.00024) - t39_tmp * t8 *
                      t9 * 0.00024) + t30_tmp * t8 * 4.0E-6) - b_t32_tmp * t9 *
                    0.0421722) - b_t78_tmp * t9 * 17.6523104011372) - b_t79_tmp *
                  t9 * 17.6523104011372) + t49_tmp * t15 * 17.6523104011372) -
                b_t31_tmp * t8 * 4.0E-6) + b_t33_tmp * t9 * 0.0421722) -
              t50_tmp_tmp * t15 * 17.6523104011372) + t60_tmp * t9 * 0.00024) -
    b_t61_tmp * t9 * 0.00024;
  Crow[5] = 0.0;
}

void coriolis_150(const real_T q[6], const real_T qd[6], real_T C[36])
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
  real_T t63_tmp_tmp;
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
  real_T t60;
  real_T t25;
  real_T t31;
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

  /*  CORIOLIS - Coriolis matrix for the Quantec Ultra SE 150 arm  */
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
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  c_coriolis_row_1(q, qd, b_dv);
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
  /*     Coriolis matrix row number 2 of 6 for Quantec Ultra SE 150.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  /*     02-Mar-2021 15:55:39 */
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
  t63_tmp_tmp = qd[0] * t5_tmp;
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
  d10 = t63_tmp_tmp * t7_tmp;
  d11 = d2 * t7_tmp;
  d12 = t30_tmp * t9_tmp;
  d13 = t63_tmp_tmp * t8_tmp;
  d14 = t30_tmp * t12_tmp;
  d15 = d1 * t9_tmp;
  d16 = t63_tmp_tmp * t12_tmp;
  d17 = t30_tmp * t13_tmp;
  d18 = t27_tmp * t7_tmp;
  d19 = t33_tmp * t6_tmp;
  d20 = qd[0] * muDoubleScalarSin(q[1] * 2.0);
  d21 = qd[0] * muDoubleScalarSin(q[2] * 2.0) * 114.544349315;
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
  t60 = d60 * t6_tmp * t8_tmp;
  t25 = d34 * t9_tmp;
  t31 = b_t43_tmp * t8_tmp;
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
    17.6523104011372;
  bb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t7_tmp * t8_tmp;
  C[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((qd[0] * 9.9517942 + d20 * 184.111427985) - d21) -
    t27_tmp * 0.118692) - t33_tmp * 13.8649405) + t30_tmp * 0.000116) +
    t63_tmp_tmp * 2.24111494) + d * 189.293797) - d3 * 269.775234) + d1 *
    2.5327982) - d4 * 19.9035884) - qd[0] * t13_tmp * 18.74439256) + d5 *
    4.2197645) + d7 * 0.4649263) + d18 * 82.105506) + d19 * 82.105506) - d9 *
    2.93549) - d10 * 62.860541) + d12 * 54.66134) + d13 * 0.0421722) - d8 *
    4.2197645) + t33_tmp * t12_tmp * 27.729881) - d14 * 0.000232) - d11 *
    0.4649263) - d17 * 0.000232) - d16 * 4.48222988) + d15 * 4.0E-6) + d2 *
    t8_tmp * 2.93549) - t63_tmp_tmp * t13_tmp * 4.48222988) - t30_tmp * t15_tmp *
    0.00024) + d3 * t12_tmp * 539.550468) - d22 * 5.0655964) - d1 * t13_tmp *
    5.0655964) + d4 * t13_tmp * 37.48878512) + t39_tmp_tmp * 539.550468) +
    t_C_tmp * 0.89341) - t27_tmp * t5_tmp * t6_tmp * 109.32268) + s_C_tmp *
    19.131469) + qd[0] * t3_tmp * t5_tmp * t6_tmp * 19.131469) + d31 * 0.0421722)
    - d32 * 27.729881) - d34 * 109.32268) + d42 * 0.2093132) - d40 * 62.860541)
    + d7 * t8_tmp * 0.1046566) + d36 * 0.000116) + d38 * 0.000116) + d45 *
    0.2093132) + d47 * 17.6523104011372) + d49 * 4.0E-6) + d43 * 2.5327982) +
    d44 * 2.5327982) + d50 * 458.17739726) - d57 * 0.89341) + d52 * 0.102001) +
    d53 * 0.102001) + d54 * 17.4000966011372) + d51 * 458.17739726) + d55 *
    17.4000966011372) + d41 * t9_tmp * 62.860541) - d48 * 0.0421722) - d23 *
    t15_tmp * 17.6523104011372) + d9 * t12_tmp * 5.87098) + d29 * t8_tmp *
    62.860541) + c_C_tmp * 17.4000966011372) + d10 * t12_tmp * 125.721082) - d11
    * t8_tmp * 0.1046566) - d27 * t15_tmp * 17.6523104011372) - C_tmp *
    109.32268) - b_C_tmp * 0.0843444) - d12 * t13_tmp * 109.32268) - d13 *
    t13_tmp * 0.0843444) - d56 * 4.0E-6) + t32_tmp * 0.000464) - d_C_tmp *
    8.0E-6) + d16 * t13_tmp * 8.96445976) - d15 * t13_tmp * 8.0E-6) -
    t33_tmp_tmp * 17.4000966011372) + d14 * t15_tmp * 0.00048) + d17 * t15_tmp *
    0.00048) + d22 * t13_tmp * 10.1311928) + q_C_tmp * 125.721082) + d59 *
    19.131469) - t39_tmp * 37.48878512) + t40_tmp_tmp * t6_tmp * t8_tmp * 5.4E-5)
    + p_C_tmp * t8_tmp * 5.4E-5) + t40_tmp_tmp * t6_tmp * t9_tmp * 4.48222988) +
    p_C_tmp * t9_tmp * 2.24111494) + d25 * t4_tmp * t8_tmp * 0.00012) - t27_tmp *
    t5_tmp * t6_tmp * t9_tmp * 0.00024) + t47_tmp_tmp * 5.4E-5) + d31 * t8_tmp *
    2.24111494) - d32 * t8_tmp * 5.87098) + t40_tmp * 4.48222988) - t25 *
    0.00024) + d36 * t9_tmp * 54.66134) + d6 * t5_tmp * t7_tmp * t8_tmp *
    0.0421722) + d38 * t9_tmp * 54.66134) + d62 * t6_tmp * t8_tmp * 0.0421722) +
    t48_tmp * t13_tmp * 218.64536) - t19 * 19.131469) + t48 * 54.66134) + t60 *
    54.66134) + d34 * t12_tmp * 218.64536) + d40 * t12_tmp * 125.721082) - t31 *
    5.4E-5) - d31 * t14_tmp * 0.0421722) - d42 * t13_tmp * 0.4186264) + d43 *
    t9_tmp * 4.0E-6) + d44 * t9_tmp * 4.0E-6) - b_t43_tmp * t9_tmp * 2.24111494)
    - t16 * 0.00012) - d45 * t12_tmp * 0.4186264) - e_C_tmp * 35.304620802274407)
    - d48 * t8_tmp * 2.24111494) - d47 * t13_tmp * 35.304620802274407) - d36 *
    t15_tmp * 0.00024) - d38 * t15_tmp * 0.00024) - d49 * t14_tmp * 4.0E-6) -
    t17 * 34.800193202274407) + d50 * t15_tmp * 35.304620802274407) - f_C_tmp *
    34.800193202274407) + d52 * t15_tmp * 17.6523104011372) + d53 * t15_tmp *
    17.6523104011372) + d48 * t14_tmp * 0.0421722) - d54 * t15_tmp *
    17.6523104011372) + d51 * t15_tmp * 35.304620802274407) - d55 * t15_tmp *
    17.6523104011372) + C_tmp * t13_tmp * 218.64536) + b_C_tmp * t13_tmp *
    0.1686888) - c_C_tmp * t15_tmp * 17.6523104011372) + d56 * t14_tmp * 4.0E-6)
    + d_C_tmp * t13_tmp * 1.6E-5) - t32_tmp * t15_tmp * 0.00096) + t33_tmp_tmp *
    t15_tmp * 17.6523104011372) - c_C_tmp_tmp * 0.000464) - q_C_tmp * t7_tmp *
    8.96445976) - r_C_tmp * 8.0E-6) - p_C_tmp * t5_tmp * t8_tmp * 8.0E-6) -
    t27_tmp * t3_tmp * t6_tmp * t7_tmp * t8_tmp * 10.1311928) - d30 * t5_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - u_C_tmp * 125.721082) + i_C_tmp * 0.0843444) +
    x_C_tmp * t9_tmp * 0.0843444) + d35 * t5_tmp * t7_tmp * t9_tmp *
    17.6523104011372) + d37 * t5_tmp * t6_tmp * t9_tmp * 17.6523104011372) +
    j_C_tmp * 0.0843444) - b_C_tmp_tmp * t13_tmp * 0.000108) + n_C_tmp * t6_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - v_C_tmp * t13_tmp * 8.96445976) - t47_tmp_tmp *
    t12_tmp * 0.000108) + k_C_tmp * 0.00048) - t40_tmp * t12_tmp * 8.96445976) +
    t48 * t9_tmp * 0.00024) + t60 * t9_tmp * 0.00024) - h_C_tmp * t14_tmp *
    0.00024) + l_C_tmp * 0.00048) - d7 * t5_tmp * t9_tmp * t14_tmp * 0.00024) -
    w_C_tmp * t15_tmp * 0.00024) - t31 * t9_tmp * 0.0843444) - t25 * t14_tmp *
                      0.00024) + e_C_tmp * t13_tmp * 70.609241604548814) +
                    d_C_tmp_tmp * t6_tmp * t7_tmp * t9_tmp * t14_tmp * 0.00024)
                   + t16 * t15_tmp * 0.00024) + t17 * t15_tmp *
                  35.304620802274407) + f_C_tmp * t15_tmp * 35.304620802274407)
                - c_C_tmp_tmp * t9_tmp * 218.64536) - y_C_tmp) - t39_tmp *
              t8_tmp * t9_tmp * 1.6E-5) + ab_C_tmp) + c_C_tmp_tmp * t15_tmp *
            0.00096) + r_C_tmp * t13_tmp * 1.6E-5) + bb_C_tmp * t12_tmp * 1.6E-5)
         - i_C_tmp * t13_tmp * 0.1686888) - j_C_tmp * t12_tmp * 0.1686888) -
       m_C_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp * 17.6523104011372) + k_C_tmp
      * t14_tmp * 0.00048) + l_C_tmp * t14_tmp * 0.00048) - o_C_tmp * t6_tmp *
    t7_tmp * t9_tmp * 70.609241604548814;
  C_tmp_tmp = t4_tmp * t5_tmp;
  c_C_tmp_tmp = t4_tmp * t8_tmp;
  h_C_tmp = C_tmp_tmp * t8_tmp;
  i_C_tmp = t5_tmp * t9_tmp;
  j_C_tmp = t8_tmp * t9_tmp * 4.48222988;
  k_C_tmp = t3_tmp * t8_tmp;
  l_C_tmp = t5_tmp * t7_tmp;
  p_C_tmp = t3_tmp * t4_tmp * t9_tmp;
  C[7] = (qd[4] * (((((((((((t9_tmp * 109.32268 - t14_tmp * 0.00024) - t15_tmp *
    0.00048) + t17_tmp * 17.6523104011372) - C_tmp_tmp * 4.48222988) + t3_tmp *
    t9_tmp * 125.721082) + t14_tmp * t15_tmp * 0.00048) + C_tmp_tmp * t7_tmp *
                       125.721082) - h_C_tmp * 0.0843444) - c_C_tmp_tmp * t9_tmp
                     * 8.0E-6) - i_C_tmp * t14_tmp * 35.304620802274407) +
                   0.00024) * -0.5 - qd[2] * ((((t3_tmp * 27.729881 + t7_tmp *
              539.550468) + k_C_tmp * 5.87098) + l_C_tmp * 125.721082) + p_C_tmp
           * 125.721082) / 2.0) + qd[3] * ((((((((((((t4_tmp * 0.2093132 +
    t5_tmp * 8.0E-6) - t9_tmp * 0.0843444) + t14_tmp * 0.000108) - t16_tmp *
    17.4000966011372) - t4_tmp * t7_tmp * 5.87098) - j_C_tmp) - t5_tmp * t14_tmp
    * 1.6E-5) + t9_tmp * t14_tmp * 0.1686888) + t7_tmp * t8_tmp * t9_tmp *
    125.721082) + c_C_tmp_tmp * t15_tmp * 35.304620802274407) + h_C_tmp * t9_tmp
    * 0.00048) - 5.4E-5) / 2.0;
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
    f_C_tmp_tmp * 13.8649405) - g_C_tmp_tmp * 13.8649405) + t43_tmp * 0.1046566)
    - cb_C_tmp * 269.775234) + d_C_tmp_tmp * 4.0E-6) - db_C_tmp * 269.775234) -
    h_C_tmp * 0.0421722) - qd[4] * t9_tmp * 54.66134) + qd[3] * t14_tmp * 5.4E-5)
    + q_C_tmp * 0.00012) - qd[3] * t16_tmp * 8.7000483005686018) + qd[4] *
    t15_tmp * 0.00024) - qd[4] * t17_tmp * 8.8261552005686017) - f_C_tmp_tmp *
    t8_tmp * 2.93549) - h_C_tmp_tmp * t7_tmp * 62.860541) - g_C_tmp_tmp * t8_tmp
    * 2.93549) + m_C_tmp * 2.24111494) - i_C_tmp_tmp * t7_tmp * 62.860541) -
                        t43_tmp * t7_tmp * 2.93549) - d39 * t9_tmp * 62.860541)
                      - r_C_tmp * 2.24111494) - d_C_tmp_tmp * t14_tmp * 8.0E-6)
                    + h_C_tmp * t14_tmp * 0.0843444) - q_C_tmp * t15_tmp *
                   0.00024) - f_C_tmp_tmp * t4_tmp * t9_tmp * 62.860541) -
                 g_C_tmp_tmp * t4_tmp * t9_tmp * 62.860541) - m_C_tmp * t7_tmp *
                62.860541) + m_C_tmp * t8_tmp * 0.0421722) + d61 * t8_tmp *
              t9_tmp * 4.0E-6) + qd[3] * t7_tmp * t8_tmp * t9_tmp * 62.860541) +
            t43_tmp * t8_tmp * t15_tmp * 17.6523104011372) + d28 * t9_tmp *
           t14_tmp * 17.6523104011372) + n_C_tmp * t8_tmp * t9_tmp * 0.00024;
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
  k_C_tmp_tmp = t63_tmp_tmp * t6_tmp;
  f_C_tmp = k_C_tmp_tmp * t7_tmp;
  g_C_tmp = t16 * t8_tmp;
  C_tmp = t17 * t8_tmp;
  b_C_tmp = t45_tmp * t8_tmp;
  c_C_tmp = t46_tmp * t8_tmp;
  s_C_tmp *= t8_tmp;
  t31 = d33 * t6_tmp * t8_tmp;
  o_C_tmp *= t8_tmp;
  t25 = d46 * t6_tmp * t7_tmp * t8_tmp;
  hb_C_tmp = qd[1] * t16_tmp * 8.7000483005686018;
  ib_C_tmp = qd[2] * t16_tmp * 8.7000483005686018;
  l_C_tmp_tmp = qd[1] * t8_tmp;
  jb_C_tmp = l_C_tmp_tmp * t9_tmp * 2.24111494;
  m_C_tmp_tmp = qd[2] * t8_tmp;
  kb_C_tmp = m_C_tmp_tmp * t9_tmp * 2.24111494;
  lb_C_tmp = qd[0] * t3_tmp * t4_tmp * t5_tmp * t6_tmp * t9_tmp *
    17.6523104011372;
  C[19] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d13 +
    t45_tmp * 0.1046566) + h_C_tmp_tmp * 4.0E-6) + t46_tmp * 0.1046566) +
    i_C_tmp_tmp * 4.0E-6) - t43_tmp * 0.000116) - d9 * 0.0421722) - d2 *
    0.0421722) - j_C_tmp_tmp * 2.5327982) - d4 * 0.102001) + d10 * 5.4E-5) + d11
    * 5.4E-5) - hb_C_tmp) - ib_C_tmp) + d5 * 0.4649263) - t45_tmp * t7_tmp *
    2.93549) - d8 * 0.4649263) - t46_tmp * t7_tmp * 2.93549) + d * t8_tmp *
    2.93549) - d26 * t8_tmp * 2.93549) - t43_tmp * t9_tmp * 54.66134) - d12 *
    0.0421722) - d7 * 54.66134) - jb_C_tmp) - kb_C_tmp) - h_C_tmp_tmp * t14_tmp *
    8.0E-6) - r_C_tmp * 4.0E-6) - i_C_tmp_tmp * t14_tmp * 8.0E-6) + t43_tmp *
    t15_tmp * 0.00024) + d9 * t14_tmp * 0.0843444) + d2 * t14_tmp * 0.0843444) -
    d4 * t15_tmp * 17.6523104011372) + t_C_tmp * 0.1046566) + h_C_tmp * 0.000116)
    + m_C_tmp * 0.000116) + q_C_tmp * 2.5327982) + eb_C_tmp * 2.5327982) +
    fb_C_tmp * 17.4000966011372) + t18 * t9_tmp * 62.860541) - d37 * t9_tmp *
    62.860541) - d60 * t8_tmp * 62.860541) - d57 * 0.1046566) - n_C_tmp * t9_tmp
    * 17.6523104011372) + cb_C_tmp * t8_tmp * t9_tmp * 62.860541) + db_C_tmp *
    t8_tmp * t9_tmp * 62.860541) - d7 * t9_tmp * 0.00024) - gb_C_tmp *
    17.4000966011372) + b_C_tmp * t15_tmp * 17.6523104011372) + c_C_tmp *
    t15_tmp * 17.6523104011372) + d_C_tmp * 5.4E-5) + d59 * 2.24111494) +
    h_C_tmp * t9_tmp * 54.66134) + s_C_tmp * 0.0421722) + m_C_tmp * t9_tmp *
                       54.66134) + t31 * 0.0421722) - e_C_tmp * 5.4E-5) +
                    q_C_tmp * t9_tmp * 4.0E-6) + eb_C_tmp * t9_tmp * 4.0E-6) -
                  t19 * 2.24111494) + g_C_tmp * t9_tmp * 0.00024) - h_C_tmp *
                t15_tmp * 0.00024) - m_C_tmp * t15_tmp * 0.00024) + C_tmp *
              t9_tmp * 0.00024) - fb_C_tmp * t15_tmp * 17.6523104011372) +
            gb_C_tmp * t15_tmp * 17.6523104011372) - o_C_tmp * 8.0E-6) + d_C_tmp
          * t9_tmp * 0.0843444) + e_C_tmp_tmp * t7_tmp * t9_tmp *
         17.6523104011372) + lb_C_tmp) + t25 * 8.0E-6) - d58 * t9_tmp * t14_tmp *
      0.00024) - e_C_tmp * t9_tmp * 0.0843444) + f_C_tmp * t9_tmp * t14_tmp *
    0.00024;
  d = qd[1] * -0.00012 - qd[2] * 0.00012;
  h_C_tmp = d5 * t9_tmp;
  m_C_tmp = d8 * t9_tmp;
  n_C_tmp = qd[1] * t17_tmp * 8.8261552005686017;
  r_C_tmp = qd[2] * t17_tmp * 8.8261552005686017;
  C[25] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((d + d28 *
    2.24111494) - d9 * 54.66134) - d2 * 54.66134) - j_C_tmp_tmp * 0.102001) +
    d10 * 0.00012) + qd[1] * t15_tmp * 0.00024) + d11 * 0.00012) + qd[2] *
    t15_tmp * 0.00024) - n_C_tmp) - r_C_tmp) + t16 * 2.24111494) + t17 *
    2.24111494) - f_C_tmp_tmp * t9_tmp * 62.860541) - g_C_tmp_tmp * t9_tmp *
    62.860541) - qd[3] * t5_tmp * t8_tmp * 54.66134) - d28 * t7_tmp * 62.860541)
    - d61 * t9_tmp * 54.66134) + d7 * 0.0421722) + d4 * t9_tmp * 4.0E-6) -
    j_C_tmp_tmp * t15_tmp * 17.6523104011372) - d10 * t15_tmp * 0.00024) - d11 *
    t15_tmp * 0.00024) + d58 * 0.0421722) + h_C_tmp * 4.0E-6) + q_C_tmp *
    0.102001) + eb_C_tmp * 0.102001) - t16 * t7_tmp * 62.860541) - f_C_tmp *
    0.0421722) + g_C_tmp * 0.0421722) - t17 * t7_tmp * 62.860541) + k_C_tmp_tmp *
    t8_tmp * 62.860541) + C_tmp * 0.0421722) - d62 * t8_tmp * 62.860541) - d39 *
    t4_tmp * t9_tmp * 62.860541) - m_C_tmp * 4.0E-6) + b_C_tmp * t9_tmp * 4.0E-6)
    + c_C_tmp * t9_tmp * 4.0E-6) - d12 * t9_tmp * 0.00024) + h_C_tmp_tmp *
    t9_tmp * t14_tmp * 17.6523104011372) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    17.6523104011372) + d_C_tmp * 0.00012) + d58 * t8_tmp * 2.24111494) +
    s_C_tmp * 54.66134) + t31 * 54.66134) - d58 * t14_tmp * 0.0421722) - e_C_tmp
                      * 0.00012) - f_C_tmp * t8_tmp * 2.24111494) - h_C_tmp *
                    t14_tmp * 4.0E-6) + q_C_tmp * t15_tmp * 17.6523104011372) +
                  eb_C_tmp * t15_tmp * 17.6523104011372) + f_C_tmp * t14_tmp *
                 0.0421722) + m_C_tmp * t14_tmp * 4.0E-6) + s_C_tmp * t9_tmp *
               0.00024) + t31 * t9_tmp * 0.00024) - d_C_tmp * t15_tmp * 0.00024)
            + e_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t9_tmp * 17.6523104011372)
    - t25 * t9_tmp * 17.6523104011372;
  C[31] = 0.0;

  /*  CORIOLIS_ROW_3 - Computation of the robot specific Coriolis matrix row for joint 3 of 6.  */
  /*  =========================================================================  */
  /*      */
  /*     Crow = coriolis_row_3(rob,q,qd)  */
  /*     Crow = rob.coriolis_row_3(q,qd)  */
  /*      */
  /*   Description::  */
  /*     Given a full set of joint variables and their first order temporal derivatives this function computes the  */
  /*     Coriolis matrix row number 3 of 6 for Quantec Ultra SE 150.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  /*     02-Mar-2021 15:55:44 */
  t25 = t5_tmp * 8.0E-6;
  t31 = t9_tmp * 0.0843444;
  t18 = t15_tmp * 0.00048;
  t19 = t14_tmp * 0.00024;
  e_C_tmp = C_tmp_tmp * t8_tmp;
  d5 = d6 * t3_tmp;
  d7 = qd[0] * t6_tmp * t7_tmp;
  d8 = qd[3] * t6_tmp * t7_tmp;
  d10 = t30_tmp * t9_tmp;
  d11 = t63_tmp_tmp * t8_tmp;
  d12 = t30_tmp * t12_tmp;
  d14 = d1 * t9_tmp;
  d15 = t63_tmp_tmp * t12_tmp;
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
  t60 = d60 * t9_tmp;
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
    (((((((((((((qd[0] * 9.37219628 - d20 * 114.544349315) - d21) + t30_tmp *
    0.000116) + t63_tmp_tmp * 2.24111494) + d1 * 2.5327982) - s_C_tmp *
    18.74439256) - qd[0] * t13_tmp * 18.74439256) + d17 * 4.2197645) + d5 *
    0.4649263) + d18 * 82.105506) + d19 * 82.105506) + d10 * 54.66134) + d11 *
    0.0421722) - d7 * 4.2197645) + t33_tmp * t12_tmp * 13.8649405) - d12 *
    0.000232) - d8 * 0.4649263) - d16 * 0.000232) - d15 * 4.48222988) + d14 *
    4.0E-6) - t63_tmp_tmp * t13_tmp * 4.48222988) - t30_tmp * t15_tmp * 0.00024)
    + d3 * t12_tmp * 269.775234) - t_C_tmp * 5.0655964) - d1 * t13_tmp *
    5.0655964) + s_C_tmp * t13_tmp * 37.48878512) + fb_C_tmp * 269.775234) + qd
    [0] * t2_tmp * t3_tmp * t8_tmp * 0.89341) - d37 * 109.32268) + d22 *
    19.131469) + d23 * 19.131469) + d30 * 0.0421722) - d31 * 13.8649405) - d32 *
    109.32268) + d38 * 0.2093132) + d5 * t8_tmp * 0.1046566) + d34 * 0.000116) +
    d36 * 0.000116) + d42 * 0.2093132) + d44 * 17.6523104011372) + d46 * 4.0E-6)
    + d40 * 2.5327982) + d41 * 2.5327982) + d47 * 458.17739726) - d_C_tmp *
    0.89341) + d49 * 0.102001) + d50 * 0.102001) + d51 * 17.4000966011372) + d48
    * 458.17739726) + d52 * 17.4000966011372) - d45 * 0.0421722) - d25 * t15_tmp
    * 17.6523104011372) + t33_tmp * t8_tmp * t12_tmp * 2.93549) + d55 *
    17.4000966011372) + t63_tmp_tmp * t7_tmp * t12_tmp * 62.860541) - d8 *
    t8_tmp * 0.1046566) - d29 * t15_tmp * 17.6523104011372) - d53 * 109.32268) -
    d54 * 0.0843444) - d10 * t13_tmp * 109.32268) - d11 * t13_tmp * 0.0843444) -
    d56 * 4.0E-6) + b_C_tmp * 0.000464) - C_tmp * 8.0E-6) + d15 * t13_tmp *
    8.96445976) - d14 * t13_tmp * 8.0E-6) - c_C_tmp * 17.4000966011372) +
    t_C_tmp * t13_tmp * 10.1311928) + d12 * t18) + d16 * t18) + eb_C_tmp *
    62.860541) + d57 * 19.131469) - d58 * 37.48878512) + cb_C_tmp * t8_tmp *
    5.4E-5) + db_C_tmp * t8_tmp * 5.4E-5) + cb_C_tmp * t9_tmp * 4.48222988) +
    db_C_tmp * t9_tmp * 2.24111494) + d27 * t4_tmp * t8_tmp * 0.00012) - t27_tmp
    * t5_tmp * t6_tmp * t9_tmp * 0.00024) + t40_tmp_tmp * 5.4E-5) + d30 * t8_tmp
    * 2.24111494) - d31 * t8_tmp * 2.93549) + t39_tmp_tmp * 4.48222988) -
    t40_tmp * 0.00024) + d34 * t9_tmp * 54.66134) + d6 * t5_tmp * t7_tmp *
    t8_tmp * 0.0421722) + d36 * t9_tmp * 54.66134) + d26 * t5_tmp * t6_tmp *
    t8_tmp * 0.0421722) + d37 * t13_tmp * 218.64536) - t60 * 19.131469) + d24 *
    54.66134) + d39 * 54.66134) + d32 * t12_tmp * 218.64536) + d59 * t9_tmp *
    t12_tmp * 62.860541) - b_t43_tmp * 5.4E-5) - d30 * t14_tmp * 0.0421722) -
    d38 * t13_tmp * 0.4186264) + d40 * t9_tmp * 4.0E-6) + d41 * t9_tmp * 4.0E-6)
    - t39_tmp * t9_tmp * 2.24111494) - t47_tmp * 0.00012) - d42 * t12_tmp *
    0.4186264) - t47_tmp_tmp * 35.304620802274407) - d45 * t8_tmp * 2.24111494)
    - d44 * t13_tmp * 35.304620802274407) - d34 * t15_tmp * 0.00024) - d36 *
    t15_tmp * 0.00024) - d46 * t14_tmp * 4.0E-6) - t48_tmp * 34.800193202274407)
    + d47 * t15_tmp * 35.304620802274407) - t48 * 34.800193202274407) + d49 *
    t15_tmp * 17.6523104011372) + d50 * t15_tmp * 17.6523104011372) + d45 *
    t14_tmp * 0.0421722) - d51 * t15_tmp * 17.6523104011372) + d48 * t15_tmp *
    35.304620802274407) - d52 * t15_tmp * 17.6523104011372) + d53 * t13_tmp *
    218.64536) + d54 * t13_tmp * 0.1686888) - d55 * t15_tmp * 17.6523104011372)
    + d56 * t14_tmp * 4.0E-6) + C_tmp * t13_tmp * 1.6E-5) - b_C_tmp * t15_tmp *
    0.00096) + c_C_tmp * t15_tmp * 17.6523104011372) - e_C_tmp_tmp * 0.000464) -
    eb_C_tmp * t7_tmp * 8.96445976) - gb_C_tmp * 8.0E-6) - db_C_tmp * t5_tmp *
    t8_tmp * 8.0E-6) - fb_C_tmp * t7_tmp * t8_tmp * 10.1311928) - d59 * t5_tmp *
    t7_tmp * t8_tmp * 8.0E-6) - u_C_tmp * 62.860541) + d33 * t5_tmp * t7_tmp *
    t9_tmp * 17.6523104011372) + d35 * t5_tmp * t6_tmp * t9_tmp *
    17.6523104011372) - b_C_tmp_tmp * t13_tmp * 0.000108) - v_C_tmp * t13_tmp *
    8.96445976) - t40_tmp_tmp * t12_tmp * 0.000108) + m_C_tmp * 0.00048) -
    t39_tmp_tmp * t12_tmp * 8.96445976) + d24 * t9_tmp * 0.00024) + d39 * t9_tmp
    * 0.00024) - h_C_tmp * t14_tmp * 0.00024) + o_C_tmp * 0.00048) - d5 * t5_tmp
    * t9_tmp * t14_tmp * 0.00024) - w_C_tmp * t15_tmp * 0.00024) - b_t43_tmp *
    t9_tmp * 0.0843444) - t40_tmp * t14_tmp * 0.00024) + t47_tmp_tmp * t13_tmp *
    70.609241604548814) + t47_tmp * t15_tmp * 0.00024) + d_C_tmp_tmp * t6_tmp *
                       t7_tmp * t9_tmp * t19) + t48_tmp * t15_tmp *
                      35.304620802274407) + b_C_tmp_tmp * t31) + t48 * t15_tmp *
                    35.304620802274407) + x_C_tmp * t31) + t40_tmp_tmp * t31) +
                 b_t43_tmp * t25) - e_C_tmp_tmp * t9_tmp * 218.64536) - y_C_tmp)
              - d58 * t8_tmp * t9_tmp * 1.6E-5) + ab_C_tmp) + e_C_tmp_tmp *
            t15_tmp * 0.00096) + gb_C_tmp * t13_tmp * 1.6E-5) + bb_C_tmp *
          t12_tmp * 1.6E-5) - b_C_tmp_tmp * t9_tmp * t13_tmp * 0.1686888) -
        t40_tmp_tmp * t9_tmp * t12_tmp * 0.1686888) - d61 * t5_tmp * t6_tmp *
       t7_tmp * t8_tmp * t9_tmp * 17.6523104011372) + m_C_tmp * t14_tmp *
      0.00048) + o_C_tmp * t14_tmp * 0.00048) - q_C_tmp * t6_tmp * t7_tmp *
    t9_tmp * 70.609241604548814;
  h_C_tmp = qd[4] * (((((((((t18 + t19) + t14_tmp * t15_tmp * -0.00048) +
    c_C_tmp_tmp * t9_tmp * 8.0E-6) + -(t9_tmp * 109.32268)) + C_tmp_tmp *
    4.48222988) + e_C_tmp * 0.0843444) + -(t17_tmp * 17.6523104011372)) +
                      i_C_tmp * t14_tmp * 35.304620802274407) - 0.00024) / 2.0 +
    qd[3] * ((((((((((e_C_tmp * t9_tmp * 0.00048 + t4_tmp * 0.2093132) + t14_tmp
                     * 0.000108) + t25) + -(t5_tmp * t14_tmp * 1.6E-5)) + -t31)
                 + t9_tmp * t14_tmp * 0.1686888) + -j_C_tmp) + -(t16_tmp *
    17.4000966011372)) + c_C_tmp_tmp * t15_tmp * 35.304620802274407) - 5.4E-5) /
    2.0;
  C[8] = h_C_tmp + qd[1] * ((((t3_tmp * 13.8649405 + t7_tmp * 269.775234) +
    k_C_tmp * 2.93549) + l_C_tmp * 62.860541) + p_C_tmp * 62.860541);
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
  u_C_tmp = t63_tmp_tmp * t6_tmp * t7_tmp;
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
    t43_tmp * t9_tmp * 54.66134) - d5 * 0.0421722) - C_tmp_tmp * 54.66134) -
    jb_C_tmp) - kb_C_tmp) - h_C_tmp_tmp * t14_tmp * 8.0E-6) - j_C_tmp_tmp *
    t9_tmp * 4.0E-6) - i_C_tmp_tmp * t14_tmp * 8.0E-6) + t43_tmp * t15_tmp *
    0.00024) - d4 * t15_tmp * 17.6523104011372) + d1 * t31) + d3 * t31) + d17 *
    t8_tmp * 0.1046566) + h_C_tmp * 0.000116) + i_C_tmp * 0.000116) + j_C_tmp *
    2.5327982) + k_C_tmp * 2.5327982) + l_C_tmp * 17.4000966011372) - d_C_tmp *
    0.1046566) - t43_tmp * t5_tmp * t9_tmp * 17.6523104011372) - C_tmp_tmp *
    t9_tmp * 0.00024) - m_C_tmp * 17.4000966011372) + x_C_tmp * t15_tmp *
    17.6523104011372) + y_C_tmp * t15_tmp * 17.6523104011372) + p_C_tmp * 5.4E-5)
    + d57 * 2.24111494) + h_C_tmp * t9_tmp * 54.66134) + ab_C_tmp * 0.0421722) +
    i_C_tmp * t9_tmp * 54.66134) + bb_C_tmp * 0.0421722) - o_C_tmp * 5.4E-5) +
    j_C_tmp * t9_tmp * 4.0E-6) + k_C_tmp * t9_tmp * 4.0E-6) - t60 * 2.24111494)
                       + v_C_tmp * t9_tmp * 0.00024) - h_C_tmp * t15_tmp *
                      0.00024) - i_C_tmp * t15_tmp * 0.00024) + w_C_tmp * t9_tmp
                    * 0.00024) - l_C_tmp * t15_tmp * 17.6523104011372) + m_C_tmp
                  * t15_tmp * 17.6523104011372) - q_C_tmp * 8.0E-6) +
                k_C_tmp_tmp * t7_tmp * t9_tmp * 17.6523104011372) + lb_C_tmp) -
              t32_tmp * t9_tmp * t14_tmp * 0.00024) - o_C_tmp * t9_tmp *
             0.0843444) + u_C_tmp * t9_tmp * t19) + p_C_tmp * t31) + o_C_tmp *
    t25;
  h_C_tmp = d17 * t9_tmp;
  i_C_tmp = d7 * t9_tmp;
  C[26] = (((((((((((((((((((((((((((((((((((((((((((((((((d + d28 * 2.24111494)
    - d9 * 54.66134) - d2 * 54.66134) - j_C_tmp_tmp * 0.102001) + d1 * 0.00012)
    + qd[1] * t15_tmp * 0.00024) + d3 * 0.00012) + qd[2] * t15_tmp * 0.00024) -
    n_C_tmp) - r_C_tmp) + s_C_tmp * 2.24111494) + t_C_tmp * 2.24111494) - d5 *
    54.66134) - d61 * t9_tmp * 54.66134) + C_tmp_tmp * 0.0421722) + d4 * t9_tmp *
    4.0E-6) - j_C_tmp_tmp * t15_tmp * 17.6523104011372) - d1 * t15_tmp * 0.00024)
    - d3 * t15_tmp * 0.00024) + t32_tmp * 0.0421722) + h_C_tmp * 4.0E-6) +
    j_C_tmp * 0.102001) + k_C_tmp * 0.102001) - u_C_tmp * 0.0421722) + v_C_tmp *
    0.0421722) + w_C_tmp * 0.0421722) - i_C_tmp * 4.0E-6) + x_C_tmp * t9_tmp *
    4.0E-6) + y_C_tmp * t9_tmp * 4.0E-6) - d5 * t9_tmp * 0.00024) + h_C_tmp_tmp *
    t9_tmp * t14_tmp * 17.6523104011372) + i_C_tmp_tmp * t9_tmp * t14_tmp *
    17.6523104011372) + p_C_tmp * 0.00012) + t32_tmp * t8_tmp * 2.24111494) +
    ab_C_tmp * 54.66134) + bb_C_tmp * 54.66134) - t32_tmp * t14_tmp * 0.0421722)
                      - o_C_tmp * 0.00012) - u_C_tmp * t8_tmp * 2.24111494) -
                    h_C_tmp * t14_tmp * 4.0E-6) + j_C_tmp * t15_tmp *
                   17.6523104011372) + k_C_tmp * t15_tmp * 17.6523104011372) +
                 u_C_tmp * t14_tmp * 0.0421722) + i_C_tmp * t14_tmp * 4.0E-6) +
               ab_C_tmp * t9_tmp * 0.00024) + bb_C_tmp * t9_tmp * 0.00024) -
             p_C_tmp * t15_tmp * 0.00024) + o_C_tmp * t15_tmp * 0.00024) +
           q_C_tmp * t9_tmp * 17.6523104011372) - d43 * t6_tmp * t7_tmp * t8_tmp
    * t9_tmp * 17.6523104011372;
  C[32] = 0.0;
  c_coriolis_row_4(q, qd, b_dv);
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
  /*     Coriolis matrix row number 5 of 6 for Quantec Ultra SE 150.  */
  /*      */
  /*   Input::  */
  /*     rob: robot object of Quantec Ultra SE 150 specific class  */
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
  /*     02-Mar-2021 15:55:55 */
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
  t31 = t33_tmp * t5_tmp;
  t33_tmp_tmp = t31 * t6_tmp;
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
  t60 = e_C_tmp * 0.0421722;
  k_C_tmp_tmp = t45_tmp * t5_tmp;
  hb_C_tmp = t46_tmp * t5_tmp;
  ib_C_tmp = t63_tmp_tmp * t6_tmp;
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
  d10 = t63_tmp_tmp * t9_tmp;
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
  d50 = t31 * t7_tmp * t8_tmp;
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
    54.66134 - d1 * 0.00012) - d2 * 0.00012) + d3 * 0.00012) + qd[3] * t2_tmp *
    t7_tmp * 0.00012) + d11 * 0.00012) - d12 * 54.66134) - d * t13_tmp *
    54.66134) + d13 * 0.00024) - d14 * 0.00012) + d1 * t15_tmp * 0.00024) - d15 *
    0.00012) + d2 * t15_tmp * 0.00024) - d3 * t15_tmp * 0.00024) - d22 *
    0.0421722) + d20 * 17.6523104011372) - d18 * 0.0421722) + d24 *
    17.7543114011372) + t48_tmp * 19.131469) + d23 * 17.6523104011372) - d29 *
    4.0E-6) - d32 * 4.0E-6) + d31 * 2.24111494) + d28 * 0.0421722) - d36 *
    0.102001) - d37 * 0.102001) + d33 * 2.24111494) + d27 * 0.0421722) - d38 *
    0.102001) - d39 * 0.102001) - d34 * 2.24111494) - d9 * t8_tmp * 62.860541) +
    d30 * 0.0421722) - d40 * 17.7543114011372) - db_C_tmp * t13_tmp * 2.24111494)
    + d35 * 4.0E-6) - t47_tmp * 19.131469) + t33_tmp * t9_tmp * t12_tmp *
    62.860541) + d41 * 4.0E-6) + d43 * 4.0E-6) - d42 * 17.6523104011372) -
    t_C_tmp * 17.6523104011372) - d6 * t7_tmp * t15_tmp * 0.00024) - d11 *
    t15_tmp * 0.00024) + d10 * t14_tmp * 17.6523104011372) + d12 * t13_tmp *
    109.32268) + d13 * t14_tmp * 0.00024) - d13 * t15_tmp * 0.00048) + d14 *
    t15_tmp * 0.00024) + d15 * t15_tmp * 0.00024) - d44 * 54.66134) - d45 *
    0.00024) + d16 * t7_tmp * 19.131469) + s_C_tmp * t6_tmp * 19.131469) - d5 *
    t4_tmp * t8_tmp * 0.00012) - s_C_tmp * t7_tmp * 54.66134) - d4 * t3_tmp *
    t5_tmp * t8_tmp * 2.24111494) - d8 * t4_tmp * t8_tmp * 0.00012) - d18 *
    t8_tmp * 2.24111494) - d48 * 4.0E-6) - d19 * t5_tmp * t8_tmp * 4.0E-6) - d50
    * 4.0E-6) - d46 * 54.66134) - d47 * 54.66134) - d52 * 35.304620802274407) -
    d21 * t7_tmp * t9_tmp * 62.860541) + d22 * t14_tmp * 0.0421722) - d7 *
    54.66134) - d49 * 54.66134) + d51 * 0.0421722) - d53 * 35.304620802274407) +
    d18 * t14_tmp * 0.0421722) + d19 * t8_tmp * t9_tmp * 0.0421722) - d20 *
    t15_tmp * 35.304620802274407) - d24 * t15_tmp * 17.6523104011372) + d6 *
    t5_tmp * t7_tmp * t9_tmp * 17.6523104011372) + d26 * t5_tmp * t6_tmp *
    t9_tmp * 17.6523104011372) + d25 * 0.0421722) + db_C_tmp * t7_tmp * t12_tmp *
    62.860541) + d27 * t8_tmp * 2.24111494) - d23 * t15_tmp * 35.304620802274407)
    - d54 * 0.0421722) + d29 * t14_tmp * 4.0E-6) + d30 * t8_tmp * 2.24111494) -
    d31 * t13_tmp * 4.48222988) - d28 * t13_tmp * 0.0421722) + d32 * t14_tmp *
    4.0E-6) + d_C_tmp_tmp * t6_tmp * t7_tmp * t8_tmp * 4.0E-6) - d33 * t12_tmp *
    4.48222988) + d34 * t13_tmp * 4.48222988) - d55 * 4.0E-6) - d36 * t15_tmp *
    17.6523104011372) - d37 * t15_tmp * 17.6523104011372) - d27 * t14_tmp *
    0.0421722) - d35 * t13_tmp * 4.0E-6) - d38 * t15_tmp * 17.6523104011372) -
    d39 * t15_tmp * 17.6523104011372) - d30 * t14_tmp * 0.0421722) - qd[3] *
    t6_tmp * t7_tmp * t8_tmp * t9_tmp * 0.0421722) + d40 * t15_tmp *
    17.6523104011372) - d41 * t14_tmp * 4.0E-6) + u_C_tmp * 35.304620802274407)
    - d43 * t14_tmp * 4.0E-6) - d42 * t14_tmp * 17.6523104011372) - t_C_tmp *
    t14_tmp * 17.6523104011372) - d1 * t13_tmp * t14_tmp * t15_tmp * 0.00048) +
    h_C_tmp * t18) + h_C_tmp * t19) + i_C_tmp * t16) + i_C_tmp * t17) + k_C_tmp *
    62.860541) - l_C_tmp * 0.00048) - d24 * t5_tmp * t9_tmp * 0.00024) - d45 *
    t9_tmp * 109.32268) - m_C_tmp * 0.00048) + d44 * t13_tmp * 109.32268) +
    j_C_tmp * t12_tmp * 109.32268) - o_C_tmp * 0.00024) + d45 * t15_tmp *
    0.00048) - d46 * t9_tmp * 0.00024) - d47 * t9_tmp * 0.00024) + d48 * t13_tmp
    * 8.0E-6) - d7 * t9_tmp * 0.00024) - d49 * t9_tmp * 0.00024) + d50 * t12_tmp
    * 8.0E-6) + b_t43_tmp * t6_tmp * t7_tmp * t9_tmp * 0.00024) - d51 * t13_tmp *
    0.0843444) + d52 * t15_tmp * 70.609241604548814) - d25 * t12_tmp * 0.0843444)
                     + d53 * t15_tmp * 70.609241604548814) + d54 * t13_tmp *
                    0.0843444) - t45_tmp * t6_tmp * t7_tmp * t8_tmp * t15_tmp *
                   0.00024) - t46_tmp * t6_tmp * t7_tmp * t8_tmp * t15_tmp *
                  0.00024) + d55 * t13_tmp * 8.0E-6) + u_C_tmp * t14_tmp *
                35.304620802274407) - p_C_tmp * 4.48222988) - q_C_tmp *
              35.304620802274407) - qd[1] * t2_tmp * t3_tmp * t4_tmp * t5_tmp *
             t8_tmp * t9_tmp * 17.6523104011372) - qd[2] * t2_tmp * t3_tmp *
            t4_tmp * t5_tmp * t8_tmp * t9_tmp * 17.6523104011372) + l_C_tmp *
           t13_tmp * 0.00096) + m_C_tmp * t12_tmp * 0.00096) + k_C_tmp_tmp *
         t6_tmp * t7_tmp * t8_tmp * t9_tmp * 17.6523104011372) + hb_C_tmp *
        t6_tmp * t7_tmp * t8_tmp * t9_tmp * 17.6523104011372) + o_C_tmp *
       t15_tmp * 0.00048) - p_C_tmp * t8_tmp * 0.0843444) - g_C_tmp * t6_tmp *
     t7_tmp * t8_tmp * t9_tmp * 8.0E-6) - q_C_tmp * t14_tmp * 35.304620802274407;
  h_C_tmp = (((((((((((((((((((((((((((((((((((((((((((((((t16 + t17) + -t18) +
    -t19) + qd[1] * t14_tmp * -0.00012) + qd[2] * t14_tmp * -0.00012) +
    d_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + t14_tmp * t18) + t14_tmp * t19) +
    c_C_tmp * 0.00012) + -(C_tmp * 0.00012)) + -(t32_tmp * t9_tmp * 0.00024)) +
    -(b_t33_tmp * t9_tmp * 0.00024)) + C_tmp * t15_tmp * 0.00024) + -(c_C_tmp *
    t15_tmp * 0.00024)) + -(t39_tmp * 0.102001)) + -(t40_tmp * 0.102001)) +
    -(b_t43_tmp * 4.0E-6)) + t47_tmp * 4.0E-6) + -(t45_tmp * t8_tmp * t9_tmp *
    4.0E-6)) + -(t46_tmp * t8_tmp * t9_tmp * 4.0E-6)) + qd[1] * t9_tmp *
    54.66134) + qd[2] * t9_tmp * 54.66134) + -t48) + t14_tmp * t48) + t47_tmp *
    t14_tmp * -4.0E-6) + t43_tmp * t9_tmp * 0.0421722) + jb_C_tmp * 0.0421722) +
    -(t32_tmp * 54.66134)) + -(b_t33_tmp * 54.66134)) + -t60) + -(k_C_tmp_tmp *
    t8_tmp * 0.0421722)) + -(hb_C_tmp * t8_tmp * 0.0421722)) + -(k_C_tmp_tmp *
    2.24111494)) + -(hb_C_tmp * 2.24111494)) + t14_tmp * t60) + lb_C_tmp *
                        2.24111494) + jb_C_tmp * t14_tmp * -0.0421722) +
                      -(kb_C_tmp * 2.24111494)) + -(j_C_tmp_tmp *
    17.7543114011372)) + n_C_tmp) + r_C_tmp) + j_C_tmp_tmp * t15_tmp *
                  17.6523104011372) + -(h_C_tmp_tmp * t9_tmp * t14_tmp *
    17.6523104011372)) + -(i_C_tmp_tmp * t9_tmp * t14_tmp * 17.6523104011372)) +
               -(t39_tmp * t15_tmp * 17.6523104011372)) + -(t40_tmp * t15_tmp *
    17.6523104011372)) + eb_C_tmp * t8_tmp * t9_tmp * 17.6523104011372) +
    -(cb_C_tmp * t8_tmp * t9_tmp * 17.6523104011372);
  C[10] = ((h_C_tmp + f_C_tmp_tmp * t9_tmp * 62.860541) + k_C_tmp_tmp * t7_tmp *
           62.860541) - ib_C_tmp * t8_tmp * 62.860541;
  C[16] = h_C_tmp;
  C[22] = (((((((((((((((((((((((((((qd[3] * -0.00012 - l_C_tmp_tmp *
    17.7543114011372) - m_C_tmp_tmp * 17.7543114011372) + qd[3] * t15_tmp *
    0.00024) - qd[3] * t17_tmp * 8.8261552005686017) + t39_tmp_tmp * 0.00012) +
    t40_tmp_tmp * 0.00012) - k_C_tmp_tmp * 4.0E-6) - hb_C_tmp * 4.0E-6) +
    t45_tmp * t9_tmp * 0.0421722) + t46_tmp * t9_tmp * 0.0421722) + l_C_tmp_tmp *
    t15_tmp * 17.6523104011372) + m_C_tmp_tmp * t15_tmp * 17.6523104011372) +
    g_C_tmp * 17.7543114011372) - b_C_tmp * 17.7543114011372) - t39_tmp_tmp *
                       t15_tmp * 0.00024) - t40_tmp_tmp * t15_tmp * 0.00024) +
                     h_C_tmp_tmp * t8_tmp * t9_tmp * 0.00024) + i_C_tmp_tmp *
                    t8_tmp * t9_tmp * 0.00024) - kb_C_tmp * 4.0E-6) + f_C_tmp *
                  t8_tmp * t9_tmp * 0.0421722) - g_C_tmp * t15_tmp *
                 17.6523104011372) + d_C_tmp * t9_tmp * 17.6523104011372) +
               t33_tmp_tmp * t9_tmp * 17.6523104011372) + lb_C_tmp * 4.0E-6) -
             t47_tmp_tmp * t8_tmp * t9_tmp * 0.0421722) + b_C_tmp * t15_tmp *
            17.6523104011372) - cb_C_tmp * t9_tmp * 0.00024) + eb_C_tmp * t9_tmp
    * 0.00024;
  C[28] = 0.0;
  C[34] = 0.0;
  for (i = 0; i < 6; i++) {
    C[6 * i + 5] = 0.0;
  }
}

/* End of code generation (coriolis_150.c) */
