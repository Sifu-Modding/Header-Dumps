#ifndef UE4SS_SDK_BP_DisplayAvoidGhost_AnimNotify_HPP
#define UE4SS_SDK_BP_DisplayAvoidGhost_AnimNotify_HPP

class UBP_DisplayAvoidGhost_AnimNotify_C : public UAnimNotify
{
    int32 Pose ID;                                                                    // 0x0038 (size: 0x4)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x3C

#endif
