#ifndef UE4SS_SDK_WBP_SpinBoxFloatOptions_HPP
#define UE4SS_SDK_WBP_SpinBoxFloatOptions_HPP

class UWBP_SpinBoxFloatOptions_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    TArray<float> Options;                                                            // 0x0538 (size: 0x10)
    int32 CurrentOptionIndex;                                                         // 0x0548 (size: 0x4)
    int32 DefaultOptionIndex;                                                         // 0x054C (size: 0x4)
    FWBP_SpinBoxFloatOptions_COnIndexChanged OnIndexChanged;                          // 0x0550 (size: 0x10)
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
}; // Size: 0x560

#endif
