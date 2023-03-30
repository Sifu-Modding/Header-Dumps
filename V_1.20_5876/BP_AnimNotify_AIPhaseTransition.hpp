#ifndef UE4SS_SDK_BP_AnimNotify_AIPhaseTransition_HPP
#define UE4SS_SDK_BP_AnimNotify_AIPhaseTransition_HPP

class UBP_AnimNotify_AIPhaseTransition_C : public USCAnimNotify
{

    bool Received_NotifyExt(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const TArray<uint8>& ExtraInfoBufferArray);
}; // Size: 0x48

#endif
