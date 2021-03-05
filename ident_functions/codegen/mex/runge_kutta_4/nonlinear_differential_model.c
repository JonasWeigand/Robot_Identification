/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nonlinear_differential_model.c
 *
 * Code generation for function 'nonlinear_differential_model'
 *
 */

/* Include files */
#include "nonlinear_differential_model.h"
#include "robot_dynamics.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4_types.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 53,  /* lineNo */
  "nonlinear_differential_model",      /* fcnName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m"/* pathName */
};

static emlrtDCInfo b_emlrtDCI = { 24,  /* lineNo */
  21,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  12,                                  /* iLast */
  24,                                  /* lineNo */
  21,                                  /* colNo */
  "x",                                 /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 25,  /* lineNo */
  19,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  25,                                  /* lineNo */
  19,                                  /* colNo */
  "x",                                 /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 38,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  38,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  24,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  25,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 76,  /* lineNo */
  9,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  76,                                  /* lineNo */
  9,                                   /* colNo */
  "x_dot",                             /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  76,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 78,  /* lineNo */
  7,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  78,                                  /* lineNo */
  7,                                   /* colNo */
  "x_dot",                             /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  78,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 33,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  33,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 34,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  34,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 35,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  35,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 36,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  36,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 37,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  37,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "/home/jonas/matlab/21-03-03 Online Robot Ident Git/ident_functions/nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void b_nonlinear_differential_model(const emlrtStack *sp, real_T t_disc, const
  real_T x[12], const real_T scaledOptVec[31], const struct0_T *b_static,
  struct1_T *dyn, real_T x_dot[12], real_T tau_m[6])
{
  emlrtStack st;
  real_T b_x_data[12];
  real_T x_data[12];
  real_T b_scaledOptVec[6];
  real_T b_x[6];
  real_T f_sign[6];
  real_T qd[6];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T b_loop_ub;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&x_dot[0], &b_static->x_init[0], 12U * sizeof(real_T));

  /*  time dependend parameters */
  /*  reference link angle */
  /*  reference link velocity */
  /*  disturbance torque */
  /*  feed forward torque */
  /*  axis dependend parameters */
  /*  position control parameter */
  /*  veclotiy control parameter */
  /*  friction smoothness factor */
  /*  transmission factor */
  /*  static sizes for code generation */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &b_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12, &emlrtBCI,
        sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (6 != (int8_T)loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)loop_ub, &emlrtECI, sp);
  }

  /*  angle */
  if (b_static->n_axis + 1.0 > 12.0) {
    i = 0;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &c_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &b_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 1;
    k = 11;
  }

  b_loop_ub = k - i;
  if (6 != (int8_T)(b_loop_ub + 1)) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)(b_loop_ub + 1), &b_emlrtECI, sp);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    qd[k] = x_data[k];
  }

  /*  velocity */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (k = 0; k < 6; k++) {
    y = b_static->f_vis_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &g_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_coul_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &h_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_a_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &i_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_b_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &j_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_asym_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &k_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  if (((int32_T)b_static->m_pay_idx < 1) || ((int32_T)b_static->m_pay_idx > 31))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)b_static->m_pay_idx, 1, 31,
      &c_emlrtBCI, sp);
  }

  /*  calculate gravity, coriolis, inertia */
  guard1 = false;
  if (t_disc == 1.0) {
    guard1 = true;
  } else {
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    y = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < 6; k++) {
      absxk = muDoubleScalarAbs(x_data[k] - dyn->q_update[k]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * muDoubleScalarSqrt(y);
    if (y > b_static->q_update_threshold) {
      guard1 = true;
    } else {
      for (k = 0; k <= b_loop_ub; k++) {
        x_data[k] = x[i + k];
      }

      y = 0.0;
      scale = 3.3121686421112381E-170;
      for (k = 0; k < 6; k++) {
        absxk = muDoubleScalarAbs(x_data[k] - dyn->qd_update[k]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * muDoubleScalarSqrt(y);
      if (y > b_static->qd_update_threshold) {
        guard1 = true;
      }
    }
  }

  if (guard1) {
    dyn->count_rob_updates++;
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (k = 0; k < 6; k++) {
      dyn->q_update[k] = x_data[k];
    }

    for (k = 0; k <= b_loop_ub; k++) {
      x_data[k] = x[i + k];
    }

    for (k = 0; k < 6; k++) {
      dyn->qd_update[k] = x_data[k];
    }

    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (k = 0; k <= b_loop_ub; k++) {
      b_x_data[k] = x[i + k];
    }

    st.site = &g_emlrtRSI;
    robot_dynamics(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
                   scaledOptVec[(int32_T)b_static->m_pay_idx - 1],
                   dyn->M_inverse, dyn->C, dyn->G);
  }

  /*  friction torque */
  /*  continous differentiable sign of the link velocity */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    f_sign[k] = muDoubleScalarTanh(b_static->s_f_ode[k] * x_data[k]);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    b_x[k] = muDoubleScalarTanh(scaledOptVec[(int32_T)b_static->f_b_idx[k] - 1] *
      x_data[k]);
  }

  /*  motor control torque */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  if (0 <= loop_ub - 1) {
    memcpy(&b_x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k < 6; k++) {
    loop_ub = k + 6 * ((int32_T)t_disc - 1);
    tau_m[k] = (b_static->tau_ff[loop_ub] + b_static->K_vel_eff[k] *
                (b_static->phi_r_d1[loop_ub] - x_data[k])) + b_static->
      K_pos_eff[k] * (b_static->phi_r[loop_ub] - b_x_data[k]);
  }

  /*  derivatives */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &e_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12,
        &d_emlrtBCI, sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (loop_ub != 6) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 6, &c_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    x_dot[k] = x[i + k];
  }

  if (b_static->n_axis + 1.0 > 12.0) {
    i = -1;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &f_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &e_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 2;
    k = 11;
  }

  k -= i;
  if (k != 6) {
    emlrtSubAssignSizeCheck1dR2017a(k, 6, &d_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    y = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y += dyn->C[k + 6 * loop_ub] * qd[loop_ub];
    }

    b_scaledOptVec[k] = (((-(((scaledOptVec[(int32_T)b_static->f_asym_idx[k] - 1]
      + scaledOptVec[(int32_T)b_static->f_vis_idx[k] - 1] * qd[k]) +
      scaledOptVec[(int32_T)b_static->f_coul_idx[k] - 1] * f_sign[k]) +
      scaledOptVec[(int32_T)b_static->f_a_idx[k] - 1] * b_x[k]) - dyn->G[k]) - y)
                         + tau_m[k] * b_static->u[k]) + b_static->tau_dist[k + 6
      * ((int32_T)t_disc - 1)];
  }

  for (k = 0; k < 6; k++) {
    y = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y += dyn->M_inverse[k + 6 * loop_ub] * b_scaledOptVec[loop_ub];
    }

    qd[k] = y;
  }

  for (k = 0; k < 6; k++) {
    x_dot[(i + k) + 1] = qd[k];
  }
}

