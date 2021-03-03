/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * robot_dynamics.h
 *
 * Code generation for function 'robot_dynamics'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void robot_dynamics(const emlrtStack *sp, const real_T q[6], const real_T qd[6],
                    real_T m_pay, real_T M_inverse[36], real_T C[36], real_T G[6]);

/* End of code generation (robot_dynamics.h) */
