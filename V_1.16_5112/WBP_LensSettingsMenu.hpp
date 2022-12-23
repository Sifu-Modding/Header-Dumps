#ifndef UE4SS_SDK_WBP_LensSettingsMenu_HPP
#define UE4SS_SDK_WBP_LensSettingsMenu_HPP

class UWBP_LensSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SpinBoxFloatOptions_C* Aperture;
    class UWBP_SpinBoxBool_C* CameraFading;
    class UWBP_SpinBoxFloat_C* FocusDistance;
    class UWBP_SpinBox_Button_C* FocusDistancePick;
    class UWBP_SpinBoxEnum_C* FocusMode;
    class UWBP_ReplayActorsTargetMenuItem_C* FocusTarget;
    class UVerticalBox* PropertiesVerticalBox;
    FWBP_LensSettingsMenu_CLeavePhotoModeDispatcher LeavePhotoModeDispatcher;
    void LeavePhotoModeDispatcher();
    FWBP_LensSettingsMenu_CFocusModeInputUpdateDispatcher FocusModeInputUpdateDispatcher;
    void FocusModeInputUpdateDispatcher();
    class UReplayKey* PropertyDummyKey;
    FWBP_LensSettingsMenu_CCameraSettingsChangedDispatcher CameraSettingsChangedDispatcher;
    void CameraSettingsChangedDispatcher();
    FWBP_LensSettingsMenu_COnDummyKeyConstructedDispatcher OnDummyKeyConstructedDispatcher;
    void OnDummyKeyConstructedDispatcher(class UReplayKey* Key);
    class UReplayKey* CurrentEditedKey;
    FWBP_LensSettingsMenu_COnPropertyItemChangedDispatcher OnPropertyItemChangedDispatcher;
    void OnPropertyItemChangedDispatcher(class UBindablePropertyUserWidget* Item);
    class ABP_AutoFocusTargetFeedback_PlaceHolder_C* AutoFocusActorFeedback;
    TSubclassOf<class ABP_AutoFocusTargetFeedback_PlaceHolder_C> AutoFocusActorFeedbackClass;
    FAvailabilityLayerCaches ActorFocusPickerALs;
    class UReplayUIModeUserWidget* PreviousUIMode;
    class UMaterialParameterCollection* MPC_GameplayGeneric;
    FName CameraFadeParameterName;
    float DefaultCameraFadingValue;
    bool CameraFadingEnabledProperty;
    FWBP_LensSettingsMenu_CFocusTargetInputUpdateDispatcher FocusTargetInputUpdateDispatcher;
    void FocusTargetInputUpdateDispatcher();
    FWBP_LensSettingsMenu_CFocusPickerResultDispatcher FocusPickerResultDispatcher;
    void FocusPickerResultDispatcher(bool HasHit, float Value);
    bool IsFocusDistancePickAvailable;

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
};

#endif
