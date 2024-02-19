#ifndef UE4SS_SDK_HittedLDCollisionOrderService_HPP
#define UE4SS_SDK_HittedLDCollisionOrderService_HPP

class UHittedLDCollisionOrderService_C : public UHandleLDCollisionOrderService
{

    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
}; // Size: 0x900

#endif
