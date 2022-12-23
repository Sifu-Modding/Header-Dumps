#ifndef UE4SS_SDK_BP_Btn_SpinBox_Clicked_HPP
#define UE4SS_SDK_BP_Btn_SpinBox_Clicked_HPP

class UBP_Btn_SpinBox_Clicked_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UBP_Btn_InfoBubble_C* BP_Menu_InfoBubble;
    class UImage* BrushOver;
    class UButton* Button_Checkbox;
    class URichTextBlock* ChoiceTitle;
    class URichTextBlock* Input_Title;
    class UBP_InputAction_C* InputAction;
    class UImage* LineImg;
    class URichTextBlock* Separator;
    class USizeBox* SizeBox_Choice;
    class URichTextBlock* TitleValue;
    FBP_Btn_SpinBox_Clicked_COnValueChanged OnValueChanged;
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_SpinBox_Clicked_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_SpinBox_Clicked_COnLostFocus OnLostFocus;
    void OnLostFocus();
    FBP_Btn_SpinBox_Clicked_COnClicked OnClicked;
    void OnClicked();
    FText MultiChoiceTitle;
    FText InputTitle;
    float HorizontalSizeChoice;
    FBP_Btn_SpinBox_Clicked_CScalabilityChanged ScalabilityChanged;
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    FText InfoText;
    bool IsBlack;
    EGameOptionTypes OptionType;
    bool IsInFocus;
    class UMediaPlayer* MediaPlayer;
    TArray<class UFileMediaSource*> VideoIllustrations;
    class UMaterial* MediaMat;
    TArray<class UTexture2D*> ImageIllustrations;
    bool WaitingForKeyUp;
    FText TitleValueText;
    bool ButtonDisabled;

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
};

#endif
