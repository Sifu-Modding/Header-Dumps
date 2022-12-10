#ifndef UE4SS_SDK_BP_UI_Pendant_Animation_HPP
#define UE4SS_SDK_BP_UI_Pendant_Animation_HPP

class UBP_UI_Pendant_Animation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend_1;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend;
    float Pendulum_BlendAnim;
    float Vibrate_BlendAnim;
    float Explode_BlendAnim;
    int32 VibrateChargeID_BlendAnim;
    int32 ExplodeChargeID_BlendAnim;
    float Coin1Break_BlendAnim;
    float Coin2Break_BlendAnim;
    float Coin3Break_BlendAnim;
    float Coin4Break_BlendAnim;
    float Coin5Break_BlendAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_UI_Pendant_Animation_AnimGraphNode_BlendListByInt_AD7064C645BF01BFBFAABA88F9A40412();
    void ExecuteUbergraph_BP_UI_Pendant_Animation(int32 EntryPoint);
};

#endif
