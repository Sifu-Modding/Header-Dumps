#ifndef UE4SS_SDK_AnimNotify_PlayParticleEffect_H3BossRoom_HPP
#define UE4SS_SDK_AnimNotify_PlayParticleEffect_H3BossRoom_HPP

class UAnimNotify_PlayParticleEffect_H3BossRoom_C : public UAnimNotify
{
    TEnumAsByte<ShiroizuSplahesEnum> SplashEnum;
    FName BoneName;
    FVector PositionOffset;
    FRotator RotationOffset;
    FVector Scale;
    float ImpactStrength;
    float ImpactSize;

    void Spawn Emitter On Ground(class UMeshComponent* MeshComp, FVector PositionOnGround);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
