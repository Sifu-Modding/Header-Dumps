#ifndef UE4SS_SDK_WBP_SpinBoxText_HPP
#define UE4SS_SDK_WBP_SpinBoxText_HPP

class UWBP_SpinBoxText_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> Texts;
    FWBP_SpinBoxText_COnIndexChanged OnIndexChanged;
    void OnIndexChanged(int32 Index);
    bool HasNoneOption;
    FString SelfBindingProperty;

    void Set Value from Index(int32 Index);
    void GetValueIndex(int32& _index);
    void GetSliderAlpha(float& Alpha);
    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void GetValue(FString& Value);
    void SetValue(FString Value);
    void Construct();
    void ClearTexts();
    void BPE_OnSelfBinding();
    void ExecuteUbergraph_WBP_SpinBoxText(int32 EntryPoint);
    void OnIndexChanged__DelegateSignature(int32 Index);
};

#endif
