#ifndef UE4SS_SDK_WBP_SpinBoxEnum_HPP
#define UE4SS_SDK_WBP_SpinBoxEnum_HPP

class UWBP_SpinBoxEnum_C : public UWBP_SpinBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    TArray<FText> EnumTexts;                                                          // 0x0538 (size: 0x10)
    FWBP_SpinBoxEnum_COnIndexChanged OnIndexChanged;                                  // 0x0548 (size: 0x10)
    void OnIndexChanged(int32 Index);
    uint8 SelfBindingProperty;                                                        // 0x0558 (size: 0x1)
    TArray<class UTexture2D*> EnumImgs;                                               // 0x0560 (size: 0x10)
    TArray<FText> InboxOptionsDescriptions;                                           // 0x0570 (size: 0x10)

    void GetDescription(FText& InboxDescription);
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
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_SpinBoxEnum(int32 EntryPoint);
    void OnIndexChanged__DelegateSignature(int32 Index);
}; // Size: 0x580

#endif
