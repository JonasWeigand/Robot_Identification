/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_runge_kutta_4_api.h
 *
 * Code generation for function '_coder_runge_kutta_4_api'
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
void runge_kutta_4_api(runge_kutta_4StackData *SD, const mxArray * const prhs[5],
  int32_T nlhs, const mxArray *plhs[2]);

/* End of code generation (_coder_runge_kutta_4_api.h) */
