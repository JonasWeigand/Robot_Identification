/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * runge_kutta_4.c
 *
 * Code generation for function 'runge_kutta_4'
 *
 */

/* Include files */
#include "runge_kutta_4.h"
#include "nonlinear_differential_model.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4_data.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 33,    /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 54,  /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 56,  /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 58,  /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 60,  /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 66,  /* lineNo */
  "runge_kutta_4",                     /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\runge_kutta_4.m"/* pathName */
};

/* Function Definitions */
void runge_kutta_4(runge_kutta_4StackData *SD, const emlrtStack *sp, const
                   real_T time_cont[8001], const real_T x0[12], const real_T
                   optVec[31], const struct0_T *b_static, struct1_T *dyn, real_T
                   xSim[96012], real_T uSim[48006])
{
  real_T dt;
  struct1_T unusedU0;
  real_T dx0[12];
  real_T tau0[6];
  real_T z[48];
  real_T a;
  real_T b_a;
  real_T c_a;
  int32_T k1;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Jonas Weigand */
  /*  07.12.2017 */
  /*  jonas.weigand@mv.uni-kl.de */
  /*  define a max variable size for solver */
  /*  NT_MAX = 1e5; */
  /*  NX_MAX = 1e1; */
  /*  NP_MAX = 1e1;´ */
  /*  time_cont   = time_cont(1:nt); */
  /*  x0          = x0(1:nx); */
  /*  optVec      = optVec(1:np); */
  /*  time fixed for  */
  /*  t_start_sim         = 1.8; */
  /*  t_end_sim           = 8.1; */
  /*  time_cont_sim       = t_start_sim:0.0002:t_end_sim; */
  /*  nt = 31501; */
  /*  states fixed for */
  /*  nx = 2 */
  /*  parameters fixed for */
  /*  np = 5 */
  /*  initialise */
  /*  get the number of timesteps */
  /*  get the length of a timestep */
  dt = time_cont[1] - time_cont[0];

  /*  define an aribitry vector for extra outputs */
  unusedU0 = *dyn;
  st.site = &emlrtRSI;
  nonlinear_differential_model(&st, x0, optVec, b_static, &unusedU0, dx0, tau0);
  memset(&SD->f0.xSim[0], 0, 96012U * sizeof(real_T));
  memset(&SD->f0.uSim[0], 0, 48006U * sizeof(real_T));

  /*  by definition, first entry of xAll is x0 */
  memcpy(&SD->f0.xSim[0], &x0[0], 12U * sizeof(real_T));

  /*  initialise temporary matrix z */
  /*  the dimension "4" of matrix z is by definition of using rungeKutta4 */
  /*  the dimension "2" corresponds to the number of outputs */
  memset(&z[0], 0, 48U * sizeof(real_T));

  /*  Core loop */
  /*  for these equations, look for "Runge Kutta 4th. Order" */
  /*  example source: https://de.wikipedia.org/wiki/Klassisches_Runge-Kutta-Verfahren */
  /*  for all timesteps but the last one */
  a = dt / 2.0;
  b_a = dt / 2.0;
  c_a = dt / 6.0;
  for (k1 = 0; k1 < 8000; k1++) {
    st.site = &b_emlrtRSI;
    b_nonlinear_differential_model(&st, (real_T)k1 + 1.0, *(real_T (*)[12])&
      SD->f0.xSim[12 * k1], optVec, b_static, dyn, *(real_T (*)[12])&z[0],
      *(real_T (*)[6])&SD->f0.uSim[6 * k1]);
    for (i = 0; i < 12; i++) {
      dx0[i] = SD->f0.xSim[i + 12 * k1] + a * z[i];
    }

    st.site = &c_emlrtRSI;
    b_nonlinear_differential_model(&st, (real_T)k1 + 1.0, dx0, optVec, b_static,
      dyn, *(real_T (*)[12])&z[12], tau0);
    for (i = 0; i < 12; i++) {
      dx0[i] = SD->f0.xSim[i + 12 * k1] + b_a * z[i + 12];
    }

    st.site = &d_emlrtRSI;
    b_nonlinear_differential_model(&st, (real_T)k1 + 1.0, dx0, optVec, b_static,
      dyn, *(real_T (*)[12])&z[24], tau0);
    for (i = 0; i < 12; i++) {
      dx0[i] = SD->f0.xSim[i + 12 * k1] + dt * z[i + 24];
    }

    st.site = &e_emlrtRSI;
    b_nonlinear_differential_model(&st, (real_T)k1 + 1.0, dx0, optVec, b_static,
      dyn, *(real_T (*)[12])&z[36], tau0);
    for (i = 0; i < 12; i++) {
      SD->f0.xSim[i + 12 * (k1 + 1)] = SD->f0.xSim[i + 12 * k1] + c_a * (((z[i]
        + 2.0 * z[i + 12]) + 2.0 * z[i + 24]) + z[i + 36]);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  unusedU0 = *dyn;
  st.site = &f_emlrtRSI;
  c_nonlinear_differential_model(&st, *(real_T (*)[12])&SD->f0.xSim[96000],
    optVec, b_static, &unusedU0, dx0, *(real_T (*)[6])&SD->f0.uSim[48000]);
  for (i = 0; i < 12; i++) {
    for (k1 = 0; k1 < 8001; k1++) {
      xSim[k1 + 8001 * i] = SD->f0.xSim[i + 12 * k1];
    }
  }

  for (i = 0; i < 6; i++) {
    for (k1 = 0; k1 < 8001; k1++) {
      uSim[k1 + 8001 * i] = SD->f0.uSim[i + 6 * k1];
    }
  }
}

/* End of code generation (runge_kutta_4.c) */
