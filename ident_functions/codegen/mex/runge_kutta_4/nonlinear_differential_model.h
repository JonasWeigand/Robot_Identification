/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nonlinear_differential_model.h
 *
 * Code generation for function 'nonlinear_differential_model'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "runge_kutta_4_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_nonlinear_differential_model(const emlrtStack *sp, real_T t_disc, const
  real_T x[12], const real_T scaledOptVec[31], const struct0_T *b_static,
  struct1_T *dyn, real_T x_dot[12], real_T tau_m[6]);
void c_nonlinear_differential_model(const emlrtStack *sp, const real_T x[12],
  const real_T scaledOptVec[31], const struct0_T *b_static, struct1_T *dyn,
  real_T x_dot[12], real_T tau_m[6]);
void nonlinear_differential_model(const emlrtStack *sp, const real_T x[12],
  const real_T scaledOptVec[31], const struct0_T *b_static, struct1_T *dyn,
  real_T x_dot[12], real_T tau_m[6]);

/* End of code generation (nonlinear_differential_model.h) */
