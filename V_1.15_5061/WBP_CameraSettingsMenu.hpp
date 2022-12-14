#ifndef UE4SS_SDK_WBP_CameraSettingsMenu_HPP
#define UE4SS_SDK_WBP_CameraSettingsMenu_HPP

class UWBP_CameraSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SpinBoxFloatOptions_C* Aperture;
    class UWBP_SpinBoxEnum_C* BlendType;
    class UWBP_SpinBoxBool_C* CameraCut;
    class UWBP_SpinBoxEnum_C* CameraPreset;
    class UWBP_SpinBoxEnum_C* CameraPreset_1;
    class UVerticalBox* EditPositionMode_VerticalBox;
    class UWBP_SpinBoxFloat_C* FocusDistance;
    class UWBP_SpinBoxEnum_C* FocusMode;
    class UVerticalBox* FocusMode_VerticalBox;
    class UWBP_ReplayActorsTargetMenuItem_C* FocusTarget;
    class UWBP_ReplayActorsTargetMenuItem_C* FollowTarget;
    class UVerticalBox* KeyTransition_VerticalBox;
    class UWBP_ReplayActorsTargetMenuItem_C* LookAtTarget;
    class UVerticalBox* PropertiesVerticalBox;
    class UWidgetSwitcher* WidgetSwitcher_61;
    FWBP_CameraSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;
    void OnKeyUpdatedDispatcher();
    FWBP_CameraSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher;
    void OnCameraModeUpdatedDispatcher();
    FWBP_CameraSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher;
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_CameraSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher;
    void OnEditCameraInputDispatcher();
    FWBP_CameraSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher;
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;
    class UReplayKey* PreviousKey;
    FWBP_CameraSettingsMenu_COnBlendTypeUpdatedDispatcher OnBlendTypeUpdatedDispatcher;
    void OnBlendTypeUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;
    FWBP_CameraSettingsMenu_COnCameraCutUpdatedDispatcher OnCameraCutUpdatedDispatcher;
    void OnCameraCutUpdatedDispatcher(bool CutActive);
    FWBP_CameraSettingsMenu_CCameraSettingsChangedDispatcher CameraSettingsChangedDispatcher;
    void CameraSettingsChangedDispatcher();
    FWBP_CameraSettingsMenu_COnPropertyItemChangedDispatcher OnPropertyItemChangedDispatcher;
    void OnPropertyItemChangedDispatcher(class UBindablePropertyUserWidget* Item);
    FWBP_CameraSettingsMenu_CFocusModeInputUpdateDispatcher FocusModeInputUpdateDispatcher;
    void FocusModeInputUpdateDispatcher();
    FWBP_CameraSettingsMenu_CFocusTargetInputUpdateDispatcher FocusTargetInputUpdateDispatcher;
    void FocusTargetInputUpdateDispatcher();
    class UReplayKey* CurrentEditedKey;
    FWBP_CameraSettingsMenu_COnDummyKeyConstructedDispatcher OnDummyKeyConstructedDispatcher;
    void OnDummyKeyConstructedDispatcher(class UReplayKey* Key);

    void UpdateCurrentFocusMode(class UReplayCineCameraComponent* CineCamera);
    void Initialize Auto Focus List();
    void ApertureModeInputUpdate();
    void FocusTargetInputUpdate();
    void UpdateVisualFeedbackOnAutoFocusTarget(bool ForceHide);
    void FocusDistanceInputUpdate();
    void OnPropertyChanged(class UBindablePropertyUserWidget* Item);
    void UpdateCameraSettingsMenuItemsDisplay();
    void FocusModeInputUpdate();
    void OnCameraMeshFadingInputUpdate();
    void OnCameraCutInputUpdate();
    void GetRootContainer(class UPanelWidget*& Widget);
    void OnBlendTypeInputUpdate();
    void OnSetKey(const class UReplayKey*& Key);
    void OnLookAtTargetInput();
    void OnFollowTargetInput();
    void BindOnKeyDataUpdate(const class UReplayKey*& Key);
    void OnKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    void UpdateDisplayFromReplayKey(class UReplayKey* Key);
    void OnEditCameraPositionInput(class UButtonUserWidget* _button, bool _bWithMouse);
    void GetCurrentFocusWidget(class UWidget*& Widget);
    void OnCameraPresetInput();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void OnFocus();
    void BPE_OnMenuPopped();
    void Destruct();
    void Construct();
    void BPE_OnRemovedFromParent();
    void OnParentRemoved();
    void ExecuteUbergraph_WBP_CameraSettingsMenu(int32 EntryPoint);
    void OnDummyKeyConstructedDispatcher__DelegateSignature(class UReplayKey* Key);
    void FocusTargetInputUpdateDispatcher__DelegateSignature();
    void FocusModeInputUpdateDispatcher__DelegateSignature();
    void OnPropertyItemChangedDispatcher__DelegateSignature(class UBindablePropertyUserWidget* Item);
    void CameraSettingsChangedDispatcher__DelegateSignature();
    void OnCameraCutUpdatedDispatcher__DelegateSignature(bool CutActive);
    void OnBlendTypeUpdatedDispatcher__DelegateSignature();
    void OnCameraSettingsUpdatedDispatcher__DelegateSignature(bool DisplayCameraSettings);
    void OnEditCameraInputDispatcher__DelegateSignature();
    void OnMenuItemDisplayRequestDispatcher__DelegateSignature();
    void OnCameraModeUpdatedDispatcher__DelegateSignature();
    void OnKeyUpdatedDispatcher__DelegateSignature();
};

#endif
