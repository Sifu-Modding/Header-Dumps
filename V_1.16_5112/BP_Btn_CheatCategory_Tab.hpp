#ifndef UE4SS_SDK_BP_Btn_CheatCategory_Tab_HPP
#define UE4SS_SDK_BP_Btn_CheatCategory_Tab_HPP

class UBP_Btn_CheatCategory_Tab_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Input_C* BtnInput;
    class UTextBlock* NavText;
    class UTextBlock* NavText_Focused;
    class UWBP_ReplayMenuItem_C* PropertyBinding;
    FText MenuTitle;
    EMenuEnum Menu;
    bool Focused;
    bool Black;
    bool Title;
    bool Enabled;
    bool CapsLock;
    bool ForcedFocus;
    bool VerticalMenu;
    bool IsBtnGreyed;
    bool IsBtnSelected;
    bool IsBtnFocused;
    int32 DefaultTextSize;
    int32 TitleTextSize;
    TEnumAsByte<EHorizontalAlignment> TextAlignment;
    FText PropertyTitleFalse;
    FText PropertyTitleTrue;
    bool bUsePropertyValueForTitleText;
    FBP_Btn_CheatCategory_Tab_COnPropertyUpdateDispatcher OnPropertyUpdateDispatcher;
    void OnPropertyUpdateDispatcher();

    void UpdateInputModeSize();
    void OverrideDefaultTextSize(int32 New Size);
    void SetIsBlack(bool IsBlack);
    void OnClickPropertyUpdate(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnPropertyPreUpdate(class UBindablePropertyBase* _property);
    void OnPropertyUpdated(class UBindablePropertyBase* _property);
    void BindProperty(bool& bValue, class UObject* Owner);
    void GetValue(bool& Value);
    void SetValue(bool Value);
    void SetInputVisible(bool bInVisible);
    void SetGreyed(bool IsEnabled);
    void GetFont(FSlateFontInfo& GetFont);
    FSlateColor SetColor();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FText GetText();
    void SetState(bool Focused, bool Selected);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_CheatCategory_Tab(int32 EntryPoint);
    void OnPropertyUpdateDispatcher__DelegateSignature();
};

#endif
