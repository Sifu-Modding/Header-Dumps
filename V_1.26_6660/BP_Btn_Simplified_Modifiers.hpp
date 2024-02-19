#ifndef UE4SS_SDK_BP_Btn_Simplified_Modifiers_HPP
#define UE4SS_SDK_BP_Btn_Simplified_Modifiers_HPP

class UBP_Btn_Simplified_Modifiers_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0318 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0320 (size: 0x8)
    class UPerPlatformImage* CheatTypeIcon;                                           // 0x0328 (size: 0x8)
    class UWidgetSwitcher* CheatTypeIconSwitcher;                                     // 0x0330 (size: 0x8)
    class URichTextBlock* ChoiceTitle;                                                // 0x0338 (size: 0x8)
    class UWidgetSwitcher* DescriptionColor;                                          // 0x0340 (size: 0x8)
    class UPerPlatformImage* LineImg;                                                 // 0x0348 (size: 0x8)
    class UPerPlatformImage* ModifierTypeIcon;                                        // 0x0350 (size: 0x8)
    class URichTextBlock* NonInteractive_Text;                                        // 0x0358 (size: 0x8)
    class UImage* NotifActivated_Img;                                                 // 0x0360 (size: 0x8)
    class UOverlay* OverlayAll;                                                       // 0x0368 (size: 0x8)
    class UOverlay* OverlayNotifActivated;                                            // 0x0370 (size: 0x8)
    class USizeBox* SizeBox_Choice;                                                   // 0x0378 (size: 0x8)
    class USizeBox* SizeBoxDescription;                                               // 0x0380 (size: 0x8)
    class UVerticalBox* TitleVerticalBox;                                             // 0x0388 (size: 0x8)
    class URichTextBlock* Txt_InboxDescriptionBlack;                                  // 0x0390 (size: 0x8)
    class URichTextBlock* Txt_InboxDescriptionWhite;                                  // 0x0398 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x03A0 (size: 0x8)
    FBP_Btn_Simplified_Modifiers_COnReceivedFocus OnReceivedFocus;                    // 0x03A8 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_Simplified_Modifiers_COnLostFocus OnLostFocus;                            // 0x03B8 (size: 0x10)
    void OnLostFocus();
    FBP_Btn_Simplified_Modifiers_COnClicked OnClicked;                                // 0x03C8 (size: 0x10)
    void OnClicked(class UBP_Btn_SpinBox_Modifiers_C* SpinboxModifier);
    bool IsBlack;                                                                     // 0x03D8 (size: 0x1)
    bool IsInFocus;                                                                   // 0x03D9 (size: 0x1)
    bool NoInteraction;                                                               // 0x03DA (size: 0x1)
    FText CustomTitle;                                                                // 0x03E0 (size: 0x18)
    FText CustomDescription;                                                          // 0x03F8 (size: 0x18)
    FText CustomValue;                                                                // 0x0410 (size: 0x18)
    TEnumAsByte<CheatType> CustomCheatType;                                           // 0x0428 (size: 0x1)

    void InitializeNonInteractiveModifier(FText Title, FText Description, FText Value, TEnumAsByte<CheatType> CheatType);
    void RefreshFocusVisualState(bool Focus);
    void UpdateActivatedModifierFeedback();
    void UpdateModifierTypeFeedback();
    void SetInboxDescription(FText Text, bool On Focus);
    void SetIsBlack(bool IsBlack);
    void SetContentText(const FText& InText, bool OnFocus);
    void SetFocusBrush(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void ExecuteUbergraph_BP_Btn_Simplified_Modifiers(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UBP_Btn_SpinBox_Modifiers_C* SpinboxModifier);
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
}; // Size: 0x429

#endif
