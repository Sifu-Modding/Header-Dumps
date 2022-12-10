#ifndef UE4SS_SDK_WBP_SpinBox_Button_HPP
#define UE4SS_SDK_WBP_SpinBox_Button_HPP

class UWBP_SpinBox_Button_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SpinBox_C* WBP_SpinBox;
    FText MultiChoiceTitle;
    bool IsBlack;
    bool isTextCentered;
    float HorizontalSizeChoice;

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_SpinBox_Button(int32 EntryPoint);
};

#endif
