#ifndef UE4SS_SDK_BP_Menu_Popup_Validation_HPP
#define UE4SS_SDK_BP_Menu_Popup_Validation_HPP

class UBP_Menu_Popup_Validation_C : public UPopupWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DisplayContent;
    class UBorder* BorderBkg;
    class UImage* Brush;
    class UHorizontalBox* ChoicesHorizontal;
    class UVerticalBox* ChoicesVertical;
    class UVerticalBox* Content;
    class UBP_Notif_Currency_C* CurrenyCost;
    class UImage* LineBottom;
    class UImage* LineTop;
    class UBP_Btn_InputBtn_C* NoBtnHorizontal;
    class UBP_Btn_InputBtn_C* NoBtnVertical;
    class UVerticalBox* PaddingBox;
    class UTextBlock* PrimaryField;
    class UTextBlock* SecondaryField;
    class UWidgetSwitcher* SecondarySwitcher;
    class USizeBox* SizeBoxContent;
    class UTextBlock* TitleField;
    class UImage* WarningImg;
    class UBP_Btn_InputBtn_C* YesBtnHorizontal;
    class UBP_Btn_InputBtn_C* YesBtnVertical;
    class UTexture2D* BackgroundHovered;
    class UTexture2D* BackgroundNormal;
    FLinearColor NormalTint;
    FBP_Menu_Popup_Validation_CYesClicked YesClicked;
    void YesClicked();
    FBP_Menu_Popup_Validation_CNoClicked NoClicked;
    void NoClicked();
    FText TitleText;
    FText PrimaryText;
    FText SecondaryText;
    FText YesText;
    FText NoText;
    FBP_Menu_Popup_Validation_COnHideAnimationFinished OnHideAnimationFinished;
    void OnHideAnimationFinished();
    bool Animated;
    bool VerticalButtons;
    bool Warning;
    float HideAnimationPlayRate;
    bool PlayAnimationOnHidden;
    bool LastResultValidated;

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
};

#endif
