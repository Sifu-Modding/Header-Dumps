#ifndef UE4SS_SDK_AnimNotify_PlayParticleEffect_Extended_HPP
#define UE4SS_SDK_AnimNotify_PlayParticleEffect_Extended_HPP

class UAnimNotify_PlayParticleEffect_Extended_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;
    TEnumAsByte<SimpleLimbs> Limbs;
    TEnumAsByte<Side> Side;
    bool isThrust;

    void GetAttackPower(class USkeletalMeshComponent* MeshComponent, EAttackPowers& AttackPower);
    bool OverrideBaseNotify();
    void PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
