#ifndef UE4SS_SDK_BP_Menu_HideoutItem_HPP
#define UE4SS_SDK_BP_Menu_HideoutItem_HPP

class UBP_Menu_HideoutItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BkgAnim;
    class UBP_HUD_Age_C* BP_Age;
    class UBP_Btn_Input_C* BP_Btn_Input;
    class UBorder* ColorBorder;
    class UTextBlock* DaytimeTxt;
    class UImage* HideoutImg;
    class UBorder* HideoutTint;
    class UTextBlock* HideoutTitle;
    class UScaleBox* IconBox;
    class UHorizontalBox* InputBox;
    class UTextBlock* InputTxt;
    class UVerticalBox* TitleBox;
    int32 HideoutID;
    FText InputLabel;
    bool Selected;
    FBP_Menu_HideoutItem_CHideoutClicked HideoutClicked;
    void HideoutClicked();
    FLinearColor HideoutColor;
    bool Previous;

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
};

#endif
