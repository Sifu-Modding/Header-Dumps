#ifndef UE4SS_SDK_AnimNotify_PlayFX_WU_FromPhase_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_WU_FromPhase_HPP

class UAnimNotify_PlayFX_WU_FromPhase_C : public UAnimNotify_PlayFX_WU_C
{
    TMap<class FName, class UParticleSystem*> Emitter from Phase;                     // 0x00B8 (size: 0x50)

    class UParticleSystemComponent* PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x108

#endif
