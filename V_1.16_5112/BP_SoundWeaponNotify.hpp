#ifndef UE4SS_SDK_BP_SoundWeaponNotify_HPP
#define UE4SS_SDK_BP_SoundWeaponNotify_HPP

class UBP_SoundWeaponNotify_C : public UAnimNotify
{
    TEnumAsByte<AKE_WeaponName_Switch> DefaultWeapon;
    class UAkAudioEvent* Event;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
