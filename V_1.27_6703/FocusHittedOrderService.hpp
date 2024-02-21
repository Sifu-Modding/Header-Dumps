#ifndef UE4SS_SDK_FocusHittedOrderService_HPP
#define UE4SS_SDK_FocusHittedOrderService_HPP

class UFocusHittedOrderService_C : public UHittedOrderService
{
    int32 HitBoxIndex;                                                                // 0x04B8 (size: 0x4)

    FHittedAnimContainer BPE_GetLethalHittedAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    void GetOverridingHitBox(int32 Index, FBPOrderServiceInstance Instance, FOverridingHitBox& OverridingHitBox);
    FAnimContainer BPE_GetFightingStateRecoveryAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    class UAttackPropertiesResistanceDB* BPE_GetSpecialResistanceDB(const FBPOrderServiceInstance& _orderServiceInstance);
    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance);
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation);
}; // Size: 0x4BC

#endif
