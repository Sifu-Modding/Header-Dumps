#ifndef UE4SS_SDK_ProceduralLanding_AnimBP_HPP
#define UE4SS_SDK_ProceduralLanding_AnimBP_HPP

class UProceduralLanding_AnimBP_C : public USCAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    float LandingAlpha;
    FVector ShakePelvisOffset;
    float ShakePelvisAlpha;
    FName LeftFootSaveName;
    FName RightFootSaveName;

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ProceduralLanding_AnimBP(int32 EntryPoint);
};

#endif
