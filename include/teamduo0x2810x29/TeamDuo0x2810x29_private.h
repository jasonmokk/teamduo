/*
 * TeamDuo0x2810x29_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TeamDuo0x2810x29".
 *
 * Model version              : 1.4
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Wed Oct 30 21:09:00 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TeamDuo0x2810x29_private_h_
#define TeamDuo0x2810x29_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "TeamDuo0x2810x29.h"
#include "TeamDuo0x2810x29_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void TeamDuo0x_EnabledSubsystem_Init(B_EnabledSubsystem_TeamDuo0x2_T
  *localB, P_EnabledSubsystem_TeamDuo0x2_T *localP);
extern void TeamDuo0x2810x_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_TeamDuo0x2_T *localB);

#endif                                 /* TeamDuo0x2810x29_private_h_ */
