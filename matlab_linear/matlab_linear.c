/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: matlab_linear.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 14-Sep-2022 09:55:11
 */

/* Include Files */
#include "matlab_linear.h"

/* Function Definitions */
/*
 * Arguments    : const double input[4]
 * Return Type  : double
 */
double matlab_linear(const double input[4])
{
  static const double beta[5] = {-30.333178997055814, 0.600173824821655,
                                 0.13017573816880809, -6.8624744395466,
                                 -3.8738515371233184};
  double dv[5];
  double label;
  int i;
  dv[0] = 1.0;
  dv[1] = input[0];
  dv[2] = input[1];
  dv[3] = input[2];
  dv[4] = input[3];
  label = 0.0;
  for (i = 0; i < 5; i++) {
    label += dv[i] * beta[i];
  }
  return label;
}

/*
 * File trailer for matlab_linear.c
 *
 * [EOF]
 */
