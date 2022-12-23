#ifndef UE4SS_SDK_DodgeRedirectToOrientation_HPP
#define UE4SS_SDK_DodgeRedirectToOrientation_HPP

class UDodgeRedirectToOrientation_C : public URedirectToTargetOrderService
{

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

#endif
