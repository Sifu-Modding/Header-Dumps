#ifndef UE4SS_SDK_BP_Btn_Tab_HPP
#define UE4SS_SDK_BP_Btn_Tab_HPP

class UBP_Btn_Tab_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBP_Btn_Input_C* BtnInput;                                                  // 0x0828 (size: 0x8)
    class UTextBlock* NavText;                                                        // 0x0830 (size: 0x8)
    class UTextBlock* NavText_Focused;                                                // 0x0838 (size: 0x8)
    class UWBP_ReplayMenuItem_C* PropertyBinding;                                     // 0x0840 (size: 0x8)
    FText MenuTitle;                                                                  // 0x0848 (size: 0x18)
    EMenuEnum Menu;                                                                   // 0x0860 (size: 0x1)
    bool Focused;                                                                     // 0x0861 (size: 0x1)
    bool Black;                                                                       // 0x0862 (size: 0x1)
    bool Title;                                                                       // 0x0863 (size: 0x1)
    bool Enabled;                                                                     // 0x0864 (size: 0x1)
    bool CapsLock;                                                                    // 0x0865 (size: 0x1)
    bool ForcedFocus;                                                                 // 0x0866 (size: 0x1)
    bool DisableGamepadNav;                                                           // 0x0867 (size: 0x1)
    bool VerticalMenu;                                                                // 0x0868 (size: 0x1)
    FBP_Btn_Tab_COnLocalFocusReceived OnLocalFocusReceived;                           // 0x0870 (size: 0x10)
    void OnLocalFocusReceived(class UBP_Btn_Tab_C* Button);
    bool IsLocallyFocused;                                                            // 0x0880 (size: 0x1)
    bool bKeepInputSpace;                                                             // 0x0881 (size: 0x1)
    int32 DefaultTextSize;                                                            // 0x0884 (size: 0x4)
    int32 TitleTextSize;                                                              // 0x0888 (size: 0x4)
    TEnumAsByte<EHorizontalAlignment> TextAlignment;                                  // 0x088C (size: 0x1)
    FText PropertyTitleFalse;                                                         // 0x0890 (size: 0x18)
    FText PropertyTitleTrue;                                                          // 0x08A8 (size: 0x18)
    bool bUsePropertyValueForTitleText;                                               // 0x08C0 (size: 0x1)
    FBP_Btn_Tab_COnPropertyUpdateDispatcher OnPropertyUpdateDispatcher;               // 0x08C8 (size: 0x10)
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
    void SetGamepadNavDisabled(bool DisableGamepadNav);
    void SetEnabled(bool bIsFocusable);
    void GetFont(bool bLocalFocused, FSlateFontInfo& GetFont);
    FSlateColor SetColor();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FText GetText();
    void SetState(bool InLocalFocused, bool bForced);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnSynchronizeProperties();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Tab(int32 EntryPoint);
    void OnPropertyUpdateDispatcher__DelegateSignature();
    void OnLocalFocusReceived__DelegateSignature(class UBP_Btn_Tab_C* Button);
}; // Size: 0x8D8

#endif
