#ifndef UE4SS_SDK_WBP_PhotoExportSettings_HPP
#define UE4SS_SDK_WBP_PhotoExportSettings_HPP

class UWBP_PhotoExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_ReplayAspectRatioMenuItem_C* AspectRatio;                              // 0x0428 (size: 0x8)
    class UWBP_SpinBoxFloat_C* Exposure;                                              // 0x0430 (size: 0x8)
    class UWBP_ReplayFilterPresetMenuItem_C* FilterPreset;                            // 0x0438 (size: 0x8)
    class UWBP_SpinBoxFloat_C* FilterWeight;                                          // 0x0440 (size: 0x8)
    class UWBP_SpinBoxFloat_C* FogDensity;                                            // 0x0448 (size: 0x8)
    class UWBP_SpinBoxFloat_C* Grain;                                                 // 0x0450 (size: 0x8)
    class UWBP_SpinBoxEnum_C* LoadPreset_1;                                           // 0x0458 (size: 0x8)
    class UWBP_ReplayLogoOverlayMenuItem_C* Logo;                                     // 0x0460 (size: 0x8)
    class UWBP_SpinBoxEnum_C* LogoPlacement;                                          // 0x0468 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0470 (size: 0x8)
    class UWBP_SpinBox_Button_C* ResetFilter;                                         // 0x0478 (size: 0x8)
    class UWBP_SpinBox_Button_C* SavePreset_1;                                        // 0x0480 (size: 0x8)
    class UWBP_SpinBoxFloat_C* Vignette;                                              // 0x0488 (size: 0x8)
    FWBP_PhotoExportSettings_COnInputAspectRatioUpdateDispatcher OnInputAspectRatioUpdateDispatcher; // 0x0490 (size: 0x10)
    void OnInputAspectRatioUpdateDispatcher();
    FWBP_PhotoExportSettings_COnPostProcessRequestUpdateDispatcher OnPostProcessRequestUpdateDispatcher; // 0x04A0 (size: 0x10)
    void OnPostProcessRequestUpdateDispatcher();
    EScreenLocation LogoScreenLocationProperty;                                       // 0x04B0 (size: 0x1)
    float FilterWeightProperty;                                                       // 0x04B4 (size: 0x4)
    float FogDensityProperty;                                                         // 0x04B8 (size: 0x4)
    class UExponentialHeightFogComponent* ExponentialHeightFogComponent;              // 0x04C0 (size: 0x8)
    float DefaultFogDensityValue;                                                     // 0x04C8 (size: 0x4)
    float ExposureProperty;                                                           // 0x04CC (size: 0x4)
    float GrainProperty;                                                              // 0x04D0 (size: 0x4)
    float VignetteProperty;                                                           // 0x04D4 (size: 0x4)
    FFilterProperties LastLoadedFilterProperties;                                     // 0x04D8 (size: 0x38)
    FFilterProperties CurrentFilterProperties;                                        // 0x0510 (size: 0x38)
    FFilterProperties NoneFilterProperties;                                           // 0x0548 (size: 0x38)
    FFilterProperties DefaultFilterProperties;                                        // 0x0580 (size: 0x38)
    bool IsCurrentLoadedPresetValid;                                                  // 0x05B8 (size: 0x1)
    FText LoadPresetNoneText;                                                         // 0x05C0 (size: 0x18)
    FWBP_PhotoExportSettings_COnFilterPresetSavedCallback OnFilterPresetSavedCallback; // 0x05D8 (size: 0x10)
    void OnFilterPresetSavedCallback(bool HasError);
    FText LoadPresetEmptyText;                                                        // 0x05E8 (size: 0x18)
    TMap<class UWBP_SpinBox_C*, class FFilterPropertyDirty> PropertyDirtyMap;         // 0x0600 (size: 0x50)
    bool CanSaveReplayFilterProperties;                                               // 0x0650 (size: 0x1)

    void UpdateFogDensityToCurrentValue(float PreviousFogDensity);
    void SelectNoneProfileAndResetIt();
    void GetRootContainer(class UPanelWidget*& Widget);
    void InitializePropertyDirtyStateCache();
    FFilterProperties GetFilterToCompareDirtyState();
    void UpdatePropertyDirtyState(const class UWBP_SpinBox_C*& Widget, bool IsDirty);
    void UpdateEachPropertyDirtyState();
    void ApplyLevelPostProcessSettingsToCurrentProfile();
    void RequestUpdateAspectRatio();
    void UpdateLogoPlacementVisibility();
    int32 GetCurrentSelectedPresetIndex();
    bool IsCurrentlySelectingNonePreset();
    void UpdateCurrentPresetDirtyOrNoneFeedback();
    bool IsCurrentProfileDirty();
    void OnAnyPropertyChangedFromInput();
    void ApplyCuttentProfileToNoneProfileIfSelected();
    void ResetCurrentProfile(bool ResetToNone);
    void ApplyCurrentProfile();
    void OnLoadPresetInputUpdate();
    void RefreshDisplayAndUpdatePostProcess();
    void OnResetFilterClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnSaveFilterClick(class UButtonUserWidget* _button, bool _bWithMouse);
    void UpdateCurrentPresetTextProperty();
    void LoadPreset(bool PresetValid, FFilterProperties Properties, bool IsReplayTimelinePreset);
    void SavePreset(int32 Slot);
    void ApplyCurrentPostProcessSettings(class UReplayCineCameraComponent* CineCameraComponent, float PostProcessWeight);
    void ApplyFilterOverrides(FPostProcessSettings& PostProcessSettings);
    void OnFilterOverrideInputUpdate();
    void OnFogDensityInputUpdate();
    void UpdateLogoPlacementWithProperty();
    void OnLogoPlacementInputUpdate();
    void OnLogoInputUpdate();
    void OnFilterPresetInputUpdate();
    void OnFilterPresetWeightInputUpdate();
    void OnAspectRatioInputUpdate();
    void UpdateAspectRatio(class UReplayCineCameraComponent* CineCamera);
    void UpdatePostProcessSettings(class UReplayCineCameraComponent* CineCamera);
    void OnParentRemoved();
    void Construct();
    void OnSaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void OnModelReset();
    void ExecuteUbergraph_WBP_PhotoExportSettings(int32 EntryPoint);
    void OnFilterPresetSavedCallback__DelegateSignature(bool HasError);
    void OnPostProcessRequestUpdateDispatcher__DelegateSignature();
    void OnInputAspectRatioUpdateDispatcher__DelegateSignature();
}; // Size: 0x651

#endif
