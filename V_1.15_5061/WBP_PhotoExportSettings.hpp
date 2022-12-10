#ifndef UE4SS_SDK_WBP_PhotoExportSettings_HPP
#define UE4SS_SDK_WBP_PhotoExportSettings_HPP

class UWBP_PhotoExportSettings_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_ReplayAspectRatioMenuItem_C* AspectRatio;
    class UWBP_SpinBoxFloat_C* Exposure;
    class UWBP_ReplayFilterPresetMenuItem_C* FilterPreset;
    class UWBP_SpinBoxFloat_C* FilterWeight;
    class UWBP_SpinBoxFloat_C* FogDensity;
    class UWBP_SpinBoxFloat_C* Grain;
    class UWBP_SpinBoxEnum_C* LoadPreset_1;
    class UWBP_ReplayLogoOverlayMenuItem_C* Logo;
    class UWBP_SpinBoxEnum_C* LogoPlacement;
    class UVerticalBox* PropertiesVerticalBox;
    class UWBP_SpinBox_Button_C* ResetFilter;
    class UWBP_SpinBox_Button_C* SavePreset_1;
    class UWBP_SpinBoxFloat_C* Vignette;
    FWBP_PhotoExportSettings_COnInputAspectRatioUpdateDispatcher OnInputAspectRatioUpdateDispatcher;
    void OnInputAspectRatioUpdateDispatcher();
    FWBP_PhotoExportSettings_COnPostProcessRequestUpdateDispatcher OnPostProcessRequestUpdateDispatcher;
    void OnPostProcessRequestUpdateDispatcher();
    EScreenLocation LogoScreenLocationProperty;
    float FilterWeightProperty;
    float FogDensityProperty;
    class UExponentialHeightFogComponent* ExponentialHeightFogComponent;
    float DefaultFogDensityValue;
    float ExposureProperty;
    float GrainProperty;
    float VignetteProperty;
    FFilterProperties LastLoadedFilterProperties;
    FFilterProperties CurrentFilterProperties;
    FFilterProperties NoneFilterProperties;
    FFilterProperties DefaultFilterProperties;
    bool IsCurrentLoadedPresetValid;
    FText LoadPresetNoneText;
    FWBP_PhotoExportSettings_COnFilterPresetSavedCallback OnFilterPresetSavedCallback;
    void OnFilterPresetSavedCallback(bool HasError);
    FText LoadPresetEmptyText;
    TMap<class UWBP_SpinBox_C*, class FFilterPropertyDirty> PropertyDirtyMap;

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
    void LoadPreset(int32 Slot);
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
    void OnParentRemoved();
    void UpdatePostProcessSettings(class UReplayCineCameraComponent* CineCamera);
    void UpdateAspectRatio(class UReplayCineCameraComponent* CineCamera);
    void OnSaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void Construct();
    void ExecuteUbergraph_WBP_PhotoExportSettings(int32 EntryPoint);
    void OnFilterPresetSavedCallback__DelegateSignature(bool HasError);
    void OnPostProcessRequestUpdateDispatcher__DelegateSignature();
    void OnInputAspectRatioUpdateDispatcher__DelegateSignature();
};

#endif
