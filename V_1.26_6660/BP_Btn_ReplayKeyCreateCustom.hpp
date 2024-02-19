#ifndef UE4SS_SDK_BP_Btn_ReplayKeyCreateCustom_HPP
#define UE4SS_SDK_BP_Btn_ReplayKeyCreateCustom_HPP

class UBP_Btn_ReplayKeyCreateCustom_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UBP_Replay_CustomKeyCreateInput_C* BlendCut;                                // 0x0830 (size: 0x8)
    class UBP_Replay_CustomKeyCreateInput_C* BlendEaseIn;                             // 0x0838 (size: 0x8)
    class UBP_Replay_CustomKeyCreateInput_C* BlendEaseInOut;                          // 0x0840 (size: 0x8)
    class UBP_Replay_CustomKeyCreateInput_C* BlendEaseOut;                            // 0x0848 (size: 0x8)
    class UBP_Replay_CustomKeyCreateInput_C* BlendLinear;                             // 0x0850 (size: 0x8)
    class UWidgetSwitcher* BlendSwitcher;                                             // 0x0858 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0860 (size: 0x8)
    class UImage* Btn_Icon;                                                           // 0x0868 (size: 0x8)
    class UImage* Img_Separator;                                                      // 0x0870 (size: 0x8)
    class URichTextBlock* Txt_Description;                                            // 0x0878 (size: 0x8)
    class URichTextBlock* Txt_Title;                                                  // 0x0880 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0888 (size: 0x8)
    FBP_Btn_ReplayKeyCreateCustom_COnValueChanged OnValueChanged;                     // 0x0890 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_ReplayKeyCreateCustom_COnReceivedFocus OnReceivedFocus;                   // 0x08A0 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_ReplayKeyCreateCustom_COnLostFocus OnLostFocus;                           // 0x08B0 (size: 0x10)
    void OnLostFocus();
    FBP_Btn_ReplayKeyCreateCustom_COnClicked OnClicked;                               // 0x08C0 (size: 0x10)
    void OnClicked();
    FText Title;                                                                      // 0x08D0 (size: 0x18)
    FBP_Btn_ReplayKeyCreateCustom_CScalabilityChanged ScalabilityChanged;             // 0x08E8 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    bool IsBlack;                                                                     // 0x08F8 (size: 0x1)
    bool IsInFocus;                                                                   // 0x08F9 (size: 0x1)
    FText Description;                                                                // 0x0900 (size: 0x18)
    class UTexture2D* DifficultyIcon_Image;                                           // 0x0918 (size: 0x8)

    void GetBlendType(EReplayKeyTransition& BlendType);
    void GotoNextBlend();
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
    void ExecuteUbergraph_BP_Btn_ReplayKeyCreateCustom(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
}; // Size: 0x920

#endif
