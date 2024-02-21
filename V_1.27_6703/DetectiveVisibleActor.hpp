#ifndef UE4SS_SDK_DetectiveVisibleActor_HPP
#define UE4SS_SDK_DetectiveVisibleActor_HPP

class ADetectiveVisibleActor_C : public ASCStaticMeshPrimInstActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02C8 (size: 0x8)
    class UUsable_OptionListenerComponent_C* Usable_OptionListenerComponent;          // 0x02D0 (size: 0x8)
    class USceneComponent* LookAtTarget;                                              // 0x02D8 (size: 0x8)
    class UInteractionObjectComponent* InteractionObject;                             // 0x02E0 (size: 0x8)
    class UBoxComponent* InteractionBox;                                              // 0x02E8 (size: 0x8)
    FGameplayTag DetectiveTag;                                                        // 0x02F0 (size: 0x8)
    FGameplayTagContainer AdditionalDetectiveTags;                                    // 0x02F8 (size: 0x20)
    FText OnCompletedText;                                                            // 0x0318 (size: 0x18)
    FName DialogSegmentOnCompleted;                                                   // 0x0330 (size: 0x8)
    bool bCanAlwaysBeUsed;                                                            // 0x0338 (size: 0x1)
    bool bHiddenAfterUse;                                                             // 0x0339 (size: 0x1)
    bool bHasBeenUsed;                                                                // 0x033A (size: 0x1)
    bool bHasDoorBeenOpened;                                                          // 0x033B (size: 0x1)
    bool bCanUseDoor;                                                                 // 0x033C (size: 0x1)
    bool bShowVisualFeedback;                                                         // 0x033D (size: 0x1)
    FGameplayTagContainer RequiredDetectiveTagContainer;                              // 0x0340 (size: 0x20)
    FGameplayTag DetectiveTagOnFail;                                                  // 0x0360 (size: 0x8)
    FText MessageToShowOnFail;                                                        // 0x0368 (size: 0x18)
    class ABP_2WaysInterractiveLockableDoor_C* LinkedDoor;                            // 0x0380 (size: 0x8)
    bool bAutoOpenDoor;                                                               // 0x0388 (size: 0x1)
    class UHUDUserWidget* HUDInfoWidget;                                              // 0x0390 (size: 0x8)
    class ULevelSequence* SequenceWay1;                                               // 0x0398 (size: 0x8)
    class ULevelSequence* SequenceWay2;                                               // 0x03A0 (size: 0x8)
    class ULevelSequence* DefaultSequenceWay1;                                        // 0x03A8 (size: 0x8)
    class ULevelSequence* DefaultSequenceWay2;                                        // 0x03B0 (size: 0x8)
    bool bIsPickedUp;                                                                 // 0x03B8 (size: 0x1)
    class UAnimSequence* DefaultPickupAnim;                                           // 0x03C0 (size: 0x8)
    TEnumAsByte<VariableWeightLayers> DefaultPickUpVariableWeightLayer;               // 0x03C8 (size: 0x1)
    class UAnimSequence* LowPickupAnim;                                               // 0x03D0 (size: 0x8)
    TEnumAsByte<VariableWeightLayers> LowPickUpVariableWeightLayer;                   // 0x03D8 (size: 0x1)
    FTransform DefaultTransform;                                                      // 0x03E0 (size: 0x30)
    bool bDoorUseInteraction;                                                         // 0x0410 (size: 0x1)
    bool bLockDoorIfNoSequence;                                                       // 0x0411 (size: 0x1)
    FName DialogSegmentOnFail;                                                        // 0x0414 (size: 0x8)
    class UAkAudioEvent* FailedInteractionAkEvent;                                    // 0x0420 (size: 0x8)
    class UAkAudioEvent* SuccessfulInteractionAkEvent;                                // 0x0428 (size: 0x8)
    class UAkAudioEvent* DoorUnlockedAkEvent;                                         // 0x0430 (size: 0x8)
    FDetectiveVisibleActor_COnInteractionFailed OnInteractionFailed;                  // 0x0438 (size: 0x10)
    void OnInteractionFailed();
    class UAnimSequence* DoorLockedAnimation;                                         // 0x0448 (size: 0x8)
    class UBlendProfile* OldV0BlendProfile;                                           // 0x0450 (size: 0x8)
    class UBlendProfile* OldV1BlendProfile;                                           // 0x0458 (size: 0x8)
    class UBlendProfile* OldV2BlendProfile;                                           // 0x0460 (size: 0x8)
    bool bMustRestoreBlendProfiles;                                                   // 0x0468 (size: 0x1)
    TEnumAsByte<VariableWeightLayers> eVWLayerToRestore;                              // 0x0469 (size: 0x1)

    bool CanInteract(class APawn* _Instigator, FText& _outReason);
    void RestoreWeaponBlendProfiles(class AFightingCharacter* FightingChar);
    void OnDoorUseInteraction(bool Way1);
    void GetEffectiveTagContainerToUnlock(FGameplayTagContainer& OutTagContainer);
    void Get Bone to Attach To(class AFightingCharacter* InCharacter, bool bMirrored, FName& Outbone);
    void UpdateAnimBlendProfiles(class AFightingCharacter* InFightingChar, TEnumAsByte<VariableWeightLayers> VWLayer, class UBlendProfile* V0BlendProfile, class UBlendProfile* V1BlendProfile, class UBlendProfile* V2BlendProfile);
    void GetPickupAnim(class AFightingCharacter* InFightingChar, class UAnimSequence*& OutAnimSequence, TEnumAsByte<VariableWeightLayers>& OutEnum);
    void Can Play Sequence Auto Open(class ABP_2WaysInterractiveLockableDoor_C* InDoor, bool& bOutAutoOpenDoor);
    void OnSuccessfulInteraction(class AActor* Investigator, bool bForceUpdate);
    void DetachFromLinkedDoor();
    void AttachToLinkedDoor();
    void UpdateHasBeenUsed_Advanced(bool bInNewValue, bool bInCanUseDoor, bool bForced);
    void ToggleInfoHUD(bool bShow, FText TextToShow);
    void GetDoorAnimations(class ABP_2WaysInterractiveLockableDoor_C* InDoor, class UAnimationAsset*& OutOpenAsset, class UAnimationAsset*& OutCloseAsset);
    void Can Play Gameplay Auto Open(class ABP_2WaysInterractiveLockableDoor_C* InDoor, bool& bOutAutoOpenDoor);
    void UpdateVisualFeedback();
    void UpdateState();
    void UpdateHasBeenUsed(class UAbilitySystemComponent* InAbilityComponent, bool bForced);
    void OnTriggered();
    void UserConstructionScript();
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_0_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void ReceiveBeginPlay();
    void OnAlertLevelChanged(EAlertLevel EAlertLevel);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnTagsChangedDelegate(class USCAbilitySystemComponent* _abilityComponent, const FGameplayTag& _tag, int32 _iCount);
    void OnPawnInitializedEvent(class AFightingCharacter* _pawn);
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_1_FailedUseObject__DelegateSignature(class APlayerController* PlayerController, FText FailReason);
    void BndEvt__InteractionObject_K2Node_ComponentBoundEvent_2_UseObject__DelegateSignature(class APlayerController* PlayerController);
    void BndEvt__Usable_OptionListenerComponent_K2Node_ComponentBoundEvent_3_OnOptionChangedDynamicDelegate__DelegateSignature(EGameOptionTypes _eOptionType);
    void OnOpenDoor(class APlayerController* PlayerController);
    void ShowCompletedText(class AActor* InInvestigator);
    void RemoveSequencesOverride();
    void OnPickedUp(const FNetStructPickUpObject& _pickupObjectOrderStruct, class AFightingCharacter* _picker);
    void OnOrderPickupEnd(const FNetStructPickUpObject& _pickupObjectOrderStruct, class AFightingCharacter* _picker);
    void BndEvt__DetectiveVisibleActor_InteractionBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DetectiveVisibleActor_InteractionBox_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CE_OnUseInteractionFailed(class AController* Controller, FText FailReason);
    void CE_FakeUseInteractionFailed();
    void CE_BlockDoorOneFrame();
    void ExecuteUbergraph_DetectiveVisibleActor(int32 EntryPoint);
    void OnInteractionFailed__DelegateSignature();
}; // Size: 0x46A

#endif
