#ifndef UE4SS_SDK_OrderHittedGeneric_HittedOrderService_HPP
#define UE4SS_SDK_OrderHittedGeneric_HittedOrderService_HPP

class UOrderHittedGeneric_HittedOrderService_C : public UHittedOrderService
{

    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    void BPE_GetHitRequest(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult);
}; // Size: 0x4B8

#endif
