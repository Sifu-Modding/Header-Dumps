#ifndef UE4SS_SDK_WBP_SpinBox_Button_HPP
#define UE4SS_SDK_WBP_SpinBox_Button_HPP

class UWBP_SpinBox_Button_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UWBP_SpinBox_C* WBP_SpinBox;                                                // 0x0828 (size: 0x8)
    FText MultiChoiceTitle;                                                           // 0x0830 (size: 0x18)
    bool IsBlack;                                                                     // 0x0848 (size: 0x1)
    bool isTextCentered;                                                              // 0x0849 (size: 0x1)
    float HorizontalSizeChoice;                                                       // 0x084C (size: 0x4)

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void PreConstruct(bool IsDesignTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_SpinBox_Button(int32 EntryPoint);
}; // Size: 0x850

#endif
