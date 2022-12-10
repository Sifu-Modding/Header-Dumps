#ifndef UE4SS_SDK_BP_Menu_Skip_Tuto_HPP
#define UE4SS_SDK_BP_Menu_Skip_Tuto_HPP

class UBP_Menu_Skip_Tuto_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_130;
    class UImage* BlackTransparentBG;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Btn_Difficulty_ListItem_C* Btn_Dont_Skip_Tuto;
    class UBP_Btn_Difficulty_ListItem_C* Btn_SkipTuto;
    class UBP_Btn_InputTip_C* BtnStart;
    class UTextBlock* BtnText_1;
    class UTextBlock* BtnText_2;
    class UCanvasPanel* CanvasPanel_205;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UButtonUserWidget* FocusedCombo;
    bool AudioApplied;
    class UBP_Btn_Difficulty_C* FocusedOption;
    TMap<class FString, class FText> AudioLanguageMap;
    class UPlayerFightingComponent* PlayerFightingComp;
    bool NewGame;
    FBP_Menu_Skip_Tuto_COnSkipIntroductionChosen OnSkipIntroductionChosen;
    void OnSkipIntroductionChosen(TEnumAsByte<EnumSkipIntroSelection> SkipIntroduction);

    void PushMenu();
    void MenuReady();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ExecuteUbergraph_BP_Menu_Skip_Tuto(int32 EntryPoint);
    void OnSkipIntroductionChosen__DelegateSignature(TEnumAsByte<EnumSkipIntroSelection> SkipIntroduction);
};

#endif
