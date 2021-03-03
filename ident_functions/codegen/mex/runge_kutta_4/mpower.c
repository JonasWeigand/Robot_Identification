/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mpower.h"
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "runge_kutta_4.h"
#include "warning.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo mi_emlrtRSI = { 49, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 78, /* lineNo */
  "matrix_to_scalar_power",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 13, /* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 75, /* lineNo */
  "matrix_to_small_integer_power",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 173,/* lineNo */
  "invNxN",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 21, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 42, /* lineNo */
  "checkcond",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 46, /* lineNo */
  "checkcond",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRSInfo ij_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void mpower(const emlrtStack *sp, const real_T a[36], real_T c[36])
{
  real_T x[36];
  int32_T n;
  int32_T j;
  int8_T ipiv[6];
  int32_T b;
  int32_T jj;
  int32_T jp1j;
  int32_T k;
  int8_T p[6];
  int32_T iy;
  int32_T ix;
  real_T smax;
  int32_T jA;
  real_T s;
  real_T n1x;
  boolean_T exitg1;
  real_T n1xinv;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  const mxArray *m1;
  char_T str[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  m_st.prev = &l_st;
  m_st.tls = l_st.tls;
  b_st.site = &ni_emlrtRSI;
  c_st.site = &oi_emlrtRSI;
  d_st.site = &pi_emlrtRSI;
  e_st.site = &qi_emlrtRSI;
  memset(&c[0], 0, 36U * sizeof(real_T));
  f_st.site = &si_emlrtRSI;
  memcpy(&x[0], &a[0], 36U * sizeof(real_T));
  g_st.site = &ti_emlrtRSI;
  for (n = 0; n < 6; n++) {
    ipiv[n] = (int8_T)(n + 1);
  }

  for (j = 0; j < 5; j++) {
    b = j * 7;
    jj = j * 7;
    jp1j = b + 2;
    n = 6 - j;
    iy = 0;
    ix = b;
    smax = muDoubleScalarAbs(x[jj]);
    for (k = 2; k <= n; k++) {
      ix++;
      s = muDoubleScalarAbs(x[ix]);
      if (s > smax) {
        iy = k - 1;
        smax = s;
      }
    }

    if (x[jj + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = (int8_T)(iy + 1);
        ix = j;
        for (k = 0; k < 6; k++) {
          smax = x[ix];
          x[ix] = x[iy];
          x[iy] = smax;
          ix += 6;
          iy += 6;
        }
      }

      jA = (jj - j) + 6;
      h_st.site = &ui_emlrtRSI;
      for (ix = jp1j; ix <= jA; ix++) {
        x[ix - 1] /= x[jj];
      }
    }

    n = 4 - j;
    iy = b + 6;
    h_st.site = &vi_emlrtRSI;
    i_st.site = &xi_emlrtRSI;
    j_st.site = &yi_emlrtRSI;
    k_st.site = &aj_emlrtRSI;
    jA = jj + 8;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = x[iy];
      if (x[iy] != 0.0) {
        ix = jj + 1;
        b = (jA - j) + 4;
        l_st.site = &bj_emlrtRSI;
        if ((jA <= b) && (b > 2147483646)) {
          m_st.site = &wi_emlrtRSI;
          check_forloop_overflow_error(&m_st);
        }

        for (k = jA; k <= b; k++) {
          x[k - 1] += x[ix] * -smax;
          ix++;
        }
      }

      iy += 6;
      jA += 6;
    }
  }

  for (n = 0; n < 6; n++) {
    p[n] = (int8_T)(n + 1);
  }

  for (k = 0; k < 5; k++) {
    if (ipiv[k] > k + 1) {
      jA = ipiv[k] - 1;
      iy = p[jA];
      p[jA] = p[k];
      p[k] = (int8_T)iy;
    }
  }

  for (k = 0; k < 6; k++) {
    jp1j = 6 * (p[k] - 1);
    c[k + jp1j] = 1.0;
    for (j = k + 1; j < 7; j++) {
      n = (j + jp1j) - 1;
      if (c[n] != 0.0) {
        jA = j + 1;
        for (ix = jA; ix < 7; ix++) {
          iy = (ix + jp1j) - 1;
          c[iy] -= c[n] * x[(ix + 6 * (j - 1)) - 1];
        }
      }
    }
  }

  for (j = 0; j < 6; j++) {
    jA = 6 * j;
    for (k = 5; k >= 0; k--) {
      iy = 6 * k;
      n = k + jA;
      if (c[n] != 0.0) {
        c[n] /= x[k + iy];
        for (ix = 0; ix < k; ix++) {
          jp1j = ix + jA;
          c[jp1j] -= c[n] * x[ix + iy];
        }
      }
    }
  }

  e_st.site = &ri_emlrtRSI;
  n1x = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 6)) {
    s = 0.0;
    for (ix = 0; ix < 6; ix++) {
      s += muDoubleScalarAbs(a[ix + 6 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      n1x = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1x) {
        n1x = s;
      }

      j++;
    }
  }

  n1xinv = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 6)) {
    s = 0.0;
    for (ix = 0; ix < 6; ix++) {
      s += muDoubleScalarAbs(c[ix + 6 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      n1xinv = rtNaN;
      exitg1 = true;
    } else {
      if (s > n1xinv) {
        n1xinv = s;
      }

      j++;
    }
  }

  smax = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (smax == 0.0)) {
    f_st.site = &cj_emlrtRSI;
    warning(&f_st);
  } else {
    if (muDoubleScalarIsNaN(smax) || (smax < 2.2204460492503131E-16)) {
      f_st.site = &dj_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&f_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m1 = emlrtCreateDoubleScalar(smax);
      emlrtAssign(&b_y, m1);
      g_st.site = &ij_emlrtRSI;
      emlrt_marshallIn(&g_st, b_sprintf(&g_st, y, b_y, &c_emlrtMCI),
                       "<output of sprintf>", str);
      f_st.site = &dj_emlrtRSI;
      b_warning(&f_st, str);
    }
  }
}

/* End of code generation (mpower.c) */
