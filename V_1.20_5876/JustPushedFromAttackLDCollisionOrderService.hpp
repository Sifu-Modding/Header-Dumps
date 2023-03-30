#ifndef UE4SS_SDK_JustPushedFromAttackLDCollisionOrderService_HPP
#define UE4SS_SDK_JustPushedFromAttackLDCollisionOrderService_HPP

class UJustPushedFromAttackLDCollisionOrderService_C : public UPushedFromGrabbedLDCollisionOrderService_C
{

    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
}; // Size: 0x900

#endif
