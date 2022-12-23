#ifndef UE4SS_SDK_BP_HUD_HardpointBar_HPP
#define UE4SS_SDK_BP_HUD_HardpointBar_HPP

class UBP_HUD_HardpointBar_C : public UUserWidget
{
    class UWidgetAnimation* GaugeOut;
    class UBorder* CaptureBorder;
    class UImage* FightPointsBar;
    class UImage* GaugeFeedbackImage;
    class UTextBlock* Scoring_LevelScoreLabel;
    class UImage* Scoring_Line;
    class UTextBlock* Scoring_MultiplierValue;
    class UBPStatsComponent_MainChar_C* StatsComponent;
    class UBP_PlayerScoringComponent_C* ScoringComponent;
    float CurrentFloor;
    class AArenaHardpointAreaActor* CurrentHardpointActor;
    float Current Value;
    class UBp_HUD_HardpointName_C* HardpointName;
    FBP_HUD_HardpointBar_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void OnHardpointActivationChanged(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf, bool bpp___Activated__pf);
    class UArenaHardpointsObjective* K2Node_DynamicCast_AsArena_Hardpoints_Objective;
    bool K2Node_DynamicCast_bSuccess;
    FBP_HUD_HardpointBar_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void OnHardpointCaptured(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);

    void OnStopCapturing__DelegateSignature();
    void OnStartCapturing__DelegateSignature(float bpp__CurrentScore__pf);
    void OnScoreCaptureValueChanged__DelegateSignature(float bpp__CurrentValue__pf, float bpp__MaxValue__pf);
    void Set Style();
    void SetColorBar(float bpp__Value__pf);
    void On Hardpoint Captured(const FHardpointInfos& bpp___HardpointInfo__pf__const, int32 bpp___CurrentChallengeIndex__pf);
    void OnStopCapturing();
    void OnStartCapturing(float bpp__CurrentScore__pf);
    void OnMultiplierChanged();
    void OnHardpointActivationChanged(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf__const, bool bpp___Activated__pf);
    void OnCaptureScoreValueChanged(float bpp__CurrentValue__pf, float bpp__MaxValue__pf);
    void Initialize();
    void OnHardpointCaptured__DelegateSignature(const FHardpointInfos& bpp___HardpointInfo__pf, int32 bpp___CurrentChallengeIndex__pf);
    void OnHardpointActivationChanged__DelegateSignature(const class AArenaHardpointAreaActor* bpp___HardpointActor__pf, bool bpp___Activated__pf);
    void DynamicMulticast__DelegateSignature();
};

#endif
