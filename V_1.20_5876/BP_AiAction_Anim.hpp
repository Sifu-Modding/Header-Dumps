#ifndef UE4SS_SDK_BP_AiAction_Anim_HPP
#define UE4SS_SDK_BP_AiAction_Anim_HPP

class UBP_AiAction_Anim_C : public UWGAiAction
{
    FAnimContainer Animation;                                                         // 0x0150 (size: 0x18)
    bool bIsMovingOrder;                                                              // 0x0168 (size: 0x1)

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
}; // Size: 0x169

#endif
