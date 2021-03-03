/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * model_payload.h
 *
 * Code generation for function 'model_payload'
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
void model_payload(const emlrtStack *sp, const real_T q[6], const real_T qd[6],
                   real_T m_pay, real_T M_inverse[36], real_T C[36], real_T G[6]);

/* End of code generation (model_payload.h) */
