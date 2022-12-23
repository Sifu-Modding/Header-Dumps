#ifndef UE4SS_SDK_BP_Menu_NewGameSettings_HPP
#define UE4SS_SDK_BP_Menu_NewGameSettings_HPP

class UBP_Menu_NewGameSettings_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_130;
    class UImage* BlackTransparentBG;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Btn_InputTip_C* BtnStart;
    class UTextBlock* BtnText;
    class UTextBlock* BtnText_1;
    class UTextBlock* BtnText_2;
    class UTextBlock* BtnText_3;
    class UTextBlock* BtnText_4;
    class UTextBlock* BtnText_5;
    class UTextBlock* BtnText_6;
    class UCanvasPanel* CanvasPanel_205;
    class UBP_Btn_SpinBox_C* difficulty;
    class UVerticalBox* Difficuly_easy;
    class UVerticalBox* Difficuly_Hard;
    class UVerticalBox* Difficuly_Normal;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UVerticalBox* Keep_Skills_progress;
    class UImage* Line;
    class UImage* Line_2;
    class UBP_Btn_SpinBox_C* skillImport;
    class UVerticalBox* Start_Fresh;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UButtonUserWidget* FocusedCombo;
    bool AudioApplied;
    class UBP_Btn_Difficulty_C* FocusedOption;
    TMap<class FString, class FText> AudioLanguageMap;
    class UPlayerFightingComponent* PlayerFightingComp;
    bool NewGame;
    class UWidget* FocusedWidget;

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
};

#endif
