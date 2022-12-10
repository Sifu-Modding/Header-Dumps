#ifndef UE4SS_SDK_AnimNotify_SetWeaponHidden_HPP
#define UE4SS_SDK_AnimNotify_SetWeaponHidden_HPP

class UAnimNotify_SetWeaponHidden_C : public UAnimNotify
{
    bool bHideWeapon;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
