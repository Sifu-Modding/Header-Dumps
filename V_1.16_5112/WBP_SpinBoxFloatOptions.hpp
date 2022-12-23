#ifndef UE4SS_SDK_WBP_SpinBoxFloatOptions_HPP
#define UE4SS_SDK_WBP_SpinBoxFloatOptions_HPP

class UWBP_SpinBoxFloatOptions_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<float> Options;
    int32 CurrentOptionIndex;
    int32 DefaultOptionIndex;
    FWBP_SpinBoxFloatOptions_COnIndexChanged OnIndexChanged;
    void OnIndexChanged(int32 Index);

    void Initialize Default Value();
    void GetSliderAlpha(float& Alpha);
    void GetTextContent(FText& Content);
    void GetValueFromOption(float& Value, int32& OptionIndex, bool& ShouldUpdateKeyValue);
    void GetValue(float& Value);
    void SetValue(float Value);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void OnPropertyBinded();
    void InitializeWidget();
    void ExecuteUbergraph_WBP_SpinBoxFloatOptions(int32 EntryPoint);
    void OnIndexChanged__DelegateSignature(int32 Index);
};

#endif
