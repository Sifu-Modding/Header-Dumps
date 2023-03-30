#ifndef UE4SS_SDK_WBP_ReplaySubMenuContainer_HPP
#define UE4SS_SDK_WBP_ReplaySubMenuContainer_HPP

class UWBP_ReplaySubMenuContainer_C : public UWBP_ReplaySubMenuBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UBP_Btn_Input_C* InputLeft;                                                 // 0x03F8 (size: 0x8)
    class UBP_Btn_Input_C* InputRight;                                                // 0x0400 (size: 0x8)
    class UHorizontalBox* NavBox;                                                     // 0x0408 (size: 0x8)
    class UWidgetSwitcher* TabSwitcher;                                               // 0x0410 (size: 0x8)
    class UHorizontalBox* TextBox;                                                    // 0x0418 (size: 0x8)
    class UWBP_CameraSettingsMenu_C* WBP_CameraSettings;                              // 0x0420 (size: 0x8)
    class UWBP_CharacterExportSettings_C* WBP_CharacterSettings;                      // 0x0428 (size: 0x8)
    class UWBP_EffectsSettingsMenu_C* WBP_EffectsSettingsMenu;                        // 0x0430 (size: 0x8)
    class UWBP_LensSettingsMenu_C* WBP_LensSettings;                                  // 0x0438 (size: 0x8)
    class UWBP_MusicExportSettings_C* WBP_MusicExportSettings;                        // 0x0440 (size: 0x8)
    class UWBP_PhotoExportSettings_C* WBP_PhotoSettings;                              // 0x0448 (size: 0x8)
    class UWBP_TimeDilationSettingsMenu_C* WBP_TimeDilationSettingsMenu;              // 0x0450 (size: 0x8)
    bool Photomode;                                                                   // 0x0458 (size: 0x1)
    class UWBP_FilterPresetSavedPopup_C* FilterPresetSavedPopup;                      // 0x0460 (size: 0x8)
    TEnumAsByte<ReplayExportType> CurrentExportMode;                                  // 0x0468 (size: 0x1)
    FWBP_ReplaySubMenuContainer_COnMenuCycle OnMenuCycle;                             // 0x0470 (size: 0x10)
    void OnMenuCycle(class UWBP_ReplaySubMenuBase_C* Previous, class UWBP_ReplaySubMenuBase_C* Next);
    class UWBP_ReplaySubMenuBase_C* LastMenu;                                         // 0x0480 (size: 0x8)
    TArray<FReplayUIContainerMenuInfos> AvailableMenus;                               // 0x0488 (size: 0x10)
    TArray<FReplayUIContainerMenuInfos> Menus;                                        // 0x0498 (size: 0x10)
    int32 LastMenuIndex;                                                              // 0x04A8 (size: 0x4)
    class UReplayKey* StoredKey;                                                      // 0x04B0 (size: 0x8)
    FWBP_ReplaySubMenuContainer_COnAnyPropertyPreEdit OnAnyPropertyPreEdit;           // 0x04B8 (size: 0x10)
    void OnAnyPropertyPreEdit(class UBindablePropertyBase* _property, class UWBP_ReplaySubMenuWithProperties_C* Menu);
    FWBP_ReplaySubMenuContainer_COnPhotoSettingsAspectRatioUpdated OnPhotoSettingsAspectRatioUpdated; // 0x04C8 (size: 0x10)
    void OnPhotoSettingsAspectRatioUpdated();
    FWBP_ReplaySubMenuContainer_COnPhotoSettingsPostProcessUpdated OnPhotoSettingsPostProcessUpdated; // 0x04D8 (size: 0x10)
    void OnPhotoSettingsPostProcessUpdated();

    void GetCurrentMenuInfosFromTab(class UBP_Btn_Tab_C* Tab, int32& AvailableMenuIndex, FReplayUIContainerMenuInfos& MenuInfos);
    void GetCurrentMenuInfos(FReplayUIContainerMenuInfos& MenuInfos, int32& AvailableMenuIndex);
    void GetNextMenu(ECycleDirection Direction, FReplayUIContainerMenuInfos& MenuInfos);
    void GetCurrentMenuFirstVisibleItem(class UWidget*& Item);
    void GetCurrentMenu(class UWBP_ReplaySubMenuBase_C*& Menu);
    void GetCurrentMenuIndex(int32& Index);
    void IsInActorPickerMode(bool& bIsInActorPickerMode);
    void GetCurrentTab(class UWidget*& Tab);
    void OnMenuCycled(class UWBP_ReplaySubMenuBase_C* Previous, class UWBP_ReplaySubMenuBase_C* Next);
    void UpdateCurrentCameraSettingsWithDummyKey(class UReplayKey* Key);
    class UWidget* GetTabToFocus(EUINavigation Navigation);
    void OnTabFocusLost(class UButtonUserWidget* _button, EFocusCause _eCause);
    void OnTabClicked(class UButtonUserWidget* _button, bool _bWithMouse);
    void GetCineCameraComponent(class UReplayCineCameraComponent*& CineCameraComponent);
    void On Menu Cycled();
    void CycleMenu(ECycleDirection _eDirection);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_PhotoSettings_K2Node_ComponentBoundEvent_0_OnInputAspectRatioUpdateDispatcher__DelegateSignature();
    void BndEvt__BP_PhotoModeMainWidget_WBP_ExportScreenMenu_K2Node_ComponentBoundEvent_4_OnPostProcessRequestUpdateDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_PhotoSettings_K2Node_ComponentBoundEvent_1_OnFilterPresetSavedCallback__DelegateSignature(bool HasError);
    void BPE_OnMenuPushed(class UReplaySubMenuWidget* _previousMenu, class UReplaySubMenuWidget* _parentSubMenu);
    void Construct();
    void OnParentRemoved();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_0_FocusModeInputUpdateDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_6_FocusTargetInputUpdateDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_7_OnDummyKeyConstructedDispatcher__DelegateSignature(class UReplayKey* Key);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_8_CameraSettingsChangedDispatcher__DelegateSignature();
    void RequestFocusDistanceResult();
    void LeaveFocusActorPickerMode();
    void BPE_OnMenuPopped();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_LensSettings_K2Node_ComponentBoundEvent_2_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_3_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CharacterSettings_K2Node_ComponentBoundEvent_9_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_PhotoSettings_K2Node_ComponentBoundEvent_10_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void UpdateAndCacheMenuAvailability();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_TimeDilationSettingsMenu_K2Node_ComponentBoundEvent_13_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_EffectsSettingsMenu_K2Node_ComponentBoundEvent_11_PropertyPreEditDispatcher__DelegateSignature(class UBindablePropertyBase* _property);
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_12_FocusTargetInputUpdateDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_14_FocusModeInputUpdateDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplaySubMenuContainer_WBP_CameraSettings_K2Node_ComponentBoundEvent_15_CameraSettingsChangedDispatcher__DelegateSignature();
    void ExecuteUbergraph_WBP_ReplaySubMenuContainer(int32 EntryPoint);
    void OnPhotoSettingsPostProcessUpdated__DelegateSignature();
    void OnPhotoSettingsAspectRatioUpdated__DelegateSignature();
    void OnAnyPropertyPreEdit__DelegateSignature(class UBindablePropertyBase* _property, class UWBP_ReplaySubMenuWithProperties_C* Menu);
    void OnMenuCycle__DelegateSignature(class UWBP_ReplaySubMenuBase_C* Previous, class UWBP_ReplaySubMenuBase_C* Next);
}; // Size: 0x4E8

#endif
