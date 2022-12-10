#ifndef UE4SS_SDK_PushedFromGrabbedLDCollisionOrderService_HPP
#define UE4SS_SDK_PushedFromGrabbedLDCollisionOrderService_HPP

class UPushedFromGrabbedLDCollisionOrderService_C : public UPushLDCollisionOrderService_C
{

    void BPE_GetWallHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox);
};

#endif
