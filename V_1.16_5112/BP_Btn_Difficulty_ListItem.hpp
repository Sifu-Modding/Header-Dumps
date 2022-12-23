#ifndef UE4SS_SDK_BP_Btn_Difficulty_ListItem_HPP
#define UE4SS_SDK_BP_Btn_Difficulty_ListItem_HPP

class UBP_Btn_Difficulty_ListItem_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UBorder* Border_AllMouseStates;
    class UImage* Brush_Over;
    class UBorder* BtnBorder;
    class UTextBlock* BtnText;
    class UImage* LineLeft;
    class UImage* LineRight;
    FText Text;
    bool Enabled;
    class UAkAudioEvent* OnFocusEvent;
    class UAkAudioEvent* OnClickEvent;
    bool isTextCentered;
    bool IsWhite;
    bool IsLocked;

    void SetIsLocked(bool Locked);
    void SetIsWhite(bool White);
    void SetFocusBrush(bool OnFocus);
    void SetText(FText Text, bool OnFocus, bool isTextCentered);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Btn_Difficulty_ListItem(int32 EntryPoint);
};

#endif
