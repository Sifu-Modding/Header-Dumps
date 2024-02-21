#ifndef UE4SS_SDK_FightingPlayerControllerBP_HPP
#define UE4SS_SDK_FightingPlayerControllerBP_HPP

class AFightingPlayerControllerBP_C : public AFightingPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1420 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x1428 (size: 0x8)
    class UBP_HUD_C* PlayerHud;                                                       // 0x1430 (size: 0x8)
    class ABP_FightingPlayer_C* BP_FightingPlayer;                                    // 0x1438 (size: 0x8)
    TSoftObjectPtr<UBP_HUD_ArenaContainer_C> PlayerHudArena;                          // 0x1440 (size: 0x28)
    class UBP_Menu_Debug_C* DebugMenu;                                                // 0x1468 (size: 0x8)
    FFightingPlayerControllerBP_CFightingPlayerRespawn FightingPlayerRespawn;         // 0x1470 (size: 0x10)
    void FightingPlayerRespawn();
    class UBP_HUD_Tuto_C* PlayerHUDTuto;                                              // 0x1480 (size: 0x8)
    FFightingPlayerControllerBP_CPawnInitialized PawnInitialized;                     // 0x1488 (size: 0x10)
    void PawnInitialized();
    FInteractionTextStruct InteractionTextStruct;                                     // 0x1498 (size: 0x38)
    class UBP_HUD_AutoSave_C* AutoSaveWidget;                                         // 0x14D0 (size: 0x8)
    class UInteractionObjectComponent* InteractionObjectComponent;                    // 0x14D8 (size: 0x8)
    class UWidget* PermanentHUD;                                                      // 0x14E0 (size: 0x8)
    class UGenericErrorPopupWidget* PopupWidget;                                      // 0x14E8 (size: 0x8)
    FText InteractionLockedText;                                                      // 0x14F0 (size: 0x18)
    bool InteractionUseLockedText;                                                    // 0x1508 (size: 0x1)
    FFightingPlayerControllerBP_CRestartAsked RestartAsked;                           // 0x1510 (size: 0x10)
    void RestartAsked();
    class ABP_PostCardScreenActor_C* EndPostCardEffet;                                // 0x1520 (size: 0x8)
    FFightingPlayerControllerBP_CSkillTreeAssigned SkillTreeAssigned;                 // 0x1528 (size: 0x10)
    void SkillTreeAssigned();
    class UNEW_BP_HUD_Tutorial_C* NewHUDTutorial;                                     // 0x1538 (size: 0x8)
    FFightingPlayerControllerBP_CSkipToNextTutorialPhase SkipToNextTutorialPhase;     // 0x1540 (size: 0x10)
    void SkipToNextTutorialPhase();
    bool DebugHideDeathMenu;                                                          // 0x1550 (size: 0x1)
    TArray<FMenuRequestStructure> InGameMenuRequests;                                 // 0x1558 (size: 0x10)
    bool HideFocus;                                                                   // 0x1568 (size: 0x1)
    bool HideScoring;                                                                 // 0x1569 (size: 0x1)
    class UBP_HUD_TrainingRoom_C* HUDTraining;                                        // 0x1570 (size: 0x8)
    class UBP_HUD_ReplayRecording_C* ReplayRecordingWidget;                           // 0x1578 (size: 0x8)

    void GetMenuRequests(bool bConsume, TArray<FMenuRequestStructure>& OutList);
    void ForceHideScoring(bool Hide);
    void ForceHideFocus(bool Hide);
    void GetInteractionLockedText(FText& Text);
    void GetUseLockedText(bool& use);
    void GetInteractionText(FInteractionTextStruct& Text);
    bool ShouldPlayLifeAudio();
    void TryToDisableScoring();
    float BPE_GetMaxAchievementProgress(FString _achievementId);
    void BPE_GetActivitiesState(TArray<FString>& _activitiesState, TArray<FString>& _tasksToStart, TArray<FString>& _tasksToEnd, TArray<FString>& _subTasks);
    void DestroyTrainingRoomWidget();
    void CreateTrainingRoomWidget(class UBP_HUD_TrainingRoom_C*& HUDTraining);
    void ForceHideHealthChanged();
    void DestroyTutorialWidget();
    void CreateTutorialWidget(class UNEW_BP_HUD_Tutorial_C*& HUD);
    void SpawnEndScreenEffect(FTransform Transform, class ABP_PostCardScreenActor_C*& PostCardOut);
    class UGenericErrorPopupWidget* BPE_CreatePopupWidget();
    class UGenericErrorPopupWidget* BPE_GetPopupWidget();
    void ChangeInteractionText(FInteractionTextStruct NewInteractionText);
    void CloseDebugMenu();
    void DegubMenuGestion();
    void InpActEvt_O_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Home_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_F7_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_NumPadZero_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_A_AccentGrave_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_0(FKey Key);
    void BPE_OnSetInteractiveObjectComponent(class UInteractionObjectComponent* _newInteractionObjectComponent);
    void CreateTuto();
    void DestroyTuto();
    void BPE_MenuEvent();
    void BPE_PawnInitialized();
    void BPE_LeaveGame();
    void BPE_ToggleDebugMenu();
    void BPE_GameInitialized(bool bHideLoadingScreen);
    void OnTextChanged_Event_0();
    void Fade Sound();
    void BPE_RestartAsked();
    void UpdateInteractionText();
    void UpdateInteractionButtonVisibility();
    void ReceiveBeginPlay();
    void NotifySkillTreeAssigned();
    void SetMenuRequests(const TArray<FMenuRequestStructure>& InRequestList, const bool bOpenMenu);
    void OnOptionChanged_Event(EGameOptionTypes eGameOptionType);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnPawnInitialized();
    void ExecuteUbergraph_FightingPlayerControllerBP(int32 EntryPoint);
    void SkipToNextTutorialPhase__DelegateSignature();
    void SkillTreeAssigned__DelegateSignature();
    void RestartAsked__DelegateSignature();
    void PawnInitialized__DelegateSignature();
    void FightingPlayerRespawn__DelegateSignature();
}; // Size: 0x1580

#endif
