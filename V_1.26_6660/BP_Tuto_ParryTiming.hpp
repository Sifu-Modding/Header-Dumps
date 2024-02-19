#ifndef UE4SS_SDK_BP_Tuto_ParryTiming_HPP
#define UE4SS_SDK_BP_Tuto_ParryTiming_HPP

class UBP_Tuto_ParryTiming_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* ParryTimingFeedback;                                      // 0x0270 (size: 0x8)
    class UTextBlock* TxtFeedback;                                                    // 0x0278 (size: 0x8)
    bool GuardEarly?;                                                                 // 0x0280 (size: 0x1)

    FSlateColor GetColor();
    FText GetText();
    void PlayAnim(bool Early?);
    void WidgetAnimationEvt_ParryTimingFeedback_K2Node_WidgetAnimationEvent_1();
    void ExecuteUbergraph_BP_Tuto_ParryTiming(int32 EntryPoint);
}; // Size: 0x281

#endif
