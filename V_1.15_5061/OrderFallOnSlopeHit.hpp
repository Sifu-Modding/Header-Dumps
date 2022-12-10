#ifndef UE4SS_SDK_OrderFallOnSlopeHit_HPP
#define UE4SS_SDK_OrderFallOnSlopeHit_HPP

class UOrderFallOnSlopeHit_C : public UHitOrderService
{

    void BPE_GetIgnoredActors(const FBPOrderServiceInstance& _orderServiceInstance, TArray<class AActor*>& _actors);
};

#endif
