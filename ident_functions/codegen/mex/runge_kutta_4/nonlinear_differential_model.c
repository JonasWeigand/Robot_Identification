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
#include "model_payload.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 102, /* lineNo */
  "nonlinear_differential_model",      /* fcnName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m"/* pathName */
};

static emlrtDCInfo b_emlrtDCI = { 24,  /* lineNo */
  17,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  12,                                  /* iLast */
  24,                                  /* lineNo */
  17,                                  /* colNo */
  "x",                                 /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 25,  /* lineNo */
  15,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  25,                                  /* lineNo */
  15,                                  /* colNo */
  "x",                                 /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 62,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  62,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  24,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  25,                                  /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 132, /* lineNo */
  9,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  132,                                 /* lineNo */
  9,                                   /* colNo */
  "x_dot",                             /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  132,                                 /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 134, /* lineNo */
  7,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  134,                                 /* lineNo */
  7,                                   /* colNo */
  "x_dot",                             /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  134,                                 /* lineNo */
  1,                                   /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 57,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  57,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 58,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  58,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 59,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  59,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 60,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  60,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 61,  /* lineNo */
  28,                                  /* colNo */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  31,                                  /* iLast */
  61,                                  /* lineNo */
  28,                                  /* colNo */
  "scaledOptVec",                      /* aName */
  "nonlinear_differential_model",      /* fName */
  "C:\\Users\\Jonas Weigand\\OneDrive\\MATLAB\\21-02-28 Sysident Online Full Robot MEX V7\\functions\\nonlinear_differential_model.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void b_nonlinear_differential_model(const emlrtStack *sp, real_T t_disc, const
  real_T x[12], const real_T scaledOptVec[31], const struct0_T *b_static,
  struct1_T *dyn, real_T x_dot[12], real_T tau_m[6])
{
  int32_T loop_ub;
  int32_T i;
  int32_T i1;
  int32_T b_loop_ub;
  real_T x_data[12];
  real_T qd[6];
  int32_T k;
  boolean_T guard1 = false;
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T f_sign[6];
  real_T b_x[6];
  real_T b_x_data[12];
  real_T b_scaledOptVec[6];
  emlrtStack st;
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

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &emlrtBCI, sp);
    }
  }

  if (6 != loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, loop_ub, &emlrtECI, sp);
  }

  /*  angle */
  if (b_static->n_axis + 1.0 > 12.0) {
    i = 0;
    i1 = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &c_emlrtDCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &b_emlrtBCI, sp);
    }

    i--;
    i1 = 11;
  }

  b_loop_ub = i1 - i;
  i1 = b_loop_ub + 1;
  if (6 != i1) {
    emlrtSubAssignSizeCheck1dR2017a(6, i1, &b_emlrtECI, sp);
  }

  for (i1 = 0; i1 <= b_loop_ub; i1++) {
    x_data[i1] = x[i + i1];
  }

  for (i1 = 0; i1 < 6; i1++) {
    qd[i1] = x_data[i1];
  }

  /*  velocity */
  /*  size(x_dot) */
  /*  size(q_r) */
  /*  size(q_r_d1) */
  /*  size(tau_dist) */
  /*  size(tau_ff) */
  /*  size(q) */
  /*  size(qd) */
  /*  disable feed forward */
  /*  tau_ff = 0; */
  /*  phi_r_m = u * phi_r; */
  /*  phi_r_m_d1 = u * phi_r_d1; */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (i1 = 0; i1 < 6; i1++) {
    if (b_static->f_vis_idx[i1] != (int32_T)muDoubleScalarFloor
        (b_static->f_vis_idx[i1])) {
      emlrtIntegerCheckR2012b(b_static->f_vis_idx[i1], &g_emlrtDCI, sp);
    }

    k = (int32_T)b_static->f_vis_idx[i1];
    if ((k < 1) || (k > 31)) {
      emlrtDynamicBoundsCheckR2012b(k, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (i1 = 0; i1 < 6; i1++) {
    if (b_static->f_coul_idx[i1] != (int32_T)muDoubleScalarFloor
        (b_static->f_coul_idx[i1])) {
      emlrtIntegerCheckR2012b(b_static->f_coul_idx[i1], &h_emlrtDCI, sp);
    }

    k = (int32_T)b_static->f_coul_idx[i1];
    if ((k < 1) || (k > 31)) {
      emlrtDynamicBoundsCheckR2012b(k, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (i1 = 0; i1 < 6; i1++) {
    if (b_static->f_a_idx[i1] != (int32_T)muDoubleScalarFloor(b_static->
         f_a_idx[i1])) {
      emlrtIntegerCheckR2012b(b_static->f_a_idx[i1], &i_emlrtDCI, sp);
    }

    k = (int32_T)b_static->f_a_idx[i1];
    if ((k < 1) || (k > 31)) {
      emlrtDynamicBoundsCheckR2012b(k, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (i1 = 0; i1 < 6; i1++) {
    if (b_static->f_b_idx[i1] != (int32_T)muDoubleScalarFloor(b_static->
         f_b_idx[i1])) {
      emlrtIntegerCheckR2012b(b_static->f_b_idx[i1], &j_emlrtDCI, sp);
    }

    k = (int32_T)b_static->f_b_idx[i1];
    if ((k < 1) || (k > 31)) {
      emlrtDynamicBoundsCheckR2012b(k, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (i1 = 0; i1 < 6; i1++) {
    if (b_static->f_asym_idx[i1] != (int32_T)muDoubleScalarFloor
        (b_static->f_asym_idx[i1])) {
      emlrtIntegerCheckR2012b(b_static->f_asym_idx[i1], &k_emlrtDCI, sp);
    }

    k = (int32_T)b_static->f_asym_idx[i1];
    if ((k < 1) || (k > 31)) {
      emlrtDynamicBoundsCheckR2012b(k, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  i1 = (int32_T)b_static->m_pay_idx;
  if ((i1 < 1) || (i1 > 31)) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &c_emlrtBCI, sp);
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
      for (i1 = 0; i1 <= b_loop_ub; i1++) {
        x_data[i1] = x[i + i1];
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

    /*  dyn.count_rob_updates = dyn.count_rob_updates + 1; */
    /*  if t_disc == 1 || dyn.count_rob_updates > 125 */
    /*          dyn.count_rob_updates = 1; */
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (i1 = 0; i1 < 6; i1++) {
      dyn->q_update[i1] = x_data[i1];
    }

    for (i1 = 0; i1 <= b_loop_ub; i1++) {
      x_data[i1] = x[i + i1];
    }

    for (i1 = 0; i1 < 6; i1++) {
      dyn->qd_update[i1] = x_data[i1];
    }

    /*          % transfer from relative to global coordiantes */
    /*          qs = [0 -pi/2 pi/2 0 0 0]; */
    /*          q_global = q' + qs; */
    /*  */
    /*  */
    /*          % mass matrix and inverse, q input dim [1, n_axis] */
    /*          M = inertia( [], q_global ); */
    /*          dyn.M_inverse = M^-1; */
    /*  */
    /*          % coriolis matrix, q and qd input dim [1, n_axis] */
    /*          dyn.C = coriolis( [], q_global, qd' ); */
    /*  */
    /*          % gravity matrix, q input dim [1, n_axis] */
    /*          dyn.G = gravload( [], q_global )'; */
    /*  */
    /*          % hydraulic counter weight */
    /*          [tau_hyd, ~] = HydroSpring( q_global(2) ); */
    /*  */
    /*          dyn.G(2) = dyn.G(2) + tau_hyd; */
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (i1 = 0; i1 <= b_loop_ub; i1++) {
      b_x_data[i1] = x[i + i1];
    }

    st.site = &g_emlrtRSI;
    model_payload(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
                  scaledOptVec[(int32_T)b_static->m_pay_idx - 1], dyn->M_inverse,
                  dyn->C, dyn->G);
  }

  /*  friction torque */
  /*  continous differentiable sign of the link velocity */
  for (i1 = 0; i1 <= b_loop_ub; i1++) {
    x_data[i1] = x[i + i1];
  }

  for (k = 0; k < 6; k++) {
    f_sign[k] = muDoubleScalarTanh(b_static->s_f_ode[k] * x_data[k]);
  }

  /*  friction model 2 */
  /*  Ding, */
  /*  Nonlinear Friction and Dynamical Identification for a Robot */
  /*  Manipulator with Improved Cuckoo Search Algorithm */
  /*  OR */
  /*  Grotjahn */
  /*  Friction and rigid body identification of robot dynamics */
  for (i1 = 0; i1 <= b_loop_ub; i1++) {
    x_data[i1] = x[i + i1];
  }

  for (k = 0; k < 6; k++) {
    b_x[k] = muDoubleScalarTanh(scaledOptVec[(int32_T)b_static->f_b_idx[k] - 1] *
      x_data[k]);
  }

  /*  motor control torque */
  for (i1 = 0; i1 <= b_loop_ub; i1++) {
    x_data[i1] = x[i + i1];
  }

  if (0 <= loop_ub - 1) {
    memcpy(&b_x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (i1 = 0; i1 < 6; i1++) {
    loop_ub = i1 + 6 * ((int32_T)t_disc - 1);
    tau_m[i1] = (b_static->tau_ff[loop_ub] + b_static->K_vel_eff[i1] *
                 (b_static->phi_r_d1[loop_ub] - x_data[i1])) +
      b_static->K_pos_eff[i1] * (b_static->phi_r[loop_ub] - b_x_data[i1]);
  }

  /*  derivatives */
  if (1.0 > b_static->n_axis) {
    loop_ub = 0;
  } else {
    if (b_static->n_axis != (int32_T)muDoubleScalarFloor(b_static->n_axis)) {
      emlrtIntegerCheckR2012b(b_static->n_axis, &e_emlrtDCI, sp);
    }

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &d_emlrtBCI, sp);
    }
  }

  if (loop_ub != 6) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 6, &c_emlrtECI, sp);
  }

  for (i1 = 0; i1 < 6; i1++) {
    x_dot[i1] = x[i + i1];
  }

  if (b_static->n_axis + 1.0 > 12.0) {
    i = -1;
    i1 = -1;
  } else {
    if (b_static->n_axis + 1.0 != (int32_T)muDoubleScalarFloor(b_static->n_axis
         + 1.0)) {
      emlrtIntegerCheckR2012b(b_static->n_axis + 1.0, &f_emlrtDCI, sp);
    }

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &e_emlrtBCI, sp);
    }

    i -= 2;
    i1 = 11;
  }

  i1 -= i;
  if (i1 != 6) {
    emlrtSubAssignSizeCheck1dR2017a(i1, 6, &d_emlrtECI, sp);
  }

  for (i1 = 0; i1 < 6; i1++) {
    y = 0.0;
    for (k = 0; k < 6; k++) {
      y += dyn->C[i1 + 6 * k] * qd[k];
    }

    b_scaledOptVec[i1] = (((-(((scaledOptVec[(int32_T)b_static->f_asym_idx[i1] -
      1] + scaledOptVec[(int32_T)b_static->f_vis_idx[i1] - 1] * qd[i1]) +
      scaledOptVec[(int32_T)b_static->f_coul_idx[i1] - 1] * f_sign[i1]) +
      scaledOptVec[(int32_T)b_static->f_a_idx[i1] - 1] * b_x[i1]) - dyn->G[i1])
      - y) + tau_m[i1] * b_static->u[i1]) + b_static->tau_dist[i1 + 6 *
      ((int32_T)t_disc - 1)];
  }

  for (i1 = 0; i1 < 6; i1++) {
    y = 0.0;
    for (k = 0; k < 6; k++) {
      y += dyn->M_inverse[i1 + 6 * k] * b_scaledOptVec[k];
    }

    qd[i1] = y;
  }

  for (i1 = 0; i1 < 6; i1++) {
    x_dot[(i + i1) + 1] = qd[i1];
  }
}

void c_nonlinear_differential_model(const emlrtStack *sp, const real_T x[12],
  const real_T scaledOptVec[31], const struct0_T *b_static, struct1_T *dyn,
  real_T x_dot[12], real_T tau_m[6])
{
  int32_T loop_ub;
  int32_T i;
  int32_T k;
  int32_T b_loop_ub;
  real_T x_data[12];
  real_T qd[6];
  int32_T i1;
  real_T y;
  real_T scale;
  real_T absxk;
  boolean_T guard1 = false;
  real_T t;
  real_T f_sign[6];
  real_T b_x[6];
  real_T b_x_data[12];
  real_T b_scaledOptVec[6];
  emlrtStack st;
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

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &emlrtBCI, sp);
    }
  }

  if (6 != loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, loop_ub, &emlrtECI, sp);
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

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &b_emlrtBCI, sp);
    }

    i--;
    k = 11;
  }

  b_loop_ub = k - i;
  k = b_loop_ub + 1;
  if (6 != k) {
    emlrtSubAssignSizeCheck1dR2017a(6, k, &b_emlrtECI, sp);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    qd[k] = x_data[k];
  }

  /*  velocity */
  /*  size(x_dot) */
  /*  size(q_r) */
  /*  size(q_r_d1) */
  /*  size(tau_dist) */
  /*  size(tau_ff) */
  /*  size(q) */
  /*  size(qd) */
  /*  disable feed forward */
  /*  tau_ff = 0; */
  /*  phi_r_m = u * phi_r; */
  /*  phi_r_m_d1 = u * phi_r_d1; */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (k = 0; k < 6; k++) {
    if (b_static->f_vis_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_vis_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_vis_idx[k], &g_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_vis_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_coul_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_coul_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_coul_idx[k], &h_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_coul_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_a_idx[k] != (int32_T)muDoubleScalarFloor(b_static->f_a_idx[k]))
    {
      emlrtIntegerCheckR2012b(b_static->f_a_idx[k], &i_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_a_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_b_idx[k] != (int32_T)muDoubleScalarFloor(b_static->f_b_idx[k]))
    {
      emlrtIntegerCheckR2012b(b_static->f_b_idx[k], &j_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_b_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_asym_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_asym_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_asym_idx[k], &k_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_asym_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  k = (int32_T)b_static->m_pay_idx;
  if ((k < 1) || (k > 31)) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 31, &c_emlrtBCI, sp);
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

    /*  dyn.count_rob_updates = dyn.count_rob_updates + 1; */
    /*  if t_disc == 1 || dyn.count_rob_updates > 125 */
    /*          dyn.count_rob_updates = 1; */
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

    /*          % transfer from relative to global coordiantes */
    /*          qs = [0 -pi/2 pi/2 0 0 0]; */
    /*          q_global = q' + qs; */
    /*  */
    /*  */
    /*          % mass matrix and inverse, q input dim [1, n_axis] */
    /*          M = inertia( [], q_global ); */
    /*          dyn.M_inverse = M^-1; */
    /*  */
    /*          % coriolis matrix, q and qd input dim [1, n_axis] */
    /*          dyn.C = coriolis( [], q_global, qd' ); */
    /*  */
    /*          % gravity matrix, q input dim [1, n_axis] */
    /*          dyn.G = gravload( [], q_global )'; */
    /*  */
    /*          % hydraulic counter weight */
    /*          [tau_hyd, ~] = HydroSpring( q_global(2) ); */
    /*  */
    /*          dyn.G(2) = dyn.G(2) + tau_hyd; */
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
    }

    for (k = 0; k <= b_loop_ub; k++) {
      b_x_data[k] = x[i + k];
    }

    st.site = &g_emlrtRSI;
    model_payload(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
                  scaledOptVec[(int32_T)b_static->m_pay_idx - 1], dyn->M_inverse,
                  dyn->C, dyn->G);
  }

  /*  friction torque */
  /*  continous differentiable sign of the link velocity */
  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    f_sign[k] = muDoubleScalarTanh(b_static->s_f_ode[k] * x_data[k]);
  }

  /*  friction model 2 */
  /*  Ding, */
  /*  Nonlinear Friction and Dynamical Identification for a Robot */
  /*  Manipulator with Improved Cuckoo Search Algorithm */
  /*  OR */
  /*  Grotjahn */
  /*  Friction and rigid body identification of robot dynamics */
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

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &d_emlrtBCI, sp);
    }
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

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &e_emlrtBCI, sp);
    }

    i -= 2;
    k = 11;
  }

  k -= i;
  if (k != 6) {
    emlrtSubAssignSizeCheck1dR2017a(k, 6, &d_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    y = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      y += dyn->C[k + 6 * i1] * qd[i1];
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
    for (i1 = 0; i1 < 6; i1++) {
      y += dyn->M_inverse[k + 6 * i1] * b_scaledOptVec[i1];
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
  int32_T loop_ub;
  int32_T i;
  int32_T k;
  int32_T b_loop_ub;
  real_T x_data[12];
  real_T qd[6];
  int32_T i1;
  real_T b_x_data[12];
  real_T f_sign[6];
  real_T b_x[6];
  real_T d;
  real_T b_scaledOptVec[6];
  emlrtStack st;
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

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &emlrtBCI, sp);
    }
  }

  if (6 != loop_ub) {
    emlrtSubAssignSizeCheck1dR2017a(6, loop_ub, &emlrtECI, sp);
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

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &b_emlrtBCI, sp);
    }

    i--;
    k = 11;
  }

  b_loop_ub = k - i;
  k = b_loop_ub + 1;
  if (6 != k) {
    emlrtSubAssignSizeCheck1dR2017a(6, k, &b_emlrtECI, sp);
  }

  for (k = 0; k <= b_loop_ub; k++) {
    x_data[k] = x[i + k];
  }

  for (k = 0; k < 6; k++) {
    qd[k] = x_data[k];
  }

  /*  velocity */
  /*  size(x_dot) */
  /*  size(q_r) */
  /*  size(q_r_d1) */
  /*  size(tau_dist) */
  /*  size(tau_ff) */
  /*  size(q) */
  /*  size(qd) */
  /*  disable feed forward */
  /*  tau_ff = 0; */
  /*  phi_r_m = u * phi_r; */
  /*  phi_r_m_d1 = u * phi_r_d1; */
  /*  override with values for optimisation */
  /*  use the nominal model for the feed forward terms */
  /*  friction */
  for (k = 0; k < 6; k++) {
    if (b_static->f_vis_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_vis_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_vis_idx[k], &g_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_vis_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &f_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_coul_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_coul_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_coul_idx[k], &h_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_coul_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &g_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_a_idx[k] != (int32_T)muDoubleScalarFloor(b_static->f_a_idx[k]))
    {
      emlrtIntegerCheckR2012b(b_static->f_a_idx[k], &i_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_a_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &h_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_b_idx[k] != (int32_T)muDoubleScalarFloor(b_static->f_b_idx[k]))
    {
      emlrtIntegerCheckR2012b(b_static->f_b_idx[k], &j_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_b_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &i_emlrtBCI, sp);
    }
  }

  for (k = 0; k < 6; k++) {
    if (b_static->f_asym_idx[k] != (int32_T)muDoubleScalarFloor
        (b_static->f_asym_idx[k])) {
      emlrtIntegerCheckR2012b(b_static->f_asym_idx[k], &k_emlrtDCI, sp);
    }

    i1 = (int32_T)b_static->f_asym_idx[k];
    if ((i1 < 1) || (i1 > 31)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 31, &j_emlrtBCI, sp);
    }
  }

  if (b_static->m_pay_idx != (int32_T)muDoubleScalarFloor(b_static->m_pay_idx))
  {
    emlrtIntegerCheckR2012b(b_static->m_pay_idx, &d_emlrtDCI, sp);
  }

  k = (int32_T)b_static->m_pay_idx;
  if ((k < 1) || (k > 31)) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 31, &c_emlrtBCI, sp);
  }

  /*  calculate gravity, coriolis, inertia */
  dyn->count_rob_updates++;

  /*  dyn.count_rob_updates = dyn.count_rob_updates + 1; */
  /*  if t_disc == 1 || dyn.count_rob_updates > 125 */
  /*          dyn.count_rob_updates = 1; */
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

  /*          % transfer from relative to global coordiantes */
  /*          qs = [0 -pi/2 pi/2 0 0 0]; */
  /*          q_global = q' + qs; */
  /*  */
  /*  */
  /*          % mass matrix and inverse, q input dim [1, n_axis] */
  /*          M = inertia( [], q_global ); */
  /*          dyn.M_inverse = M^-1; */
  /*  */
  /*          % coriolis matrix, q and qd input dim [1, n_axis] */
  /*          dyn.C = coriolis( [], q_global, qd' ); */
  /*  */
  /*          % gravity matrix, q input dim [1, n_axis] */
  /*          dyn.G = gravload( [], q_global )'; */
  /*  */
  /*          % hydraulic counter weight */
  /*          [tau_hyd, ~] = HydroSpring( q_global(2) ); */
  /*  */
  /*          dyn.G(2) = dyn.G(2) + tau_hyd; */
  if (0 <= loop_ub - 1) {
    memcpy(&x_data[0], &x[0], loop_ub * sizeof(real_T));
  }

  for (k = 0; k <= b_loop_ub; k++) {
    b_x_data[k] = x[i + k];
  }

  st.site = &g_emlrtRSI;
  model_payload(&st, *(real_T (*)[6])&x_data[0], *(real_T (*)[6])&b_x_data[0],
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

  /*  friction model 2 */
  /*  Ding, */
  /*  Nonlinear Friction and Dynamical Identification for a Robot */
  /*  Manipulator with Improved Cuckoo Search Algorithm */
  /*  OR */
  /*  Grotjahn */
  /*  Friction and rigid body identification of robot dynamics */
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

    loop_ub = (int32_T)b_static->n_axis;
    if ((loop_ub < 1) || (loop_ub > 12)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 12, &d_emlrtBCI, sp);
    }
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

    i = (int32_T)(b_static->n_axis + 1.0);
    if ((i < 1) || (i > 12)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 12, &e_emlrtBCI, sp);
    }

    i -= 2;
    k = 11;
  }

  k -= i;
  if (k != 6) {
    emlrtSubAssignSizeCheck1dR2017a(k, 6, &d_emlrtECI, sp);
  }

  for (k = 0; k < 6; k++) {
    d = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      d += dyn->C[k + 6 * i1] * qd[i1];
    }

    b_scaledOptVec[k] = (((-(((scaledOptVec[(int32_T)b_static->f_asym_idx[k] - 1]
      + scaledOptVec[(int32_T)b_static->f_vis_idx[k] - 1] * qd[k]) +
      scaledOptVec[(int32_T)b_static->f_coul_idx[k] - 1] * f_sign[k]) +
      scaledOptVec[(int32_T)b_static->f_a_idx[k] - 1] * b_x[k]) - dyn->G[k]) - d)
                         + tau_m[k] * b_static->u[k]) + b_static->tau_dist[k];
  }

  for (k = 0; k < 6; k++) {
    d = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      d += dyn->M_inverse[k + 6 * i1] * b_scaledOptVec[i1];
    }

    qd[k] = d;
  }

  for (k = 0; k < 6; k++) {
    x_dot[(i + k) + 1] = qd[k];
  }
}

/* End of code generation (nonlinear_differential_model.c) */
