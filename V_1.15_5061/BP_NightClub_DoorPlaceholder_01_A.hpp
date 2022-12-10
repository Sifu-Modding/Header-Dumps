#ifndef UE4SS_SDK_BP_NightClub_DoorPlaceholder_01_A_HPP
#define UE4SS_SDK_BP_NightClub_DoorPlaceholder_01_A_HPP

class ABP_NightClub_DoorPlaceholder_01_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SK_DoorAnim_01_A;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_NightClub_DoorPlaceholder_01_A(int32 EntryPoint);
};

#endif
