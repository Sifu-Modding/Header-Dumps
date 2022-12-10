#ifndef UE4SS_SDK_BP_HUD_Arena_HPP
#define UE4SS_SDK_BP_HUD_Arena_HPP

class UBP_HUD_Arena_C : public UHUDUserWidget
{
    class UWidgetAnimation* AddScore;
    class UWidgetAnimation* TimerCountDown;
    class UWidgetAnimation* TimerMilestone;
    class UTextBlock* ActualWaveText;
    class UTextBlock* Hardpoint_Timer;
    class UTextBlock* Hardpoint_Timer_1;
    class UImage* Image_45;
    class UImage* Image_156;
    class UTextBlock* MaxWaveText;
    class UIntStatTextBlock* NTargetsCurrentNumber;
    class UIntStatTextBlock* NTargetsTotalNumber;
    class UVerticalBox* Objective_Hardpoint;
    class UHorizontalBox* Objective_Wave;
    class UHorizontalBox* ObjectiveN_Targets;
    class UWidgetSwitcher* ObjectiveWidgetSwitcher;
    class UTextBlock* ScoreText;
    class UTextBlock* ScoreValue;
    class UTextBlock* ScoreValueAdd;
    class UBaseArenaObjective* CurrentMasterObjective;
    UIArenaObjectiveType ObjectiveType;
    class AArenaHardpointAreaActor* CurrentHardpointActor;
    int32 NbHardpointsCaptured;
    float TimerRemaining;
    bool IsTimerVisible;
    bool 30SecVFXDone;
    bool 10SecSFXDone;
    bool IsInitialized;
    bool 3SecSFXDone;
    bool EndSFXDone;
    TArray<TSoftObjectPtr<AAISpawner>> Targets;
    TMap<class ABaseCharacter*, class UUserWidget*> TargetUIMap;
    int32 ActualWave;
    FBP_HUD_Arena_CTemp_delegate_Variable Temp_delegate_Variable;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    FGeometry K2Node_Event_MyGeometry;
    float K2Node_Event_InDeltaTime;
    FString CallFunc_FormatTime_OutString;
    TArray<FAkExternalSourceInfo> Temp_struct_Variable;
    TArray<FAkExternalSourceInfo> Temp_struct_Variable_1;
    FBP_HUD_Arena_CTemp_delegate_Variable_1 Temp_delegate_Variable_1;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    TArray<FAkExternalSourceInfo> Temp_struct_Variable_2;
    FBP_HUD_Arena_CTemp_delegate_Variable_2 Temp_delegate_Variable_2;
    void OnAkPostEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);

    void OnTargetDown__DelegateSignature(class AAISpawner* bpp__TargetDown__pf);
    void OnPlayerPawnReady__DelegateSignature();
    void Tick(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
    void PlayerReady();
    void OnWaveCompleted(int32 bpp___iWaveIndex__pf);
    void OnTargetSpawned(class ABaseCharacter* bpp__Character__pf);
    void OnTargetsCounterIncremented(class UAchievementUnlockCondition* bpp__Objective__pf);
    void OnTargetDown(class AAISpawner* bpp__Target__pf);
    void OnStopCapturing();
    void OnStartCapturing(float bpp__CurrentScore__pf);
    void OnScoreChanged(int32 bpp___newScore__pf);
    void OnHardpointCatpured(FHardpointInfos& bpp__HardpointInfo__pf, int32 bpp__ChallengeIndex__pf);
    void InitializeForWaveObjective();
    void InitializeForNTargetsObjective();
    void InitializeForHardpointObjective(class UArenaHardpointsObjective* bpp__HardpointObjective__pf);
    void Initialize();
    void OnWaveAndSituationComplete__DelegateSignature(int32 bpp___iWaveIndex__pf);
    void OnScoreChanged__DelegateSignature(int32 bpp___newScore__pf);
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    void ObjectiveDynMulticastDelegate__DelegateSignature(class UAchievementUnlockCondition* bpp__Objective__pf);
    void AISpawnedDynamic__DelegateSignature(class ABaseCharacter* bpp__SpawnedCharacter__pf);
};

#endif
