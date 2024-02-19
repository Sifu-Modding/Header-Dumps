#ifndef UE4SS_SDK_GenericPlayAnimBP_HPP
#define UE4SS_SDK_GenericPlayAnimBP_HPP

class UGenericPlayAnimBP_C : public UPlayAnimSubAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0680 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0688 (size: 0x30)
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim_1;                                  // 0x06B8 (size: 0xB8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0770 (size: 0xA0)
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName_1;    // 0x0810 (size: 0x58)
    FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance;                              // 0x0868 (size: 0xA0)
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim;                                    // 0x0908 (size: 0xB8)
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName;      // 0x09C0 (size: 0x58)
    bool __CustomProperty_Mirror_493EA0614E368A123204828DC9F24CA6;                    // 0x0A18 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_GenericPlayAnimBP(int32 EntryPoint);
}; // Size: 0xA19

#endif
