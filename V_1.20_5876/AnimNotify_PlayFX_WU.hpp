#ifndef UE4SS_SDK_AnimNotify_PlayFX_WU_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_WU_HPP

class UAnimNotify_PlayFX_WU_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;                                                                 // 0x0090 (size: 0x10)
    bool isThrust;                                                                    // 0x00A0 (size: 0x1)
    class UParticleSystem* Particle to Spawn;                                         // 0x00A8 (size: 0x8)
    bool bForceStopOnOrderEnded;                                                      // 0x00B0 (size: 0x1)

    bool OverrideBaseNotify();
    class UParticleSystemComponent* PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
}; // Size: 0xB1

#endif
