/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_runge_kutta_4_api.c
 *
 * Code generation for function '_coder_runge_kutta_4_api'
 *
 */

/* Include files */
#include "_coder_runge_kutta_4_api.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include "runge_kutta_4_data.h"
#include "runge_kutta_4_types.h"

/* Function Declarations */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static const mxArray *b_emlrt_marshallOut(const real_T u[48006]);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *time_cont, const char_T *identifier))[8001];
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[36]);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8001];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12];
static const mxArray *emlrt_marshallOut(const real_T u[96012]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *optVec,
  const char_T *identifier))[31];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[31];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_static,
  const char_T *identifier, struct0_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[48006]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[12]);
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dyn, const
  char_T *identifier, struct1_T *y);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[36]);
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8001];
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12];
static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[31];
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[48006]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[12]);

/* Function Definitions */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[48006])
{
  static const int32_T iv[2] = { 0, 0 };

  static const int32_T iv1[2] = { 8001, 6 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, iv1, 2);
  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[2] = { 1, 6 };

  real_T (*r)[6];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[6])emlrtMxGetData(src);
  for (i = 0; i < 6; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *time_cont, const char_T *identifier))[8001]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[8001];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(time_cont), &thisId);
  emlrtDestroyArray(&time_cont);
  return y;
}
  static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId, real_T ret[36])
{
  static const int32_T dims[2] = { 6, 6 };

  real_T (*r)[36];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[36])emlrtMxGetData(src);
  for (i = 0; i < 36; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8001]
{
  real_T (*y)[8001];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0,
  const char_T *identifier))[12]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[12];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(x0), &thisId);
  emlrtDestroyArray(&x0);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[96012])
{
  static const int32_T iv[2] = { 0, 0 };

  static const int32_T iv1[2] = { 8001, 12 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, iv1, 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12]
{
  real_T (*y)[12];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *optVec,
  const char_T *identifier))[31]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[31];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(optVec), &thisId);
  emlrtDestroyArray(&optVec);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[31]
{
  real_T (*y)[31];
  y = v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_static,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_static), &thisId, y);
  emlrtDestroyArray(&b_static);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[18] = { "phi_r", "phi_r_d1", "tau_dist",
    "tau_ff", "K_pos_eff", "K_vel_eff", "s_f_ode", "u", "x_init", "n_axis",
    "f_vis_idx", "f_coul_idx", "f_a_idx", "f_b_idx", "f_asym_idx", "m_pay_idx",
    "q_update_threshold", "qd_update_threshold" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 18, fieldNames, 0U, &dims);
  thisId.fIdentifier = "phi_r";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "phi_r")),
                     &thisId, y->phi_r);
  thisId.fIdentifier = "phi_r_d1";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "phi_r_d1")),
                     &thisId, y->phi_r_d1);
  thisId.fIdentifier = "tau_dist";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "tau_dist")),
                     &thisId, y->tau_dist);
  thisId.fIdentifier = "tau_ff";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "tau_ff")),
                     &thisId, y->tau_ff);
  thisId.fIdentifier = "K_pos_eff";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "K_pos_eff")),
                     &thisId, y->K_pos_eff);
  thisId.fIdentifier = "K_vel_eff";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "K_vel_eff")),
                     &thisId, y->K_vel_eff);
  thisId.fIdentifier = "s_f_ode";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6, "s_f_ode")),
                     &thisId, y->s_f_ode);
  thisId.fIdentifier = "u";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7, "u")),
                     &thisId, y->u);
  thisId.fIdentifier = "x_init";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "x_init")),
                     &thisId, y->x_init);
  thisId.fIdentifier = "n_axis";
  y->n_axis = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "n_axis")), &thisId);
  thisId.fIdentifier = "f_vis_idx";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10,
    "f_vis_idx")), &thisId, y->f_vis_idx);
  thisId.fIdentifier = "f_coul_idx";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "f_coul_idx")), &thisId, y->f_coul_idx);
  thisId.fIdentifier = "f_a_idx";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12, "f_a_idx")),
                     &thisId, y->f_a_idx);
  thisId.fIdentifier = "f_b_idx";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13, "f_b_idx")),
                     &thisId, y->f_b_idx);
  thisId.fIdentifier = "f_asym_idx";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14,
    "f_asym_idx")), &thisId, y->f_asym_idx);
  thisId.fIdentifier = "m_pay_idx";
  y->m_pay_idx = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    15, "m_pay_idx")), &thisId);
  thisId.fIdentifier = "q_update_threshold";
  y->q_update_threshold = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 16, "q_update_threshold")), &thisId);
  thisId.fIdentifier = "qd_update_threshold";
  y->qd_update_threshold = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 17, "qd_update_threshold")), &thisId);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[48006])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[12])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dyn, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  q_emlrt_marshallIn(sp, emlrtAlias(dyn), &thisId, y);
  emlrtDestroyArray(&dyn);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[6] = { "M_inverse", "C", "G", "q_update",
    "qd_update", "count_rob_updates" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 6, fieldNames, 0U, &dims);
  thisId.fIdentifier = "M_inverse";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "M_inverse")),
                     &thisId, y->M_inverse);
  thisId.fIdentifier = "C";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "C")),
                     &thisId, y->C);
  thisId.fIdentifier = "G";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "G")),
                     &thisId, y->G);
  thisId.fIdentifier = "q_update";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "q_update")),
                     &thisId, y->q_update);
  thisId.fIdentifier = "qd_update";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "qd_update")),
                     &thisId, y->qd_update);
  thisId.fIdentifier = "count_rob_updates";
  y->count_rob_updates = n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 5, "count_rob_updates")), &thisId);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[36])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8001]
{
  static const int32_T dims[2] = { 1, 8001 };

  real_T (*ret)[8001];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[8001])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12]
{
  static const int32_T dims[1] = { 12 };

  real_T (*ret)[12];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[12])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[31]
{
  static const int32_T dims[1] = { 31 };

  real_T (*ret)[31];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[31])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[48006])
{
  static const int32_T dims[2] = { 6, 8001 };

  real_T (*r)[48006];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[48006])emlrtMxGetData(src);
  for (i = 0; i < 48006; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[1] = { 6 };

  real_T (*r)[6];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[6])emlrtMxGetData(src);
  for (i = 0; i < 6; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[12])
{
  static const int32_T dims[1] = { 12 };

  real_T (*r)[12];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[12])emlrtMxGetData(src);
  for (i = 0; i < 12; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

void runge_kutta_4_api(runge_kutta_4StackData *SD, const mxArray * const prhs[5],
  int32_T nlhs, const mxArray *plhs[2])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  struct1_T dyn;
  real_T (*xSim)[96012];
  real_T (*uSim)[48006];
  real_T (*time_cont)[8001];
  real_T (*optVec)[31];
  real_T (*x0)[12];
  st.tls = emlrtRootTLSGlobal;
  xSim = (real_T (*)[96012])mxMalloc(sizeof(real_T [96012]));
  uSim = (real_T (*)[48006])mxMalloc(sizeof(real_T [48006]));

  /* Marshall function inputs */
  time_cont = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "time_cont");
  x0 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x0");
  optVec = g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "optVec");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "static", &SD->f1.b_static);
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "dyn", &dyn);

  /* Invoke the target function */
  runge_kutta_4(SD, &st, *time_cont, *x0, *optVec, &SD->f1.b_static, &dyn, *xSim,
                *uSim);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*xSim);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*uSim);
  }
}

/* End of code generation (_coder_runge_kutta_4_api.c) */
