#ifndef UE4SS_SDK_BP_HUD_Arena_HPP
#define UE4SS_SDK_BP_HUD_Arena_HPP

class UBP_HUD_Arena_C : public UHUDArena
{
    class UWidgetAnimation* FadeIn;                                                   // 0x03D0 (size: 0x8)
    class UBP_Notif_ArenaNumberTransitionEffect_C* BP_Notif_ArenaNumberTransitionEffect; // 0x03D8 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Min;                                            // 0x03E0 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_MS;                                             // 0x03E8 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Second;                                         // 0x03F0 (size: 0x8)
    class UImage* Line;                                                               // 0x03F8 (size: 0x8)
    class UBorder* ObjectiveCartel;                                                   // 0x0400 (size: 0x8)
    class UIntStatTextBlock* ProgressionCurrentNumber;                                // 0x0408 (size: 0x8)
    class UTextBlock* TextBlock_Progression;                                          // 0x0410 (size: 0x8)
    class USizeBox* Timer_SizeBox;                                                    // 0x0418 (size: 0x8)
    class UBaseArenaObjective* CurrentMasterObjective;                                // 0x0420 (size: 0x8)
    class AArenaHardpointAreaActor* CurrentHardpointActor;                            // 0x0428 (size: 0x8)
    bool IsInitialized;                                                               // 0x0430 (size: 0x1)
    TArray<TSoftObjectPtr<AAISpawner>> Targets;                                       // 0x0438 (size: 0x10)
    TMap<class ABaseCharacter*, class UHUDObjectiveIndicator*> TargetUIMap;           // 0x0448 (size: 0x50)
    int32 ActualWave;                                                                 // 0x0498 (size: 0x4)
    float DelayBeforeWaveCompleted;                                                   // 0x049C (size: 0x4)
    TArray<TSoftClassPtr<UArenaChallengeDescription>> SpecificChallenges;             // 0x04A0 (size: 0x10)
    TSoftClassPtr<UArenaChallengeDescription> SpecificChallenges_RRMarathon;          // 0x04B0 (size: 0x28)
    bool Wave_IsRedRoomMarathonChall;                                                 // 0x04D8 (size: 0x1)
    bool Wave_IsSpecialChall;                                                         // 0x04D9 (size: 0x1)
    TArray<class UClass*> SpecificChallenges_HardRef;                                 // 0x04E0 (size: 0x10)
    bool Temp_bool_Variable;                                                          // 0x04F0 (size: 0x1)
    ESlateVisibility Temp_byte_Variable;                                              // 0x04F1 (size: 0x1)
    ESlateVisibility Temp_byte_Variable_1;                                            // 0x04F2 (size: 0x1)
    int32 K2Node_CustomEvent_WaveCompleted;                                           // 0x04F4 (size: 0x4)
    bool K2Node_Event__bShow;                                                         // 0x04F8 (size: 0x1)
    TArray<class UTextBlock*> K2Node_MakeArray_Array;                                 // 0x0500 (size: 0x10)
    ESlateVisibility K2Node_Select_Default;                                           // 0x0510 (size: 0x1)

    void WaveComplete(int32 bpp__WaveCompleted__pf);
    void UpdateProgression(const FText& bpp__TextWhenLast__pf__const, int32 bpp__Total__pf, int32 bpp__Current__pf);
    void UpdateHUDScale();
    void SetupTargetIndicator(const class ABaseCharacter*& bpp__CurrentTarget__pf__const);
    void SetupAllTargetIndicators(TArray<TSoftObjectPtr<AAISpawner>>& bpp__Targets__pf);
    void SetTimerText(const FText& bpp__InText__pf__const);
    void SetTargetIndicatorsVisibility(bool bpp__Show__pf);
    void On Wave Started(int32 bpp___iWaveIndex__pf);
    void OnTargetSpawned(class ABaseCharacter* bpp__Character__pf);
    void OnTargetsCounterIncremented(class UAchievementUnlockCondition* bpp__Objective__pf);
    void OnTargetDown(class UCharacterHealthComponent* bpp___healhComponent__pf, EDownState bpp___state__pf);
    void OnStopCapturing();
    void OnStartCapturing(float bpp__CurrentScore__pf);
    void OnScoreChanged(int32 bpp___newScore__pf);
    void OnPlayerPawnReady();
    void OnInitialized();
    void OnHardpointCatpured(FHardpointInfos& bpp__HardpointInfo__pf, int32 bpp__ChallengeIndex__pf);
    bool IsArenaMapParkour();
    void InitializeForWaveObjective();
    void InitializeForNTargetsObjective();
    void InitializeForHardpointObjective(class UArenaHardpointsObjective* bpp__HardpointObjective__pf);
    void Initialize();
    void GetIndicatorForTarget(const class ABaseCharacter*& bpp__Target__pf__const, class UHUDObjectiveIndicator*& bpp__Result__pf);
    void ExecuteUbergraph_BP_HUD_Arena_2(int32 bpp__EntryPoint__pf);
    void ClearTargetIndicator(const class ABaseCharacter*& bpp__Target__pf__const);
    void BPE_ShowChrono(bool bpp___bShow__pf);
    void OnWaveRelatedEvent__DelegateSignature(int32 bpp___iWaveIndex__pf);
    void OnScoreChanged__DelegateSignature(int32 bpp___newScore__pf);
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    void OnDownStateChanged__DelegateSignature(class UCharacterHealthComponent* bpp___healhComponent__pf, EDownState bpp___state__pf);
    void ObjectiveDynMulticastDelegate__DelegateSignature(class UAchievementUnlockCondition* bpp__Objective__pf);
    void AISpawnedDynamic__DelegateSignature(class ABaseCharacter* bpp__SpawnedCharacter__pf);
}; // Size: 0x518

#endif
