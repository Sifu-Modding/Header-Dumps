#ifndef UE4SS_SDK_WBP_EffectsSettingsMenu_HPP
#define UE4SS_SDK_WBP_EffectsSettingsMenu_HPP

class UWBP_EffectsSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWBP_SpinBoxEnum_C* CameraMeshFading;                                       // 0x0428 (size: 0x8)
    class UVerticalBox* CutFading;                                                    // 0x0430 (size: 0x8)
    class UWBP_SpinBoxEnum_C* CutFadingEnabled;                                       // 0x0438 (size: 0x8)
    class UWBP_SpinBoxFloat_C* CutFadingTime;                                         // 0x0440 (size: 0x8)
    class UVerticalBox* PropertiesVerticalBox;                                        // 0x0448 (size: 0x8)
    FWBP_EffectsSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;          // 0x0450 (size: 0x10)
    void OnKeyUpdatedDispatcher();
    FWBP_EffectsSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher; // 0x0460 (size: 0x10)
    void OnCameraModeUpdatedDispatcher();
    FWBP_EffectsSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher; // 0x0470 (size: 0x10)
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_EffectsSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher; // 0x0480 (size: 0x10)
    void OnEditCameraInputDispatcher();
    FWBP_EffectsSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher; // 0x0490 (size: 0x10)
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;                                                     // 0x04A0 (size: 0x1)
    class UReplayKey* PreviousKey;                                                    // 0x04A8 (size: 0x8)
    FWBP_EffectsSettingsMenu_COnBlendTypeUpdatedDispatcher OnBlendTypeUpdatedDispatcher; // 0x04B0 (size: 0x10)
    void OnBlendTypeUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;                                               // 0x04C0 (size: 0x8)
    FWBP_EffectsSettingsMenu_COnCameraCutUpdatedDispatcher OnCameraCutUpdatedDispatcher; // 0x04C8 (size: 0x10)
    void OnCameraCutUpdatedDispatcher(bool CutActive);

    void OnCameraMeshFadingInputUpdate();
    void GetRootContainer(class UPanelWidget*& Widget);
    void OnSetKey(const class UReplayKey*& Key);
    void BindOnKeyDataUpdate(const class UReplayKey*& Key);
    void OnKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    void UpdateDisplayFromReplayKey(class UReplayKey* Key);
    void UpdateCutFadingTimeVisibility(bool FadeOff);
    void OnCutFadingInputUpdate();
    void OnEditCameraPositionInput(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnFocus();
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void BPE_OnMenuPopped();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_EffectsSettingsMenu(int32 EntryPoint);
    void OnCameraCutUpdatedDispatcher__DelegateSignature(bool CutActive);
    void OnBlendTypeUpdatedDispatcher__DelegateSignature();
    void OnCameraSettingsUpdatedDispatcher__DelegateSignature(bool DisplayCameraSettings);
    void OnEditCameraInputDispatcher__DelegateSignature();
    void OnMenuItemDisplayRequestDispatcher__DelegateSignature();
    void OnCameraModeUpdatedDispatcher__DelegateSignature();
    void OnKeyUpdatedDispatcher__DelegateSignature();
}; // Size: 0x4D8

#endif
