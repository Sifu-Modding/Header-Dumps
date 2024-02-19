#ifndef UE4SS_SDK_BP_PropertyBindingLibrary_HPP
#define UE4SS_SDK_BP_PropertyBindingLibrary_HPP

class UBP_PropertyBindingLibrary_C : public UBlueprintFunctionLibrary
{

    void SetWidgetInt(class UBindablePropertyUserWidget* Widget, int32 Value, class UObject* __WorldContext, bool& PropertyValid);
    void SetIntProperty(class UBindablePropertyBase* Property, int32 Value, class UObject* __WorldContext, bool& PropertyValid);
    void GetWidgetInt(class UBindablePropertyUserWidget* Widget, class UObject* __WorldContext, int32& EnumValue, bool& PropertyValid);
    void BindIntProperty(class UBindablePropertyUserWidget* Widget, class UObject* Owner, int32& Value, const FBindIntPropertyOnPropertyPreUpdate& OnPropertyPreUpdate, const FBindIntPropertyOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
    void GetWidgetString(class UBindablePropertyUserWidget* Widget, class UObject* __WorldContext, FString& StringValue, bool& PropertyValid);
    void SetWidgetString(class UBindablePropertyUserWidget* Widget, FString Value, class UObject* __WorldContext, bool& PropertyValid);
    void SetStringProperty(class UBindablePropertyBase* Property, FString Value, class UObject* __WorldContext, bool& PropertyValid);
    void BindStringProperty(class UBindablePropertyUserWidget* Widget, class UObject* Owner, FString& Value, const FBindStringPropertyOnPropertyPreUpdate& OnPropertyPreUpdate, const FBindStringPropertyOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
    void SetWidgetEnum(class UBindablePropertyUserWidget* Widget, uint8 Value, class UObject* __WorldContext, bool& PropertyValid);
    void SetWidgetBool(class UBindablePropertyUserWidget* Widget, bool Value, class UObject* __WorldContext, bool& PropertyValid);
    void SetWidgetFloat(class UBindablePropertyUserWidget* Widget, float Value, class UObject* __WorldContext, bool& PropertyValid);
    void GetWidgetBool(class UBindablePropertyUserWidget* Widget, class UObject* __WorldContext, bool& BoolValue, bool& PropertyValid);
    void GetWidgetFloat(class UBindablePropertyUserWidget* Widget, class UObject* __WorldContext, float& FloatValue, bool& PropertyValid);
    void GetWidgetEnum(class UBindablePropertyUserWidget* Widget, class UObject* __WorldContext, uint8& EnumValue, bool& PropertyValid);
    void SetEnumProperty(class UBindablePropertyBase* Property, uint8 Value, class UObject* __WorldContext, bool& PropertyValid);
    void GetFloatPropertyValue(class UBindablePropertyBase* Property, class UObject* __WorldContext, float& FloatValue, bool& PropertyValid);
    void GetBoolPropertyValue(class UBindablePropertyBase* Property, class UObject* __WorldContext, bool& BoolValue, bool& PropertyValid);
    void GetEnumPropertyValue(class UBindablePropertyBase* Property, class UObject* __WorldContext, uint8& EnumValue, bool& PropertyValid);
    void GetIntPropertyValue(class UBindablePropertyBase* Property, class UObject* __WorldContext, int32& IntValue, bool& PropertyValid);
    void GetStringPropertyValue(class UBindablePropertyBase* Property, class UObject* __WorldContext, FString& StringValue, bool& PropertyValid);
    void SetBoolProperty(class UBindablePropertyBase* Property, bool Value, class UObject* __WorldContext, bool& PropertyValid);
    void SetFloatProperty(class UBindablePropertyBase* Property, float Value, class UObject* __WorldContext, bool& PropertyValid);
    void GetFloatProperty(class UBindablePropertyBase* Property, class UObject* __WorldContext, class UBindableFloatProperty*& FloatProperty, bool& PropertyValid);
    void GetBoolProperty(class UBindablePropertyBase* Property, class UObject* __WorldContext, class UBindableBoolProperty*& BoolProperty, bool& PropertyValid);
    void GetEnumProperty(class UBindablePropertyBase* Property, class UObject* __WorldContext, class UBindableEnumProperty*& EnumProperty, bool& PropertyValid);
    void GetIntProperty(class UBindablePropertyBase* Property, class UObject* __WorldContext, class UBindableIntProperty*& IntProperty, bool& PropertyValid);
    void GetStringProperty(class UBindablePropertyBase* Property, class UObject* __WorldContext, class UBindableStringProperty*& StringProperty, bool& PropertyValid);
    void BindBoolProperty(class UBindablePropertyUserWidget* Widget, class UObject* Owner, bool& Value, const FBindBoolPropertyOnPropertyPreUpdate& OnPropertyPreUpdate, const FBindBoolPropertyOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
    void BindFloatProperty(class UBindablePropertyUserWidget* Widget, class UObject* Owner, float& Value, const FBindFloatPropertyOnPropertyPreUpdate& OnPropertyPreUpdate, const FBindFloatPropertyOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
    void BindEnumProperty(class UBindablePropertyUserWidget* Widget, class UObject* Owner, uint8& Value, const FBindEnumPropertyOnPropertyPreUpdate& OnPropertyPreUpdate, const FBindEnumPropertyOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
    void OnPrePropertyBind(class UBindablePropertyUserWidget* Widget, class UObject* Owner, class UObject* __WorldContext);
    void OnPropertyBind(class UBindablePropertyBase* Property, class UObject* Owner, const FOnPropertyBindOnPropertyPreUpdate& OnPropertyPreUpdate, const FOnPropertyBindOnPropertyUpdate& OnPropertyUpdate, class UObject* __WorldContext);
}; // Size: 0x28

#endif
