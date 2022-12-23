#ifndef UE4SS_SDK_AnimNotify_PlayFX_DecalFromImpact_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_DecalFromImpact_HPP

class UAnimNotify_PlayFX_DecalFromImpact_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;
    bool isThrust;
    class UParticleSystem* Particle to Spawn;
    class UMaterialInterface* DecalMaterial;
    FVector DecalScale;

    bool OverrideBaseNotify();
    void PlayDecal(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn, bool Miroring);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
};

#endif
