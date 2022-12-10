#ifndef UE4SS_SDK_BP_ScreenshotUserWidget_HPP
#define UE4SS_SDK_BP_ScreenshotUserWidget_HPP

class UBP_ScreenshotUserWidget_C : public UReplayScreenshotUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StartAnimation;
    class UAkAudioEvent* SoundOnScreenshotTaken;

    void BPE_OnScreenshotRequestProcessed();
    void BPE_OnScreenshotRequested();
    void StartVisualFeedback();
    void OnAnimationEnd();
    void ExecuteUbergraph_BP_ScreenshotUserWidget(int32 EntryPoint);
};

#endif
