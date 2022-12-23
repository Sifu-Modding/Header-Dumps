#ifndef UE4SS_SDK_BP_Btn_Difficulty_HPP
#define UE4SS_SDK_BP_Btn_Difficulty_HPP

class UBP_Btn_Difficulty_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* BrushOver;
    class UTextBlock* BtnTitle;
    class UImage* Difficulty_Icon;
    class UImage* Padlock;
    class URichTextBlock* Txt_Description;
    class UVerticalBox* VerticalBox_0;
    FBP_Btn_Difficulty_COnValueChanged OnValueChanged;
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Difficulty_COnReceivedFocus OnReceivedFocus;
    void OnReceivedFocus();
    FBP_Btn_Difficulty_COnLostFocus OnLostFocus;
    void OnLostFocus();
    FBP_Btn_Difficulty_COnClicked OnClicked;
    void OnClicked();
    FText Title;
    FBP_Btn_Difficulty_CScalabilityChanged ScalabilityChanged;
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    bool IsBlack;
    bool IsInFocus;
    FText Description;
    FText UnlockDescription;
    bool Locked;
    class UTexture2D* DifficultyIcon_Image;

    void SetDifficultyIcon();
    void SetLockState(bool IsLocked);
    void SetDescription(FText Text, bool On Focus);
    void SetIsBlack(bool IsBlack);
    void EnableInteractions(bool Enable);
    void SetFocusBrush(bool On Focus);
    void SetChoiceTitle(FText Text, bool On Focus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void BPE_OnSynchronizeProperties();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BPE_OnClicked_1();
    void BPE_OnCultureChanged();
    void ExecuteUbergraph_BP_Btn_Difficulty(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
};

#endif
