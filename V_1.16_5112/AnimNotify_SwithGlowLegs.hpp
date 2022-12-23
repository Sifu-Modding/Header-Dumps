#ifndef UE4SS_SDK_AnimNotify_SwithGlowLegs_HPP
#define UE4SS_SDK_AnimNotify_SwithGlowLegs_HPP

class UAnimNotify_SwithGlowLegs_C : public UAnimNotify
{
    FString NotifyName;
    FString BaseName;

    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
};

#endif
