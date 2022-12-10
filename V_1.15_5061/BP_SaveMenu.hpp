#ifndef UE4SS_SDK_BP_SaveMenu_HPP
#define UE4SS_SDK_BP_SaveMenu_HPP

class UBP_SaveMenu_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowAnimation;
    class UImage* BlackMask;
    class UBP_Menu_Difficulty_C* BP_Menu_Difficulty;
    class UBP_Menu_NewGameSettings_C* BP_Menu_NewGameSettings;
    class UBP_Menu_Skip_Tuto_C* BP_Menu_Skip_Tuto;
    class UBP_Menu_Popup_Validation_C* BP_PopupNewGame;
    class UBP_Menu_Popup_Validation_C* BP_PopupPlayWithoutSaving;
    class UBP_SavePanel_C* BP_SavePanel;
    class UBP_SavePanel_C* BP_SavePanel_1;
    class UBP_SavePanel_C* BP_SavePanel_2;
    class UHorizontalBox* SaveHorizontalBox;
    TArray<class UBP_SavePanel_C*> SavePanels;
    int32 PendingSaveIndex;
    float AnimTriggeredAtTime;
    float AnimDuration;
    class UDataTable* PS5ActivitiesDT;
    class UBP_SavePanel_C* SelectedPanel;
    TEnumAsByte<EnumSkillProgressionSelection> ProgressionBehavior;
    bool FromNewGame;
    bool SkipTuto;
    EGameDifficulty WantedDifficulty;
    FSCGameData SCSaved Data;

    bool BPE_OnActionButtonPressed();
    void OpenNewGameSettingsMenu();
    void OpenSkipTutoMenu();
    void HasFinishedTuto(bool& Finished);
    void hasAnySave(bool& hasAnySave);
    void OpenDifficultyMenu(bool FromPop);
    void InitPanels(bool PlayAnim);
    FString GetTrueSaveFilename(FString InSaveFileName);
    void PlaySaveSelectedAnimations(class UBP_SavePanel_C* InSelectedSavePanel, bool bOnSelected, bool bOnNonSelected, bool bForward, float PlaybackSpeed, float& OutTimeToWait);
    void FocusFirstPanel(bool IsNewGame);
    bool BPE_OnBackButtonPressed();
    void Fill Save Panels(bool bInNewGameMode);
    void SavesApplied_F308DB044CD3DD0CCE906A95EC9DBC00();
    void Construct();
    void OnSaveSelectedEvent(class UBP_SavePanel_C* SavePanel, bool NewGame);
    void BndEvt__BP_SaveMenu_BP_PopupNewGame_K2Node_ComponentBoundEvent_0_YesClicked__DelegateSignature();
    void BndEvt__BP_SaveMenu_BP_PopupNewGame_K2Node_ComponentBoundEvent_1_NoClicked__DelegateSignature();
    void OnSaveLoadedEvent(ELoadResult _eLoadResult);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_SaveMenu_BP_PopupPlayWithoutSaving_K2Node_ComponentBoundEvent_2_NoClicked__DelegateSignature();
    void BndEvt__BP_SaveMenu_BP_PopupPlayWithoutSaving_K2Node_ComponentBoundEvent_3_YesClicked__DelegateSignature();
    void BPE_GiveFocus();
    void OnDifficultyChosen(EGameDifficulty difficulty);
    void LaunchNewGameOnSlot();
    void gender selected(bool bMaleSelected);
    void OnSkipTuto(TEnumAsByte<EnumSkipIntroSelection> SkipTuto);
    void OnNewGameSettingsApplied();
    void OnNewGameSettingsCancelled();
    void OnSaveCreated(ELoadResult _eLoadResult);
    void SaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void SaveAfterGenderStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void ExecuteUbergraph_BP_SaveMenu(int32 EntryPoint);
};

#endif
