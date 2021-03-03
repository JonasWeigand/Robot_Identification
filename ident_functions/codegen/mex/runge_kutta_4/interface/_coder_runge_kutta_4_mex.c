/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_runge_kutta_4_mex.c
 *
 * Code generation for function '_coder_runge_kutta_4_mex'
 *
 */

/* Include files */
#include "_coder_runge_kutta_4_mex.h"
#include "_coder_runge_kutta_4_api.h"
#include "runge_kutta_4.h"
#include "runge_kutta_4_data.h"
#include "runge_kutta_4_initialize.h"
#include "runge_kutta_4_terminate.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void runge_kutta_4_mexFunction(runge_kutta_4StackData *SD,
  int32_T nlhs, mxArray *plhs[2], int32_T nrhs, const mxArray *prhs[5]);

/* Function Definitions */
void runge_kutta_4_mexFunction(runge_kutta_4StackData *SD, int32_T nlhs, mxArray
  *plhs[2], int32_T nrhs, const mxArray *prhs[5])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        13, "runge_kutta_4");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "runge_kutta_4");
  }

  /* Call the function. */
  runge_kutta_4_api(SD, prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  runge_kutta_4StackData *runge_kutta_4StackDataGlobal = NULL;
  runge_kutta_4StackDataGlobal = (runge_kutta_4StackData *)emlrtMxCalloc(1,
    (size_t)1U * sizeof(runge_kutta_4StackData));
  mexAtExit(&runge_kutta_4_atexit);

  /* Module initialization. */
  runge_kutta_4_initialize();

  /* Dispatch the entry-point. */
  runge_kutta_4_mexFunction(runge_kutta_4StackDataGlobal, nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  runge_kutta_4_terminate();
  emlrtMxFree(runge_kutta_4StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_runge_kutta_4_mex.c) */
