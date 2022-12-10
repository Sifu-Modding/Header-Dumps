#ifndef UE4SS_SDK_WBP_ReplayLoadingScreen_HPP
#define UE4SS_SDK_WBP_ReplayLoadingScreen_HPP

class UWBP_ReplayLoadingScreen_C : public UReplayLoadingScreenWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HideAnimation;
    class UWidgetAnimation* LoadingAnimation;
    class UBackgroundBlur* Background_Border;
    class UTextBlock* LoadingFeedback_Text;
    int32 NumDots;
    float UpdateDotsDelay;
    float CurrentDotsUpdateTimer;
    class UUMGSequencePlayer* Result;

    void Construct();
    void UpdateDots();
    void BPE_OnHideRequested();
    void BPE_OnHideCancelled();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_WBP_ReplayLoadingScreen(int32 EntryPoint);
};

#endif
