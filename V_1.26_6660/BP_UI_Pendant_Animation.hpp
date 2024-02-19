#ifndef UE4SS_SDK_BP_UI_Pendant_Animation_HPP
#define UE4SS_SDK_BP_UI_Pendant_Animation_HPP

class UBP_UI_Pendant_Animation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0368 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x03F8 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0488 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0518 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x05A8 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0638 (size: 0x90)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x06C8 (size: 0xA0)
    FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend_1;                            // 0x0768 (size: 0x50)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x07B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x07E8 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0878 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0908 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0998 (size: 0x90)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0A28 (size: 0x90)
    FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend;                              // 0x0AB8 (size: 0x50)
    float Pendulum_BlendAnim;                                                         // 0x0B08 (size: 0x4)
    float Vibrate_BlendAnim;                                                          // 0x0B0C (size: 0x4)
    float Explode_BlendAnim;                                                          // 0x0B10 (size: 0x4)
    int32 VibrateChargeID_BlendAnim;                                                  // 0x0B14 (size: 0x4)
    int32 ExplodeChargeID_BlendAnim;                                                  // 0x0B18 (size: 0x4)
    float Coin1Break_BlendAnim;                                                       // 0x0B1C (size: 0x4)
    float Coin2Break_BlendAnim;                                                       // 0x0B20 (size: 0x4)
    float Coin3Break_BlendAnim;                                                       // 0x0B24 (size: 0x4)
    float Coin4Break_BlendAnim;                                                       // 0x0B28 (size: 0x4)
    float Coin5Break_BlendAnim;                                                       // 0x0B2C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_UI_Pendant_Animation_AnimGraphNode_BlendListByInt_AD7064C645BF01BFBFAABA88F9A40412();
    void ExecuteUbergraph_BP_UI_Pendant_Animation(int32 EntryPoint);
}; // Size: 0xB30

#endif
