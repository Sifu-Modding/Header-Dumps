#ifndef UE4SS_SDK_BP_Btn_CheatCategory_Tab_HPP
#define UE4SS_SDK_BP_Btn_CheatCategory_Tab_HPP

class UBP_Btn_CheatCategory_Tab_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBP_Btn_Input_C* BtnInput;                                                  // 0x0828 (size: 0x8)
    class UHorizontalBox* CheatCounterBox;                                            // 0x0830 (size: 0x8)
    class UTextBlock* CheatCountTxt;                                                  // 0x0838 (size: 0x8)
    class UImage* DotCheatImg;                                                        // 0x0840 (size: 0x8)
    class UPerPlatformImage* LineImg;                                                 // 0x0848 (size: 0x8)
    class UTextBlock* NavText;                                                        // 0x0850 (size: 0x8)
    class UTextBlock* NavText_Focused;                                                // 0x0858 (size: 0x8)
    class UWBP_ReplayMenuItem_C* PropertyBinding;                                     // 0x0860 (size: 0x8)
    FText MenuTitle;                                                                  // 0x0868 (size: 0x18)
    EMenuEnum Menu;                                                                   // 0x0880 (size: 0x1)
    bool Focused;                                                                     // 0x0881 (size: 0x1)
    bool Black;                                                                       // 0x0882 (size: 0x1)
    bool Title;                                                                       // 0x0883 (size: 0x1)
    bool Enabled;                                                                     // 0x0884 (size: 0x1)
    bool CapsLock;                                                                    // 0x0885 (size: 0x1)
    bool ForcedFocus;                                                                 // 0x0886 (size: 0x1)
    bool VerticalMenu;                                                                // 0x0887 (size: 0x1)
    bool IsBtnGreyed;                                                                 // 0x0888 (size: 0x1)
    bool IsBtnSelected;                                                               // 0x0889 (size: 0x1)
    bool IsBtnFocused;                                                                // 0x088A (size: 0x1)
    int32 DefaultTextSize;                                                            // 0x088C (size: 0x4)
    int32 TitleTextSize;                                                              // 0x0890 (size: 0x4)
    TEnumAsByte<EHorizontalAlignment> TextAlignment;                                  // 0x0894 (size: 0x1)
    FText PropertyTitleFalse;                                                         // 0x0898 (size: 0x18)
    FText PropertyTitleTrue;                                                          // 0x08B0 (size: 0x18)
    bool bUsePropertyValueForTitleText;                                               // 0x08C8 (size: 0x1)
    FBP_Btn_CheatCategory_Tab_COnPropertyUpdateDispatcher OnPropertyUpdateDispatcher; // 0x08D0 (size: 0x10)
    void OnPropertyUpdateDispatcher();
    FGameplayTagContainer CurrentMapTags;                                             // 0x08E0 (size: 0x20)

    void ShowActiveFeedbackWithoutCount(bool ShowFeedback, bool IsCheat);
    void IsArenaMenuMap(bool& Condition);
    void Set Modifier Count(int32 ModifierCount, bool IsCheat);
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
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_CheatCategory_Tab(int32 EntryPoint);
    void OnPropertyUpdateDispatcher__DelegateSignature();
}; // Size: 0x900

#endif
