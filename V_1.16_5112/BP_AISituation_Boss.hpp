#ifndef UE4SS_SDK_BP_AISituation_Boss_HPP
#define UE4SS_SDK_BP_AISituation_Boss_HPP

class ABP_AISituation_Boss_C : public ABP_AiSituation_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AAISpawner* Boss Spawner;
    class AActor* Sequence Phase1to2 TP;
    class AActor* Sequence Phase2to3 TP;
    TArray<EAIPositioningOption> Positioning Options;
    FName PhaseBeforeDialog;
    bool HasCameraForcedLockOn;
    class UBlackboardComponent* PlayerCamBlackboard;
    FCameraLookAtServiceBehaviorTime CameraLockTiming;
    FCameraLookAtServiceBehaviorConfig CameraLockConfig;
    bool CameraLockOverride;
    float CameraLockManualCooldown;
    class AActor* Sequence Phase1to2 Transform;
    class AActor* Sequence Phase2to3 Transform;
    bool Disable Streaming Volumes;
    class ASCPlayerVolume* Trigger Intro Volume;
    class ABP_2WaysInterractiveLockableDoor_C* Trigger Intro Door;
    class ALevelSequenceActor* Intro LevelSequence Actor;
    class AActor* Sequence Intro TP;
    bool Register Door To Intro Sequence;
    bool Reenable Streaming Volumes On Resolve;
    int32 Phase Index Offset;
    bool Enable TP Shot 2 Test;
    FGameplayTag KilledGameplayTag;
    FGameplayTag AbandonningGameplayTag;
    TMap<class FName, class AActor*> Intro Actors To Register;
    TMap<class FName, class AActor*> P1 to P2  Actors To Register;
    TMap<class FName, class AActor*> P2 to P3  Actors To Register;
    float HealthBonusByCharge;
    bool GiveChargeOnPhaseChanged;
    FDataTableRowHandle SpareDialogRowHandle;
    bool IntroHasBeenPlayed;
    bool bLoadNextMapOnPhaseChanged;
    float LastStructureValue;
    TMap<class FAIPhaseNodeHardLink, class FPhaseTransitionSequenceParams> PerPhaseSequenceParams;
    TEnumAsByte<CameraOverriderPresetEnum> CameraPreset;
    bool Already Medium state;
    int32 ResetSavePart;
    bool Disable All Attack Joker SItuations;
    int32 SnapshotToOverrideFrom;
    FString CorsairEvent;
    bool SpareDialogDisplayed;
    TArray<EAIAttackTicketJokerSituation> JokerSituationsToDisable;
    int32 StructureBrokenCount;
    int32 NbStructureBrokenForSpare;
    FBP_AISituation_Boss_COnAIPhaseChangeSequenceFinished OnAIPhaseChangeSequenceFinished;
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
};

#endif
