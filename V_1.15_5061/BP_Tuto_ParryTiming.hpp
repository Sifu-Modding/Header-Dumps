#ifndef UE4SS_SDK_BP_Tuto_ParryTiming_HPP
#define UE4SS_SDK_BP_Tuto_ParryTiming_HPP

class UBP_Tuto_ParryTiming_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ParryTimingFeedback;
    class UTextBlock* TxtFeedback;
    bool GuardEarly?;

    FSlateColor GetColor();
    FText GetText();
    void PlayAnim(bool Early?);
    void WidgetAnimationEvt_ParryTimingFeedback_K2Node_WidgetAnimationEvent_1();
    void ExecuteUbergraph_BP_Tuto_ParryTiming(int32 EntryPoint);
};

#endif
