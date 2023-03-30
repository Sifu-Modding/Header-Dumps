#ifndef UE4SS_SDK_BP_HUD_HardpointBar_HPP
#define UE4SS_SDK_BP_HUD_HardpointBar_HPP

class UBP_HUD_HardpointBar_C : public USCUserWidget
{
    class UWidgetAnimation* capturing;                                                // 0x0310 (size: 0x8)
    class UWidgetAnimation* Blink;                                                    // 0x0318 (size: 0x8)
    class UWidgetAnimation* GaugeOut;                                                 // 0x0320 (size: 0x8)
    class UImage* Arrow1;                                                             // 0x0328 (size: 0x8)
    class UImage* Arrow2;                                                             // 0x0330 (size: 0x8)
    class UImage* Arrow3;                                                             // 0x0338 (size: 0x8)
    class UImage* Arrow4;                                                             // 0x0340 (size: 0x8)
    class UImage* Arrow5;                                                             // 0x0348 (size: 0x8)
    class UImage* Arrow6;                                                             // 0x0350 (size: 0x8)
    class UBorder* CaptureBorder;                                                     // 0x0358 (size: 0x8)
    class UTextBlock* Capturing_Label;                                                // 0x0360 (size: 0x8)
    class UImage* Capturing_Line;                                                     // 0x0368 (size: 0x8)
    class UImage* CapturingBar;                                                       // 0x0370 (size: 0x8)
    class UImage* GaugeFeedbackImage;                                                 // 0x0378 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CapturingText;                                // 0x0380 (size: 0x8)
    class AArenaHardpointAreaActor* CurrentHardpointActor;                            // 0x0388 (size: 0x8)
    class UBp_HUD_HardpointName_C* HardpointName;                                     // 0x0390 (size: 0x8)
    FLinearColor CurrentEfficiencyColor;                                              // 0x0398 (size: 0x10)
    class UBP_PlayerScoringComponent_C* ScoringComponent;                             // 0x03A8 (size: 0x8)
    class UCurveFloat* WidthEfficientCurve;                                           // 0x03B0 (size: 0x8)
    class UCurveLinearColor* EfficiencyCurve;                                         // 0x03B8 (size: 0x8)
    class UCurveFloat* CapturingAnimationSpeedCurve;                                  // 0x03C0 (size: 0x8)
    FBP_HUD_HardpointBar_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x03C8 (size: 0x10)
    void OnHardpointActivationChanged(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf, bool bpp___Activated__pf);
    class UArenaHardpointsObjective* K2Node_DynamicCast_AsArena_Hardpoints_Objective; // 0x03D8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x03E0 (size: 0x1)
    FBP_HUD_HardpointBar_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x03E4 (size: 0x10)
    void OnHardpointCaptured(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;                                 // 0x03F8 (size: 0xE8)
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;                          // 0x04E0 (size: 0x160)
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;                            // 0x0640 (size: 0x50)

    void OnStopCapturing__DelegateSignature();
    void OnStartCapturing__DelegateSignature(float bpp__CurrentScore__pf);
    void OnScoreCaptureValueChanged__DelegateSignature(float bpp__CurrentValue__pf, float bpp__MaxValue__pf);
    void ToggleScoring(bool bpp__Hide__pf);
    void Set Style();
    void On Multiplier Changed();
    void On Hardpoint Captured(const FHardpointInfos& bpp___HardpointInfo__pf__const, int32 bpp___CurrentChallengeIndex__pf);
    void OnStopCapturing();
    void OnStartCapturing(float bpp__CurrentScore__pf);
    void OnHardpointActivationChanged(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf__const, bool bpp___Activated__pf);
    void OnCaptureScoreValueChanged(float bpp__CurrentValue__pf, float bpp__MaxValue__pf);
    void OnCaptureScoreDecreaseStarted();
    void OnCaptureScoreDecreaseEnded();
    void Initialize();
    void HideGauge();
    void Construct();
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    void OnHardpointActivationChanged__DelegateSignature(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf, bool bpp___Activated__pf);
    void DynamicMulticast__DelegateSignature();
}; // Size: 0x690

#endif
