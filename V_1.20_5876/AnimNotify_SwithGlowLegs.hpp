#ifndef UE4SS_SDK_AnimNotify_SwithGlowLegs_HPP
#define UE4SS_SDK_AnimNotify_SwithGlowLegs_HPP

class UAnimNotify_SwithGlowLegs_C : public UAnimNotify
{
    FString NotifyName;                                                               // 0x0038 (size: 0x10)
    FString BaseName;                                                                 // 0x0048 (size: 0x10)

    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x58

#endif
