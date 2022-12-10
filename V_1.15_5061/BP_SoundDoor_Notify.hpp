#ifndef UE4SS_SDK_BP_SoundDoor_Notify_HPP
#define UE4SS_SDK_BP_SoundDoor_Notify_HPP

class UBP_SoundDoor_Notify_C : public UAnimNotify
{
    class UAkAudioEvent* DoorEvent;
    TEnumAsByte<AKE_Door_Material> DefaultDoorMaterial;
    bool IsDoorClose;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
