#ifndef UE4SS_SDK_AttackEnvHitWallSplashOrderService_HPP
#define UE4SS_SDK_AttackEnvHitWallSplashOrderService_HPP

class UAttackEnvHitWallSplashOrderService_C : public UHitOrderService
{

    void BPE_GetHitBoxWithLocation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation, FVector& _location);
};

#endif
