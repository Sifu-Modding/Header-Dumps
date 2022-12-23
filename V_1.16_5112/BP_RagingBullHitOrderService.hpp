#ifndef UE4SS_SDK_BP_RagingBullHitOrderService_HPP
#define UE4SS_SDK_BP_RagingBullHitOrderService_HPP

class UBP_RagingBullHitOrderService_C : public UHitOrderService
{

    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation);
};

#endif
