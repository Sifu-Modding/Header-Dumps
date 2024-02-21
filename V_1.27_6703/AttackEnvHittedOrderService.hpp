#ifndef UE4SS_SDK_AttackEnvHittedOrderService_HPP
#define UE4SS_SDK_AttackEnvHittedOrderService_HPP

class UAttackEnvHittedOrderService_C : public UHittedOrderService
{

    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation);
}; // Size: 0x4B8

#endif
