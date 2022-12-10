#ifndef UE4SS_SDK_GhostAnimBP_HPP
#define UE4SS_SDK_GhostAnimBP_HPP

class UGhostAnimBP_C : public UGhostAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool StartAnim;
    int32 FrameCount;
    float PlayRate;
    float CursorBase;
    float Dt;
    float Ghost Play Rate;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GhostAnimBP_SCAnimGraphNode_PlayAnim_13BCCEAC481402FC90BDF5A2CF44CC8F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_GhostAnimBP(int32 EntryPoint);
};

#endif
