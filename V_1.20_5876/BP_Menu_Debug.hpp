#ifndef UE4SS_SDK_BP_Menu_Debug_HPP
#define UE4SS_SDK_BP_Menu_Debug_HPP

class UBP_Menu_Debug_C : public UDebugMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* ErrorMessage;                                             // 0x0350 (size: 0x8)
    class USCButton* ActivatePerf;                                                    // 0x0358 (size: 0x8)
    class USCButton* AllCheats_Button;                                                // 0x0360 (size: 0x8)
    class USCButton* AutoTakedown;                                                    // 0x0368 (size: 0x8)
    class UBP_Btn_DebugTeleport_C* BP_Btn_Debug;                                      // 0x0370 (size: 0x8)
    class USCButton* Button_235;                                                      // 0x0378 (size: 0x8)
    class USCButton* Button_Add_CheatsUnlockPoint;                                    // 0x0380 (size: 0x8)
    class USCButton* Button_AI;                                                       // 0x0388 (size: 0x8)
    class USCButton* Button_ArenaProgression_Disabled;                                // 0x0390 (size: 0x8)
    class USCButton* Button_ArenaProgression_Enabled;                                 // 0x0398 (size: 0x8)
    class USCButton* Button_FillFocus;                                                // 0x03A0 (size: 0x8)
    class USCButton* Button_Focus_Off;                                                // 0x03A8 (size: 0x8)
    class USCButton* Button_Focus_On;                                                 // 0x03B0 (size: 0x8)
    class USCButton* Button_GenderSwap;                                               // 0x03B8 (size: 0x8)
    class USCButton* Button_HideDeathMenu;                                            // 0x03C0 (size: 0x8)
    class USCButton* Button_HideDebugDisplay;                                         // 0x03C8 (size: 0x8)
    class USCButton* Button_HideHUD;                                                  // 0x03D0 (size: 0x8)
    class USCButton* Button_Load_Backup;                                              // 0x03D8 (size: 0x8)
    class USCButton* Button_LockAllAbilities_1;                                       // 0x03E0 (size: 0x8)
    class USCButton* Button_LockGoals;                                                // 0x03E8 (size: 0x8)
    class USCButton* Button_Multiplier_Add01;                                         // 0x03F0 (size: 0x8)
    class USCButton* Button_Multiplier_Add1;                                          // 0x03F8 (size: 0x8)
    class USCButton* Button_Multiplier_Reset;                                         // 0x0400 (size: 0x8)
    class USCButton* Button_Multiplier_Reset_2;                                       // 0x0408 (size: 0x8)
    class USCButton* Button_Reset_Save_Global;                                        // 0x0410 (size: 0x8)
    class USCButton* Button_Reset_Save_Option;                                        // 0x0418 (size: 0x8)
    class USCButton* Button_Reset_Save_Run;                                           // 0x0420 (size: 0x8)
    class USCButton* Button_ResetDetectiveBoard;                                      // 0x0428 (size: 0x8)
    class USCButton* Button_ResetDiminishing;                                         // 0x0430 (size: 0x8)
    class UTextBlock* Button_ResetDiminishing_Text;                                   // 0x0438 (size: 0x8)
    class USCButton* Button_Save;                                                     // 0x0440 (size: 0x8)
    class USCButton* Button_Save_Backup;                                              // 0x0448 (size: 0x8)
    class USCButton* Button_Score_Add;                                                // 0x0450 (size: 0x8)
    class USCButton* Button_Score_Reset;                                              // 0x0458 (size: 0x8)
    class USCButton* Button_ScoringV2_Base;                                           // 0x0460 (size: 0x8)
    class USCButton* Button_ScoringV2_Boss;                                           // 0x0468 (size: 0x8)
    class USCButton* Button_ScoringV2_Nervous;                                        // 0x0470 (size: 0x8)
    class USCButton* Button_SkipTuto_Disabled;                                        // 0x0478 (size: 0x8)
    class USCButton* Button_SkipTuto_Enabled;                                         // 0x0480 (size: 0x8)
    class USCButton* Button_SpawnWeapon;                                              // 0x0488 (size: 0x8)
    class USCButton* Button_SpectatorMode;                                            // 0x0490 (size: 0x8)
    class USCButton* Button_UnlockAllAbilities_1;                                     // 0x0498 (size: 0x8)
    class USCButton* Button_UnlockAllDetectiveBoard;                                  // 0x04A0 (size: 0x8)
    class USCButton* Button_UnlockFocus;                                              // 0x04A8 (size: 0x8)
    class USCButton* Button_UnlockGoals;                                              // 0x04B0 (size: 0x8)
    class USCButton* ButtonTrailerH1;                                                 // 0x04B8 (size: 0x8)
    class USCButton* ButtonTrailerWuguan;                                             // 0x04C0 (size: 0x8)
    class USCButton* CaptureHardpoint;                                                // 0x04C8 (size: 0x8)
    class USCButton* Change_Language_En;                                              // 0x04D0 (size: 0x8)
    class USCButton* Change_Language_Zh;                                              // 0x04D8 (size: 0x8)
    class UEditableTextBox* CharaName;                                                // 0x04E0 (size: 0x8)
    class UWidgetSwitcher* CheatModeSwitcher;                                         // 0x04E8 (size: 0x8)
    class UCanvasPanel* confirm_reset;                                                // 0x04F0 (size: 0x8)
    class USCButton* CreateProfile;                                                   // 0x04F8 (size: 0x8)
    class UVerticalBox* DebugButtonsContainer;                                        // 0x0500 (size: 0x8)
    class USCButton* DebugInputs;                                                     // 0x0508 (size: 0x8)
    class USCButton* DecreaseAge;                                                     // 0x0510 (size: 0x8)
    class USCButton* DecreaseCharges;                                                 // 0x0518 (size: 0x8)
    class USCButton* DecreaseDT_Button;                                               // 0x0520 (size: 0x8)
    class USCButton* DifficultyButton;                                                // 0x0528 (size: 0x8)
    class UTextBlock* DifficultyText;                                                 // 0x0530 (size: 0x8)
    class USCButton* DisplayCheats;                                                   // 0x0538 (size: 0x8)
    class USCButton* DisplayCredits;                                                  // 0x0540 (size: 0x8)
    class UEditableTextBox* EditAge;                                                  // 0x0548 (size: 0x8)
    class UEditableTextBox* EditDeathCount;                                           // 0x0550 (size: 0x8)
    class USCButton* ForceTakedown;                                                   // 0x0558 (size: 0x8)
    class UScrollBox* ForceTakedownScrollBox;                                         // 0x0560 (size: 0x8)
    class UTextBlock* GenderSwap;                                                     // 0x0568 (size: 0x8)
    class USCButton* Ghost_Off;                                                       // 0x0570 (size: 0x8)
    class USCButton* Ghost_On;                                                        // 0x0578 (size: 0x8)
    class UTextBlock* HIdeDeathMenu_Text;                                             // 0x0580 (size: 0x8)
    class UTextBlock* HIdeHUDText;                                                    // 0x0588 (size: 0x8)
    class UTextBlock* HIdeHUDText_1;                                                  // 0x0590 (size: 0x8)
    class USCButton* IncreaseAge;                                                     // 0x0598 (size: 0x8)
    class USCButton* IncreaseCharges;                                                 // 0x05A0 (size: 0x8)
    class USCButton* IncreaseDT_Button;                                               // 0x05A8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x05B0 (size: 0x8)
    class USCButton* Invincible_Off;                                                  // 0x05B8 (size: 0x8)
    class USCButton* Invincible_On;                                                   // 0x05C0 (size: 0x8)
    class USCButton* KillAllAis;                                                      // 0x05C8 (size: 0x8)
    class USCButton* LevelTeleports;                                                  // 0x05D0 (size: 0x8)
    class USCButton* LoadButton;                                                      // 0x05D8 (size: 0x8)
    class UCanvasPanel* MenuList;                                                     // 0x05E0 (size: 0x8)
    class USCButton* OnePunchMan;                                                     // 0x05E8 (size: 0x8)
    class USCButton* Play;                                                            // 0x05F0 (size: 0x8)
    class USCButton* ResetAge;                                                        // 0x05F8 (size: 0x8)
    class USCButton* ResetCharges;                                                    // 0x0600 (size: 0x8)
    class USCButton* ResetStatsButton;                                                // 0x0608 (size: 0x8)
    class UScrollBox* Saves_Box;                                                      // 0x0610 (size: 0x8)
    class USCButton* SCButton_10000XP;                                                // 0x0618 (size: 0x8)
    class USCButton* SCButton_1000XP;                                                 // 0x0620 (size: 0x8)
    class USCButton* SCButton_100XP;                                                  // 0x0628 (size: 0x8)
    class USCButton* SCButton_No;                                                     // 0x0630 (size: 0x8)
    class USCButton* SCButton_Yes;                                                    // 0x0638 (size: 0x8)
    class UScrollBox* ScrollBox_DebugButtons;                                         // 0x0640 (size: 0x8)
    class USCButton* SetAge;                                                          // 0x0648 (size: 0x8)
    class USCButton* SetCharges;                                                      // 0x0650 (size: 0x8)
    class USCButton* SloMoDisable;                                                    // 0x0658 (size: 0x8)
    class USCButton* SloMoDisable_1;                                                  // 0x0660 (size: 0x8)
    class USCButton* SlomoMode;                                                       // 0x0668 (size: 0x8)
    class UTextBlock* SlomoMode_Text;                                                 // 0x0670 (size: 0x8)
    class UTextBlock* SlowMoDisable_Text;                                             // 0x0678 (size: 0x8)
    class UTextBlock* SlowMoDisable_Text_1;                                           // 0x0680 (size: 0x8)
    class USCButton* StartStopRecording;                                              // 0x0688 (size: 0x8)
    class UTextBlock* StartStopRecordText;                                            // 0x0690 (size: 0x8)
    class USCButton* Structure_Off;                                                   // 0x0698 (size: 0x8)
    class USCButton* Structure_On;                                                    // 0x06A0 (size: 0x8)
    class UVerticalBox* TakedownContainer;                                            // 0x06A8 (size: 0x8)
    class UTextBlock* Text_ErrorMessage;                                              // 0x06B0 (size: 0x8)
    class UTextBlock* TextBlock_GlobalXP;                                             // 0x06B8 (size: 0x8)
    class USCButton* TimeDilation;                                                    // 0x06C0 (size: 0x8)
    class USCButton* ToggleTagDebug;                                                  // 0x06C8 (size: 0x8)
    class UVerticalBox* VerticalBox_56;                                               // 0x06D0 (size: 0x8)
    class UWBP_ControllerDebug_C* ControllerDebug;                                    // 0x06D8 (size: 0x8)
    class UCapsuleComponent* PlayerHitCapsule;                                        // 0x06E0 (size: 0x8)
    TSubclassOf<class UBP_WallTakedownAnimRequest_C> TakedownWallRequest;             // 0x06E8 (size: 0x8)
    TSubclassOf<class UBP_BaseTakedownAnimRequest_C> TakedownRequest;                 // 0x06F0 (size: 0x8)
    TArray<FTakedownDebugAnim> TakedownAnims;                                         // 0x06F8 (size: 0x10)
    class ABP_DebugTeleportManager_C* Level_DebugTeleportManager;                     // 0x0708 (size: 0x8)
    TArray<class AActor*> DestinationActors;                                          // 0x0710 (size: 0x10)
    class UWBP_TimeDilationDebug_C* TimeDilationDebug;                                // 0x0720 (size: 0x8)
    class UWBP_DebugCheatList_C* DebugCheatListWidget;                                // 0x0728 (size: 0x8)
    bool IsEditingTimeDilation;                                                       // 0x0730 (size: 0x1)
    FVector Player Pos Before Debug Sequence;                                         // 0x0734 (size: 0xC)
    int32 Last Played Sequence Index;                                                 // 0x0740 (size: 0x4)
    FName Selected Debug Sequences;                                                   // 0x0744 (size: 0x8)
    TArray<class ULevelSequence*> Trailer Wuguan Sequences;                           // 0x0750 (size: 0x10)
    TArray<class ULevelSequence*> Trailer H1 Sequences;                               // 0x0760 (size: 0x10)
    class UDetectiveTagsDebugguer_C* DetectiveTagsDebugguer;                          // 0x0770 (size: 0x8)
    TArray<class TSubclassOf<ABPWeapon_C>> SpawningWeapons;                           // 0x0778 (size: 0x10)
    float GenderSwapPressedGameTime;                                                  // 0x0788 (size: 0x4)
    class UBPStatsComponent_MainChar_C* FightingCharacterStatsComponentBP;            // 0x0790 (size: 0x8)
    class UBP_PlayerScoringComponent_C* PlayerScoringComponent;                       // 0x0798 (size: 0x8)

    FText Get_DifficultyText_Text_0();
    FText Get_HIdeDeathMenu_Text();
    void Get Debug Sequences(TArray<class ULevelSequence*>& Sequences);
    void Teleport Player To Saved Location Before Sequence();
    void Save Player Location Before Sequence();
    class ALevelSequenceActor* Play Sequence(int32 Index);
    class UBP_Btn_DebugTeleport_C* Add Debug ScrollBox Button(const FAdd Debug ScrollBox ButtonOn Pressed& On Pressed);
    void Display Debug Scrollbox(bool Clear  content);
    void RefreshEditModeDisplay();
    void RefreshDilationOverrideDisplay();
    void RefreshReplayDisplay();
    void InitCheatList();
    FText GetGenderSwapText();
    FText GetFocusText();
    void SetAgeFromTextInput();
    void SetLivesFromTextInput();
    class UStatsComponent* GetStatsComponent();
    FText GetAgeText();
    void FetchStatsValues();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool GetbIsEnabled_OpenSpend();
    ESlateVisibility Get_SpendPointsVisibility();
    FText GetText_GlobalLevel();
    FText GetText_GlobalXP();
    void AddGlobalXP(int32 XPAmount);
    void InitDistributionPoints();
    void OnFail_BD4089354637E5113882DA8405152F53();
    void OnSuccess_BD4089354637E5113882DA8405152F53();
    void CultureSwitchFailed_8740231D4F5470AC42FECEA8CBC9AC42();
    void CultureSwitched_8740231D4F5470AC42FECEA8CBC9AC42();
    void CultureSwitchFailed_0581726E4AAEB841959EDDB1CD020E79();
    void CultureSwitched_0581726E4AAEB841959EDDB1CD020E79();
    void Construct();
    void BndEvt__Button03_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Invicible_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SpectatorMode_K2Node_ComponentBoundEvent_199_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Invincible_Off_K2Node_ComponentBoundEvent_5548_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Guard_On_K2Node_ComponentBoundEvent_2000_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Guard_Off_K2Node_ComponentBoundEvent_2071_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Save_K2Node_ComponentBoundEvent_3237_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_1_K2Node_ComponentBoundEvent_4732_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_5_K2Node_ComponentBoundEvent_5076_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_1000XP_K2Node_ComponentBoundEvent_6943_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CharaName_K2Node_ComponentBoundEvent_531_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__SCButton_63_K2Node_ComponentBoundEvent_708_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_No_K2Node_ComponentBoundEvent_2915_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_Yes_K2Node_ComponentBoundEvent_3005_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ResetStatsButton_K2Node_ComponentBoundEvent_845_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ActivatePerf_K2Node_ComponentBoundEvent_1149_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__AllCheats_Button_K2Node_ComponentBoundEvent_2708_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_5_K2Node_ComponentBoundEvent_623_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SCButton_2_K2Node_ComponentBoundEvent_620_OnButtonClickedEvent__DelegateSignature();
    void AddControllerDebugToviewport();
    void BndEvt__SCButton_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void ActivateCapsuleCollision(bool Activate);
    void BndEvt__BtSetCharacterAge_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtSetLives_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtResetAge_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtLives-_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtLives+_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtAge-_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtAge+_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_DebugMode_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Focus_On_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Focus_Off_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__LevelTeleports_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ButtonPressed(int32 ID);
    void BndEvt__CreateProfile_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__KillAllAis_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DecreaseDT_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IncreaseDT_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void DisplayTimeDilation();
    void BndEvt__TimeDilation_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Reset_Save_Option_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Reset_Save_Run_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Reset_Save_Global_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ONEPUNCHMAN_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Play_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__StartStopRecording_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_ResetDetectiveBoard_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_UnlockAllDetectiveBoard_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Save_Backup_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Load_Backup_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    void onTextCommitedBackUp(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void button clicked(class UBP_Button_LoadSave_C* Button);
    void OnOverrideBackup(class UBP_Button_LoadSave_C* Button);
    void Delete Backup(class UBP_Button_LoadSave_C* Button);
    void BndEvt__SloMoDisable_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SlomoMode_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void DecreaseDT();
    void IncreaseDT();
    void BndEvt__Button_235_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_AI_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonSequences_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
    void On Chose Sequence To Play(int32 ID);
    void On Focus Debug ScrollBox(class USCButton* _buttonFocused);
    void On Finished Debug Sequence();
    void On Chose Play All Sequences(int32 ID);
    void On Finished One Sequence();
    void BndEvt__ButtonTrailerH1_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ToggleTagDebug_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_SloMoDisable_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_HideDeathMenu_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_ONEPUNCHMAN_1_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_SpawnWeapon_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
    void OnPressedSpawnWeapon(int32 ID);
    void BndEvt__BP_Menu_Debug_Button_GenderSwap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_GenderSwap_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature();
    void LaunchGenderSwap();
    void BndEvt__BP_Menu_Debug_Button_UnlockAllAbilities_1_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_LockAllAbilities_1_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Add01_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Add1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Reset_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_HideDebugDisplay_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_UnlockFocus_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_FillFocus_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Add01_1_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Reset_1_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_DisplayCredits_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Change_Language_Zh_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Change_Language_En_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_DisplayCheats_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void OnVisibilityChanged_Event_0(ESlateVisibility InVisibility);
    void BndEvt__BP_Menu_Debug_DifficultyButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Add_CheatsUnlockPoint_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_Multiplier_Reset_2_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ScoringV2_Toggle_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ScoringV2_Base_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ScoringV2_Nervous_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ScoringV2_Boss_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_LockGoals_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_UnlockGoals_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ArenaProgression_Enabled_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_ArenaProgression_Disabled_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_SkipTuto_Disabled_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_Button_SkipTuto_Enabled_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BP_Menu_Debug_CaptureHardpoint_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Debug(int32 EntryPoint);
}; // Size: 0x7A0

#endif
