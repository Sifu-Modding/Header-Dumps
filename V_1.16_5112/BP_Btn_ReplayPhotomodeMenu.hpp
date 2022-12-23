#ifndef UE4SS_SDK_BP_Btn_ReplayPhotomodeMenu_HPP
#define UE4SS_SDK_BP_Btn_ReplayPhotomodeMenu_HPP

class UBP_Btn_ReplayPhotomodeMenu_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* BrushOver;
    class UImage* Btn_Icon;
    class UVerticalBox* Content;
    class URichTextBlock* Txt_Description;
    class URichTextBlock* Txt_Title;
    class UTextBlock* Warning;
    class UImage* WarningImg;
    class UHorizontalBox* WarningPanel;
    class UWidgetSwitcher* WidgetSwitcher_0;
    FBP_Btn_ReplayPhotomodeMenu_COnValueChanged OnValueChanged;
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_ReplayPhotomodeMenu_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_ReplayPhotomodeMenu_COnLostFocus OnLostFocus;
    void OnLostFocus();
    FBP_Btn_ReplayPhotomodeMenu_COnClicked OnClicked;
    void OnClicked();
    FText Title;
    FBP_Btn_ReplayPhotomodeMenu_CScalabilityChanged ScalabilityChanged;
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    bool IsBlack;
    bool IsInFocus;
    FText Description;
    class UTexture2D* DifficultyIcon_Image;

    void SetErrorState(bool Error, FText ErrorMessage);
    void DisableButton(bool IsDisabled);
    void SetLoadingState();
    void SetTitle(FText Text, bool On Focus);
    void SetDifficultyIcon();
    void SetDescription(FText Text, bool On Focus);
    void EnableInteractions(bool Enable);
    void SetFocusBrush(bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BPE_OnClicked_1();
    void BPE_OnCultureChanged();
    void ExecuteUbergraph_BP_Btn_ReplayPhotomodeMenu(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
};

#endif
