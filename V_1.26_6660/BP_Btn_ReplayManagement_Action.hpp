#ifndef UE4SS_SDK_BP_Btn_ReplayManagement_Action_HPP
#define UE4SS_SDK_BP_Btn_ReplayManagement_Action_HPP

class UBP_Btn_ReplayManagement_Action_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UImage* Brush_Over;                                                         // 0x0830 (size: 0x8)
    class UBorder* BtnBorder;                                                         // 0x0838 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0840 (size: 0x8)
    FText Text;                                                                       // 0x0848 (size: 0x18)
    bool Enabled;                                                                     // 0x0860 (size: 0x1)
    class UAkAudioEvent* OnFocusEvent;                                                // 0x0868 (size: 0x8)
    class UAkAudioEvent* OnClickEvent;                                                // 0x0870 (size: 0x8)
    bool IsWhite;                                                                     // 0x0878 (size: 0x1)

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
}; // Size: 0x879

#endif
