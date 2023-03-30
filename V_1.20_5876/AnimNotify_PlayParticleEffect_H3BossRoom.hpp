#ifndef UE4SS_SDK_AnimNotify_PlayParticleEffect_H3BossRoom_HPP
#define UE4SS_SDK_AnimNotify_PlayParticleEffect_H3BossRoom_HPP

class UAnimNotify_PlayParticleEffect_H3BossRoom_C : public UAnimNotify
{
    TEnumAsByte<ShiroizuSplahesEnum> SplashEnum;                                      // 0x0038 (size: 0x1)
    FName BoneName;                                                                   // 0x003C (size: 0x8)
    FVector PositionOffset;                                                           // 0x0044 (size: 0xC)
    FRotator RotationOffset;                                                          // 0x0050 (size: 0xC)
    FVector Scale;                                                                    // 0x005C (size: 0xC)
    float ImpactStrength;                                                             // 0x0068 (size: 0x4)
    float ImpactSize;                                                                 // 0x006C (size: 0x4)

    void ParticleSystemSelector(class UMeshComponent* MeshOwner, class UParticleSystem* Base, class UParticleSystem* ArenaRedRoom, class UParticleSystem*& ParticleSystemSelected);
    void Spawn Emitter On Ground(class UMeshComponent* MeshComp, FVector PositionOnGround);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x70

#endif
