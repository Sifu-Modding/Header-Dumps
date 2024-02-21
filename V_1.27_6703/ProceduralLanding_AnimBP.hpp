#ifndef UE4SS_SDK_ProceduralLanding_AnimBP_HPP
#define UE4SS_SDK_ProceduralLanding_AnimBP_HPP

class UProceduralLanding_AnimBP_C : public USCAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0630 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0638 (size: 0x30)
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput;                                 // 0x0668 (size: 0x118)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0780 (size: 0x20)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1;                                    // 0x07A0 (size: 0x1E0)
    FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK;                                      // 0x0980 (size: 0x1E0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0B60 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0C68 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0D70 (size: 0x108)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0E78 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0E98 (size: 0x108)
    float LandingAlpha;                                                               // 0x0FA0 (size: 0x4)
    FVector ShakePelvisOffset;                                                        // 0x0FA4 (size: 0xC)
    float ShakePelvisAlpha;                                                           // 0x0FB0 (size: 0x4)
    FName LeftFootSaveName;                                                           // 0x0FB4 (size: 0x8)
    FName RightFootSaveName;                                                          // 0x0FBC (size: 0x8)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ProceduralLanding_AnimBP(int32 EntryPoint);
}; // Size: 0xFC4

#endif
