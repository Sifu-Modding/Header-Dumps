#ifndef UE4SS_SDK_BP_FallHitRequest_HPP
#define UE4SS_SDK_BP_FallHitRequest_HPP

class UBP_FallHitRequest_C : public UFallHitRequest
{
    FHitBox FallFromPushHitbox;                                                       // 0x0028 (size: 0x298)
    FHitBox DropDownHitbox;                                                           // 0x02C0 (size: 0x298)
    class UCurveFloat* HeightDamageCurve;                                             // 0x0558 (size: 0x8)
    class UCurveFloat* FallDamageFromCollisionImpulse;                                // 0x0560 (size: 0x8)
    float FallMinDamageRatio;                                                         // 0x0568 (size: 0x4)
    float FallMaxDamageRatio;                                                         // 0x056C (size: 0x4)
    float PushedMinDamageRatio;                                                       // 0x0570 (size: 0x4)
    float PushedMaxDamageRatio;                                                       // 0x0574 (size: 0x4)

    void BPE_GetFallHitOnSlope(const class AFightingCharacter* _character, const FHitResult& _hitResult, FHitBox& _outHitbox);
    void ComputeDamageRatio(float Height, float HitHeight, float DeathHeight, float MaxRatio, float MinRatio, float& DamageRatio);
    void BPE_GetFallHitOnPhysicAnimImpact(const class AFightingCharacter* _character, const FHitResult& _hitResult, float _fImpulseSize, FHitBox& _outHitbox);
    void BPE_GetFallHit(const class AFightingCharacter* _character, const FHitResult& _hitResult, EFallHitOrigin _eFallHitOrigin, float _fHeight, FHitBox& _outHitbox);
}; // Size: 0x578

#endif
