#ifndef UE4SS_SDK_WBP_LensSettingsMenu_HPP
#define UE4SS_SDK_WBP_LensSettingsMenu_HPP

class UWBP_LensSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_SpinBoxFloatOptions_C* Aperture;                                       // 0x0428 (size: 0x8)
    class UWBP_SpinBoxBool_C* CameraFading;                                           // 0x0430 (size: 0x8)
    class UWBP_SpinBoxFloat_C* FocusDistance;                                         // 0x0438 (size: 0x8)
    class UWBP_SpinBox_Button_C* FocusDistancePick;                                   // 0x0440 (size: 0x8)
    class UWBP_SpinBoxEnum_C* FocusMode;                                              // 0x0448 (size: 0x8)
    class UWBP_ReplayActorsTargetMenuItem_C* FocusTarget;                             // 0x0450 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0458 (size: 0x8)
    FWBP_LensSettingsMenu_CLeavePhotoModeDispatcher LeavePhotoModeDispatcher;         // 0x0460 (size: 0x10)
    void LeavePhotoModeDispatcher();
    FWBP_LensSettingsMenu_CFocusModeInputUpdateDispatcher FocusModeInputUpdateDispatcher; // 0x0470 (size: 0x10)
    void FocusModeInputUpdateDispatcher();
    class UReplayKey* PropertyDummyKey;                                               // 0x0480 (size: 0x8)
    FWBP_LensSettingsMenu_CCameraSettingsChangedDispatcher CameraSettingsChangedDispatcher; // 0x0488 (size: 0x10)
    void CameraSettingsChangedDispatcher();
    FWBP_LensSettingsMenu_COnDummyKeyConstructedDispatcher OnDummyKeyConstructedDispatcher; // 0x0498 (size: 0x10)
    void OnDummyKeyConstructedDispatcher(class UReplayKey* Key);
    class UReplayKey* CurrentEditedKey;                                               // 0x04A8 (size: 0x8)
    FWBP_LensSettingsMenu_COnPropertyItemChangedDispatcher OnPropertyItemChangedDispatcher; // 0x04B0 (size: 0x10)
    void OnPropertyItemChangedDispatcher(class UBindablePropertyUserWidget* Item);
    class ABP_AutoFocusTargetFeedback_PlaceHolder_C* AutoFocusActorFeedback;          // 0x04C0 (size: 0x8)
    TSubclassOf<class ABP_AutoFocusTargetFeedback_PlaceHolder_C> AutoFocusActorFeedbackClass; // 0x04C8 (size: 0x8)
    FAvailabilityLayerCaches ActorFocusPickerALs;                                     // 0x04D0 (size: 0x18)
    class UReplayUIModeUserWidget* PreviousUIMode;                                    // 0x04E8 (size: 0x8)
    class UMaterialParameterCollection* MPC_GameplayGeneric;                          // 0x04F0 (size: 0x8)
    FName CameraFadeParameterName;                                                    // 0x04F8 (size: 0x8)
    float DefaultCameraFadingValue;                                                   // 0x0500 (size: 0x4)
    bool CameraFadingEnabledProperty;                                                 // 0x0504 (size: 0x1)
    FWBP_LensSettingsMenu_CFocusTargetInputUpdateDispatcher FocusTargetInputUpdateDispatcher; // 0x0508 (size: 0x10)
    void FocusTargetInputUpdateDispatcher();
    FWBP_LensSettingsMenu_CFocusPickerResultDispatcher FocusPickerResultDispatcher;   // 0x0518 (size: 0x10)
    void FocusPickerResultDispatcher(bool HasHit, float Value);
    bool IsFocusDistancePickAvailable;                                                // 0x0528 (size: 0x1)

    void GetRootContainer(class UPanelWidget*& Widget);
    void SetCameraFadingValue(float Value);
    float GetCameraFadingValue();
    void OnCameraFadingInputUpdate();
    void UpdateCurrentFocusMode(class UReplayCineCameraComponent* CineCamera);
    void RequestFocusDistanceResult();
    void FocusActorPickerDistanceReceived(bool _bHasHit, float _fDistance);
    void IsInActorPickerMode(bool& bIsInActorPickerMode);
    void FocusActorPickerInput(class UButtonUserWidget* _button, bool _bWithMouse);
    void LeaveFocusActorPickerMode();
    void EnterFocusActorPickerMode();
    void UpdateVisualFeedbackOnAutoFocusTarget(bool ForceHide);
    void FocusTargetInputUpdate();
    void Initialize Auto Focus List();
    void OnPropertyChanged(class UBindablePropertyUserWidget* Item);
    void UpdateCameraSettingsMenuItemsDisplay();
    void FocusDistanceInputUpdate();
    void ApertureModeInputUpdate();
    void FocusModeInputUpdate();
    void OnSetKey(class UReplayKey* Key);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void BPE_OnMenuPopped();
    void BPE_OnRemovedFromParent();
    void OnParentRemoved();
    void Construct();
    void ExecuteUbergraph_WBP_LensSettingsMenu(int32 EntryPoint);
    void FocusPickerResultDispatcher__DelegateSignature(bool HasHit, float Value);
    void FocusTargetInputUpdateDispatcher__DelegateSignature();
    void OnPropertyItemChangedDispatcher__DelegateSignature(class UBindablePropertyUserWidget* Item);
    void OnDummyKeyConstructedDispatcher__DelegateSignature(class UReplayKey* Key);
    void CameraSettingsChangedDispatcher__DelegateSignature();
    void FocusModeInputUpdateDispatcher__DelegateSignature();
    void LeavePhotoModeDispatcher__DelegateSignature();
}; // Size: 0x529

#endif
