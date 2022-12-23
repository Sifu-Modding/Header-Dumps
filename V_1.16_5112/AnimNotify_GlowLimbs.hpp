#ifndef UE4SS_SDK_AnimNotify_GlowLimbs_HPP
#define UE4SS_SDK_AnimNotify_GlowLimbs_HPP

class UAnimNotify_GlowLimbs_C : public UAnimNotify_PlayFX_WU_C
{
    TEnumAsByte<ENUM_SelectedLimb> Selected Limb;
    class UCurveFloat* Effect Curve;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    class UParticleSystemComponent* PlayFX(FName PlayFXSocketName, class USkeletalMeshComponent* MeshComponent, class UParticleSystem* ParticleToSpawn);
    bool OverrideBaseNotify();
    FString GetNotifyName();
    void End Effect(class USkeletalMeshComponent*& Mesh Component, class USkeletalMeshComponent*& NewParam);
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
