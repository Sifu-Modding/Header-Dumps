#ifndef UE4SS_SDK_BP_GameFlowController_HPP
#define UE4SS_SDK_BP_GameFlowController_HPP

class UBP_GameFlowController_C : public UWGGameFlowController
{

    int32 BPE_GetHideoutIndexFromTag(FName _hideoutTag);
    FGameplayTag BPE_GetMapOptionTag(EWGGameFlowMapOption _eMapOption);
};

#endif
