#ifndef UE4SS_SDK_WBP_EffectsSettingsMenu_HPP
#define UE4SS_SDK_WBP_EffectsSettingsMenu_HPP

class UWBP_EffectsSettingsMenu_C : public UWBP_ReplaySubMenuWithProperties_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_SpinBoxEnum_C* CameraMeshFading;
    class UVerticalBox* CutFading;
    class UWBP_SpinBoxEnum_C* CutFadingEnabled;
    class UWBP_SpinBoxFloat_C* CutFadingTime;
    class UVerticalBox* PropertiesVerticalBox;
    FWBP_EffectsSettingsMenu_COnKeyUpdatedDispatcher OnKeyUpdatedDispatcher;
    void OnKeyUpdatedDispatcher();
    FWBP_EffectsSettingsMenu_COnCameraModeUpdatedDispatcher OnCameraModeUpdatedDispatcher;
    void OnCameraModeUpdatedDispatcher();
    FWBP_EffectsSettingsMenu_COnMenuItemDisplayRequestDispatcher OnMenuItemDisplayRequestDispatcher;
    void OnMenuItemDisplayRequestDispatcher();
    FWBP_EffectsSettingsMenu_COnEditCameraInputDispatcher OnEditCameraInputDispatcher;
    void OnEditCameraInputDispatcher();
    FWBP_EffectsSettingsMenu_COnCameraSettingsUpdatedDispatcher OnCameraSettingsUpdatedDispatcher;
    void OnCameraSettingsUpdatedDispatcher(bool DisplayCameraSettings);
    bool IsEditingCameraPosition;
    class UReplayKey* PreviousKey;
    FWBP_EffectsSettingsMenu_COnBlendTypeUpdatedDispatcher OnBlendTypeUpdatedDispatcher;
    void OnBlendTypeUpdatedDispatcher();
    class UReplayKey* PropertyDummyKey;
    FWBP_EffectsSettingsMenu_COnCameraCutUpdatedDispatcher OnCameraCutUpdatedDispatcher;
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
};

#endif
