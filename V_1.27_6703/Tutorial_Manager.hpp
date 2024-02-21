#ifndef UE4SS_SDK_Tutorial_Manager_HPP
#define UE4SS_SDK_Tutorial_Manager_HPP

class ATutorial_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    int32 CurrentPhase;                                                               // 0x02C0 (size: 0x4)
    class ABP_FightingPlayer_C* PlayerCharacter;                                      // 0x02C8 (size: 0x8)
    class ABP_AiSituation_C* TutorialAISituation;                                     // 0x02D0 (size: 0x8)
    TArray<class UAIFightingComponent*> SpawnedAIs;                                   // 0x02D8 (size: 0x10)
    class ATutorial_Phase_C* CurrentSpawnedPhase;                                     // 0x02E8 (size: 0x8)
    class UNEW_BP_HUD_Tutorial_C* HUDTutorial;                                        // 0x02F0 (size: 0x8)
    bool StartTutorialAtBeginPlay;                                                    // 0x02F8 (size: 0x1)
    bool DisplayDebug;                                                                // 0x02F9 (size: 0x1)
    class AFightingPlayerControllerBP_C* PlayerController;                            // 0x0300 (size: 0x8)
    TArray<class AAISpawner*> Spawners;                                               // 0x0308 (size: 0x10)
    TArray<FDataTableRowHandle> PhasesRow;                                            // 0x0318 (size: 0x10)
    float CurrentPhaseStartDelay;                                                     // 0x0328 (size: 0x4)
    TSubclassOf<class ATutorial_Phase_C> PreviewPhase;                                // 0x0330 (size: 0x8)
    class UChildActorComponent* CreatedPreviewPhase;                                  // 0x0338 (size: 0x8)
    FTutorial_Manager_CPhaseCreated PhaseCreated;                                     // 0x0340 (size: 0x10)
    void PhaseCreated(class ATutorial_Phase_C* Phase);
    FTutorial_Manager_CTutorialEnded TutorialEnded;                                   // 0x0350 (size: 0x10)
    void TutorialEnded();
    FTutorial_Manager_CSetTutoMode SetTutoMode;                                       // 0x0360 (size: 0x10)
    void SetTutoMode(bool Active);
    TEnumAsByte<Enum_TutorialAITypes> PendingBehaviour;                               // 0x0370 (size: 0x1)
    float DelayBetweenPhases;                                                         // 0x0374 (size: 0x4)

    void SwapCounterSide(bool LeftAlign);
    void UpdateInputHintsDisplay(class UNEW_BP_HUD_Tutorial_C* Target);
    void AIAttackOrderEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void CleanCounterWidgets();
    void HighlightWidgetCounter(TEnumAsByte<Enum_TutorialActionCounterType> CounterType, bool Highlight, bool Force);
    void Set AIs Behaviour from Phase(TEnumAsByte<Enum_TutorialAITypes> AIType);
    void DisplayTitle(TArray<FText>& DisplayedTitle, bool Display);
    void CleanImpostors();
    void CleanHintWidgets();
    void CleanInputWidgets();
    void SpawnPreviewPhase();
    void AlignLinkedSpawner();
    void CreateInputHint(TEnumAsByte<Enum_TutorialPlayerInputsName> Command, FString DisplayedTip);
    void SetAIsBehaviour(TArray<class AAISpawner*>& Spawners, TEnumAsByte<Enum_TutorialAITypes> Behaviour);
    void CreateHint(FText Tips);
    void ValidCustomCondition(FText Condition);
    void CreateWidgetCustomCondition(FText Condition);
    void EndTutorial();
    void CleanSpawnedWidgets();
    void EndWidgetCounter(FStr_TutorialActionCounters Counter);
    void UpdateWidgetCounter(FStr_TutorialActionCounters Counter);
    void CreateWidgetCounter(FStr_TutorialActionCounters Counter);
    void CreatePhase(FDataTableRowHandle Phase);
    void AIClean();
    void AISpawn();
    void SetPhaseBindings(class ATutorial_Phase_C* Phase);
    void ReceiveBeginPlay();
    void SetNextPhase();
    void StartCurrentPhase();
    void CleanCurrentPhase();
    void OnPhaseEnded(bool AutomaticallySkip);
    void StartTutorial();
    void TutoMode(bool Active);
    void OnLastHit(class UHealthComponent* _healhComponent);
    void ExecuteUbergraph_Tutorial_Manager(int32 EntryPoint);
    void SetTutoMode__DelegateSignature(bool Active);
    void TutorialEnded__DelegateSignature();
    void PhaseCreated__DelegateSignature(class ATutorial_Phase_C* Phase);
}; // Size: 0x378

#endif
