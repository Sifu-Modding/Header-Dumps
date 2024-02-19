#ifndef UE4SS_SDK_BP_SoundWeaponNotify_HPP
#define UE4SS_SDK_BP_SoundWeaponNotify_HPP

class UBP_SoundWeaponNotify_C : public UAnimNotify
{
    TEnumAsByte<AKE_WeaponName_Switch> DefaultWeapon;                                 // 0x0038 (size: 0x1)
    class UAkAudioEvent* Event;                                                       // 0x0040 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x48

#endif
