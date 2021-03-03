/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runge_kutta_4_initialize.c
 *
 * Code generation for function 'runge_kutta_4_initialize'
 *
 */

/* Include files */
#include "runge_kutta_4_initialize.h"
#include "_coder_runge_kutta_4_mex.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include "runge_kutta_4_data.h"

/* Function Definitions */
void runge_kutta_4_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (runge_kutta_4_initialize.c) */
