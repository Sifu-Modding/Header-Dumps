#ifndef UE4SS_SDK_WBP_TimeDilationSettingsMenu_HPP
#define UE4SS_SDK_WBP_TimeDilationSettingsMenu_HPP

class UWBP_TimeDilationSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* KeyDilation_VerticalBox;
    class UVerticalBox* PropertiesVerticalBox;
    class UWBP_SpinBoxFloatOptions_C* SpeedKey;
    class UWBP_ReplaySpinboxKeyFlagType_C* SpeedKeyEnabled;
    FWBP_TimeDilationSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;
    void OnKeyUpdatedDispatcher();
    FWBP_TimeDilationSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher;
    void OnCameraModeUpdatedDispatcher();
    FWBP_TimeDilationSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher;
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_TimeDilationSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher;
    void OnEditCameraInputDispatcher();
    FWBP_TimeDilationSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher;
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;
    class UReplayKey* PreviousKey;
    FWBP_TimeDilationSettingsMenu_COnKeyTimeDilationUpdatedDispatcher OnKeyTimeDilationUpdatedDispatcher;
    void OnKeyTimeDilationUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;

    void GetRootContainer(class UPanelWidget*& Widget);
    void OnSetKey(const class UReplayKey*& Key);
    void UpdateDisplayTimeDilation(int32 _iKeyTypeFlags);
    void BindOnKeyDataUpdate(const class UReplayKey*& Key);
    void OnKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    void UpdateDisplayFromReplayKey(class UReplayKey* Key);
    void OnSpeedKeyEnableInput();
    void OnSpeedKeyInput();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void OnFocus();
    void BPE_OnMenuPopped();
    void Destruct();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_TimeDilationSettingsMenu(int32 EntryPoint);
    void OnKeyTimeDilationUpdatedDispatcher__DelegateSignature();
    void OnCameraSettingsUpdatedDispatcher__DelegateSignature(bool DisplayCameraSettings);
    void OnEditCameraInputDispatcher__DelegateSignature();
    void OnMenuItemDisplayRequestDispatcher__DelegateSignature();
    void OnCameraModeUpdatedDispatcher__DelegateSignature();
    void OnKeyUpdatedDispatcher__DelegateSignature();
};

#endif
