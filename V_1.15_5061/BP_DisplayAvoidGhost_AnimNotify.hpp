#ifndef UE4SS_SDK_BP_DisplayAvoidGhost_AnimNotify_HPP
#define UE4SS_SDK_BP_DisplayAvoidGhost_AnimNotify_HPP

class UBP_DisplayAvoidGhost_AnimNotify_C : public UAnimNotify
{
    int32 Pose ID;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
