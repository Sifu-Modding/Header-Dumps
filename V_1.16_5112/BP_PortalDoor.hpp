#ifndef UE4SS_SDK_BP_PortalDoor_HPP
#define UE4SS_SDK_BP_PortalDoor_HPP

class ABP_PortalDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* PortalDoor;
    class UAkAudioEvent* OpeningAkEvent;
    float OpeningDuration;
    bool bIsOpen;
    class UMaterialInstanceDynamic* PortalDoorMID;

    void EnsureMID();
    void ReceiveBeginPlay();
    void StartDoorOpening();
    void OnDoorOpened();
    void ExecuteUbergraph_BP_PortalDoor(int32 EntryPoint);
};

#endif
