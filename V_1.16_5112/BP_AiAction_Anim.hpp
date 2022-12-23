#ifndef UE4SS_SDK_BP_AiAction_Anim_HPP
#define UE4SS_SDK_BP_AiAction_Anim_HPP

class UBP_AiAction_Anim_C : public UWGAiAction
{
    FAnimContainer Animation;
    bool bIsMovingOrder;

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
};

#endif
