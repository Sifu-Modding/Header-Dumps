#ifndef UE4SS_SDK_BP_Menu_Options_Cheat_HPP
#define UE4SS_SDK_BP_Menu_Options_Cheat_HPP

class UBP_Menu_Options_Cheat_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UWidgetAnimation* InsuficientCurrency;                                      // 0x08F0 (size: 0x8)
    class UWidgetAnimation* CheatBoughtFeedback;                                      // 0x08F8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* AttackSpeed;                                   // 0x0900 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Autothrow;                                     // 0x0908 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x0910 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0918 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Filter;                                   // 0x0920 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Lock;                                     // 0x0928 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Max;                                      // 0x0930 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Min;                                      // 0x0938 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Moveset;                                  // 0x0940 (size: 0x8)
    class UBP_Btn_SpinBox_C* BP_Btn_SpinBox_Randomizer;                               // 0x0948 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_ToggleCustom;                    // 0x0950 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;                      // 0x0958 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation_Reset;                // 0x0960 (size: 0x8)
    class UBP_Notif_Spend_C* BP_Notif_Spend;                                          // 0x0968 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* BuildUpMult;                                   // 0x0970 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* BulletTime;                                    // 0x0978 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* BulletTime_Choice;                             // 0x0980 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* CantDropWeapon;                                // 0x0988 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Cat_Ennemies;                                  // 0x0990 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Cat_MoveSet;                                   // 0x0998 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Cat_Randomizer;                                // 0x09A0 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Cat_Various;                                   // 0x09A8 (size: 0x8)
    class UBP_Btn_CheatCategory_Tab_C* Cat_YourCharacter;                             // 0x09B0 (size: 0x8)
    class UVerticalBox* Category_Ennemies;                                            // 0x09B8 (size: 0x8)
    class UVerticalBox* Category_EnnemiesStudentOnly;                                 // 0x09C0 (size: 0x8)
    class UVerticalBox* Category_MoveSet;                                             // 0x09C8 (size: 0x8)
    class UVerticalBox* Category_Randomizer;                                          // 0x09D0 (size: 0x8)
    class UVerticalBox* Category_Various;                                             // 0x09D8 (size: 0x8)
    class UVerticalBox* Category_YourCharacter;                                       // 0x09E0 (size: 0x8)
    class UImage* CurrencyIcon;                                                       // 0x09E8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* EnemyAppearance;                               // 0x09F0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* EnnemyLevel;                                   // 0x09F8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* EnnemyLevels;                                  // 0x0A00 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* EnviroDamage;                                  // 0x0A08 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Firewalk;                                      // 0x0A10 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Focus;                                         // 0x0A18 (size: 0x8)
    class UTextBlock* FocusUpdatedText;                                               // 0x0A20 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* ForcedLastMan;                                 // 0x0A28 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* FreeTakedown;                                  // 0x0A30 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Guard;                                         // 0x0A38 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* HealthManagement;                              // 0x0A40 (size: 0x8)
    class UBP_InputAction_C* InputAction_Sort;                                        // 0x0A48 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Activate;                                      // 0x0A50 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0A58 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Default;                                       // 0x0A60 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Unlock;                                        // 0x0A68 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* LargeHitboxes;                                 // 0x0A70 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* LazyEnemies;                                   // 0x0A78 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* LifeSteal;                                     // 0x0A80 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* LowGravity;                                    // 0x0A88 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MasterDifficulty;                              // 0x0A90 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCAge;                                         // 0x0A98 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCAge_Choice;                                  // 0x0AA0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCDamageMultiplier;                            // 0x0AA8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCDamageMultiplier_Choice;                     // 0x0AB0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCHealth;                                      // 0x0AB8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MCHealthRecovery;                              // 0x0AC0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_CrookedFoot;                           // 0x0AC8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_GroundPunch;                           // 0x0AD0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_GuardBreak;                            // 0x0AD8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_KhapChoy;                              // 0x0AE0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_Lowkick;                               // 0x0AE8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_PalmStrike;                            // 0x0AF0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_Resilient;                             // 0x0AF8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSet_ThrustKick;                            // 0x0B00 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* MoveSets;                                      // 0x0B08 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* NoEnvironmentalWeapon;                         // 0x0B10 (size: 0x8)
    class UBorder* NotEoughCurrenyPanel;                                              // 0x0B18 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* OffensiveAvoid;                                // 0x0B20 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* OnePunch;                                      // 0x0B28 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Pendant;                                       // 0x0B30 (size: 0x8)
    class UCanvasPanel* Popup;                                                        // 0x0B38 (size: 0x8)
    class UCanvasPanel* Popup_ConfirmReset;                                           // 0x0B40 (size: 0x8)
    class UCanvasPanel* Popup_ToggleOn;                                               // 0x0B48 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Randomizer_Unlock;                             // 0x0B50 (size: 0x8)
    class UTextBlock* RandomizerCatCount;                                             // 0x0B58 (size: 0x8)
    class UTextBlock* RandomizerCatFilters;                                           // 0x0B60 (size: 0x8)
    class UVerticalBox* RandomizerParameters_VB;                                      // 0x0B68 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* RandomMoveset;                                 // 0x0B70 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* ReverseAging;                                  // 0x0B78 (size: 0x8)
    class UScrollBox* ScrollBox_Ennemies;                                             // 0x0B80 (size: 0x8)
    class UScrollBox* ScrollBox_EnnemiesStudentOnly;                                  // 0x0B88 (size: 0x8)
    class UScrollBox* ScrollBox_MoveSet;                                              // 0x0B90 (size: 0x8)
    class UScrollBox* ScrollBox_Randomizer;                                           // 0x0B98 (size: 0x8)
    class UScrollBox* ScrollBox_Various;                                              // 0x0BA0 (size: 0x8)
    class UScrollBox* ScrollBox_YourCharacter;                                        // 0x0BA8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Shrine;                                        // 0x0BB0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Skills;                                        // 0x0BB8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* SlapstickFight;                                // 0x0BC0 (size: 0x8)
    class UHorizontalBox* SortCheat_Box;                                              // 0x0BC8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* SqueakyToy;                                    // 0x0BD0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Structure;                                     // 0x0BD8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* StructureBreakingDeflect;                      // 0x0BE0 (size: 0x8)
    class UWidgetSwitcher* SwitcherCheats;                                            // 0x0BE8 (size: 0x8)
    class URichTextBlock* Txt_InboxDescriptionWhite;                                  // 0x0BF0 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* UnbreakableWeapon_Choice;                      // 0x0BF8 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* UnlimitedThreats;                              // 0x0C00 (size: 0x8)
    class UVerticalBox* UnlockedRandomizerVB;                                         // 0x0C08 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Vampire;                                       // 0x0C10 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* VampireStudent;                                // 0x0C18 (size: 0x8)
    class UVerticalBox* VBCategories;                                                 // 0x0C20 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Voices;                                        // 0x0C28 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* Voices_Choice;                                 // 0x0C30 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* WeaponFirmGrip;                                // 0x0C38 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* WeaponLethal;                                  // 0x0C40 (size: 0x8)
    class UBP_Btn_SpinBox_Modifiers_C* WeaponMultiplier;                              // 0x0C48 (size: 0x8)
    class UImage* WhiteMask;                                                          // 0x0C50 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0C58 (size: 0x8)
    bool AudioApplied;                                                                // 0x0C60 (size: 0x1)
    class UBP_Btn_SpinBox_C* FocusedOption;                                           // 0x0C68 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0C70 (size: 0x50)
    bool IsFocusScrollBar;                                                            // 0x0CC0 (size: 0x1)
    TArray<class UWidget*> AllCheats;                                                 // 0x0CC8 (size: 0x10)
    class UBP_Btn_SpinBox_Modifiers_C* SpinboxToUnlock;                               // 0x0CD8 (size: 0x8)
    FBP_Menu_Options_Cheat_COnPopupVisibilityChanged OnPopupVisibilityChanged;        // 0x0CE0 (size: 0x10)
    void OnPopupVisibilityChanged(bool Visible);
    FBP_Menu_Options_Cheat_CAnyCheatStateUpdated AnyCheatStateUpdated;                // 0x0CF0 (size: 0x10)
    void AnyCheatStateUpdated();
    bool UnifinishedStudentRunMode;                                                   // 0x0D00 (size: 0x1)
    bool IsFocusedButtonCheckbox;                                                     // 0x0D01 (size: 0x1)
    bool bDebugMode;                                                                  // 0x0D02 (size: 0x1)
    FBP_Menu_Options_Cheat_CUpdateCheatInput UpdateCheatInput;                        // 0x0D08 (size: 0x10)
    void UpdateCheatInput();
    bool SortedByActivatedModifier;                                                   // 0x0D18 (size: 0x1)
    bool SortCheatsOnCatNav;                                                          // 0x0D19 (size: 0x1)
    FBP_Menu_Options_Cheat_CToggleCheat ToggleCheat;                                  // 0x0D20 (size: 0x10)
    void ToggleCheat();
    bool NoModifier;                                                                  // 0x0D30 (size: 0x1)
    bool AutoToggleCustom;                                                            // 0x0D31 (size: 0x1)
    bool PreviousExcludeMovesetValue;                                                 // 0x0D32 (size: 0x1)
    FGameplayTagContainer CurrentMapTags;                                             // 0x0D38 (size: 0x20)
    bool HasRandomizerParameterChanged;                                               // 0x0D58 (size: 0x1)
    FBP_Menu_Options_Cheat_CUpdateRandomizerInput UpdateRandomizerInput;              // 0x0D60 (size: 0x10)
    void UpdateRandomizerInput(bool Activated, bool HasAnyCheat);
    FBP_Menu_Options_Cheat_CUpdateSwitcherIndex UpdateSwitcherIndex;                  // 0x0D70 (size: 0x10)
    void UpdateSwitcherIndex();

    void UpdateInputRandomizer(class UBP_Btn_SpinBox_C* Btn);
    void GetCurrentRandomizerParam(bool Initialize, bool& Activated, bool& IsCheat);
    void UpdateRandomizerParamVisibility();
    void SetSpinboxIndexesFromSave();
    void IsArenaMenuMap(bool& Condition);
    void YesPopupToggleOn();
    void SetupRandomizerParam(bool InitialSetup);
    void UpdateRandomizerCategoriesVisibility();
    bool IsRandomizerActivated();
    void SetFirstLastNavigationRules();
    void SetCheatsSwitcherIndex(int32 SwitcherIndex);
    void SortModifiers(bool SortCurrentPageOnly);
    bool BPE_OnInputAction(InputAction eAction);
    void SetAllCheatCount();
    void GetActivatedCheatCountFromList(class UVerticalBox* VBCheatList, int32& ActiveModifierCount, bool& HasCheat);
    void GetAllCheatCosts(TMap<FGameplayTag, int32>& CheatsCost);
    void ShowHideBulletTimeButtons();
    void OnUpdateModeChange();
    void AllowCategoryNavigation();
    void IsUnfinishedStudentRun(bool& IsUnifinishedStudentRun);
    void SetDebugMode();
    void UpdatePrimaryInputTip(class UBP_Btn_SpinBox_Modifiers_C* Btn);
    void Set NavigationRulesToCategories();
    void SetNavigationRulesToCheatSpinboxes();
    class UWidget* LoopFromBottomCategory(EUINavigation Navigation);
    class UWidget* LoopFromTopCategory(EUINavigation Navigation);
    void ResetAllButtonsIndex(bool& HasAnybuttonBeenUpdated);
    bool BPE_OnMenuActionSecondaryPressed();
    void SetupAllButtonsDetails();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void ScrollToTop();
    void RefreshButtons();
    void OnLockedSpinboxClicked(class UBP_Btn_SpinBox_Modifiers_C* SpinboxModifier);
    void NoPopup();
    void YesPopupResetDefault();
    void YesPopup();
    void ResetCategoriesState();
    void FocusOnCategoryAtIndex(int32 Index);
    void Focus on First Element(class UWidget* ParentCategory);
    void UpdateUnlockPointsAvailable();
    void UpdateActivatedCheatsSummary();
    void UpdateCheatActivationOnValueChanged(float RatioFloat, FGameplayTag GameplayTag);
    bool BPE_OnBackButtonPressed();
    void LoopCheatOptions(bool SetDefault);
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void OnUnlocked_Event();
    void OnValueChanged_Event(int32 Value, ECycleDirection Direction, float RatioFloat, FGameplayTag CheatGameplayTag, class UBP_Btn_SpinBox_Modifiers_C* Btn, bool ManualUpdate);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Various_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_YourCharacter_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Ennemies_K2Node_ComponentBoundEvent_5_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Various_K2Node_ComponentBoundEvent_0_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_YourCharacter_K2Node_ComponentBoundEvent_2_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Ennemies_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_YourCharacter_K2Node_ComponentBoundEvent_6_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Ennemies_K2Node_ComponentBoundEvent_7_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Various_K2Node_ComponentBoundEvent_8_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void BndEvt__BP_Menu_Options_Cheat_Cat_MoveSet_K2Node_ComponentBoundEvent_9_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Options_Cheat_Cat_MoveSet_K2Node_ComponentBoundEvent_10_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_MoveSet_K2Node_ComponentBoundEvent_11_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Randomizer_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Randomizer_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Options_Cheat_Cat_Randomizer_K2Node_ComponentBoundEvent_15_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Max_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Min_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Filter_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Moveset_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Lock_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Randomizer_K2Node_ComponentBoundEvent_21_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Lock_K2Node_ComponentBoundEvent_22_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Moveset_K2Node_ComponentBoundEvent_23_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Filter_K2Node_ComponentBoundEvent_24_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Min_K2Node_ComponentBoundEvent_25_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Cheat_BP_Btn_SpinBox_Max_K2Node_ComponentBoundEvent_26_OnReceivedFocus__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Options_Cheat(int32 EntryPoint);
    void UpdateSwitcherIndex__DelegateSignature();
    void UpdateRandomizerInput__DelegateSignature(bool Activated, bool HasAnyCheat);
    void ToggleCheat__DelegateSignature();
    void UpdateCheatInput__DelegateSignature();
    void OnPopupVisibilityChanged__DelegateSignature(bool Visible);
    void AnyCheatStateUpdated__DelegateSignature();
}; // Size: 0xD80

#endif
