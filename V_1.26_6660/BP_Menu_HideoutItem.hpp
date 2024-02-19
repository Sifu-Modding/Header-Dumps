#ifndef UE4SS_SDK_BP_Menu_HideoutItem_HPP
#define UE4SS_SDK_BP_Menu_HideoutItem_HPP

class UBP_Menu_HideoutItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* BkgAnim;                                                  // 0x0828 (size: 0x8)
    class UBP_HUD_Age_C* BP_Age;                                                      // 0x0830 (size: 0x8)
    class UBP_Btn_Input_C* BP_Btn_Input;                                              // 0x0838 (size: 0x8)
    class UBorder* ColorBorder;                                                       // 0x0840 (size: 0x8)
    class UTextBlock* DaytimeTxt;                                                     // 0x0848 (size: 0x8)
    class UImage* HideoutImg;                                                         // 0x0850 (size: 0x8)
    class UBorder* HideoutTint;                                                       // 0x0858 (size: 0x8)
    class UTextBlock* HideoutTitle;                                                   // 0x0860 (size: 0x8)
    class UScaleBox* IconBox;                                                         // 0x0868 (size: 0x8)
    class UHorizontalBox* InputBox;                                                   // 0x0870 (size: 0x8)
    class UTextBlock* InputTxt;                                                       // 0x0878 (size: 0x8)
    class UVerticalBox* TitleBox;                                                     // 0x0880 (size: 0x8)
    int32 HideoutID;                                                                  // 0x0888 (size: 0x4)
    FText InputLabel;                                                                 // 0x0890 (size: 0x18)
    bool Selected;                                                                    // 0x08A8 (size: 0x1)
    FBP_Menu_HideoutItem_CHideoutClicked HideoutClicked;                              // 0x08B0 (size: 0x10)
    void HideoutClicked();
    FLinearColor HideoutColor;                                                        // 0x08C0 (size: 0x10)
    bool Previous;                                                                    // 0x08D0 (size: 0x1)

    void SetPrevious(bool LocalPrevious);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FSlateColor GetTxtColor();
    void UpdateSelected(bool LocalSelected);
    void UpdateHideout(int32 LocalHideout);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnSelected_1();
    void BPE_OnDeselected_1();
    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Menu_HideoutItem(int32 EntryPoint);
    void HideoutClicked__DelegateSignature();
}; // Size: 0x8D1

#endif
