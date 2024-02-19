#ifndef UE4SS_SDK_WBP_ReplaySubMenuWithProperties_HPP
#define UE4SS_SDK_WBP_ReplaySubMenuWithProperties_HPP

class UWBP_ReplaySubMenuWithProperties_C : public UWBP_ReplaySubMenuBase_C
{
    FWBP_ReplaySubMenuWithProperties_CPropertyEditedDispatcher PropertyEditedDispatcher; // 0x03F0 (size: 0x10)
    void PropertyEditedDispatcher(class UBindablePropertyBase* _property);
    FWBP_ReplaySubMenuWithProperties_CPropertyPreEditDispatcher PropertyPreEditDispatcher; // 0x0400 (size: 0x10)
    void PropertyPreEditDispatcher(class UBindablePropertyBase* _property);
    FWBP_ReplaySubMenuWithProperties_CPropertyFocusLostDispatcher PropertyFocusLostDispatcher; // 0x0410 (size: 0x10)
    void PropertyFocusLostDispatcher(class UBindablePropertyBase* NewParam);

    void BindIntProperty(class UBindablePropertyUserWidget* Widget, int32& Value, class UObject* Owner);
    void BindStringProperty(class UBindablePropertyUserWidget* Widget, FString& Value, class UObject* Owner);
    void BindBoolProperty(class UBindablePropertyUserWidget* Widget, bool& Value, class UObject* Owner);
    void BindEnumProperty(class UBindablePropertyUserWidget* Widget, uint8& Value, class UObject* Owner);
    void BindFloatProperty(class UBindablePropertyUserWidget* Widget, float& Value, class UObject* Owner);
    void OnPropertyPreEdited(class UBindablePropertyBase* _property);
    void OnPropertyEdited(class UBindablePropertyBase* _property);
    void PropertyFocusLostDispatcher__DelegateSignature(class UBindablePropertyBase* NewParam);
    void PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void PropertyEditedDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
}; // Size: 0x420

#endif
