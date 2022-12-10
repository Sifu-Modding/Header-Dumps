#ifndef UE4SS_SDK_MovableRedirectToTargetService_HPP
#define UE4SS_SDK_MovableRedirectToTargetService_HPP

class UMovableRedirectToTargetService_C : public URedirectToTargetOrderService
{

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

#endif
