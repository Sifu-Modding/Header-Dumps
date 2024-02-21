#ifndef UE4SS_SDK_BP_Menu_NewGameSettings_HPP
#define UE4SS_SDK_BP_Menu_NewGameSettings_HPP

class UBP_Menu_NewGameSettings_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x0918 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x0920 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0928 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x0930 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x0938 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0940 (size: 0x8)
    class UTextBlock* BtnText_1;                                                      // 0x0948 (size: 0x8)
    class UTextBlock* BtnText_2;                                                      // 0x0950 (size: 0x8)
    class UTextBlock* BtnText_3;                                                      // 0x0958 (size: 0x8)
    class UTextBlock* BtnText_4;                                                      // 0x0960 (size: 0x8)
    class UTextBlock* BtnText_5;                                                      // 0x0968 (size: 0x8)
    class UTextBlock* BtnText_6;                                                      // 0x0970 (size: 0x8)
    class UCanvasPanel* CanvasPanel_205;                                              // 0x0978 (size: 0x8)
    class UBP_Btn_SpinBox_C* difficulty;                                              // 0x0980 (size: 0x8)
    class UVerticalBox* Difficuly_easy;                                               // 0x0988 (size: 0x8)
    class UVerticalBox* Difficuly_Hard;                                               // 0x0990 (size: 0x8)
    class UVerticalBox* Difficuly_Normal;                                             // 0x0998 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x09A0 (size: 0x8)
    class UVerticalBox* Keep_Skills_progress;                                         // 0x09A8 (size: 0x8)
    class UImage* Line;                                                               // 0x09B0 (size: 0x8)
    class UImage* Line_2;                                                             // 0x09B8 (size: 0x8)
    class UBP_Btn_SpinBox_C* skillImport;                                             // 0x09C0 (size: 0x8)
    class UVerticalBox* Start_Fresh;                                                  // 0x09C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x09D0 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x09D8 (size: 0x8)
    bool AudioApplied;                                                                // 0x09E0 (size: 0x1)
    class UBP_Btn_Difficulty_C* FocusedOption;                                        // 0x09E8 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x09F0 (size: 0x50)
    class UPlayerFightingComponent* PlayerFightingComp;                               // 0x0A40 (size: 0x8)
    bool NewGame;                                                                     // 0x0A48 (size: 0x1)
    class UWidget* FocusedWidget;                                                     // 0x0A50 (size: 0x8)

    void GiveFocus();
    void SetupDesc();
    void Get Selected Skill Import(TEnumAsByte<EnumSkillProgressionSelection>& skillImport);
    void GetSelectedDifficulty(EGameDifficulty& difficulty);
    void PushMenu(EGameDifficulty PreviousDifficulty, TEnumAsByte<EnumSkillProgressionSelection> PreviousSkillProgression);
    void MenuReady();
    void OnDarkModeChange();
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_NewGameSettings_Difficulty_K2Node_ComponentBoundEvent_0_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_NewGameSettings_SkillImport_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_NewGameSettings_Difficulty_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_NewGameSettings_SkillImport_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void ExecuteUbergraph_BP_Menu_NewGameSettings(int32 EntryPoint);
}; // Size: 0xA58

#endif
