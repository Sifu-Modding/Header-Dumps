#ifndef UE4SS_SDK_PushFromGrabRedirectToTarget_HPP
#define UE4SS_SDK_PushFromGrabRedirectToTarget_HPP

class UPushFromGrabRedirectToTarget_C : public URedirectToTargetOrderService
{

    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance);
};

#endif
