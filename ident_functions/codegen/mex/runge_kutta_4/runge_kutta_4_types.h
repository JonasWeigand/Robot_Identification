/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runge_kutta_4_types.h
 *
 * Code generation for function 'runge_kutta_4_types'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T phi_r[48006];
  real_T phi_r_d1[48006];
  real_T tau_dist[48006];
  real_T tau_ff[48006];
  real_T K_pos_eff[6];
  real_T K_vel_eff[6];
  real_T s_f_ode[6];
  real_T u[6];
  real_T x_init[12];
  real_T n_axis;
  real_T f_vis_idx[6];
  real_T f_coul_idx[6];
  real_T f_a_idx[6];
  real_T f_b_idx[6];
  real_T f_asym_idx[6];
  real_T m_pay_idx;
  real_T q_update_threshold;
  real_T qd_update_threshold;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T M_inverse[36];
  real_T C[36];
  real_T G[6];
  real_T q_update[6];
  real_T qd_update[6];
  real_T count_rob_updates;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_runge_kutta_4StackData
#define typedef_runge_kutta_4StackData

typedef struct {
  struct {
    real_T xSim[96012];
    real_T uSim[48006];
  } f0;

  struct {
    struct0_T b_static;
  } f1;
} runge_kutta_4StackData;

#endif                                 /*typedef_runge_kutta_4StackData*/

/* End of code generation (runge_kutta_4_types.h) */
