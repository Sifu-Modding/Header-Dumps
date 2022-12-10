#ifndef UE4SS_SDK_BP_Menu_Difficulty_HPP
#define UE4SS_SDK_BP_Menu_Difficulty_HPP

class UBP_Menu_Difficulty_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_130;
    class UImage* BlackTransparentBG;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;
    class UBP_Btn_Difficulty_ListItem_C* Btn_Classic;
    class UBP_Btn_Difficulty_ListItem_C* Btn_Easy;
    class UBP_Btn_Difficulty_ListItem_C* Btn_Hard;
    class UBP_Btn_InputTip_C* BtnStart;
    class UTextBlock* BtnText;
    class UTextBlock* BtnText_1;
    class UTextBlock* BtnText_2;
    class UTextBlock* BtnText_3;
    class UTextBlock* BtnText_4;
    class UTextBlock* BtnText_5;
    class UCanvasPanel* CanvasPanel_205;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UImage* Line;
    class UImage* Line_2;
    class UCanvasPanel* Popup;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UButtonUserWidget* FocusedCombo;
    bool AudioApplied;
    class UBP_Btn_Difficulty_C* FocusedOption;
    TMap<class FString, class FText> AudioLanguageMap;
    class UPlayerFightingComponent* PlayerFightingComp;
    FBP_Menu_Difficulty_COnDifficultyChosen OnDifficultyChosen;
    void OnDifficultyChosen(EGameDifficulty difficulty);
    EGameDifficulty FocusedDifficulty;
    bool NewGame;

    void SetNewGameState(bool ShowBackgroundBlurrr);
    void NoPopup();
    void YesPopup();
    void OpenPopup(FText Title);
    void SetDescription();
    void MenuReady();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Hard_K2Node_ComponentBoundEvent_9_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Hard_K2Node_ComponentBoundEvent_12_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ExecuteUbergraph_BP_Menu_Difficulty(int32 EntryPoint);
    void OnDifficultyChosen__DelegateSignature(EGameDifficulty difficulty);
};

#endif
