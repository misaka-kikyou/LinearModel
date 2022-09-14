/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_matlab_linear_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 14-Sep-2022 09:55:11
 */

#ifndef _CODER_MATLAB_LINEAR_API_H
#define _CODER_MATLAB_LINEAR_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T matlab_linear(real_T input[4]);

void matlab_linear_api(const mxArray *prhs, const mxArray **plhs);

void matlab_linear_atexit(void);

void matlab_linear_initialize(void);

void matlab_linear_terminate(void);

void matlab_linear_xil_shutdown(void);

void matlab_linear_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_matlab_linear_api.h
 *
 * [EOF]
 */
