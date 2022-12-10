#ifndef UE4SS_SDK_BP_HardpointAreaActor_HPP
#define UE4SS_SDK_BP_HardpointAreaActor_HPP

class ABP_HardpointAreaActor_C : public AArenaHardpointAreaActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* UILocation;
    class UTest_UI_HardpointText_C* UIWidget;
    class UObjective_Indicator_Hardpoint_C* UIWidgetLocation;
    FBP_HardpointAreaActor_COnStartCapturing OnStartCapturing;
    void OnStartCapturing(float CurrentScore);
    FBP_HardpointAreaActor_COnStopCapturing OnStopCapturing;
    void OnStopCapturing();
    FBP_HardpointAreaActor_COnScoreCaptureValueChanged OnScoreCaptureValueChanged;
    void OnScoreCaptureValueChanged(float CurrentValue, float MaxValue);

    void BPE_OnActivate();
    void BPE_OnDeactivate();
    void BPE_OnStartCapturing(float _CurrentScore);
    void BPE_OnStopCapturing();
    void ReceiveBeginPlay();
    void BPE_OnReactivate();
    void BPE_OnScoreCaptureValueChanged(float _fCurrentValue, float _fMaxValue);
    void BPE_OnHardpointCaptured();
    void PlayerReady();
    void ExecuteUbergraph_BP_HardpointAreaActor(int32 EntryPoint);
    void OnScoreCaptureValueChanged__DelegateSignature(float CurrentValue, float MaxValue);
    void OnStopCapturing__DelegateSignature();
    void OnStartCapturing__DelegateSignature(float CurrentScore);
};

#endif
