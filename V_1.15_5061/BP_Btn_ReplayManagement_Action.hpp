#ifndef UE4SS_SDK_BP_Btn_ReplayManagement_Action_HPP
#define UE4SS_SDK_BP_Btn_ReplayManagement_Action_HPP

class UBP_Btn_ReplayManagement_Action_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnFocus;
    class UImage* Brush_Over;
    class UBorder* BtnBorder;
    class UTextBlock* BtnText;
    FText Text;
    bool Enabled;
    class UAkAudioEvent* OnFocusEvent;
    class UAkAudioEvent* OnClickEvent;
    bool IsWhite;

    void SetIsWhite(bool White);
    void SetFocusBrush(bool OnFocus);
    void SetText(FText Text, bool OnFocus);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetEnabled(bool Enabled);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_BP_Btn_ReplayManagement_Action(int32 EntryPoint);
};

#endif
