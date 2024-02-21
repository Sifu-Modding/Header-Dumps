#ifndef UE4SS_SDK_BP_Menu_Options_Feats_HPP
#define UE4SS_SDK_BP_Menu_Options_Feats_HPP

class UBP_Menu_Options_Feats_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UScrollBox* ActiveModifiers;                                                // 0x08F0 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* ActiveModifiersBtn;                            // 0x08F8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0900 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* BP_Btn_Simplified_Modifiers;                // 0x0908 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* BP_Btn_Simplified_Modifiers_2;              // 0x0910 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* BP_Btn_Simplified_Modifiers_4;              // 0x0918 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* BP_Btn_Simplified_Modifiers_6;              // 0x0920 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* BP_Btn_Simplified_Modifiers_7;              // 0x0928 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;                      // 0x0930 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0938 (size: 0x8)
    class UTextBlock* BtnText_1;                                                      // 0x0940 (size: 0x8)
    class UTextBlock* BtnText_2;                                                      // 0x0948 (size: 0x8)
    class UTextBlock* BtnText_4;                                                      // 0x0950 (size: 0x8)
    class UTextBlock* BtnText_5;                                                      // 0x0958 (size: 0x8)
    class UTextBlock* BtnText_6;                                                      // 0x0960 (size: 0x8)
    class UVerticalBox* Character;                                                    // 0x0968 (size: 0x8)
    class UVerticalBox* Character_ModifierBox;                                        // 0x0970 (size: 0x8)
    class USizeBox* DescriptionSizeBox;                                               // 0x0978 (size: 0x8)
    class UBP_Btn_Feat_C* DriverOutfit;                                               // 0x0980 (size: 0x8)
    class UVerticalBox* Enemies_ModifierBox_1;                                        // 0x0988 (size: 0x8)
    class UBP_Btn_Feat_C* EnforcerOutfit;                                             // 0x0990 (size: 0x8)
    class UBP_Btn_Feat_C* FriendlyFireOnAvoid;                                        // 0x0998 (size: 0x8)
    class UBP_Btn_Feat_C* FullParryFajar;                                             // 0x09A0 (size: 0x8)
    class UBP_Btn_Feat_C* FullParryJinfeng;                                           // 0x09A8 (size: 0x8)
    class UBP_Btn_Feat_C* FullParryKuroki;                                            // 0x09B0 (size: 0x8)
    class UBP_Btn_Feat_C* FullParrySean;                                              // 0x09B8 (size: 0x8)
    class UBP_Btn_Feat_C* FullParryYang;                                              // 0x09C0 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* General;                                       // 0x09C8 (size: 0x8)
    class UVerticalBox* Global_VB_1;                                                  // 0x09D0 (size: 0x8)
    class UBP_Btn_Feat_C* H1DamageLess_1;                                             // 0x09D8 (size: 0x8)
    class UBP_Btn_Feat_C* H1HighScoreHigh;                                            // 0x09E0 (size: 0x8)
    class UBP_Btn_Feat_C* H1HighScoreLow;                                             // 0x09E8 (size: 0x8)
    class UBP_Btn_Feat_C* H1HighScoreMiddle;                                          // 0x09F0 (size: 0x8)
    class UBP_Btn_Feat_C* H1ScoreMult;                                                // 0x09F8 (size: 0x8)
    class UBP_Btn_Feat_C* H1Sneak;                                                    // 0x0A00 (size: 0x8)
    class UBP_Btn_Feat_C* H1ThrowStrike;                                              // 0x0A08 (size: 0x8)
    class UBP_Btn_Feat_C* H1TimeTrial;                                                // 0x0A10 (size: 0x8)
    class UBP_Btn_Feat_C* H2ClubMaster;                                               // 0x0A18 (size: 0x8)
    class UBP_Btn_Feat_C* H2DamageLess;                                               // 0x0A20 (size: 0x8)
    class UBP_Btn_Feat_C* H2DJ;                                                       // 0x0A28 (size: 0x8)
    class UBP_Btn_Feat_C* H2HighScoreHigh;                                            // 0x0A30 (size: 0x8)
    class UBP_Btn_Feat_C* H2HighScoreLow;                                             // 0x0A38 (size: 0x8)
    class UBP_Btn_Feat_C* H2HighScoreMiddle;                                          // 0x0A40 (size: 0x8)
    class UBP_Btn_Feat_C* H2ScoreMult;                                                // 0x0A48 (size: 0x8)
    class UBP_Btn_Feat_C* H2TimeTrial;                                                // 0x0A50 (size: 0x8)
    class UBP_Btn_Feat_C* H3Blade;                                                    // 0x0A58 (size: 0x8)
    class UBP_Btn_Feat_C* H3DamageLess;                                               // 0x0A60 (size: 0x8)
    class UBP_Btn_Feat_C* H3HighScoreHigh;                                            // 0x0A68 (size: 0x8)
    class UBP_Btn_Feat_C* H3HighScoreLow;                                             // 0x0A70 (size: 0x8)
    class UBP_Btn_Feat_C* H3HighScoreMiddle;                                          // 0x0A78 (size: 0x8)
    class UBP_Btn_Feat_C* H3Panels;                                                   // 0x0A80 (size: 0x8)
    class UBP_Btn_Feat_C* H3Pendulum;                                                 // 0x0A88 (size: 0x8)
    class UBP_Btn_Feat_C* H3ScoreMult;                                                // 0x0A90 (size: 0x8)
    class UBP_Btn_Feat_C* H3TimeTrial;                                                // 0x0A98 (size: 0x8)
    class UBP_Btn_Feat_C* H4Backfist;                                                 // 0x0AA0 (size: 0x8)
    class UBP_Btn_Feat_C* H4DamageLess_1;                                             // 0x0AA8 (size: 0x8)
    class UBP_Btn_Feat_C* H4Elevator;                                                 // 0x0AB0 (size: 0x8)
    class UBP_Btn_Feat_C* H4HighScoreHigh;                                            // 0x0AB8 (size: 0x8)
    class UBP_Btn_Feat_C* H4HighScoreLow;                                             // 0x0AC0 (size: 0x8)
    class UBP_Btn_Feat_C* H4HighScoreMiddle;                                          // 0x0AC8 (size: 0x8)
    class UBP_Btn_Feat_C* H4ScoreMult;                                                // 0x0AD0 (size: 0x8)
    class UBP_Btn_Feat_C* H4TimeTrial;                                                // 0x0AD8 (size: 0x8)
    class UBP_Btn_Feat_C* H4Trip;                                                     // 0x0AE0 (size: 0x8)
    class UBP_Btn_Feat_C* H5Chef;                                                     // 0x0AE8 (size: 0x8)
    class UBP_Btn_Feat_C* H5DamageLess;                                               // 0x0AF0 (size: 0x8)
    class UBP_Btn_Feat_C* H5HighScoreHigh;                                            // 0x0AF8 (size: 0x8)
    class UBP_Btn_Feat_C* H5HighScoreLow;                                             // 0x0B00 (size: 0x8)
    class UBP_Btn_Feat_C* H5HighScoreMiddle;                                          // 0x0B08 (size: 0x8)
    class UBP_Btn_Feat_C* H5ScoreMult;                                                // 0x0B10 (size: 0x8)
    class UBP_Btn_Feat_C* H5TimeTrial;                                                // 0x0B18 (size: 0x8)
    class UBP_Btn_Feat_C* H5Vanilla;                                                  // 0x0B20 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Hideout1;                                      // 0x0B28 (size: 0x8)
    class UVerticalBox* Hideout1_VB;                                                  // 0x0B30 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Hideout2;                                      // 0x0B38 (size: 0x8)
    class UVerticalBox* Hideout2_VB;                                                  // 0x0B40 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Hideout3;                                      // 0x0B48 (size: 0x8)
    class UVerticalBox* Hideout3_VB;                                                  // 0x0B50 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Hideout4;                                      // 0x0B58 (size: 0x8)
    class UVerticalBox* Hideout4_VB;                                                  // 0x0B60 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Hideout5;                                      // 0x0B68 (size: 0x8)
    class UVerticalBox* Hideout5_VB;                                                  // 0x0B70 (size: 0x8)
    class UBP_Btn_Feat_C* HighScoreTotalLow;                                          // 0x0B78 (size: 0x8)
    class UBP_Btn_Feat_C* HighScoreTotalMiddle;                                       // 0x0B80 (size: 0x8)
    class UImage* IconTips_1;                                                         // 0x0B88 (size: 0x8)
    class UImage* IconTips_2;                                                         // 0x0B90 (size: 0x8)
    class UImage* IconTips_3;                                                         // 0x0B98 (size: 0x8)
    class UImage* IconTips_4;                                                         // 0x0BA0 (size: 0x8)
    class UImage* IconTips_5;                                                         // 0x0BA8 (size: 0x8)
    class UImage* IconTips_6;                                                         // 0x0BB0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0BB8 (size: 0x8)
    class UImage* LineLeft;                                                           // 0x0BC0 (size: 0x8)
    class UImage* LineLeft_1;                                                         // 0x0BC8 (size: 0x8)
    class UImage* LineLeft_2;                                                         // 0x0BD0 (size: 0x8)
    class UImage* LineLeft_3;                                                         // 0x0BD8 (size: 0x8)
    class UImage* LineLeft_4;                                                         // 0x0BE0 (size: 0x8)
    class UImage* LineLeft_5;                                                         // 0x0BE8 (size: 0x8)
    class UImage* LineRight;                                                          // 0x0BF0 (size: 0x8)
    class UImage* LineRight_1;                                                        // 0x0BF8 (size: 0x8)
    class UImage* LineRight_2;                                                        // 0x0C00 (size: 0x8)
    class UImage* LineRight_3;                                                        // 0x0C08 (size: 0x8)
    class UImage* LineRight_4;                                                        // 0x0C10 (size: 0x8)
    class UImage* LineRight_5;                                                        // 0x0C18 (size: 0x8)
    class UImage* LineTips;                                                           // 0x0C20 (size: 0x8)
    class UBP_Btn_Feat_C* LowAvoid;                                                   // 0x0C28 (size: 0x8)
    class UWidgetSwitcher* MasterSwitcher;                                            // 0x0C30 (size: 0x8)
    class UVerticalBox* Miscellaneous_ModifierBox;                                    // 0x0C38 (size: 0x8)
    class UVerticalBox* Moveset_ModifierBox;                                          // 0x0C40 (size: 0x8)
    class UCanvasPanel* Popup;                                                        // 0x0C48 (size: 0x8)
    class UBP_Btn_Feat_C* ReplayEditor_Record;                                        // 0x0C50 (size: 0x8)
    class UBP_Btn_Feat_C* ReplayEditor_Replay;                                        // 0x0C58 (size: 0x8)
    class UBP_Btn_Feat_C* ReplayEditor_Replay_SwitchOnly;                             // 0x0C60 (size: 0x8)
    class UBP_Btn_Feat_C* ScoreHoldMax;                                               // 0x0C68 (size: 0x8)
    class UBP_Btn_Feat_C* ScoreIncreaseFast;                                          // 0x0C70 (size: 0x8)
    class UBP_Btn_Feat_C* ScoreMaxFast;                                               // 0x0C78 (size: 0x8)
    class UScrollBox* ScrollBoxCat0;                                                  // 0x0C80 (size: 0x8)
    class UScrollBox* ScrollBoxCat1;                                                  // 0x0C88 (size: 0x8)
    class UScrollBox* ScrollBoxCat2;                                                  // 0x0C90 (size: 0x8)
    class UScrollBox* ScrollBoxCat3;                                                  // 0x0C98 (size: 0x8)
    class UScrollBox* ScrollBoxCat4;                                                  // 0x0CA0 (size: 0x8)
    class UScrollBox* ScrollBoxGlobal;                                                // 0x0CA8 (size: 0x8)
    class UImage* Separator;                                                          // 0x0CB0 (size: 0x8)
    class UBP_Btn_Feat_C* SkillsPerma;                                                // 0x0CB8 (size: 0x8)
    class UWidgetSwitcher* Switcher_Custom;                                           // 0x0CC0 (size: 0x8)
    class UWidgetSwitcher* Switcher_Goals;                                            // 0x0CC8 (size: 0x8)
    class UWidgetSwitcher* Switcher_Modifiers;                                        // 0x0CD0 (size: 0x8)
    class UWidgetSwitcher* Switcher_Tips;                                             // 0x0CD8 (size: 0x8)
    class UWidgetSwitcher* SwitcherFeats;                                             // 0x0CE0 (size: 0x8)
    class UTextBlock* TextTips_1;                                                     // 0x0CE8 (size: 0x8)
    class UTextBlock* TextTips_2;                                                     // 0x0CF0 (size: 0x8)
    class UTextBlock* TextTips_3;                                                     // 0x0CF8 (size: 0x8)
    class UTextBlock* TextTips_4;                                                     // 0x0D00 (size: 0x8)
    class UTextBlock* TextTips_5;                                                     // 0x0D08 (size: 0x8)
    class UTextBlock* TextTips_6;                                                     // 0x0D10 (size: 0x8)
    class UTextBlock* TextTips_7;                                                     // 0x0D18 (size: 0x8)
    class UTextBlock* TextTips_8;                                                     // 0x0D20 (size: 0x8)
    class UTextBlock* TextTips_9;                                                     // 0x0D28 (size: 0x8)
    class UTextBlock* TextTips_10;                                                    // 0x0D30 (size: 0x8)
    class UTextBlock* TextTips_11;                                                    // 0x0D38 (size: 0x8)
    class UTextBlock* TextTips_12;                                                    // 0x0D40 (size: 0x8)
    class UTextBlock* Title_Character;                                                // 0x0D48 (size: 0x8)
    class UTextBlock* Title_Enemies;                                                  // 0x0D50 (size: 0x8)
    class UTextBlock* Title_Misc;                                                     // 0x0D58 (size: 0x8)
    class UTextBlock* Title_Moveset;                                                  // 0x0D60 (size: 0x8)
    class UBP_Btn_Feat_C* TrophyFocus;                                                // 0x0D68 (size: 0x8)
    class UBP_Btn_Feat_C* TrophyMaxAge;                                               // 0x0D70 (size: 0x8)
    class UBP_Btn_Feat_C* TrophyTimedTakedown;                                        // 0x0D78 (size: 0x8)
    class UBP_Btn_Feat_C* TrophyWideStrike;                                           // 0x0D80 (size: 0x8)
    class UBP_Btn_Feat_C* UnlockGoals;                                                // 0x0D88 (size: 0x8)
    class UVerticalBox* VBCategories;                                                 // 0x0D90 (size: 0x8)
    class UVerticalBox* VerticalBox_ActiveModifiers;                                  // 0x0D98 (size: 0x8)
    class UBP_Btn_Feat_C* WingChunDarkOutfit;                                         // 0x0DA0 (size: 0x8)
    class UBP_Btn_Feat_C* WingChunLightOutfit;                                        // 0x0DA8 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0DB0 (size: 0x8)
    bool AudioApplied;                                                                // 0x0DB8 (size: 0x1)
    class UBP_Btn_SpinBox_C* FocusedOption;                                           // 0x0DC0 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0DC8 (size: 0x50)
    bool IsFocusScrollBar;                                                            // 0x0E18 (size: 0x1)
    TArray<class UWidget*> AllCheats;                                                 // 0x0E20 (size: 0x10)
    class UBP_Btn_SpinBox_Modifiers_C* SpinboxToUnlock;                               // 0x0E30 (size: 0x8)
    TArray<EFocusCause> AllowedCategoryFocusCause;                                    // 0x0E38 (size: 0x10)
    bool FromOptionsMenu;                                                             // 0x0E48 (size: 0x1)
    class UVerticalBox* FirstVerticalBox;                                             // 0x0E50 (size: 0x8)
    class UVerticalBox* LastVerticalBox;                                              // 0x0E58 (size: 0x8)
    class UBP_Btn_Simplified_Modifiers_C* LastButton;                                 // 0x0E60 (size: 0x8)
    FBP_Menu_Options_Feats_CToggleGoals ToggleGoals;                                  // 0x0E68 (size: 0x10)
    void ToggleGoals();
    FGameplayTagContainer CurrentMapTags;                                             // 0x0E78 (size: 0x20)
    bool AtLeastOneVisibleModifier;                                                   // 0x0E98 (size: 0x1)

    void UpdateActiveModifierButton();
    void AddStartingAgeFakeModifier(bool& ItemAdded);
    void UpdateActiveModifiersScrollbar();
    void SetTips(bool FocusOnModifiers);
    void IsArenaMenuMap(bool& Condition);
    bool BPE_OnInputAction(InputAction eAction);
    void UpdateActiveModifiersLayout();
    void InitializeActiveModifiers();
    void InitializeFeatButtons();
    void FindButtonFromTagName(FString TagName, int32& Array Index, class UBP_Btn_Feat_C*& AsBP Btn Feat);
    void OnUpdateModeChange();
    void GetCurrentLevelHideoutIndex(int32& HideoutIndex);
    class UWidget* LoopFromBottomCategory(EUINavigation Navigation);
    class UWidget* LoopFromTopCategory(EUINavigation Navigation);
    void ClearChildrenCategoryGoals(class UVerticalBox* VerticalBox);
    void PopulateFeats();
    void ScrollToTop();
    void SortAllAchievedGoals();
    void SortAchievedGoals(class UVerticalBox* GoalsCategory);
    void SetDarkmode(bool IsDarkMode);
    void ResetCategoriesState();
    void FocusOnCategoryAtIndex(int32 Index);
    void FocusOnFirstElement(class UWidget* ParentCategory);
    bool BPE_OnBackButtonPressed();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void LoopCheatOptions(bool SetDefault);
    void LaunchBackSequence();
    void Construct();
    void BndEvt__BP_Menu_Options_Cheat_Cat_Various_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_YourCharacter_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Ennemies_K2Node_ComponentBoundEvent_5_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Various_K2Node_ComponentBoundEvent_0_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_YourCharacter_K2Node_ComponentBoundEvent_2_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Ennemies_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Options_Feats_Cat_K2Node_ComponentBoundEvent_6_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_K2Node_ComponentBoundEvent_7_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Feats_Cat_3_K2Node_ComponentBoundEvent_8_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_3_K2Node_ComponentBoundEvent_9_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Feats_Cat_0_K2Node_ComponentBoundEvent_10_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_1_K2Node_ComponentBoundEvent_11_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_2_K2Node_ComponentBoundEvent_12_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_Cat_3_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_General_K2Node_ComponentBoundEvent_16_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_General_K2Node_ComponentBoundEvent_15_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_General_K2Node_ComponentBoundEvent_17_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void HandleMenuRequest(FString InArguments);
    void BPE_GiveFocus();
    void BndEvt__BP_Menu_Options_Feats_BP_Btn_CheatCategory_Tab_K2Node_ComponentBoundEvent_18_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Feats_BP_Btn_CheatCategory_Tab_K2Node_ComponentBoundEvent_19_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Feats_ActiveModifiersBtn_K2Node_ComponentBoundEvent_20_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnFirstModifierFocus();
    void ExecuteUbergraph_BP_Menu_Options_Feats(int32 EntryPoint);
    void ToggleGoals__DelegateSignature();
}; // Size: 0xE99

#endif
