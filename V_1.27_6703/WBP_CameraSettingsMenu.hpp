#ifndef UE4SS_SDK_WBP_CameraSettingsMenu_HPP
#define UE4SS_SDK_WBP_CameraSettingsMenu_HPP

class UWBP_CameraSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_SpinBoxFloatOptions_C* Aperture;                                       // 0x0428 (size: 0x8)
    class UWBP_SpinBoxEnum_C* BlendType;                                              // 0x0430 (size: 0x8)
    class UWBP_SpinBoxBool_C* CameraCut;                                              // 0x0438 (size: 0x8)
    class UWBP_SpinBoxEnum_C* CameraPreset;                                           // 0x0440 (size: 0x8)
    class UWBP_SpinBoxEnum_C* CameraPreset_1;                                         // 0x0448 (size: 0x8)
    class UVerticalBox* EditPositionMode_VerticalBox;                                 // 0x0450 (size: 0x8)
    class UWBP_SpinBoxFloat_C* FocusDistance;                                         // 0x0458 (size: 0x8)
    class UWBP_SpinBoxEnum_C* FocusMode;                                              // 0x0460 (size: 0x8)
    class UVerticalBox* FocusMode_VerticalBox;                                        // 0x0468 (size: 0x8)
    class UWBP_ReplayActorsTargetMenuItem_C* FocusTarget;                             // 0x0470 (size: 0x8)
    class UWBP_ReplayActorsTargetMenuItem_C* FollowTarget;                            // 0x0478 (size: 0x8)
    class UVerticalBox* KeyTransition_VerticalBox;                                    // 0x0480 (size: 0x8)
    class UWBP_ReplayActorsTargetMenuItem_C* LookAtTarget;                            // 0x0488 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0490 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_61;                                         // 0x0498 (size: 0x8)
    FWBP_CameraSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;           // 0x04A0 (size: 0x10)
    void OnKeyUpdatedDispatcher();
    FWBP_CameraSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher; // 0x04B0 (size: 0x10)
    void OnCameraModeUpdatedDispatcher();
    FWBP_CameraSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher; // 0x04C0 (size: 0x10)
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_CameraSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher; // 0x04D0 (size: 0x10)
    void OnEditCameraInputDispatcher();
    FWBP_CameraSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher; // 0x04E0 (size: 0x10)
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;                                                     // 0x04F0 (size: 0x1)
    class UReplayKey* PreviousKey;                                                    // 0x04F8 (size: 0x8)
    FWBP_CameraSettingsMenu_COnBlendTypeUpdatedDispatcher OnBlendTypeUpdatedDispatcher; // 0x0500 (size: 0x10)
    void OnBlendTypeUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;                                               // 0x0510 (size: 0x8)
    FWBP_CameraSettingsMenu_COnCameraCutUpdatedDispatcher OnCameraCutUpdatedDispatcher; // 0x0518 (size: 0x10)
    void OnCameraCutUpdatedDispatcher(bool CutActive);
    FWBP_CameraSettingsMenu_CCameraSettingsChangedDispatcher CameraSettingsChangedDispatcher; // 0x0528 (size: 0x10)
    void CameraSettingsChangedDispatcher();
    FWBP_CameraSettingsMenu_COnPropertyItemChangedDispatcher OnPropertyItemChangedDispatcher; // 0x0538 (size: 0x10)
    void OnPropertyItemChangedDispatcher(class UBindablePropertyUserWidget* Item);
    FWBP_CameraSettingsMenu_CFocusModeInputUpdateDispatcher FocusModeInputUpdateDispatcher; // 0x0548 (size: 0x10)
    void FocusModeInputUpdateDispatcher();
    FWBP_CameraSettingsMenu_CFocusTargetInputUpdateDispatcher FocusTargetInputUpdateDispatcher; // 0x0558 (size: 0x10)
    void FocusTargetInputUpdateDispatcher();
    class UReplayKey* CurrentEditedKey;                                               // 0x0568 (size: 0x8)
    FWBP_CameraSettingsMenu_COnDummyKeyConstructedDispatcher OnDummyKeyConstructedDispatcher; // 0x0570 (size: 0x10)
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
}; // Size: 0x580

#endif
