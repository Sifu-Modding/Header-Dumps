#ifndef UE4SS_SDK_AnimNotify_PlayFX_Decal_HPP
#define UE4SS_SDK_AnimNotify_PlayFX_Decal_HPP

class UAnimNotify_PlayFX_Decal_C : public UAnimNotify_PlayParticleEffect
{
    FString BaseName;
    bool isThrust;
    class UParticleSystem* Particle to Spawn;

    bool OverrideBaseNotify();
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
    FString GetNotifyName();
};

#endif
