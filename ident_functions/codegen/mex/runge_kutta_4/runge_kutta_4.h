/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runge_kutta_4.h
 *
 * Code generation for function 'runge_kutta_4'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "runge_kutta_4_types.h"

/* Function Declarations */
void runge_kutta_4(runge_kutta_4StackData *SD, const emlrtStack *sp, const
                   real_T time_cont[8001], const real_T x0[12], const real_T
                   optVec[31], const struct0_T *b_static, struct1_T *dyn, real_T
                   xSim[96012], real_T uSim[48006]);

/* End of code generation (runge_kutta_4.h) */
