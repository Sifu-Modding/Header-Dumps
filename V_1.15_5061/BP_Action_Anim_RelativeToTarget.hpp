#ifndef UE4SS_SDK_BP_Action_Anim_RelativeToTarget_HPP
#define UE4SS_SDK_BP_Action_Anim_RelativeToTarget_HPP

class UBP_Action_Anim_RelativeToTarget_C : public UBP_AiActionBase_C
{
    TMap<class EQuadrantTypes, class FAnimContainer> Roll Animations (Quadrant to Target);

    void BPE_OnCreatedOrderParams(FName _paramsName, class UOrderParams* _orderParams);
};

#endif
