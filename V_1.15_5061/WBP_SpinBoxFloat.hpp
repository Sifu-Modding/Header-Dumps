#ifndef UE4SS_SDK_WBP_SpinBoxFloat_HPP
#define UE4SS_SDK_WBP_SpinBoxFloat_HPP

class UWBP_SpinBoxFloat_C : public UWBP_SpinBox_C
{
    bool FloorOnIncrement;
    float FloatMaxValue;
    float FloatIncrementValue;
    float FloatMinValue;
    float ValueMultiplier;

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
};

#endif
