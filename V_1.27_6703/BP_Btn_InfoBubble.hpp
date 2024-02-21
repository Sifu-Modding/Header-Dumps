#ifndef UE4SS_SDK_BP_Btn_InfoBubble_HPP
#define UE4SS_SDK_BP_Btn_InfoBubble_HPP

class UBP_Btn_InfoBubble_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* InfoFocus;                                                // 0x0270 (size: 0x8)
    class UButton* Button_200;                                                        // 0x0278 (size: 0x8)
    class UImage* Info;                                                               // 0x0280 (size: 0x8)
    class UOverlay* InfoBubble;                                                       // 0x0288 (size: 0x8)
    class URichTextBlock* RichText_Info;                                              // 0x0290 (size: 0x8)
    class UButtonUserWidget* FocusedButton;                                           // 0x0298 (size: 0x8)

    void OnFirstComboFocusLost();
    void ShowInfo(class UBP_Btn_Combo_C* Combo, class UButtonUserWidget* Option);
    void BndEvt__Button_200_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_InfoBubble(int32 EntryPoint);
}; // Size: 0x2A0

#endif
