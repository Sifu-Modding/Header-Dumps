#ifndef UE4SS_SDK_BP_SoundDoor_Notify_HPP
#define UE4SS_SDK_BP_SoundDoor_Notify_HPP

class UBP_SoundDoor_Notify_C : public UAnimNotify
{
    class UAkAudioEvent* DoorEvent;                                                   // 0x0038 (size: 0x8)
    TEnumAsByte<AKE_Door_Material> DefaultDoorMaterial;                               // 0x0040 (size: 0x1)
    bool IsDoorClose;                                                                 // 0x0041 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x42

#endif
