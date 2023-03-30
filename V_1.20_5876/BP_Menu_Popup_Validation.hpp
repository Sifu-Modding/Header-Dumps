#ifndef UE4SS_SDK_BP_Menu_Popup_Validation_HPP
#define UE4SS_SDK_BP_Menu_Popup_Validation_HPP

class UBP_Menu_Popup_Validation_C : public UPopupWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UWidgetAnimation* DisplayContent;                                           // 0x03E8 (size: 0x8)
    class UBorder* BorderBkg;                                                         // 0x03F0 (size: 0x8)
    class UImage* Brush;                                                              // 0x03F8 (size: 0x8)
    class UHorizontalBox* ChoicesHorizontal;                                          // 0x0400 (size: 0x8)
    class UVerticalBox* ChoicesVertical;                                              // 0x0408 (size: 0x8)
    class UVerticalBox* Content;                                                      // 0x0410 (size: 0x8)
    class UBP_Notif_Currency_C* CurrenyCost;                                          // 0x0418 (size: 0x8)
    class UImage* LineBottom;                                                         // 0x0420 (size: 0x8)
    class UImage* LineTop;                                                            // 0x0428 (size: 0x8)
    class UBP_Btn_InputBtn_C* NoBtnHorizontal;                                        // 0x0430 (size: 0x8)
    class UBP_Btn_InputBtn_C* NoBtnVertical;                                          // 0x0438 (size: 0x8)
    class UVerticalBox* PaddingBox;                                                   // 0x0440 (size: 0x8)
    class UTextBlock* PrimaryField;                                                   // 0x0448 (size: 0x8)
    class UTextBlock* SecondaryField;                                                 // 0x0450 (size: 0x8)
    class UWidgetSwitcher* SecondarySwitcher;                                         // 0x0458 (size: 0x8)
    class USizeBox* SizeBoxContent;                                                   // 0x0460 (size: 0x8)
    class UTextBlock* TitleField;                                                     // 0x0468 (size: 0x8)
    class UImage* WarningImg;                                                         // 0x0470 (size: 0x8)
    class UBP_Btn_InputBtn_C* YesBtnHorizontal;                                       // 0x0478 (size: 0x8)
    class UBP_Btn_InputBtn_C* YesBtnVertical;                                         // 0x0480 (size: 0x8)
    class UTexture2D* BackgroundHovered;                                              // 0x0488 (size: 0x8)
    class UTexture2D* BackgroundNormal;                                               // 0x0490 (size: 0x8)
    FLinearColor NormalTint;                                                          // 0x0498 (size: 0x10)
    FBP_Menu_Popup_Validation_CYesClicked YesClicked;                                 // 0x04A8 (size: 0x10)
    void YesClicked();
    FBP_Menu_Popup_Validation_CNoClicked NoClicked;                                   // 0x04B8 (size: 0x10)
    void NoClicked();
    FText TitleText;                                                                  // 0x04C8 (size: 0x18)
    FText PrimaryText;                                                                // 0x04E0 (size: 0x18)
    FText SecondaryText;                                                              // 0x04F8 (size: 0x18)
    FText YesText;                                                                    // 0x0510 (size: 0x18)
    FText NoText;                                                                     // 0x0528 (size: 0x18)
    FBP_Menu_Popup_Validation_COnHideAnimationFinished OnHideAnimationFinished;       // 0x0540 (size: 0x10)
    void OnHideAnimationFinished();
    bool Animated;                                                                    // 0x0550 (size: 0x1)
    bool VerticalButtons;                                                             // 0x0551 (size: 0x1)
    bool Warning;                                                                     // 0x0552 (size: 0x1)
    float HideAnimationPlayRate;                                                      // 0x0554 (size: 0x4)
    bool PlayAnimationOnHidden;                                                       // 0x0558 (size: 0x1)
    bool LastResultValidated;                                                         // 0x0559 (size: 0x1)

    void SetupCurrency(TEnumAsByte<UI_CurrencyTypes> CurrencyType, int32 CurrencyCost, FText Title, FText Primary, FText Secondary);
    void SetWarning(bool LocalWarning);
    void SetupDarkmodeColors(bool LocalWarning);
    bool BPE_IsUsingChoiceB();
    bool BPE_IsUsingChoiceA();
    void InitText();
    void SetMappingContext(InputContext Context);
    void PopupInit(FText Text);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void BPE_OnVisible();
    void BndEvt__NavigationButton_Yes_K2Node_ComponentBoundEvent_377_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__NavigationButton_No_K2Node_ComponentBoundEvent_406_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void HidePopup();
    void BndEvt__BP_Menu_Popup_Validation_YesBtnVertical_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Popup_Validation_NoBtnVertical_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPF_OnChoseA(int32 _playerID);
    void BPF_OnChoseB();
    void BPE_SetContent(const FText& _title, const FText& _message, const FText& _choiceA, const FText& _choiceB);
    void ExecuteUbergraph_BP_Menu_Popup_Validation(int32 EntryPoint);
    void OnHideAnimationFinished__DelegateSignature();
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x55A

#endif
