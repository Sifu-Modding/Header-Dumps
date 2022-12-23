#ifndef UE4SS_SDK_AnimNotify_HideWeapon_HPP
#define UE4SS_SDK_AnimNotify_HideWeapon_HPP

class UAnimNotify_HideWeapon_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    FString GetNotifyName();
};

#endif
