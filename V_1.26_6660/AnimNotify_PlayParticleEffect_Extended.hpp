#ifndef UE4SS_SDK_AnimNotify_PlayParticleEffect_Extended_HPP
#define UE4SS_SDK_AnimNotify_PlayParticleEffect_Extended_HPP

class UAnimNotify_PlayParticleEffect_Extended_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;                                                                 // 0x0090 (size: 0x10)
    TEnumAsByte<SimpleLimbs> Limbs;                                                   // 0x00A0 (size: 0x1)
    TEnumAsByte<Side> Side;                                                           // 0x00A1 (size: 0x1)
    bool isThrust;                                                                    // 0x00A2 (size: 0x1)

    void GetAttackPower(class USkeletalMeshComponent* MeshComponent, EAttackPowers& AttackPower);
    bool OverrideBaseNotify();
    void PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0xA3

#endif
