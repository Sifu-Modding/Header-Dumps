#ifndef UE4SS_SDK_WBP_ReplayMenuItem_HPP
#define UE4SS_SDK_WBP_ReplayMenuItem_HPP

class UWBP_ReplayMenuItem_C : public UBindablePropertyUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText PropertyName;
    FText TextFormatting;

    void OnPropertyPreUpdate(class UBindablePropertyBase* _property);
    void OnPropertyUpdate(class UBindablePropertyBase* _property);
    void GetWidgetToFocusOn(class UUserWidget*& Widget);
    void FormatValueText(FString Value, FString& FormatedValue);
    void FocusItem(class APlayerController* Controller);
    void OnPropertyBinded();
    void ExecuteUbergraph_WBP_ReplayMenuItem(int32 EntryPoint);
};

#endif
