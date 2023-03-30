#ifndef UE4SS_SDK_BP_Btn_InputBtn_HPP
#define UE4SS_SDK_BP_Btn_InputBtn_HPP

class UBP_Btn_InputBtn_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UBorder* Bkg;                                                               // 0x0828 (size: 0x8)
    class UBP_Btn_Input_C* BP_InputIcon;                                              // 0x0830 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x0838 (size: 0x8)
    FText Text;                                                                       // 0x0840 (size: 0x18)
    EControllerIconStyles IconStyle;                                                  // 0x0858 (size: 0x1)
    InputAction Action;                                                               // 0x0859 (size: 0x1)
    bool bPrimaryAction;                                                              // 0x085A (size: 0x1)
    class UGenericInputData* Input;                                                   // 0x0860 (size: 0x8)
    FLinearColor FocusColor;                                                          // 0x0868 (size: 0x10)

    void SetIsBlack(bool Black);
    void SetMappingContext(InputContext Context);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void SetText(FText Text);
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void Construct();
    void BPE_OnSynchronizeProperties();
    void BPE_OnSelected();
    void BPE_OnDeselected();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BPE_GiveFocus();
    void ExecuteUbergraph_BP_Btn_InputBtn(int32 EntryPoint);
}; // Size: 0x878

#endif
