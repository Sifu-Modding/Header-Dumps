#ifndef UE4SS_SDK_WBP_SpinBox_HPP
#define UE4SS_SDK_WBP_SpinBox_HPP

class UWBP_SpinBox_C : public UWBP_ReplayMenuItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0390 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0398 (size: 0x8)
    class UButton* Button_Left;                                                       // 0x03A0 (size: 0x8)
    class UButton* Button_Right;                                                      // 0x03A8 (size: 0x8)
    class UTextBlock* ChoiceTitle;                                                    // 0x03B0 (size: 0x8)
    class URichTextBlock* Content_Text;                                               // 0x03B8 (size: 0x8)
    class UImage* ContentImage;                                                       // 0x03C0 (size: 0x8)
    class UTextBlock* ContentText;                                                    // 0x03C8 (size: 0x8)
    class UImage* Cursor_0;                                                           // 0x03D0 (size: 0x8)
    class UImage* Cursor_1;                                                           // 0x03D8 (size: 0x8)
    class UImage* Cursor_2;                                                           // 0x03E0 (size: 0x8)
    class UImage* Cursor_3;                                                           // 0x03E8 (size: 0x8)
    class UImage* Cursor_4;                                                           // 0x03F0 (size: 0x8)
    class UImage* Cursor_5;                                                           // 0x03F8 (size: 0x8)
    class UImage* Cursor_6;                                                           // 0x0400 (size: 0x8)
    class UImage* Cursor_7;                                                           // 0x0408 (size: 0x8)
    class UImage* Cursor_8;                                                           // 0x0410 (size: 0x8)
    class UImage* Cursor_9;                                                           // 0x0418 (size: 0x8)
    class UImage* Cursor_10;                                                          // 0x0420 (size: 0x8)
    class UImage* Grad_1;                                                             // 0x0428 (size: 0x8)
    class UImage* Grad_2;                                                             // 0x0430 (size: 0x8)
    class UImage* Grad_3;                                                             // 0x0438 (size: 0x8)
    class UImage* Grad_4;                                                             // 0x0440 (size: 0x8)
    class UImage* Grad_5;                                                             // 0x0448 (size: 0x8)
    class UImage* Grad_6;                                                             // 0x0450 (size: 0x8)
    class UImage* Grad_7;                                                             // 0x0458 (size: 0x8)
    class UImage* Grad_8;                                                             // 0x0460 (size: 0x8)
    class UImage* Grad_9;                                                             // 0x0468 (size: 0x8)
    class UImage* Grad_10;                                                            // 0x0470 (size: 0x8)
    class UImage* Left_Arrow;                                                         // 0x0478 (size: 0x8)
    class UImage* Line;                                                               // 0x0480 (size: 0x8)
    class UWidgetSwitcher* OptionSwitcher;                                            // 0x0488 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x0490 (size: 0x8)
    class USizeBox* SizeBox_Choice;                                                   // 0x0498 (size: 0x8)
    class UHorizontalBox* Slider;                                                     // 0x04A0 (size: 0x8)
    class URichTextBlock* Txt_InboxDescription;                                       // 0x04A8 (size: 0x8)
    FWBP_SpinBox_COnReceivedFocus OnReceivedFocus;                                    // 0x04B0 (size: 0x10)
    void OnReceivedFocus();
    FWBP_SpinBox_COnLostFocus OnLostFocus;                                            // 0x04C0 (size: 0x10)
    void OnLostFocus();
    FWBP_SpinBox_COnClicked OnClicked;                                                // 0x04D0 (size: 0x10)
    void OnClicked();
    FText MultiChoiceTitle;                                                           // 0x04E0 (size: 0x18)
    FText InboxDescription;                                                           // 0x04F8 (size: 0x18)
    bool bCanLoop;                                                                    // 0x0510 (size: 0x1)
    bool bIncludeUpperLimit;                                                          // 0x0511 (size: 0x1)
    float HorizontalSizeChoice;                                                       // 0x0514 (size: 0x4)
    int32 SliderIndex;                                                                // 0x0518 (size: 0x4)
    int32 SliderDefaultMaxIndex;                                                      // 0x051C (size: 0x4)
    bool IsBlack;                                                                     // 0x0520 (size: 0x1)
    bool IsTextCenter;                                                                // 0x0521 (size: 0x1)
    bool bUseSlider;                                                                  // 0x0522 (size: 0x1)
    bool bHasChoice;                                                                  // 0x0523 (size: 0x1)
    bool ActiveOnKeyOnly;                                                             // 0x0524 (size: 0x1)
    bool IsInFocus;                                                                   // 0x0525 (size: 0x1)
    float PreviousAlphaValue;                                                         // 0x0528 (size: 0x4)

    void GetDescription(FText& InboxDescription);
    void SetInfoboxDescription(const FText& InText, bool OnFocus);
    void RefreshDisplay(bool bFocus);
    void GetSliderAlphaFomContainer(int32 Index, int32 Size, float& Alpha);
    void GetSliderAlpha(float& Alpha);
    void ComputeSliderIndex();
    void SetSliderContent(bool bFocus);
    void SetTextContent(bool bFocus);
    void GetTextContent(FText& Content);
    void SetContent(bool bFocus);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void SetFocusBrush(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetNextValue(ECycleDirection Direction);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BPE_OnSynchronizeProperties();
    void InitializeWidget();
    void OnPropertyBinded();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnPropertyUpdatedEvent();
    void ExecuteUbergraph_WBP_SpinBox(int32 EntryPoint);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
}; // Size: 0x52C

#endif
