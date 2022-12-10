#ifndef UE4SS_SDK_BP_LockableDoor_Master_HPP
#define UE4SS_SDK_BP_LockableDoor_Master_HPP

class ABP_LockableDoor_Master_C : public ALockableDoor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULevelSequenceAnimReplicationComponent* LevelSequenceAnimReplication;
    class UBoxComponent* OpenSoundTrigger Way 2;
    class UBoxComponent* OpenSoundTrigger Way 1;
    class UArrowComponent* Arrow;
    class UBoxComponent* Open Trigger Way 2;
    class UBoxComponent* Open Trigger Way 1;
    TArray<class UAkAudioEvent*> EventsToPlayWay1;
    TArray<class UAkAudioEvent*> EventsToPlayWay2;
    TArray<FSCSoundSwitchValue> SoundStatesGroupWay1;
    TArray<FSCSoundSwitchValue> SoundStatesGroupWay2;
    TArray<FSCSoundSwitchValue> OpenSoundStatesWay1;
    TArray<FSCSoundSwitchValue> OpenSoundStatesWay2;
    TArray<FSCSoundSwitchValue> CloseSoundStatesWay1;
    TArray<FSCSoundSwitchValue> CloseSoundStatesWay2;
    bool bWasWay1Last;
    TEnumAsByte<AKE_Door_Material> AKE_Door_Material;
    bool bOpenedWay1;
    class UAkAudioEvent* AkEvent_Door_Locked;
    float Hue;
    float Lightness;
    float Saturation;
    float zHas FadeCam =0;
    bool bSequenceDoorOpened;
    bool bSequencePlaying;

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
};

#endif
