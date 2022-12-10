#ifndef UE4SS_SDK_WBP_TimeDilationDebug_HPP
#define UE4SS_SDK_WBP_TimeDilationDebug_HPP

class UWBP_TimeDilationDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBorder* Border_85;
    class UTextBlock* TextBlock_123;
    FText TimeDilationText;
    FSlateColor TimeDilationColor;

    FSlateColor GetColorAndOpacity_TimeDilation();
    FText GetText_TimeDilation();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_TimeDilationDebug(int32 EntryPoint);
};

#endif
