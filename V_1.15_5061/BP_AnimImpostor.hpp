#ifndef UE4SS_SDK_BP_AnimImpostor_HPP
#define UE4SS_SDK_BP_AnimImpostor_HPP

class UBP_AnimImpostor_C : public USCCharacterImpostorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_BP_AnimImpostor(int32 EntryPoint);
};

#endif
