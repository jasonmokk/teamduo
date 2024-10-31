/*
 * TeamDuo0x2810x29.h
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

#ifndef TeamDuo0x2810x29_h_
#define TeamDuo0x2810x29_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "TeamDuo0x2810x29_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_TeamDuo0x2_T {
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 In1;/* '<S6>/In1' */
};

/* Block signals (default storage) */
struct B_TeamDuo0x2810x29_T {
  B_EnabledSubsystem_TeamDuo0x2_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_TeamDuo0x2_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_TeamDuo0x2810x29_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_e;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S5>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_TeamDuo0x2_T_ {
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                    * Referenced by: '<S6>/Out1'
                                                    */
};

/* Parameters (default storage) */
struct P_TeamDuo0x2810x29_T_ {
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                           * Referenced by: '<S1>/Constant'
                                                           */
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                             * Referenced by: '<S4>/Constant'
                                                             */
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 Constant_Value_d;/* Computed Parameter: Constant_Value_d
                                                             * Referenced by: '<S5>/Constant'
                                                             */
  P_EnabledSubsystem_TeamDuo0x2_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_TeamDuo0x2_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_TeamDuo0x2810x29_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_TeamDuo0x2810x29_T TeamDuo0x2810x29_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_TeamDuo0x2810x29_T TeamDuo0x2810x29_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_TeamDuo0x2810x29_T TeamDuo0x2810x29_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void TeamDuo0x2810x29_initialize(void);
  extern void TeamDuo0x2810x29_step(void);
  extern void TeamDuo0x2810x29_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_TeamDuo0x2810x29_T *const TeamDuo0x2810x29_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TeamDuo0x2810x29'
 * '<S1>'   : 'TeamDuo0x2810x29/Blank Message'
 * '<S2>'   : 'TeamDuo0x2810x29/MATLAB Function1'
 * '<S3>'   : 'TeamDuo0x2810x29/Publish'
 * '<S4>'   : 'TeamDuo0x2810x29/Subscribe'
 * '<S5>'   : 'TeamDuo0x2810x29/Subscribe1'
 * '<S6>'   : 'TeamDuo0x2810x29/Subscribe/Enabled Subsystem'
 * '<S7>'   : 'TeamDuo0x2810x29/Subscribe1/Enabled Subsystem'
 */
#endif                                 /* TeamDuo0x2810x29_h_ */
