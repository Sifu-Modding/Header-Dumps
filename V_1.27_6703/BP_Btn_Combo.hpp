#ifndef UE4SS_SDK_BP_Btn_Combo_HPP
#define UE4SS_SDK_BP_Btn_Combo_HPP

class UBP_Btn_Combo_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0830 (size: 0x8)
    class UHorizontalBox* ButtonBox;                                                  // 0x0838 (size: 0x8)
    class UImage* CheatIcon;                                                          // 0x0840 (size: 0x8)
    class URichTextBlock* ChoiceTitle;                                                // 0x0848 (size: 0x8)
    class UTextBlock* Details;                                                        // 0x0850 (size: 0x8)
    class UBorder* Line;                                                              // 0x0858 (size: 0x8)
    FBP_Btn_Combo_COnReceivedFocus OnReceivedFocus;                                   // 0x0860 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_Combo_COnLostFocus OnLostFocus;                                           // 0x0870 (size: 0x10)
    void OnLostFocus();
    FBP_Btn_Combo_COnClicked OnClicked;                                               // 0x0880 (size: 0x10)
    void OnClicked();
    FText Combo Name;                                                                 // 0x0890 (size: 0x18)
    FText InfoBuble Text;                                                             // 0x08A8 (size: 0x18)
    FText Details Text;                                                               // 0x08C0 (size: 0x18)
    TArray<FUI_ComboInput> ComboInput;                                                // 0x08D8 (size: 0x10)
    TArray<class UBP_InputAction_C*> ButtonsArray;                                    // 0x08E8 (size: 0x10)
    bool ListCreated;                                                                 // 0x08F8 (size: 0x1)
    class UBP_Btn_Input_C* BtnInput;                                                  // 0x0900 (size: 0x8)
    bool IsFocused;                                                                   // 0x0908 (size: 0x1)
    FGameplayTagContainer SkillTagNeeded;                                             // 0x0910 (size: 0x20)
    bool IsDarkMode;                                                                  // 0x0930 (size: 0x1)
    FString ComboNameAppendSuffix;                                                    // 0x0938 (size: 0x10)
    TArray<FGameplayTag> AltMoveTags;                                                 // 0x0948 (size: 0x10)

    void GetComboName(FText& Name);
    void SetIsDarkMode(bool DarkMode);
    void CheckSkillUnlocked();
    void SetButtonsAction();
    void SetFocusState(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BP_Btn_Combo(int32 EntryPoint);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
}; // Size: 0x958

#endif
