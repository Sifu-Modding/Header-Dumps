#ifndef UE4SS_SDK_BP_LockableDoor_Master_HPP
#define UE4SS_SDK_BP_LockableDoor_Master_HPP

class ABP_LockableDoor_Master_C : public ALockableDoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class ULevelSequenceAnimReplicationComponent* LevelSequenceAnimReplication;       // 0x0368 (size: 0x8)
    class UBoxComponent* OpenSoundTrigger Way 2;                                      // 0x0370 (size: 0x8)
    class UBoxComponent* OpenSoundTrigger Way 1;                                      // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0380 (size: 0x8)
    class UBoxComponent* Open Trigger Way 2;                                          // 0x0388 (size: 0x8)
    class UBoxComponent* Open Trigger Way 1;                                          // 0x0390 (size: 0x8)
    TArray<class UAkAudioEvent*> EventsToPlayWay1;                                    // 0x0398 (size: 0x10)
    TArray<class UAkAudioEvent*> EventsToPlayWay2;                                    // 0x03A8 (size: 0x10)
    TArray<FSCSoundSwitchValue> SoundStatesGroupWay1;                                 // 0x03B8 (size: 0x10)
    TArray<FSCSoundSwitchValue> SoundStatesGroupWay2;                                 // 0x03C8 (size: 0x10)
    TArray<FSCSoundSwitchValue> OpenSoundStatesWay1;                                  // 0x03D8 (size: 0x10)
    TArray<FSCSoundSwitchValue> OpenSoundStatesWay2;                                  // 0x03E8 (size: 0x10)
    TArray<FSCSoundSwitchValue> CloseSoundStatesWay1;                                 // 0x03F8 (size: 0x10)
    TArray<FSCSoundSwitchValue> CloseSoundStatesWay2;                                 // 0x0408 (size: 0x10)
    bool bWasWay1Last;                                                                // 0x0418 (size: 0x1)
    TEnumAsByte<AKE_Door_Material> AKE_Door_Material;                                 // 0x0419 (size: 0x1)
    bool bOpenedWay1;                                                                 // 0x041A (size: 0x1)
    class UAkAudioEvent* AkEvent_Door_Locked;                                         // 0x0420 (size: 0x8)
    float Hue;                                                                        // 0x0428 (size: 0x4)
    float Lightness;                                                                  // 0x042C (size: 0x4)
    float Saturation;                                                                 // 0x0430 (size: 0x4)
    float zHas FadeCam =0;                                                            // 0x0434 (size: 0x4)
    bool bSequenceDoorOpened;                                                         // 0x0438 (size: 0x1)
    bool bSequencePlaying;                                                            // 0x0439 (size: 0x1)

    void GetCloseDoorSound(bool& WasWay1Last, TArray<FSCSoundSwitchValue>& CloseSoundStateWay1, TArray<FSCSoundSwitchValue>& CloseSoundStateWay2, TEnumAsByte<AKE_Door_Material>& AkeDoorMaterial);
    void CanSwitchSoundState(bool& bCanSwitch);
    void SetAudioStateEvents(TArray<FSCSoundSwitchValue>& SoundState, class AActor* Actor, TArray<class UAkAudioEvent*>& AkEventArray, bool UseStopEvent);
    void OnBeginOverlapSoundSwitch(bool Way1Overlapped);
    void UserConstructionScript();
    void BndEvt__Open Box Trigger Way 1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Open Box Trigger Way 2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BPE_OpenedStatusChanged();
    void BndEvt__OpenSoundTrigger Way 1_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__OpenSoundTrigger Way 1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenSoundTrigger Way 2_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__OpenSoundTrigger Way 2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayFakeAnimation(class UAnimSequenceBase* InAnimation);
    void ExecuteUbergraph_BP_LockableDoor_Master(int32 EntryPoint);
}; // Size: 0x43A

#endif
