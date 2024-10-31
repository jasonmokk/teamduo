/*
 * teamduo_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "teamduo".
 *
 * Model version              : 2.0
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Wed Oct 30 21:46:31 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef teamduo_private_h_
#define teamduo_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "teamduo.h"
#include "teamduo_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void teamduo_EnabledSubsystem_Init(B_EnabledSubsystem_teamduo_T *localB,
  P_EnabledSubsystem_teamduo_T *localP);
extern void teamduo_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_teamduo_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_teamduo_T *localB);

#endif                                 /* teamduo_private_h_ */
