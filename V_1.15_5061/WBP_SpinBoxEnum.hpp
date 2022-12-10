#ifndef UE4SS_SDK_WBP_SpinBoxEnum_HPP
#define UE4SS_SDK_WBP_SpinBoxEnum_HPP

class UWBP_SpinBoxEnum_C : public UWBP_SpinBox_C
{
    TArray<FText> EnumTexts;
    FWBP_SpinBoxEnum_COnIndexChanged OnIndexChanged;
    void OnIndexChanged(int32 Index);
    uint8 SelfBindingProperty;
    TArray<class UTexture2D*> EnumImgs;

    void SetFocusBrush(bool On Focus);
    void SetImgContent();
    void BPE_OnSelfBinding();
    void GetSliderAlpha(float& Alpha);
    void GetTextContent(FText& Content);
    void OnSetNextValue(ECycleDirection Direction);
    void HasRightValue(bool& hasValue);
    void HasLeftValue(bool& hasValue);
    void GetValue(uint8& Value);
    void SetValue(uint8 Value);
    void OnIndexChanged__DelegateSignature(int32 Index);
};

#endif
