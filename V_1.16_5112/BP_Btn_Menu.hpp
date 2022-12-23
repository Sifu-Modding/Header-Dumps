#ifndef UE4SS_SDK_BP_Btn_Menu_HPP
#define UE4SS_SDK_BP_Btn_Menu_HPP

class UBP_Btn_Menu_C : public UButtonUserWidget
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
    FBP_Btn_Menu_COnBackButtonPressed OnBackButtonPressed;
    void OnBackButtonPressed();
    FBP_Btn_Menu_CNewEventDispatcher_0 NewEventDispatcher_0;
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
};

#endif
