#ifndef UE4SS_SDK_BP_Btn_Menu_HPP
#define UE4SS_SDK_BP_Btn_Menu_HPP

class UBP_Btn_Menu_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWidgetAnimation* OnFocus;                                                  // 0x0828 (size: 0x8)
    class UBorder* Border_AllMouseStates;                                             // 0x0830 (size: 0x8)
    class UImage* Brush_Over;                                                         // 0x0838 (size: 0x8)
    class UBorder* BtnBorder;                                                         // 0x0840 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0848 (size: 0x8)
    class UImage* LineLeft;                                                           // 0x0850 (size: 0x8)
    class UImage* LineRight;                                                          // 0x0858 (size: 0x8)
    FText Text;                                                                       // 0x0860 (size: 0x18)
    bool Enabled;                                                                     // 0x0878 (size: 0x1)
    class UAkAudioEvent* OnFocusEvent;                                                // 0x0880 (size: 0x8)
    class UAkAudioEvent* OnClickEvent;                                                // 0x0888 (size: 0x8)
    bool isTextCentered;                                                              // 0x0890 (size: 0x1)
    bool IsWhite;                                                                     // 0x0891 (size: 0x1)
    bool IsLocked;                                                                    // 0x0892 (size: 0x1)
    FBP_Btn_Menu_COnBackButtonPressed OnBackButtonPressed;                            // 0x0898 (size: 0x10)
    void OnBackButtonPressed();
    FBP_Btn_Menu_CNewEventDispatcher_0 NewEventDispatcher_0;                          // 0x08A8 (size: 0x10)
    void NewEventDispatcher_0();

    void SetIsLocked(bool Locked);
    void SetIsWhite(bool White);
    void SetFocusBrush(bool OnFocus);
    void SetText(FText Text, bool OnFocus, bool isTextCentered);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetEnabled(bool Enabled);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void BPE_OnInputActionPressed(InputAction _eAction);
    void ExecuteUbergraph_BP_Btn_Menu(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
    void OnBackButtonPressed__DelegateSignature();
}; // Size: 0x8B8

#endif
