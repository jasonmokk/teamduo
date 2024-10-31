/*
 * TeamDuo0x2810x29.cpp
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

#include "TeamDuo0x2810x29.h"
#include "rtwtypes.h"
#include "TeamDuo0x2810x29_types.h"
#include "TeamDuo0x2810x29_private.h"
#include <string.h>

/* Block signals (default storage) */
B_TeamDuo0x2810x29_T TeamDuo0x2810x29_B;

/* Block states (default storage) */
DW_TeamDuo0x2810x29_T TeamDuo0x2810x29_DW;

/* Real-time model */
RT_MODEL_TeamDuo0x2810x29_T TeamDuo0x2810x29_M_ = RT_MODEL_TeamDuo0x2810x29_T();
RT_MODEL_TeamDuo0x2810x29_T *const TeamDuo0x2810x29_M = &TeamDuo0x2810x29_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 */
void TeamDuo0x_EnabledSubsystem_Init(B_EnabledSubsystem_TeamDuo0x2_T *localB,
  P_EnabledSubsystem_TeamDuo0x2_T *localP)
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
void TeamDuo0x2810x_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_TeamDuo0x2_T *localB)
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
void TeamDuo0x2810x29_step(void)
{
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_TeamDuo0x2810x29_std_msgs_Float64 tmp;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_TeamDuo0x2810x29_7.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  TeamDuo0x2810x_EnabledSubsystem(b_varargout_1, &tmp,
    &TeamDuo0x2810x29_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_TeamDuo0x2810x29_8.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  TeamDuo0x2810x_EnabledSubsystem(b_varargout_1, &tmp,
    &TeamDuo0x2810x29_B.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  rtb_BusAssignment.Data = (TeamDuo0x2810x29_B.EnabledSubsystem.In1.Data /
    TeamDuo0x2810x29_B.EnabledSubsystem_f.In1.Data - 2.0) * 4.0;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_TeamDuo0x2810x29_6.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void TeamDuo0x2810x29_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&TeamDuo0x2810x29_B)), 0,
                sizeof(B_TeamDuo0x2810x29_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&TeamDuo0x2810x29_DW), 0,
                sizeof(DW_TeamDuo0x2810x29_T));

  {
    char_T b_zeroDelimTopic_0[17];
    char_T b_zeroDelimTopic[11];
    static const char_T b_zeroDelimTopic_1[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    TeamDuo0x2810x29_DW.obj_n.matlabCodegenIsDeleted = false;
    TeamDuo0x2810x29_DW.objisempty_l = true;
    TeamDuo0x2810x29_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_TeamDuo0x2810x29_7.createSubscriber(&b_zeroDelimTopic[0], 1);
    TeamDuo0x2810x29_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    TeamDuo0x2810x29_DW.obj_e.matlabCodegenIsDeleted = false;
    TeamDuo0x2810x29_DW.objisempty = true;
    TeamDuo0x2810x29_DW.obj_e.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_TeamDuo0x2810x29_8.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    TeamDuo0x2810x29_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    TeamDuo0x2810x29_DW.obj.matlabCodegenIsDeleted = false;
    TeamDuo0x2810x29_DW.objisempty_a = true;
    TeamDuo0x2810x29_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Pub_TeamDuo0x2810x29_6.createPublisher(&b_zeroDelimTopic[0], 1);
    TeamDuo0x2810x29_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  TeamDuo0x_EnabledSubsystem_Init(&TeamDuo0x2810x29_B.EnabledSubsystem,
    &TeamDuo0x2810x29_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  TeamDuo0x_EnabledSubsystem_Init(&TeamDuo0x2810x29_B.EnabledSubsystem_f,
    &TeamDuo0x2810x29_P.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void TeamDuo0x2810x29_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!TeamDuo0x2810x29_DW.obj_n.matlabCodegenIsDeleted) {
    TeamDuo0x2810x29_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!TeamDuo0x2810x29_DW.obj_e.matlabCodegenIsDeleted) {
    TeamDuo0x2810x29_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!TeamDuo0x2810x29_DW.obj.matlabCodegenIsDeleted) {
    TeamDuo0x2810x29_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
