#ifndef UE4SS_SDK_BP_Btn_SpinBox_Clicked_HPP
#define UE4SS_SDK_BP_Btn_SpinBox_Clicked_HPP

class UBP_Btn_SpinBox_Clicked_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0318 (size: 0x8)
    class UBP_Btn_InfoBubble_C* BP_Menu_InfoBubble;                                   // 0x0320 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0328 (size: 0x8)
    class UButton* Button_Checkbox;                                                   // 0x0330 (size: 0x8)
    class URichTextBlock* ChoiceTitle;                                                // 0x0338 (size: 0x8)
    class URichTextBlock* Input_Title;                                                // 0x0340 (size: 0x8)
    class UBP_InputAction_C* InputAction;                                             // 0x0348 (size: 0x8)
    class UImage* LineImg;                                                            // 0x0350 (size: 0x8)
    class URichTextBlock* Separator;                                                  // 0x0358 (size: 0x8)
    class USizeBox* SizeBox_Choice;                                                   // 0x0360 (size: 0x8)
    class URichTextBlock* TitleValue;                                                 // 0x0368 (size: 0x8)
    FBP_Btn_SpinBox_Clicked_COnValueChanged OnValueChanged;                           // 0x0370 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_SpinBox_Clicked_COnReceivedFocus OnReceivedFocus;                         // 0x0380 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_SpinBox_Clicked_COnLostFocus OnLostFocus;                                 // 0x0390 (size: 0x10)
    void OnLostFocus();
    FBP_Btn_SpinBox_Clicked_COnClicked OnClicked;                                     // 0x03A0 (size: 0x10)
    void OnClicked();
    FText MultiChoiceTitle;                                                           // 0x03B0 (size: 0x18)
    FText InputTitle;                                                                 // 0x03C8 (size: 0x18)
    float HorizontalSizeChoice;                                                       // 0x03E0 (size: 0x4)
    FBP_Btn_SpinBox_Clicked_CScalabilityChanged ScalabilityChanged;                   // 0x03E8 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    FText InfoText;                                                                   // 0x03F8 (size: 0x18)
    bool IsBlack;                                                                     // 0x0410 (size: 0x1)
    EGameOptionTypes OptionType;                                                      // 0x0411 (size: 0x1)
    bool IsInFocus;                                                                   // 0x0412 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0418 (size: 0x8)
    TArray<class UFileMediaSource*> VideoIllustrations;                               // 0x0420 (size: 0x10)
    class UMaterial* MediaMat;                                                        // 0x0430 (size: 0x8)
    TArray<class UTexture2D*> ImageIllustrations;                                     // 0x0438 (size: 0x10)
    bool WaitingForKeyUp;                                                             // 0x0448 (size: 0x1)
    FText TitleValueText;                                                             // 0x0450 (size: 0x18)
    bool ButtonDisabled;                                                              // 0x0468 (size: 0x1)

    void EnableButton(bool Enable);
    void SetTitleValueText(FText TitleValue);
    void SetInputTitle(FText Text, bool On Focus);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetIsBlack(bool IsBlack);
    void Onm_OnClick_Bindable_0(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnFocusReceivedBehaviour();
    void SetFocusBrush(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Construct();
    void BPE_OnClicked_1();
    void BPE_OnSynchronizeProperties();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BP_Btn_SpinBox_Button_Checkbox_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Btn_SpinBox_Clicked(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
}; // Size: 0x469

#endif
