#ifndef UE4SS_SDK_WBP_SpinBox_ReplayMusicButton_HPP
#define UE4SS_SDK_WBP_SpinBox_ReplayMusicButton_HPP

class UWBP_SpinBox_ReplayMusicButton_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_InputAction_C* InputAction;
    class UImage* IsPlayingImageFeedback;
    class UWBP_SpinBox_C* WBP_SpinBox;
    FText MultiChoiceTitle;
    bool IsBlack;
    bool isTextCentered;
    float HorizontalSizeChoice;
    FName MusicStateName;

    void SetStyle(bool Focus);
    void ActivateMusicPlayingFeedback(bool Activate);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_OnClicked();
    void ExecuteUbergraph_WBP_SpinBox_ReplayMusicButton(int32 EntryPoint);
};

#endif
