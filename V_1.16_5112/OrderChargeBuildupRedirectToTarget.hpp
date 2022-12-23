#ifndef UE4SS_SDK_OrderChargeBuildupRedirectToTarget_HPP
#define UE4SS_SDK_OrderChargeBuildupRedirectToTarget_HPP

class UOrderChargeBuildupRedirectToTarget_C : public URedirectToTargetOrderService
{

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

#endif
