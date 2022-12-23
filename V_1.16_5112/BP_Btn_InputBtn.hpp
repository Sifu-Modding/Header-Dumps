#ifndef UE4SS_SDK_BP_Btn_InputBtn_HPP
#define UE4SS_SDK_BP_Btn_InputBtn_HPP

class UBP_Btn_InputBtn_C : public UButtonUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Bkg;
    class UBP_Btn_Input_C* BP_InputIcon;
    class UTextBlock* BtnText;
    FText Text;
    EControllerIconStyles IconStyle;
    InputAction Action;
    bool bPrimaryAction;
    class UGenericInputData* Input;
    FLinearColor FocusColor;

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
};

#endif
