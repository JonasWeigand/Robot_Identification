/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runge_kutta_4_terminate.c
 *
 * Code generation for function 'runge_kutta_4_terminate'
 *
 */

/* Include files */
#include "runge_kutta_4_terminate.h"
#include "_coder_runge_kutta_4_mex.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include "runge_kutta_4_data.h"

/* Function Definitions */
void runge_kutta_4_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void runge_kutta_4_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (runge_kutta_4_terminate.c) */
