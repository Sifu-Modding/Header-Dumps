#ifndef UE4SS_SDK_AnimNotify_PlayFX_WU_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_WU_HPP

class UAnimNotify_PlayFX_WU_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;
    bool isThrust;
    class UParticleSystem* Particle to Spawn;
    bool bForceStopOnOrderEnded;

    bool OverrideBaseNotify();
    class UParticleSystemComponent* PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
};

#endif
