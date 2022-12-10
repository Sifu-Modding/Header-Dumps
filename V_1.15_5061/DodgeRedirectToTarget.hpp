#ifndef UE4SS_SDK_DodgeRedirectToTarget_HPP
#define UE4SS_SDK_DodgeRedirectToTarget_HPP

class UDodgeRedirectToTarget_C : public URedirectToTargetOrderService
{

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

#endif
