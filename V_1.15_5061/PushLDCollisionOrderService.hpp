#ifndef UE4SS_SDK_PushLDCollisionOrderService_HPP
#define UE4SS_SDK_PushLDCollisionOrderService_HPP

class UPushLDCollisionOrderService_C : public UHandleLDCollisionOrderService
{

    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
};

#endif