void c_nonlinear_differential_model(const emlrtStack *sp, const real_T x[12],
  const real_T scaledOptVec[31], const struct0_T *b_static, struct1_T *dyn,
  real_T x_dot[12], real_T tau_m[6])
{
  emlrtStack st;
  real_T b_x_data[12];
  real_T x_data[12];
  real_T b_scaledOptVec[6];
  real_T b_x[6];
  real_T f_sign[6];
  real_T qd[6];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T b_loop_ub;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&x_dot[0], &b_static->x_init[0], 12U * sizeof(real_T));

  /*  time dependend parameters */
  /*  reference link angle */
  /*  reference link velocity */
  /*  disturbance torque */
  /*  feed forward torque */
  /*  axis dependend parameters */
  /*  position control parameter */
  /*  veclotiy control parameter */
  /*  friction smoothness factor */
  /*  transmission factor */
  /*  static sizes for code generation */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &b_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12, &emlrtBCI,
        sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (6 != (int8_T)loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)loop_ub, &emlrtECI, sp);
  }

  /*  angle */
  if (b_static->n_axis + 1.0 > 12.0) {
    i = 0;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &c_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &b_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 1;
    k = 11;
  }

  b_loop_ub = k - i;
  if (6 != (int8_T)(b_loop_ub + 1)) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)(b_loop_ub + 1), &b_emlrtECI, sp);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    qd[k] = x_data[k];
  }

  /*  velocity */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (k = 0; k < 6; k++) {
    y = b_static->f_vis_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &g_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_coul_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &h_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_a_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &i_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_b_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &j_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    y = b_static->f_asym_idx[k];
    if (y != (int32_T)muDoubleScalarFloor(y)) {
      emlrtIntegerCheckR2012b(y, &k_emlrtDCI, sp);
    }

    if (((int32_T)y < 1) || ((int32_T)y > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  if (((int32_T)b_static->m_pay_idx < 1) || ((int32_T)b_static->m_pay_idx > 31))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)b_static->m_pay_idx, 1, 31,
      &c_emlrtBCI, sp);
  }

  /*  calculate gravity, coriolis, inertia */
  if (0 <= loop_ub - 1) {
    memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 6; k++) {
    absxk = muDoubleScalarAbs(x_data[k] - dyn->q_update[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * muDoubleScalarSqrt(y);
  guard1 = false;
  if (y > b_static->q_update_threshold) {
    guard1 = true;
  } else {
    for (k = 0; k <= b_loop_ub; k++) {
      x_data[k] = x[i + k];
    }

    y = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < 6; k++) {
      absxk = muDoubleScalarAbs(x_data[k] - dyn->qd_update[k]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * muDoubleScalarSqrt(y);
    if (y > b_static->qd_update_threshold) {
      guard1 = true;
    }
  }

  if (guard1) {
    dyn->count_rob_updates++;
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (k = 0; k < 6; k++) {
      dyn->q_update[k] = x_data[k];
    }

    for (k = 0; k <= b_loop_ub; k++) {
      x_data[k] = x[i + k];
    }

    for (k = 0; k < 6; k++) {
      dyn->qd_update[k] = x_data[k];
    }

    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (k = 0; k <= b_loop_ub; k++) {
      b_x_data[k] = x[i + k];
    }

    st.site = &g_emlrtRSI;
    robot_dynamics(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
                   scaledOptVec[(int32_T)b_static->m_pay_idx - 1],
                   dyn->M_inverse, dyn->C, dyn->G);
  }

  /*  friction torque */
  /*  continous differentiable sign of the link velocity */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    f_sign[k] = muDoubleScalarTanh(b_static->s_f_ode[k] * x_data[k]);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    b_x[k] = muDoubleScalarTanh(scaledOptVec[(int32_T)b_static->f_b_idx[k] - 1] *
      x_data[k]);
  }

  /*  motor control torque */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  if (0 <= loop_ub - 1) {
    memcpy(&b_x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k < 6; k++) {
    tau_m[k] = (b_static->tau_ff[k + 48000] + b_static->K_vel_eff[k] *
                (b_static->phi_r_d1[k + 48000] - x_data[k])) +
      b_static->K_pos_eff[k] * (b_static->phi_r[k + 48000] - b_x_data[k]);
  }

  /*  derivatives */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &e_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12,
        &d_emlrtBCI, sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (loop_ub != 6) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 6, &c_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    x_dot[k] = x[i + k];
  }

  if (b_static->n_axis + 1.0 > 12.0) {
    i = -1;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &f_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &e_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 2;
    k = 11;
  }

  k -= i;
  if (k != 6) {
    emlrtSubAssignSizeCheck1dR2017a(k, 6, &d_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    y = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y += dyn->C[k + 6 * loop_ub] * qd[loop_ub];
    }

    b_scaledOptVec[k] = (((-(((scaledOptVec[(int32_T)b_static->f_asym_idx[k] - 1]
      + scaledOptVec[(int32_T)b_static->f_vis_idx[k] - 1] * qd[k]) +
      scaledOptVec[(int32_T)b_static->f_coul_idx[k] - 1] * f_sign[k]) +
      scaledOptVec[(int32_T)b_static->f_a_idx[k] - 1] * b_x[k]) - dyn->G[k]) - y)
                         + tau_m[k] * b_static->u[k]) + b_static->tau_dist[k +
      48000];
  }

  for (k = 0; k < 6; k++) {
    y = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      y += dyn->M_inverse[k + 6 * loop_ub] * b_scaledOptVec[loop_ub];
    }

    qd[k] = y;
  }

  for (k = 0; k < 6; k++) {
    x_dot[(i + k) + 1] = qd[k];
  }
}

void nonlinear_differential_model(const emlrtStack *sp, const real_T x[12],
  const real_T scaledOptVec[31], const struct0_T *b_static, struct1_T *dyn,
  real_T x_dot[12], real_T tau_m[6])
{
  emlrtStack st;
  real_T b_x_data[12];
  real_T x_data[12];
  real_T b_scaledOptVec[6];
  real_T b_x[6];
  real_T f_sign[6];
  real_T qd[6];
  real_T d;
  int32_T b_loop_ub;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&x_dot[0], &b_static->x_init[0], 12U * sizeof(real_T));

  /*  time dependend parameters */
  /*  reference link angle */
  /*  reference link velocity */
  /*  disturbance torque */
  /*  feed forward torque */
  /*  axis dependend parameters */
  /*  position control parameter */
  /*  veclotiy control parameter */
  /*  friction smoothness factor */
  /*  transmission factor */
  /*  static sizes for code generation */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &b_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12, &emlrtBCI,
        sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (6 != (int8_T)loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)loop_ub, &emlrtECI, sp);
  }

  /*  angle */
  if (b_static->n_axis + 1.0 > 12.0) {
    i = 0;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &c_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &b_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 1;
    k = 11;
  }

  b_loop_ub = k - i;
  if (6 != (int8_T)(b_loop_ub + 1)) {
    emlrtSubAssignSizeCheck1dR2017a(6, (int8_T)(b_loop_ub + 1), &b_emlrtECI, sp);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    qd[k] = x_data[k];
  }

  /*  velocity */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (k = 0; k < 6; k++) {
    d = b_static->f_vis_idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &g_emlrtDCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    d = b_static->f_coul_idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &h_emlrtDCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    d = b_static->f_a_idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &i_emlrtDCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    d = b_static->f_b_idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &j_emlrtDCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    d = b_static->f_asym_idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &k_emlrtDCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > 31)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  if (((int32_T)b_static->m_pay_idx < 1) || ((int32_T)b_static->m_pay_idx > 31))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)b_static->m_pay_idx, 1, 31,
      &c_emlrtBCI, sp);
  }

  /*  calculate gravity, coriolis, inertia */
  dyn->count_rob_updates++;
  if (0 <= loop_ub - 1) {
    memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k < 6; k++) {
    dyn->q_update[k] = x_data[k];
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    dyn->qd_update[k] = x_data[k];
  }

  if (0 <= loop_ub - 1) {
    memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k <= b_loop_ub; k++) {
    b_x_data[k] = x[i + k];
  }

  st.site = &g_emlrtRSI;
  robot_dynamics(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
                 scaledOptVec[(int32_T)b_static->m_pay_idx - 1], dyn->M_inverse,
                 dyn->C, dyn->G);

  /*  friction torque */
  /*  continous differentiable sign of the link velocity */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    f_sign[k] = muDoubleScalarTanh(b_static->s_f_ode[k] * x_data[k]);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    b_x[k] = muDoubleScalarTanh(scaledOptVec[(int32_T)b_static->f_b_idx[k] - 1] *
      x_data[k]);
  }

  /*  motor control torque */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  if (0 <= loop_ub - 1) {
    memcpy(&b_x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k < 6; k++) {
    tau_m[k] = (b_static->tau_ff[k] + b_static->K_vel_eff[k] *
                (b_static->phi_r_d1[k] - x_data[k])) + b_static->K_pos_eff[k] *
      (b_static->phi_r[k] - b_x_data[k]);
  }

  /*  derivatives */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &e_emlrtDCI, sp);
    }

    if (((int32_T)b_static->n_axis < 1) || ((int32_T)b_static->n_axis > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_static->n_axis, 1, 12,
        &d_emlrtBCI, sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
  }

  if (loop_ub != 6) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 6, &c_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    x_dot[k] = x[i + k];
  }

  if (b_static->n_axis + 1.0 > 12.0) {
    i = -1;
    k = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &f_emlrtDCI, sp);
    }

    if (((int32_T)(b_static->n_axis + 1.0) < 1) || ((int32_T)(b_static->n_axis +
          1.0) > 12)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_static->n_axis + 1.0), 1, 12,
        &e_emlrtBCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0) - 2;
    k = 11;
  }

  k -= i;
  if (k != 6) {
    emlrtSubAssignSizeCheck1dR2017a(k, 6, &d_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    d = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      d += dyn->C[k + 6 * loop_ub] * qd[loop_ub];
    }

    b_scaledOptVec[k] = (((-(((scaledOptVec[(int32_T)b_static->f_asym_idx[k] - 1]
      + scaledOptVec[(int32_T)b_static->f_vis_idx[k] - 1] * qd[k]) +
      scaledOptVec[(int32_T)b_static->f_coul_idx[k] - 1] * f_sign[k]) +
      scaledOptVec[(int32_T)b_static->f_a_idx[k] - 1] * b_x[k]) - dyn->G[k]) - d)
                         + tau_m[k] * b_static->u[k]) + b_static->tau_dist[k];
  }

  for (k = 0; k < 6; k++) {
    d = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      d += dyn->M_inverse[k + 6 * loop_ub] * b_scaledOptVec[loop_ub];
    }

    qd[k] = d;
  }

  for (k = 0; k < 6; k++) {
    x_dot[(i + k) + 1] = qd[k];
  }
}

/* End of code generation (nonlinear_differential_model.c) */
