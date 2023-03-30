#ifndef UE4SS_SDK_WBP_SpinBox_ReplayMusicButton_HPP
#define UE4SS_SDK_WBP_SpinBox_ReplayMusicButton_HPP

class UWBP_SpinBox_ReplayMusicButton_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBP_InputAction_C* InputAction;                                             // 0x0828 (size: 0x8)
    class UImage* IsPlayingImageFeedback;                                             // 0x0830 (size: 0x8)
    class UWBP_SpinBox_C* WBP_SpinBox;                                                // 0x0838 (size: 0x8)
    FText MultiChoiceTitle;                                                           // 0x0840 (size: 0x18)
    bool IsBlack;                                                                     // 0x0858 (size: 0x1)
    bool isTextCentered;                                                              // 0x0859 (size: 0x1)
    float HorizontalSizeChoice;                                                       // 0x085C (size: 0x4)
    FName MusicStateName;                                                             // 0x0860 (size: 0x8)

    void SetStyle(bool Focus);
    void ActivateMusicPlayingFeedback(bool Activate);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_WBP_SpinBox_ReplayMusicButton(int32 EntryPoint);
}; // Size: 0x868

#endif
