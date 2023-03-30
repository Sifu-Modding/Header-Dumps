#ifndef UE4SS_SDK_AnimNotify_PopAllFightingStates_HPP
#define UE4SS_SDK_AnimNotify_PopAllFightingStates_HPP

class UAnimNotify_PopAllFightingStates_C : public USCAnimNotify
{

    FString GetNotifyName();
    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x48

#endif
