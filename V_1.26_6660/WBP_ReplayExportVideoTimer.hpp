#ifndef UE4SS_SDK_WBP_ReplayExportVideoTimer_HPP
#define UE4SS_SDK_WBP_ReplayExportVideoTimer_HPP

class UWBP_ReplayExportVideoTimer_C : public USCUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UBP_HUD_RadialProgressLine_C* BP_HUD_RadialProgressLine;                    // 0x0318 (size: 0x8)
    class URichTextBlock* Description;                                                // 0x0320 (size: 0x8)
    class UImage* Line;                                                               // 0x0328 (size: 0x8)
    class UTextBlock* Timer;                                                          // 0x0330 (size: 0x8)
    float TimeLeft;                                                                   // 0x0338 (size: 0x4)
    FWBP_ReplayExportVideoTimer_COnTimerEnd OnTimerEnd;                               // 0x0340 (size: 0x10)
    void OnTimerEnd();
    float PreviousTimeLeft;                                                           // 0x0350 (size: 0x4)
    float TotalWaitTime;                                                              // 0x0354 (size: 0x4)

    void SetupDisplay();
    void TriggerSFX();
    void UpdateDisplay();
    void IsTimerRunning(bool& IsTimerRunning);
    void Clear();
    void EndTimer();
    void BeginTimer(float Delay);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ReplayExportVideoTimer(int32 EntryPoint);
    void OnTimerEnd__DelegateSignature();
}; // Size: 0x358

#endif
