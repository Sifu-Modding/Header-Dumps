#ifndef UE4SS_SDK_BP_HUD_Arena_HPP
#define UE4SS_SDK_BP_HUD_Arena_HPP

class UBP_HUD_Arena_C : public UHUDUserWidget
{
    class UWidgetAnimation* FadeIn;                                                   // 0x0398 (size: 0x8)
    class UBP_Notif_ArenaNumberTransitionEffect_C* BP_Notif_ArenaNumberTransitionEffect; // 0x03A0 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Min;                                            // 0x03A8 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Min_1;                                          // 0x03B0 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Min_2;                                          // 0x03B8 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_MS;                                             // 0x03C0 (size: 0x8)
    class UTextBlock* Hardpoint_Timer_Second;                                         // 0x03C8 (size: 0x8)
    class UImage* Line;                                                               // 0x03D0 (size: 0x8)
    class UBorder* ObjectiveCartel;                                                   // 0x03D8 (size: 0x8)
    class UIntStatTextBlock* ProgressionCurrentNumber;                                // 0x03E0 (size: 0x8)
    class UTextBlock* TextBlock_Progression;                                          // 0x03E8 (size: 0x8)
    class USizeBox* Timer_SizeBox;                                                    // 0x03F0 (size: 0x8)
    class UBaseArenaObjective* CurrentMasterObjective;                                // 0x03F8 (size: 0x8)
    class AArenaHardpointAreaActor* CurrentHardpointActor;                            // 0x0400 (size: 0x8)
    bool IsInitialized;                                                               // 0x0408 (size: 0x1)
    TArray<TSoftObjectPtr<AAISpawner>> Targets;                                       // 0x0410 (size: 0x10)
    TMap<class ABaseCharacter*, class UUserWidget*> TargetUIMap;                      // 0x0420 (size: 0x50)
    int32 ActualWave;                                                                 // 0x0470 (size: 0x4)
    float DelayBeforeWaveCompleted;                                                   // 0x0474 (size: 0x4)
    int32 K2Node_CustomEvent_WaveCompleted;                                           // 0x0478 (size: 0x4)
    FGeometry K2Node_Event_MyGeometry;                                                // 0x047C (size: 0x38)
    float K2Node_Event_InDeltaTime;                                                   // 0x04B4 (size: 0x4)

    void WaveComplete(int32 bpp__WaveCompleted__pf);
    void UpdateProgression(const FText& bpp__TextWhenLast__pf__const, int32 bpp__Total__pf, int32 bpp__Current__pf);
    void UpdateNTargetsVisibility(bool bpp__TargetsVisible__pf);
    void UpdateHUDScale();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void SetTimerText(const FText& bpp__InText__pf__const);
    void SetTargetIndicatorsVisibility(bool bpp__Show__pf);
    void RefreshTargetIndicator(const class ABaseCharacter*& bpp__CurrentTarget__pf__const);
    void RefreshAllTargetIndicators(TArray<TSoftObjectPtr<AAISpawner>>& bpp__Targets__pf);
    void On Wave Started(int32 bpp___iWaveIndex__pf);
    void OnTargetSpawned(class ABaseCharacter* bpp__Character__pf);
    void OnTargetsCounterIncremented(class UAchievementUnlockCondition* bpp__Objective__pf);
    void OnTargetDownStateChanged(class UCharacterHealthComponent* bpp___healhComponent__pf, EDownState bpp___state__pf);
    void OnStopCapturing();
    void OnStartCapturing(float bpp__CurrentScore__pf);
    void OnScoreChanged(int32 bpp___newScore__pf);
    void OnPlayerPawnReady();
    void OnHardpointCatpured(FHardpointInfos& bpp__HardpointInfo__pf, int32 bpp__ChallengeIndex__pf);
    bool IsArenaMapParkour();
    void InitializeForWaveObjective();
    void InitializeForNTargetsObjective();
    void InitializeForHardpointObjective(class UArenaHardpointsObjective* bpp__HardpointObjective__pf);
    void Initialize();
    void ExecuteUbergraph_BP_HUD_Arena_1(int32 bpp__EntryPoint__pf);
    void OnWaveRelatedEvent__DelegateSignature(int32 bpp___iWaveIndex__pf);
    void OnScoreChanged__DelegateSignature(int32 bpp___newScore__pf);
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    void OnDownStateChanged__DelegateSignature(class UCharacterHealthComponent* bpp___healhComponent__pf, EDownState bpp___state__pf);
    void ObjectiveDynMulticastDelegate__DelegateSignature(class UAchievementUnlockCondition* bpp__Objective__pf);
    void AISpawnedDynamic__DelegateSignature(class ABaseCharacter* bpp__SpawnedCharacter__pf);
}; // Size: 0x4B8

#endif
