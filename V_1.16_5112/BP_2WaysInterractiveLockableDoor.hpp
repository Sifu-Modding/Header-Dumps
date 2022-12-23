#ifndef UE4SS_SDK_BP_2WaysInterractiveLockableDoor_HPP
#define UE4SS_SDK_BP_2WaysInterractiveLockableDoor_HPP

class ABP_2WaysInterractiveLockableDoor_C : public ABP_2WaysLockableBaseDoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* DoorCollisionStatic;
    class UBillboardComponent* Billboard;
    class UStaticMeshComponent* SM_DoorJamb;
    class USceneComponent* HandleComp;
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;
    class UInteractionObjectComponent* InteractionObjectWay2;
    class UInteractionObjectComponent* InteractionObjectWay1;
    TArray<class AAISituationActor*> SituationPerceptionToEnableOnWay1;
    TArray<class AAISituationActor*> SituationPerceptionToEnableOnWay2;
    bool bPlaySFX;
    class UUserWidget* HUDWidget;
    FBP_2WaysInterractiveLockableDoor_CED_InteractionFailed ED_InteractionFailed;
    void ED_InteractionFailed();
    bool StaticCollisionEnabled;
    FBP_2WaysInterractiveLockableDoor_COn Use Interaction On Use Interaction;
    void On Use Interaction(bool Way 1);
    TArray<class AAISituationActor*> AISituationsToLockWhileOpenningDoor;
    FName InitColProfileName;

    void UpdateRenderCustomDepthEnabled();
    void SetLockOnRelatedSituations(bool Apply Lock);
    void SetEnableHitDetectionOnAIS(bool Enable, TArray<class AAISituationActor*>& Situation Actors);
    void Set Usable in Way(bool Way 1, bool Usable);
    void Is Usable In Way(bool Way 1, bool& Usable);
    void OnSequenceCreated(class ALevelSequenceActor* Sequence Actor, class ACharacter* ActorToLaunchSequenceOn);
    void OnInteraction(bool InteractedWith1, class APlayerController* PlayerController);
    void LaunchSequenceAndActivatePerception(bool OpenedWay1, class ULevelSequence* Sequence, class APawn* Pawn, TArray<class AAISituationActor*>& PerceptionToActivate, TArray<class AAISituationActor*>& PerceptionToDeActivate, class AController* Controller, bool& SequenceLaunched);
    void ActivateDeactivatePerception(TArray<class AAISituationActor*>& SituationToActivate, TArray<class AAISituationActor*>& SituationToDeActivate);
    void Initnteractions();
    void ActivateIntercationAccordingToLockStatus();
    void UserConstructionScript();
    void BndEvt__InteractionObjectWay2_K2Node_ComponentBoundEvent_2_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BPE_LockedStatusChanged();
    void OnSequenceFinished();
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_1_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BndEvt__InteractionObjectWay1_K2Node_ComponentBoundEvent_0_FailedUseObject__DelegateSignature(class APlayerController* PlayerController, FText FailReason);
    void BndEvt__InteractionObjectWay2_K2Node_ComponentBoundEvent_3_FailedUseObject__DelegateSignature(class APlayerController* PlayerController, FText FailReason);
    void InteractionFailed(const FText& InText);
    void ReceiveBeginPlay();
    void BndEvt__InteractionObjectWay1_K2Node_ComponentBoundEvent_4_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BndEvt__InteractionObjectWay2_K2Node_ComponentBoundEvent_5_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void NoLongerInteract();
    void BndEvt__InteractionObjectWay1_K2Node_ComponentBoundEvent_6_OnUsableChanged__DelegateSignature();
    void BndEvt__InteractionObjectWay2_K2Node_ComponentBoundEvent_7_OnUsableChanged__DelegateSignature();
    void BPE_OpenedStatusChanged();
    void BndEvt__m_saveComponent_K2Node_ComponentBoundEvent_8_OnUpdatedFromSave__DelegateSignature();
    void BndEvt__BP_2WaysInterractiveLockableDoor_InteractionObjectWay1_K2Node_ComponentBoundEvent_9_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BndEvt__BP_2WaysInterractiveLockableDoor_InteractionObjectWay2_K2Node_ComponentBoundEvent_10_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void OnDoorEndClose(const class AActor* _lockableDoorActor);
    void ExecuteUbergraph_BP_2WaysInterractiveLockableDoor(int32 EntryPoint);
    void On Use Interaction__DelegateSignature(bool Way 1);
    void ED_InteractionFailed__DelegateSignature();
};

#endif
