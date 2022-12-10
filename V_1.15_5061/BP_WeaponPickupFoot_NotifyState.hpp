#ifndef UE4SS_SDK_BP_WeaponPickupFoot_NotifyState_HPP
#define UE4SS_SDK_BP_WeaponPickupFoot_NotifyState_HPP

class UBP_WeaponPickupFoot_NotifyState_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

#endif
