#ifndef UE4SS_SDK_BP_2WaysLockableBaseDoor_HPP
#define UE4SS_SDK_BP_2WaysLockableBaseDoor_HPP

class ABP_2WaysLockableBaseDoor_C : public ABP_LockableDoor_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UOptionListenerComponent* OptionListener;                                   // 0x0448 (size: 0x8)
    class UBoxWithNavComponent* BoxWithNav;                                           // 0x0450 (size: 0x8)
    class USCNavModifierComponent* SCNavModifier;                                     // 0x0458 (size: 0x8)
    bool bWaitForOutOfTrigger;                                                        // 0x0460 (size: 0x1)
    bool bUseInteractions;                                                            // 0x0461 (size: 0x1)
    class AActor* ActorTriggeringSequence;                                            // 0x0468 (size: 0x8)
    class AActor* TeleportActor;                                                      // 0x0470 (size: 0x8)
    FBP_2WaysLockableBaseDoor_CSequenceFinished SequenceFinished;                     // 0x0478 (size: 0x10)
    void SequenceFinished();
    FBP_2WaysLockableBaseDoor_CSequenceStarted SequenceStarted;                       // 0x0488 (size: 0x10)
    void SequenceStarted(bool StartedWay1);
    bool bForceLocked;                                                                // 0x0498 (size: 0x1)
    bool bActorHasBegun;                                                              // 0x0499 (size: 0x1)

    bool CanInteract(class APawn* _Instigator, FText& _outReason);
    void ResetFirewalkTimer(bool ActivateTimer);
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
}; // Size: 0x49A

#endif
