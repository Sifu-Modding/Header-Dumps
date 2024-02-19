#ifndef UE4SS_SDK_BP_AISituation_Boss_HPP
#define UE4SS_SDK_BP_AISituation_Boss_HPP

class ABP_AISituation_Boss_C : public ABP_AiSituation_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class AAISpawner* Boss Spawner;                                                   // 0x0628 (size: 0x8)
    class AActor* Sequence Phase1to2 TP;                                              // 0x0630 (size: 0x8)
    class AActor* Sequence Phase2to3 TP;                                              // 0x0638 (size: 0x8)
    TArray<EAIPositioningOption> Positioning Options;                                 // 0x0640 (size: 0x10)
    FName PhaseBeforeDialog;                                                          // 0x0650 (size: 0x8)
    bool HasCameraForcedLockOn;                                                       // 0x0658 (size: 0x1)
    class UBlackboardComponent* PlayerCamBlackboard;                                  // 0x0660 (size: 0x8)
    FCameraLookAtServiceBehaviorTime CameraLockTiming;                                // 0x0668 (size: 0x20)
    FCameraLookAtServiceBehaviorConfig CameraLockConfig;                              // 0x0688 (size: 0xA8)
    bool CameraLockOverride;                                                          // 0x0730 (size: 0x1)
    float CameraLockManualCooldown;                                                   // 0x0734 (size: 0x4)
    class AActor* Sequence Phase1to2 Transform;                                       // 0x0738 (size: 0x8)
    class AActor* Sequence Phase2to3 Transform;                                       // 0x0740 (size: 0x8)
    bool Disable Streaming Volumes;                                                   // 0x0748 (size: 0x1)
    class ASCPlayerVolume* Trigger Intro Volume;                                      // 0x0750 (size: 0x8)
    class ABP_2WaysInterractiveLockableDoor_C* Trigger Intro Door;                    // 0x0758 (size: 0x8)
    class ALevelSequenceActor* Intro LevelSequence Actor;                             // 0x0760 (size: 0x8)
    class AActor* Sequence Intro TP;                                                  // 0x0768 (size: 0x8)
    bool Register Door To Intro Sequence;                                             // 0x0770 (size: 0x1)
    bool Reenable Streaming Volumes On Resolve;                                       // 0x0771 (size: 0x1)
    int32 Phase Index Offset;                                                         // 0x0774 (size: 0x4)
    bool Enable TP Shot 2 Test;                                                       // 0x0778 (size: 0x1)
    FGameplayTag KilledGameplayTag;                                                   // 0x077C (size: 0x8)
    FGameplayTag AbandonningGameplayTag;                                              // 0x0784 (size: 0x8)
    TMap<class FName, class AActor*> Intro Actors To Register;                        // 0x0790 (size: 0x50)
    TMap<class FName, class AActor*> P1 to P2  Actors To Register;                    // 0x07E0 (size: 0x50)
    TMap<class FName, class AActor*> P2 to P3  Actors To Register;                    // 0x0830 (size: 0x50)
    float HealthBonusByCharge;                                                        // 0x0880 (size: 0x4)
    bool GiveChargeOnPhaseChanged;                                                    // 0x0884 (size: 0x1)
    FDataTableRowHandle SpareDialogRowHandle;                                         // 0x0888 (size: 0x10)
    bool IntroHasBeenPlayed;                                                          // 0x0898 (size: 0x1)
    bool bLoadNextMapOnPhaseChanged;                                                  // 0x0899 (size: 0x1)
    float LastStructureValue;                                                         // 0x089C (size: 0x4)
    TMap<class FAIPhaseNodeHardLink, class FPhaseTransitionSequenceParams> PerPhaseSequenceParams; // 0x08A0 (size: 0x50)
    TEnumAsByte<CameraOverriderPresetEnum> CameraPreset;                              // 0x08F0 (size: 0x1)
    bool Already Medium state;                                                        // 0x08F1 (size: 0x1)
    int32 ResetSavePart;                                                              // 0x08F4 (size: 0x4)
    bool Disable All Attack Joker SItuations;                                         // 0x08F8 (size: 0x1)
    int32 SnapshotToOverrideFrom;                                                     // 0x08FC (size: 0x4)
    FString CorsairEvent;                                                             // 0x0900 (size: 0x10)
    bool SpareDialogDisplayed;                                                        // 0x0910 (size: 0x1)
    TArray<EAIAttackTicketJokerSituation> JokerSituationsToDisable;                   // 0x0918 (size: 0x10)
    int32 StructureBrokenCount;                                                       // 0x0928 (size: 0x4)
    int32 NbStructureBrokenForSpare;                                                  // 0x092C (size: 0x4)
    FBP_AISituation_Boss_COnAIPhaseChangeSequenceFinished OnAIPhaseChangeSequenceFinished; // 0x0930 (size: 0x10)
    void OnAIPhaseChangeSequenceFinished(class AFightingCharacter* FightingChar);

    void CheckCarryingProp();
    void CanTriggerSpare(bool& CanTriggerSpare);
    void RegisterGenericSequenceParams(int32 InPhaseIndex, class ALevelSequenceActor* InSequenceActor, bool& bHasRegister);
    void FindSequenceParams(int32 InPhaseIndex, FPhaseTransitionSequenceParams& OutParams, bool& bFound);
    void IsBossTheCurrentTakedownTarget(bool& IsTakedownTarget);
    void EndSpareDialog();
    void Start Spare Dialog();
    void Register Sequence Actors(const TMap<class FName, class AActor*>& Actors, const class ALevelSequenceActor* _sequenceActor);
    void Force Target MC(class APawn*& MC Pawn);
    void Play Intro Sequence();
    void HandleOverrideCameraLockBehavior(bool Enter);
    bool Is In Dialog Phase();
    void BPE_OnStartAIPhaseChanged(class AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    void BPE_OnAIPhaseChangeSequenceFinished(class AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    void On Activated(class AAISituationActor* SituationChanged);
    void CE_OnSitutationresolved(class AAISituationActor* SituationChanged);
    void ReceiveBeginPlay();
    void On Register Intro Sequene Actors(class ALevelSequenceActor* Sequence Actor);
    void On Player Overlap Intro Sequence Trigger(class AActor* OverlappedActor, class AActor* OtherActor);
    void On Intro Sequence Started();
    void On Intro Sequence Finished();
    void On Interact With Intro Door(bool Way 1);
    void BPE_OnAIFightingStateChanged(class AFightingCharacter* _fightingChar, EFightingState _ePreviousFightingState, EFightingState _eNewFightingState);
    void ReceiveTick(float DeltaSeconds);
    void BPE On All AIs Died();
    void On guard gauge change(float NewValue);
    void On AI Spawned(class ABaseCharacter* Character);
    void BPE_OnInteractiveDialogInterrupted();
    void OnOrderTakeDownVictimStarted(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_AISituation_Boss(int32 EntryPoint);
    void OnAIPhaseChangeSequenceFinished__DelegateSignature(class AFightingCharacter* FightingChar);
}; // Size: 0x940

#endif
