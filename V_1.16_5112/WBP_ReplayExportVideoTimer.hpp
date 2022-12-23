#ifndef UE4SS_SDK_WBP_ReplayExportVideoTimer_HPP
#define UE4SS_SDK_WBP_ReplayExportVideoTimer_HPP

class UWBP_ReplayExportVideoTimer_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_HUD_RadialProgressLine_C* BP_HUD_RadialProgressLine;
    class URichTextBlock* Description;
    class UImage* Line;
    class UTextBlock* Timer;
    float TimeLeft;
    FWBP_ReplayExportVideoTimer_COnTimerEnd OnTimerEnd;
    void OnTimerEnd();
    float PreviousTimeLeft;
    float TotalWaitTime;

    void SetupDisplay();
    void TriggerSFX();
    void UpdateDisplay();
    void IsTimerRunning(bool& IsTimerRunning);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void EndTimer();
    void Clear();
    void BeginTimer(float Delay);
    void ExecuteUbergraph_WBP_ReplayExportVideoTimer(int32 EntryPoint);
    void OnTimerEnd__DelegateSignature();
};

#endif
