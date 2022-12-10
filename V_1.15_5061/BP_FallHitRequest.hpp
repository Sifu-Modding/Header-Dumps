#ifndef UE4SS_SDK_BP_FallHitRequest_HPP
#define UE4SS_SDK_BP_FallHitRequest_HPP

class UBP_FallHitRequest_C : public UFallHitRequest
{
    FHitBox FallFromPushHitbox;
    FHitBox DropDownHitbox;
    class UCurveFloat* HeightDamageCurve;
    class UCurveFloat* FallDamageFromCollisionImpulse;
    float FallMinDamageRatio;
    float FallMaxDamageRatio;
    float PushedMinDamageRatio;
    float PushedMaxDamageRatio;

    void BPE_GetFallHitOnSlope(const class AFightingCharacter* _character, const FHitResult& _hitResult, FHitBox& _outHitbox);
    void ComputeDamageRatio(float Height, float HitHeight, float DeathHeight, float MaxRatio, float MinRatio, float& DamageRatio);
    void BPE_GetFallHitOnPhysicAnimImpact(const class AFightingCharacter* _character, const FHitResult& _hitResult, float _fImpulseSize, FHitBox& _outHitbox);
    void BPE_GetFallHit(const class AFightingCharacter* _character, const FHitResult& _hitResult, EFallHitOrigin _eFallHitOrigin, float _fHeight, FHitBox& _outHitbox);
};

#endif
