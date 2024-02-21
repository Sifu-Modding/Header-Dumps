#ifndef UE4SS_SDK_WBP_SpinBoxBool_HPP
#define UE4SS_SDK_WBP_SpinBoxBool_HPP

class UWBP_SpinBoxBool_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    FText NoTextDisplay;                                                              // 0x0538 (size: 0x18)
    FText YesTextDisplay;                                                             // 0x0550 (size: 0x18)
    bool SelfBindingProperty;                                                         // 0x0568 (size: 0x1)

    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void GetValue(bool& Value);
    void SetValue(bool Value);
    void BPE_OnSelfBinding();
    void ExecuteUbergraph_WBP_SpinBoxBool(int32 EntryPoint);
}; // Size: 0x569

#endif
