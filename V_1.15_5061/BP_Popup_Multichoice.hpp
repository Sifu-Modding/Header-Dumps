#ifndef UE4SS_SDK_BP_Popup_Multichoice_HPP
#define UE4SS_SDK_BP_Popup_Multichoice_HPP

class UBP_Popup_Multichoice_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeBlur;
    class UBackgroundBlur* BackgroundBlur;
    class UImage* BlackTransparentBG;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;
    class UVerticalBox* ChoicesBox;
    class UTextBlock* InfoTextPrimary;
    class UTextBlock* InfoTextSecondary;
    class UImage* Line;
    class UCanvasPanel* Popup;
    class UBP_Btn_InputTip_C* Tip_Back;
    class UBP_Btn_InputTip_C* Tip_Select;
    TMap<class FString, class FText> AudioLanguageMap;
    class UPlayerFightingComponent* PlayerFightingComp;
    FBP_Popup_Multichoice_COnChoiceClickEvent OnChoiceClickEvent;
    void OnChoiceClickEvent(int32 Choice);
    FText Title;
    int32 NumberOfButtons;
    int32 FocusedChoice;
    TArray<class UBP_Btn_Menu_C*> ButtonsArray;
    TArray<FText> ButtonsTextArray;
    TArray<FText> PrimaryInfoArray;
    TArray<FText> SecondaryInfoArray;
    bool DisplayBlur;
    FBP_Popup_Multichoice_COnBackEvent OnBackEvent;
    void OnBackEvent();
    FBP_Popup_Multichoice_CYesClicked YesClicked;
    void YesClicked();
    FBP_Popup_Multichoice_CNoClicked NoClicked;
    void NoClicked();

    void PlayFadeBlurAnim();
    FEventReply FocusLastButton(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void CreateButtonsList(int32 NumberOfButtons);
    void OnChoiceClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnChoiceUnfocused(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnChoiceFocused(class UButtonUserWidget* _button, EFocusCause _eCause);
    void SetText(int32 Choice);
    void SetNewGameState(bool ShowBackgroundBlur);
    void NoPopup();
    void YesPopup();
    void MenuReady();
    void OnDarkModeChange();
    void LaunchBackSequence();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BPE_OnVisible();
    void BPE_OnHidden();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_BP_Popup_Multichoice(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
    void OnBackEvent__DelegateSignature();
    void OnChoiceClickEvent__DelegateSignature(int32 Choice);
};

#endif
