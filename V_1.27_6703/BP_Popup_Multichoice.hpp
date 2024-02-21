#ifndef UE4SS_SDK_BP_Popup_Multichoice_HPP
#define UE4SS_SDK_BP_Popup_Multichoice_HPP

class UBP_Popup_Multichoice_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* FadeBlur;                                                 // 0x03E0 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x03E8 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x03F0 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03F8 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x0400 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;                      // 0x0408 (size: 0x8)
    class UVerticalBox* ChoicesBox;                                                   // 0x0410 (size: 0x8)
    class UTextBlock* InfoTextPrimary;                                                // 0x0418 (size: 0x8)
    class UTextBlock* InfoTextSecondary;                                              // 0x0420 (size: 0x8)
    class UImage* Line;                                                               // 0x0428 (size: 0x8)
    class UCanvasPanel* Popup;                                                        // 0x0430 (size: 0x8)
    class UBP_Btn_InputTip_C* Tip_Back;                                               // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* Tip_Select;                                             // 0x0440 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0448 (size: 0x50)
    class UPlayerFightingComponent* PlayerFightingComp;                               // 0x0498 (size: 0x8)
    FBP_Popup_Multichoice_COnChoiceClickEvent OnChoiceClickEvent;                     // 0x04A0 (size: 0x10)
    void OnChoiceClickEvent(int32 Choice);
    FText Title;                                                                      // 0x04B0 (size: 0x18)
    int32 NumberOfButtons;                                                            // 0x04C8 (size: 0x4)
    int32 FocusedChoice;                                                              // 0x04CC (size: 0x4)
    TArray<class UBP_Btn_Menu_C*> ButtonsArray;                                       // 0x04D0 (size: 0x10)
    TArray<FText> ButtonsTextArray;                                                   // 0x04E0 (size: 0x10)
    TArray<FText> PrimaryInfoArray;                                                   // 0x04F0 (size: 0x10)
    TArray<FText> SecondaryInfoArray;                                                 // 0x0500 (size: 0x10)
    bool DisplayBlur;                                                                 // 0x0510 (size: 0x1)
    FBP_Popup_Multichoice_COnBackEvent OnBackEvent;                                   // 0x0518 (size: 0x10)
    void OnBackEvent();
    FBP_Popup_Multichoice_CYesClicked YesClicked;                                     // 0x0528 (size: 0x10)
    void YesClicked();
    FBP_Popup_Multichoice_CNoClicked NoClicked;                                       // 0x0538 (size: 0x10)
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
}; // Size: 0x548

#endif
