#ifndef UE4SS_SDK_BP_Btn_Outfit_HPP
#define UE4SS_SDK_BP_Btn_Outfit_HPP

class UBP_Btn_Outfit_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x0830 (size: 0x8)
    class UImage* BrushOver;                                                          // 0x0838 (size: 0x8)
    class UWidgetSwitcher* IconSwitcher;                                              // 0x0840 (size: 0x8)
    class UImage* NotifNew;                                                           // 0x0848 (size: 0x8)
    class UImage* Padlock;                                                            // 0x0850 (size: 0x8)
    class URichTextBlock* Txt_Description;                                            // 0x0858 (size: 0x8)
    class URichTextBlock* Txt_Title;                                                  // 0x0860 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0868 (size: 0x8)
    FBP_Btn_Outfit_COnValueChanged OnValueChanged;                                    // 0x0870 (size: 0x10)
    void OnValueChanged(int32 Value, ECycleDirection Direction, float RatioFloat);
    FBP_Btn_Outfit_COnReceivedFocus OnReceivedFocus;                                  // 0x0880 (size: 0x10)
    void OnReceivedFocus();
    FBP_Btn_Outfit_COnLostFocus OnLostFocus;                                          // 0x0890 (size: 0x10)
    void OnLostFocus();
    FBP_Btn_Outfit_COnClicked OnClicked;                                              // 0x08A0 (size: 0x10)
    void OnClicked();
    FText Title;                                                                      // 0x08B0 (size: 0x18)
    FBP_Btn_Outfit_CScalabilityChanged ScalabilityChanged;                            // 0x08C8 (size: 0x10)
    void ScalabilityChanged(int32 SelectedIndex, uint8 Scalability);
    bool IsBlack;                                                                     // 0x08D8 (size: 0x1)
    bool IsInFocus;                                                                   // 0x08D9 (size: 0x1)
    FText Description;                                                                // 0x08E0 (size: 0x18)
    FText UnlockDescription;                                                          // 0x08F8 (size: 0x18)
    bool Locked;                                                                      // 0x0910 (size: 0x1)
    int32 iOutfitIndex;                                                               // 0x0914 (size: 0x4)
    FGameplayTag UnlockTag;                                                           // 0x0918 (size: 0x8)

    void SetNewUnlockState(bool IsNewUnlocked);
    void Swap Outfit();
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
    void ExecuteUbergraph_BP_Btn_Outfit(int32 EntryPoint);
    void ScalabilityChanged__DelegateSignature(int32 SelectedIndex, uint8 Scalability);
    void OnClicked__DelegateSignature();
    void OnLostFocus__DelegateSignature();
    void OnReceivedFocus__DelegateSignature();
    void OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
}; // Size: 0x920

#endif
