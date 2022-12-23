#ifndef UE4SS_SDK_BP_2WaysLockableBaseDoor_HPP
#define UE4SS_SDK_BP_2WaysLockableBaseDoor_HPP

class ABP_2WaysLockableBaseDoor_C : public ABP_LockableDoor_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOptionListenerComponent* OptionListener;
    class UBoxWithNavComponent* BoxWithNav;
    class USCNavModifierComponent* SCNavModifier;
    bool bWaitForOutOfTrigger;
    bool bUseInteractions;
    class AActor* ActorTriggeringSequence;
    class AActor* TeleportActor;
    FBP_2WaysLockableBaseDoor_CSequenceFinished SequenceFinished;
    void SequenceFinished();
    FBP_2WaysLockableBaseDoor_CSequenceStarted SequenceStarted;
    void SequenceStarted(bool StartedWay1);
    bool bForceLocked;
    bool bActorHasBegun;

    bool CanInteract(class APawn* _Instigator, FText& _outReason);
    void UpdateRenderCustomDepthEnabled();
    void GetDoorOpeningAnim(bool bWay1, class UAnimSequence*& Opening);
    void GetLevelSequence(bool IsWay1, class ULevelSequence*& LevelSequenceReturn);
    void UpdateWaitOutOfTriggers();
    void LaunchSequence(class UObject* ActorToLaunchSeSequenceOn, class UObject* OverlappingComponent);
    void CanOpenDoor(bool& CanOpen);
    void SetDoorEnabled(bool bEnabled);
    void LaunchDoorOpeningSequenceIfPossible(class APawn* Pawn, class ULevelSequence* Sequence, class AController* Controller, bool& Launched);
    void Play Door initial state();
    void OnSequenceCreated(class ALevelSequenceActor* Sequence Actor, class ACharacter* ActorToLaunchSequenceOn);
    void ReceiveBeginPlay();
    void OnSequenceFinished();
    void BndEvt__Open Trigger Way 1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Open Trigger Way 2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Open Trigger Way 1_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Open Trigger Way 2_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__m_saveComponent_K2Node_ComponentBoundEvent_0_OnUpdatedFromSave__DelegateSignature();
    void BndEvt__BP_2WaysLockableBaseDoor_OptionListener_K2Node_ComponentBoundEvent_1_OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
    void BPE_OpenedStatusChanged();
    void BPE_LockedStatusChanged();
    void ExecuteUbergraph_BP_2WaysLockableBaseDoor(int32 EntryPoint);
    void SequenceStarted__DelegateSignature(bool StartedWay1);
    void SequenceFinished__DelegateSignature();
};

#endif
