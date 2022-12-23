#ifndef UE4SS_SDK_WBP_SpinBoxBool_HPP
#define UE4SS_SDK_WBP_SpinBoxBool_HPP

class UWBP_SpinBoxBool_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText NoTextDisplay;
    FText YesTextDisplay;
    bool SelfBindingProperty;

    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void GetValue(bool& Value);
    void SetValue(bool Value);
    void BPE_OnSelfBinding();
    void ExecuteUbergraph_WBP_SpinBoxBool(int32 EntryPoint);
};

#endif
