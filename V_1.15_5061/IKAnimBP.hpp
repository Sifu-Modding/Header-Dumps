#ifndef UE4SS_SDK_IKAnimBP_HPP
#define UE4SS_SDK_IKAnimBP_HPP

class UIKAnimBP_C : public UIKSubAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_11;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15;
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_10;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_9;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_8;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12;
    FAnimNode_Root AnimGraphNode_Root;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_7;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_6;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_5;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_4;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2;
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName_1;
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_3;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_2;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK_1;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;
    FSCAnimNode_AimIK SCAnimGraphNode_AimIK;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_7;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_6;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_5;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_4;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_3;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_Fabrik AnimGraphNode_Fabrik_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Fabrik AnimGraphNode_Fabrik;
    FIKPropertyEvaluation LeftArmInfos;
    FIKPropertyEvaluation RightArmInfos;
    FIKPropertyEvaluation RightArmInfos_Alt;
    FIKPropertyEvaluation LeftArmInfos_Alt;
    bool mirror;
    FIKPropertyEvaluation RightArmFromPelvis;
    FIKPropertyEvaluation RightArmFromPelvis_Alt;
    FIKPropertyEvaluation RightLeg;
    FIKPropertyEvaluation LeftArmAimIK;
    FIKPropertyEvaluation RightArmAimIK;
    FIKPropertyEvaluation LeftLegAimIK;
    FIKPropertyEvaluation RightLegAimIK;
    FIKPropertyEvaluation LeftArmAimIK_Alt;
    FIKPropertyEvaluation RightArmAimIK_Alt;
    FIKPropertyEvaluation LeftLegAimIK_Alt;
    FIKPropertyEvaluation RightLegAimIK_Alt;
    FIKPropertyEvaluation RightLeg_Alt;
    FIKPropertyEvaluation LeftLeg;
    FIKPropertyEvaluation LeftLeg_Alt;
    FPropertyFloorBoneRepartition PelvisRepartition;
    FPropertyFloorBoneRepartition Spine1Repartition;
    FPropertyFloorBoneRepartition Spine2Repartition;
    FPropertyFloorBoneRepartition Spine3Repartition;
    FPropertyFloorBoneRepartition RootRepartition;
    FIKPropertyEvaluation LeftArmNoSpine;
    FIKPropertyEvaluation RightArmNoSpine;
    FIKPropertyEvaluation WeaponRightArm;
    FIKPropertyEvaluation WeaponLeftArm;

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BindLimb(FIKPropertyEvaluation& _fProperty, uint8 _uiEnum, FIKPropertyEvaluation& _fProperty2, uint8 _uiEnum2, FIKPropertyEvaluation& _fProperty3, uint8 _uiEnum3, FIKPropertyEvaluation& _fProperty4, uint8 _uiEnum4);
    void BlueprintInitializeAnimation();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_IKAnimBP_AnimGraphNode_TwoBoneIK_EE900F5E4279364E8D5225BCC11138FE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_IKAnimBP_AnimGraphNode_TwoBoneIK_BB446AE94E932D917D777A84E378874C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_IKAnimBP_AnimGraphNode_TwoBoneIK_318A32014E1645B891434E84BB01A8B1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_IKAnimBP_AnimGraphNode_TwoBoneIK_5A3C04D6472D0715FE7FFC9AF485152E();
    void ExecuteUbergraph_IKAnimBP(int32 EntryPoint);
};

#endif