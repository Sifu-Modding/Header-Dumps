#ifndef UE4SS_SDK_BP_HardpointAreaActor_HPP
#define UE4SS_SDK_BP_HardpointAreaActor_HPP

class ABP_HardpointAreaActor_C : public AArenaHardpointAreaActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0408 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0410 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0418 (size: 0x8)
    class USceneComponent* UILocation;                                                // 0x0420 (size: 0x8)
    class UTest_UI_HardpointText_C* UIWidget;                                         // 0x0428 (size: 0x8)
    class UObjective_Indicator_Hardpoint_C* UIWidgetLocation;                         // 0x0430 (size: 0x8)
    FBP_HardpointAreaActor_COnStartCapturing OnStartCapturing;                        // 0x0438 (size: 0x10)
    void OnStartCapturing(float CurrentScore);
    FBP_HardpointAreaActor_COnStopCapturing OnStopCapturing;                          // 0x0448 (size: 0x10)
    void OnStopCapturing();
    FBP_HardpointAreaActor_COnScoreCaptureValueChanged OnScoreCaptureValueChanged;    // 0x0458 (size: 0x10)
    void OnScoreCaptureValueChanged(float CurrentValue, float MaxValue);
    FTimerHandle FadeOut_TimerHandle;                                                 // 0x0468 (size: 0x8)
    class UMaterialParameterCollection* MPC_Params;                                   // 0x0470 (size: 0x8)
    class UMaterialParameterCollection* MPC_Params_Additionnal;                       // 0x0478 (size: 0x8)
    float General | Fade Duration;                                                    // 0x0480 (size: 0x4)
    float General | Fusion_Amount;                                                    // 0x0484 (size: 0x4)
    float Box | Roundiness;                                                           // 0x0488 (size: 0x4)
    float General | BorderVisibilityHeight;                                           // 0x048C (size: 0x4)
    float General | Border_Thickness;                                                 // 0x0490 (size: 0x4)
    float General | Border_HeightOffset;                                              // 0x0494 (size: 0x4)
    class UBP_HardPointFeedback_DA_C* DB;                                             // 0x0498 (size: 0x8)
    TArray<class ASCVolume*> Cylinders_Volumes;                                       // 0x04A0 (size: 0x10)
    TArray<class ASCVolume*> Boxes_Volumes;                                           // 0x04B0 (size: 0x10)
    bool DisplayDebugPrints;                                                          // 0x04C0 (size: 0x1)
    bool bUseArrowForGround;                                                          // 0x04C1 (size: 0x1)
    bool bDisableGroundHighlight;                                                     // 0x04C2 (size: 0x1)
    TEnumAsByte<EHardpointCustomPP_Enum> CustomHardpointPP;                           // 0x04C3 (size: 0x1)
    FLinearColor LimitColor;                                                          // 0x04C4 (size: 0x10)
    FLinearColor LimitColor_OutZone;                                                  // 0x04D4 (size: 0x10)
    FLinearColor LimitColor_1;                                                        // 0x04E4 (size: 0x10)
    FLinearColor LimitColor_2;                                                        // 0x04F4 (size: 0x10)
    FLinearColor LimitColor_3;                                                        // 0x0504 (size: 0x10)
    FLinearColor LimitColor_10;                                                       // 0x0514 (size: 0x10)
    FTimerHandle TimerBeforeStopCameraArena;                                          // 0x0528 (size: 0x8)
    int32 iMultiplierIndex;                                                           // 0x0530 (size: 0x4)
    int32 ShowOnlyBoxID;                                                              // 0x0534 (size: 0x4)
    TEnumAsByte<EHardpoint_EnvironmentDesaturation_Enum> OverrideEnvDesaturation;     // 0x0538 (size: 0x1)

    void Switch Between Desaturation();
    void StopCameraArena();
    void StartCameraArena();
    void UpdateAdditionalSphereData();
    void StartPulseIn();
    void SetLimitOnlyEnabled(bool bIsLimitOnly);
    void ResolveShapeNames(int32 Index, ESCVolumeShape Shape, FName& Extent_Roundiness, FName& Matrix_X, FName& Matrix_Y, FName& Matrix_Z);
    void IdentifyShapes();
    void UpdateCylinderParams(class ASCVolume* Cylinder, int32 Cylinder Index);
    void UpdateBoxParams(class ASCVolume* Box, int32 Box Index);
    void UpdateShapesParams();
    void UpdateGeneralParams();
    void UpdateAll();
    void SetLimitEnable(bool NewEnable);
    void SetFeedbackEnable(bool NewEnable);
    void SetFeedbackMaterial();
    void SetPostProcessEnable(bool NewEnable);
    void UserConstructionScript();
    void BPE_OnActivate();
    void BPE_OnDeactivate();
    void BPE_OnStartCapturing(float _CurrentScore);
    void BPE_OnStopCapturing();
    void ReceiveBeginPlay();
    void BPE_OnReactivate();
    void BPE_OnScoreCaptureValueChanged(float _fCurrentValue, float _fMaxValue);
    void BPE_OnHardpointCaptured();
    void PlayerReady();
    void StartDisplay();
    void DisableLimit();
    void EndDisplay();
    void UpdateParameters();
    void OnScoreMultiplierChangedEvent();
    void UpdateLimitColor();
    void OnOptionChanged_Event(EGameOptionTypes eGameOptionType);
    void ExecuteUbergraph_BP_HardpointAreaActor(int32 EntryPoint);
    void OnScoreCaptureValueChanged__DelegateSignature(float CurrentValue, float MaxValue);
    void OnStopCapturing__DelegateSignature();
    void OnStartCapturing__DelegateSignature(float CurrentScore);
}; // Size: 0x539

#endif
