/*
 * teamduo.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "teamduo".
 *
 * Model version              : 2.1
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Wed Dec 11 13:40:08 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef teamduo_h_
#define teamduo_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "teamduo_types.h"
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
struct B_EnabledSubsystem_teamduo_T {
  SL_Bus_teamduo_std_msgs_Float64 In1; /* '<S7>/In1' */
};

/* Block signals (default storage) */
struct B_teamduo_T {
  B_EnabledSubsystem_teamduo_T EnabledSubsystem_h;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_teamduo_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_teamduo_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_teamduo_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_d;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_e;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_teamduo_T_ {
  SL_Bus_teamduo_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                           * Referenced by: '<S7>/Out1'
                                           */
};

/* Parameters (default storage) */
struct P_teamduo_T_ {
  SL_Bus_teamduo_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                  * Referenced by: '<S1>/Constant'
                                                  */
  SL_Bus_teamduo_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                    * Referenced by: '<S4>/Constant'
                                                    */
  SL_Bus_teamduo_std_msgs_Float64 Constant_Value_d;/* Computed Parameter: Constant_Value_d
                                                    * Referenced by: '<S5>/Constant'
                                                    */
  SL_Bus_teamduo_std_msgs_Float64 Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                    * Referenced by: '<S6>/Constant'
                                                    */
  P_EnabledSubsystem_teamduo_T EnabledSubsystem_h;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_teamduo_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_teamduo_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_teamduo_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_teamduo_T teamduo_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_teamduo_T teamduo_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_teamduo_T teamduo_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void teamduo_initialize(void);
  extern void teamduo_step(void);
  extern void teamduo_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_teamduo_T *const teamduo_M;

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
 * '<Root>' : 'teamduo'
 * '<S1>'   : 'teamduo/Blank Message'
 * '<S2>'   : 'teamduo/MATLAB Function1'
 * '<S3>'   : 'teamduo/Publish'
 * '<S4>'   : 'teamduo/Subscribe'
 * '<S5>'   : 'teamduo/Subscribe1'
 * '<S6>'   : 'teamduo/Subscribe2'
 * '<S7>'   : 'teamduo/Subscribe/Enabled Subsystem'
 * '<S8>'   : 'teamduo/Subscribe1/Enabled Subsystem'
 * '<S9>'   : 'teamduo/Subscribe2/Enabled Subsystem'
 */
#endif                                 /* teamduo_h_ */
