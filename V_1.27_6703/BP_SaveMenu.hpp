#ifndef UE4SS_SDK_BP_SaveMenu_HPP
#define UE4SS_SDK_BP_SaveMenu_HPP

class UBP_SaveMenu_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* ShowAnimation;                                            // 0x03E0 (size: 0x8)
    class UImage* BlackMask;                                                          // 0x03E8 (size: 0x8)
    class UBP_Menu_Difficulty_C* BP_Menu_Difficulty;                                  // 0x03F0 (size: 0x8)
    class UBP_Menu_NewGameSettings_C* BP_Menu_NewGameSettings;                        // 0x03F8 (size: 0x8)
    class UBP_Menu_Skip_Tuto_C* BP_Menu_Skip_Tuto;                                    // 0x0400 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupNewGame;                               // 0x0408 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupPlayWithoutSaving;                     // 0x0410 (size: 0x8)
    class UBP_SavePanel_C* BP_SavePanel;                                              // 0x0418 (size: 0x8)
    class UBP_SavePanel_C* BP_SavePanel_1;                                            // 0x0420 (size: 0x8)
    class UBP_SavePanel_C* BP_SavePanel_2;                                            // 0x0428 (size: 0x8)
    class UHorizontalBox* SaveHorizontalBox;                                          // 0x0430 (size: 0x8)
    TArray<class UBP_SavePanel_C*> SavePanels;                                        // 0x0438 (size: 0x10)
    int32 PendingSaveIndex;                                                           // 0x0448 (size: 0x4)
    float AnimTriggeredAtTime;                                                        // 0x044C (size: 0x4)
    float AnimDuration;                                                               // 0x0450 (size: 0x4)
    class UDataTable* PS5ActivitiesDT;                                                // 0x0458 (size: 0x8)
    class UBP_SavePanel_C* SelectedPanel;                                             // 0x0460 (size: 0x8)
    TEnumAsByte<EnumSkillProgressionSelection> ProgressionBehavior;                   // 0x0468 (size: 0x1)
    bool FromNewGame;                                                                 // 0x0469 (size: 0x1)
    bool SkipTuto;                                                                    // 0x046A (size: 0x1)
    EGameDifficulty WantedDifficulty;                                                 // 0x046B (size: 0x1)
    FSCGameData SCSaved Data;                                                         // 0x0470 (size: 0x180)

    bool BPE_OnActionButtonPressed();
    void OpenNewGameSettingsMenu();
    void OpenSkipTutoMenu();
    void HasAnySave(bool& HasAnySave);
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
}; // Size: 0x5F0

#endif
