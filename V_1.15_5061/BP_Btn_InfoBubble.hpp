#ifndef UE4SS_SDK_BP_Btn_InfoBubble_HPP
#define UE4SS_SDK_BP_Btn_InfoBubble_HPP

class UBP_Btn_InfoBubble_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* InfoFocus;
    class UButton* Button_200;
    class UImage* Info;
    class UOverlay* InfoBubble;
    class URichTextBlock* RichText_Info;
    class UButtonUserWidget* FocusedButton;

    void OnFirstComboFocusLost();
    void ShowInfo(class UBP_Btn_Combo_C* Combo, class UButtonUserWidget* Option);
    void BndEvt__Button_200_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_InfoBubble(int32 EntryPoint);
};

#endif
