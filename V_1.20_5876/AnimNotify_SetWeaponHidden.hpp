#ifndef UE4SS_SDK_AnimNotify_SetWeaponHidden_HPP
#define UE4SS_SDK_AnimNotify_SetWeaponHidden_HPP

class UAnimNotify_SetWeaponHidden_C : public UAnimNotify
{
    bool bHideWeapon;                                                                 // 0x0038 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x39

#endif
