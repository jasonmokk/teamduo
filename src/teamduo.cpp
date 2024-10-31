/*
 * teamduo.cpp
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

#include "teamduo.h"
#include "rtwtypes.h"
#include "teamduo_types.h"
#include "teamduo_private.h"
#include <string.h>

/* Block signals (default storage) */
B_teamduo_T teamduo_B;

/* Block states (default storage) */
DW_teamduo_T teamduo_DW;

/* Real-time model */
RT_MODEL_teamduo_T teamduo_M_ = RT_MODEL_teamduo_T();
RT_MODEL_teamduo_T *const teamduo_M = &teamduo_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 */
void teamduo_EnabledSubsystem_Init(B_EnabledSubsystem_teamduo_T *localB,
  P_EnabledSubsystem_teamduo_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S6>/In1' incorporates:
   *  Outport: '<S6>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 */
void teamduo_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_teamduo_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_teamduo_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S6>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void teamduo_step(void)
{
  SL_Bus_teamduo_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_teamduo_std_msgs_Float64 tmp;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_teamduo_7.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  teamduo_EnabledSubsystem(b_varargout_1, &tmp, &teamduo_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_teamduo_8.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  teamduo_EnabledSubsystem(b_varargout_1, &tmp, &teamduo_B.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  rtb_BusAssignment.Data = (teamduo_B.EnabledSubsystem.In1.Data /
    teamduo_B.EnabledSubsystem_f.In1.Data - 2.0) * 4.0;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_teamduo_6.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void teamduo_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&teamduo_B)), 0,
                sizeof(B_teamduo_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&teamduo_DW), 0,
                sizeof(DW_teamduo_T));

  {
    char_T b_zeroDelimTopic_0[17];
    char_T b_zeroDelimTopic[11];
    static const char_T b_zeroDelimTopic_1[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    teamduo_DW.obj_n.matlabCodegenIsDeleted = false;
    teamduo_DW.objisempty_l = true;
    teamduo_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_teamduo_7.createSubscriber(&b_zeroDelimTopic[0], 1);
    teamduo_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    teamduo_DW.obj_e.matlabCodegenIsDeleted = false;
    teamduo_DW.objisempty = true;
    teamduo_DW.obj_e.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_teamduo_8.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    teamduo_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    teamduo_DW.obj.matlabCodegenIsDeleted = false;
    teamduo_DW.objisempty_a = true;
    teamduo_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Pub_teamduo_6.createPublisher(&b_zeroDelimTopic[0], 1);
    teamduo_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  teamduo_EnabledSubsystem_Init(&teamduo_B.EnabledSubsystem,
    &teamduo_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  teamduo_EnabledSubsystem_Init(&teamduo_B.EnabledSubsystem_f,
    &teamduo_P.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void teamduo_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!teamduo_DW.obj_n.matlabCodegenIsDeleted) {
    teamduo_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!teamduo_DW.obj_e.matlabCodegenIsDeleted) {
    teamduo_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!teamduo_DW.obj.matlabCodegenIsDeleted) {
    teamduo_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
