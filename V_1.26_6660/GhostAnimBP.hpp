#ifndef UE4SS_SDK_GhostAnimBP_HPP
#define UE4SS_SDK_GhostAnimBP_HPP

class UGhostAnimBP_C : public UGhostAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D0 (size: 0x28)
    FSCAnimNode_PlayAnim SCAnimGraphNode_PlayAnim;                                    // 0x03F8 (size: 0xB8)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04E0 (size: 0x90)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0570 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05A0 (size: 0xB0)
    bool StartAnim;                                                                   // 0x0650 (size: 0x1)
    int32 FrameCount;                                                                 // 0x0654 (size: 0x4)
    float PlayRate;                                                                   // 0x0658 (size: 0x4)
    float CursorBase;                                                                 // 0x065C (size: 0x4)
    float Dt;                                                                         // 0x0660 (size: 0x4)
    float Ghost Play Rate;                                                            // 0x0664 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GhostAnimBP_SCAnimGraphNode_PlayAnim_13BCCEAC481402FC90BDF5A2CF44CC8F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_GhostAnimBP(int32 EntryPoint);
}; // Size: 0x668

#endif
