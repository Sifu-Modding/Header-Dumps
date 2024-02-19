#ifndef UE4SS_SDK_BP_PortalDoor_HPP
#define UE4SS_SDK_BP_PortalDoor_HPP

class ABP_PortalDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* PortalDoor;                                           // 0x02B8 (size: 0x8)
    class UAkAudioEvent* OpeningAkEvent;                                              // 0x02C0 (size: 0x8)
    float OpeningDuration;                                                            // 0x02C8 (size: 0x4)
    bool bIsOpen;                                                                     // 0x02CC (size: 0x1)
    class UMaterialInstanceDynamic* PortalDoorMID;                                    // 0x02D0 (size: 0x8)

    void EnsureMID();
    void ReceiveBeginPlay();
    void StartDoorOpening();
    void OnDoorOpened();
    void ExecuteUbergraph_BP_PortalDoor(int32 EntryPoint);
}; // Size: 0x2D8

#endif
