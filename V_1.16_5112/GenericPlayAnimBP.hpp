#ifndef UE4SS_SDK_GenericPlayAnimBP_HPP
#define UE4SS_SDK_GenericPlayAnimBP_HPP

class UGenericPlayAnimBP_C : public UPlayAnimSubAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName_1;
    FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance;
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim;
    FSCAnimNode_SaveBoneTransformByName SCAnimGraphNode_SaveBoneTransformByName;
    bool __CustomProperty_Mirror_493EA0614E368A123204828DC9F24CA6;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_GenericPlayAnimBP(int32 EntryPoint);
};

#endif
