#ifndef UE4SS_SDK_WBP_ReplayLoadingScreen_HPP
#define UE4SS_SDK_WBP_ReplayLoadingScreen_HPP

class UWBP_ReplayLoadingScreen_C : public UReplayLoadingScreenWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UWidgetAnimation* HideAnimation;                                            // 0x0320 (size: 0x8)
    class UWidgetAnimation* LoadingAnimation;                                         // 0x0328 (size: 0x8)
    class UBackgroundBlur* Background_Border;                                         // 0x0330 (size: 0x8)
    class UTextBlock* LoadingFeedback_Text;                                           // 0x0338 (size: 0x8)
    int32 NumDots;                                                                    // 0x0340 (size: 0x4)
    float UpdateDotsDelay;                                                            // 0x0344 (size: 0x4)
    float CurrentDotsUpdateTimer;                                                     // 0x0348 (size: 0x4)
    class UUMGSequencePlayer* Result;                                                 // 0x0350 (size: 0x8)

    void Construct();
    void UpdateDots();
    void BPE_OnHideRequested();
    void BPE_OnHideCancelled();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_WBP_ReplayLoadingScreen(int32 EntryPoint);
}; // Size: 0x358

#endif
