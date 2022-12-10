#ifndef UE4SS_SDK_WBP_SpinBoxInt_HPP
#define UE4SS_SDK_WBP_SpinBoxInt_HPP

class UWBP_SpinBoxInt_C : public UWBP_SpinBox_C
{
    FWBP_SpinBoxInt_COnIndexChanged OnIndexChanged;
    void OnIndexChanged(int32 Index);
    int32 SelfBindingProperty;
    int32 MinValue;
    int32 MaxValue;
    int32 IncrementValue;

    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void BPE_OnSelfBinding();
    void GetSliderAlpha(float& Alpha);
    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void GetValue(int32& Value);
    void SetValue(int32 Value);
    void OnIndexChanged__DelegateSignature(int32 Index);
};

#endif
