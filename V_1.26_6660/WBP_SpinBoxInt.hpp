#ifndef UE4SS_SDK_WBP_SpinBoxInt_HPP
#define UE4SS_SDK_WBP_SpinBoxInt_HPP

class UWBP_SpinBoxInt_C : public UWBP_SpinBox_C
{
    FWBP_SpinBoxInt_COnIndexChanged OnIndexChanged;                                   // 0x0530 (size: 0x10)
    void OnIndexChanged(int32 Index);
    int32 SelfBindingProperty;                                                        // 0x0540 (size: 0x4)
    int32 MinValue;                                                                   // 0x0544 (size: 0x4)
    int32 MaxValue;                                                                   // 0x0548 (size: 0x4)
    int32 IncrementValue;                                                             // 0x054C (size: 0x4)

    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void BPE_OnSelfBinding();
    void GetSliderAlpha(float& Alpha);
    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void GetValue(int32& Value);
    void SetValue(int32 Value);
    void OnIndexChanged__DelegateSignature(int32 Index);
}; // Size: 0x550

#endif
