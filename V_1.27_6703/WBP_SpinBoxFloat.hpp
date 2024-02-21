#ifndef UE4SS_SDK_WBP_SpinBoxFloat_HPP
#define UE4SS_SDK_WBP_SpinBoxFloat_HPP

class UWBP_SpinBoxFloat_C : public UWBP_SpinBox_C
{
    bool FloorOnIncrement;                                                            // 0x052C (size: 0x1)
    float FloatMaxValue;                                                              // 0x0530 (size: 0x4)
    float FloatIncrementValue;                                                        // 0x0534 (size: 0x4)
    float FloatMinValue;                                                              // 0x0538 (size: 0x4)
    float ValueMultiplier;                                                            // 0x053C (size: 0x4)

    void ApplyIncrementPrecision(float Value, float& Return);
    void GetSliderAlpha(float& Alpha);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void GetDisplayValue(float& Value);
    void GetTextContent(FText& Content);
    void GetValue(float& Value);
    void SetValue(float Value);
    void SetRawValue(float Value);
}; // Size: 0x540

#endif
