#ifndef UE4SS_SDK_BP_ScreenshotUserWidget_HPP
#define UE4SS_SDK_BP_ScreenshotUserWidget_HPP

class UBP_ScreenshotUserWidget_C : public UReplayScreenshotUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UWidgetAnimation* StartAnimation;                                           // 0x0340 (size: 0x8)
    class UAkAudioEvent* SoundOnScreenshotTaken;                                      // 0x0348 (size: 0x8)

    void BPE_OnScreenshotRequestProcessed();
    void BPE_OnScreenshotRequested();
    void StartVisualFeedback();
    void OnAnimationEnd();
    void ExecuteUbergraph_BP_ScreenshotUserWidget(int32 EntryPoint);
}; // Size: 0x350

#endif
