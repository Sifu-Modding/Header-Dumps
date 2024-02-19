#ifndef UE4SS_SDK_WBP_TimeDilationSettingsMenu_HPP
#define UE4SS_SDK_WBP_TimeDilationSettingsMenu_HPP

class UWBP_TimeDilationSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UVerticalBox* KeyDilation_VerticalBox;                                      // 0x0428 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0430 (size: 0x8)
    class UWBP_SpinBoxFloatOptions_C* SpeedKey;                                       // 0x0438 (size: 0x8)
    class UWBP_ReplaySpinboxKeyFlagType_C* SpeedKeyEnabled;                           // 0x0440 (size: 0x8)
    FWBP_TimeDilationSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;     // 0x0448 (size: 0x10)
    void OnKeyUpdatedDispatcher();
    FWBP_TimeDilationSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher; // 0x0458 (size: 0x10)
    void OnCameraModeUpdatedDispatcher();
    FWBP_TimeDilationSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher; // 0x0468 (size: 0x10)
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_TimeDilationSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher; // 0x0478 (size: 0x10)
    void OnEditCameraInputDispatcher();
    FWBP_TimeDilationSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher; // 0x0488 (size: 0x10)
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;                                                     // 0x0498 (size: 0x1)
    class UReplayKey* PreviousKey;                                                    // 0x04A0 (size: 0x8)
    FWBP_TimeDilationSettingsMenu_COnKeyTimeDilationUpdatedDispatcher OnKeyTimeDilationUpdatedDispatcher; // 0x04A8 (size: 0x10)
    void OnKeyTimeDilationUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;                                               // 0x04B8 (size: 0x8)

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
}; // Size: 0x4C0

#endif
