#ifndef UE4SS_SDK_WBP_TimeDilationDebug_HPP
#define UE4SS_SDK_WBP_TimeDilationDebug_HPP

class UWBP_TimeDilationDebug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0270 (size: 0x8)
    class UBorder* Border_85;                                                         // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_123;                                                  // 0x0280 (size: 0x8)
    FText TimeDilationText;                                                           // 0x0288 (size: 0x18)
    FSlateColor TimeDilationColor;                                                    // 0x02A0 (size: 0x28)

    FSlateColor GetColorAndOpacity_TimeDilation();
    FText GetText_TimeDilation();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_TimeDilationDebug(int32 EntryPoint);
}; // Size: 0x2C8

#endif
