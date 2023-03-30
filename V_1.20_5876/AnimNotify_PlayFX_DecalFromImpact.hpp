#ifndef UE4SS_SDK_AnimNotify_PlayFX_DecalFromImpact_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_DecalFromImpact_HPP

class UAnimNotify_PlayFX_DecalFromImpact_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;                                                                 // 0x0090 (size: 0x10)
    bool isThrust;                                                                    // 0x00A0 (size: 0x1)
    class UParticleSystem* Particle to Spawn;                                         // 0x00A8 (size: 0x8)
    class UMaterialInterface* DecalMaterial;                                          // 0x00B0 (size: 0x8)
    FVector DecalScale;                                                               // 0x00B8 (size: 0xC)

    bool OverrideBaseNotify();
    void PlayDecal(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn, bool Miroring);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
}; // Size: 0xC4

#endif
