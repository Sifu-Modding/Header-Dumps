#ifndef UE4SS_SDK_WBP_ReplayMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayMenuItem_HPP

class UWBP_ReplayMenuItem_C : public UBindablePropertyUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FText PropertyName;                                                               // 0x0358 (size: 0x18)
    FText TextFormatting;                                                             // 0x0370 (size: 0x18)

    void OnPropertyPreUpdate(class UBindablePropertyBase* _property);
    void OnPropertyUpdate(class UBindablePropertyBase* _property);
    void GetWidgetToFocusOn(class UUserWidget*& Widget);
    void FormatValueText(FString Value, FString& FormatedValue);
    void FocusItem(class APlayerController* Controller);
    void OnPropertyBinded();
    void ExecuteUbergraph_WBP_ReplayMenuItem(int32 EntryPoint);
}; // Size: 0x388

#endif
