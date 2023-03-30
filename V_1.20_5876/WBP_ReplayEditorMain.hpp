#ifndef UE4SS_SDK_WBP_ReplayEditorMain_HPP
#define UE4SS_SDK_WBP_ReplayEditorMain_HPP

class UWBP_ReplayEditorMain_C : public UReplayMainUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06F0 (size: 0x8)
    class UWidgetAnimation* NotificationAnimation;                                    // 0x06F8 (size: 0x8)
    class UWBP_ReplayEditorBottomInputDisplay_C* BackInputDisplay;                    // 0x0700 (size: 0x8)
    class UImage* BG_CameraControlaTitle;                                             // 0x0708 (size: 0x8)
    class UCanvasPanel* CameraControlPanel;                                           // 0x0710 (size: 0x8)
    class UVerticalBox* CameraControlsVerticalBox;                                    // 0x0718 (size: 0x8)
    class UWBP_PhotomodeSideInputDisplay_C* CameraInputs;                             // 0x0720 (size: 0x8)
    class UCanvasPanel* CurrentModeTopPanel;                                          // 0x0728 (size: 0x8)
    class UWBP_ReplayFreecamPositionUpdate_Availability_C* FreeCamUpdateWindow;       // 0x0730 (size: 0x8)
    class UWBP_AvailableInputContainer_C* InputContainer_NavigationMode;              // 0x0738 (size: 0x8)
    class UWBP_AvailableInputContainer_C* InputContainer_Resume;                      // 0x0740 (size: 0x8)
    class UWBP_AvailableInputContainer_C* InputContainer_Scrub_1;                     // 0x0748 (size: 0x8)
    class UWBP_AvailableInputContainer_C* InputContainer_SelectNextPreviousKey;       // 0x0750 (size: 0x8)
    class UWBP_AvailableInputContainer_C* InputContainer_Zoom;                        // 0x0758 (size: 0x8)
    class UTextBlock* InputText_NavigationMode;                                       // 0x0760 (size: 0x8)
    class UTextBlock* InputText_Resume;                                               // 0x0768 (size: 0x8)
    class UTextBlock* InputText_Scrub_1;                                              // 0x0770 (size: 0x8)
    class UTextBlock* InputText_SelectNextPreviousKey;                                // 0x0778 (size: 0x8)
    class UTextBlock* InputText_Zoom;                                                 // 0x0780 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_NavigationMode;                                // 0x0788 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Resume;                                        // 0x0790 (size: 0x8)
    class UBP_Btn_InputTip_ConsoleOverride_C* InputTip_ScrubConsole;                  // 0x0798 (size: 0x8)
    class UBP_Btn_InputTip_ConsoleOverride_C* InputTip_SelectKeyConsole;              // 0x07A0 (size: 0x8)
    class UBP_Btn_InputTip_ConsoleOverride_C* InputTip_TimelineZoomConsole;           // 0x07A8 (size: 0x8)
    class UBorder* NotificationPanel;                                                 // 0x07B0 (size: 0x8)
    class UTextBlock* NotificationText;                                               // 0x07B8 (size: 0x8)
    class UImage* PageTitleBG;                                                        // 0x07C0 (size: 0x8)
    class UWBP_PhotomodeSideInputDisplay_C* SideInputDisplay;                         // 0x07C8 (size: 0x8)
    class UBackgroundBlur* TimelineBGBlur;                                            // 0x07D0 (size: 0x8)
    class UCanvasPanel* TimelineInputs;                                               // 0x07D8 (size: 0x8)
    class UOverlay* TimelineOverlay;                                                  // 0x07E0 (size: 0x8)
    class UTextBlock* TitleTextOverride;                                              // 0x07E8 (size: 0x8)
    class UWBP_ApplyCameraSettingsTooltip_C* WBP_ApplyCameraSettingsTooltip;          // 0x07F0 (size: 0x8)
    class UWBP_BrowseMenu_C* WBP_BrowseMenu;                                          // 0x07F8 (size: 0x8)
    class UWBP_ReplayTextKeyStateAvailability_C* WBP_ReplayTextKeyStateAvailability;  // 0x0800 (size: 0x8)
    class UWBP_ReplaySubMenuContainer_C* WBP_Settings;                                // 0x0808 (size: 0x8)
    FWBP_ReplayEditorMain_CNavigationKeyDownDispatcher NavigationKeyDownDispatcher;   // 0x0810 (size: 0x10)
    void NavigationKeyDownDispatcher(FKey Key);
    class UWBP_ExportScreenVideoPopup_C* BP_ExportMenuPopup;                          // 0x0820 (size: 0x8)
    TEnumAsByte<ReplayExportType> CurrentExportMode;                                  // 0x0828 (size: 0x1)
    class UWBP_FilterPresetSavedPopup_C* FilterPresetSavedPopup;                      // 0x0830 (size: 0x8)
    class UWBP_ReplayManagement_C* WBP_ReplayManagementMenu;                          // 0x0838 (size: 0x8)
    class UBP_PresetKeySelectionMenuReplayEditor_C* WBP_PresetKeySelectionMenu;       // 0x0840 (size: 0x8)
    bool ApplyPhotoSettingsToFreefly;                                                 // 0x0848 (size: 0x1)
    FAvailabilityLayerCache KeyJumpAvailabilityLayer;                                 // 0x0850 (size: 0x28)
    FAvailabilityLayerCache ScrubAvailabilityLayer;                                   // 0x0878 (size: 0x28)
    bool bNeedPushSettings;                                                           // 0x08A0 (size: 0x1)

    bool BPE_OnHideUIPressed();
    void PlayNotificationAnimation(FText NotificationText);
    void Format Input Timeline Text(bool IsWhite, bool IsPrimary, class UTextBlock* Text);
    void ChangeTimelineStyle(bool IsWhite, bool IsFocus);
    void RemoveNavigationModeLayers();
    void SwapNavigationMode();
    bool BPE_OnNavigationModePressed();
    void OnCameraCutUpdated(bool CutActive);
    void OnKeySelected(bool OpenSettings, int32 KeyType, EReplayKeyTransition BlendType, EReplayKeyCameraMode CameraMode, FReplayKeyScreenFading FadeInfo);
    bool BPE_OnReplayQuitPressed();
    bool BPE_OnMenuOptionsPressed();
    void OnBackMenuKeySelection();
    void OpenKeySelectionMenu();
    bool SubMenuContainerAvailabilityOverride(const class UReplaySubMenuWidget* _menu);
    void OnGoToTimeCompleted();
    void OnBlendProfileUpdated();
    void SelectCurrentKeyIfExists();
    void OnCameraFocusUpdated();
    void OnCameraSettingsChanged();
    void OnCameraSettingsUpdated(bool DisplayCameraSettings);
    void ClearSelectedKey();
    void OnMenuFocused(bool Focused);
    void OnCameraModeUpdated();
    void CameraPropertyEdited(class UBindablePropertyBase* Property);
    void UpdateTitleDisplay(bool InPreview);
    void BindSettings();
    bool BPE_OnMenuRightPressed();
    bool BPE_OnMenuLeftPressed();
    bool BPE_OnTakeScreenshotPressed();
    bool BPE_OnReplayJumpStart();
    bool BPE_OnReplayJumpEnd();
    bool BPE_OnVideoRecordingStop();
    void OnBackReplayManagementRequested();
    void OnQuitReplayEditorRequested();
    bool BPE_OnMenuActionPressed();
    bool BPE_OnPasteKeyPressed();
    bool BPE_OnCopyKeyPressed();
    void BPE_OnUndoOrRedoPressed(const ETimelineStateAction _eAction, const FTimelineChangeState& _changeState);
    bool BPE_OnEditReplayPressed();
    bool BPE_OnTimelineZoom(float _fActionValue);
    void ForceInputDisplayRefresh();
    bool BPE_OnSelectCurrentKeyPressed();
    void GetBrowseInputAvailability(bool& _bOutAvailable);
    bool BPE_OnRemoveCutPressed();
    bool BPE_OnMoveKeyReleased();
    bool BPE_OnMoveKeyRightPressed();
    bool BPE_OnMoveKeyLeftPressed();
    bool BPE_OnAddCutPressed();
    bool BPE_OnAddSpeedKeyPressed();
    void On Add Key Pressed(int32 KeyType, EReplayKeyTransition BlendType, EReplayKeyCameraMode CameraMode, FReplayKeyScreenFading FadeInfo, bool OpenSettingsAfter, bool& InputConsummed);
    bool BPE_OnLeaveModePressed();
    bool BPE_OnApplyFocusPressed();
    bool BPE_OnApplySettingsPressed();
    bool BPE_OnExportPressed();
    void OnVideoRecorderCreated(class AReplayVideoRecorder* VideoRecorder);
    void OnVideoRecordingCompleted(bool Success);
    void OnVideoRecordingStarted(bool Success);
    void ExportVideo();
    void HideExportPopup();
    void ShowExportPopup();
    void CreateExportPopup(const FCreateExportPopupOnBackRequested& OnBackRequested, const FCreateExportPopupOnExportScreen& OnExportScreen, const FCreateExportPopupOnExportVideo& OnExportVideo);
    void OnExportConfirmed();
    bool ToggleTimelineMode();
    void Update Current Camera Settings(class UReplayKey* Key);
    bool BPE_OnMenuInputPressed(InputAction _eAction);
    void GetReplayController(class ABP_ReplayController_C*& Controller);
    void OnKeyPropertyPreEdited(class UBindablePropertyBase* Property);
    void DisplayKeyEditMenu();
    void SelectRightKey();
    void SelectLeftKey();
    void OnSelectLeftOrRightKey();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetTimelineModel(class UReplayTimelineModel*& TimelineModel);
    bool BPE_OnTimelineMoveForwardPressed();
    bool BPE_OnTimelineMoveBackwardPressed();
    bool BPE_OnScrubReleased();
    bool BPE_OnEditCameraPressed();
    bool BPE_OnMenuBackKeyPressed();
    bool BPE_OnRemoveKeyPressed();
    bool BPE_OnSelectRightKeyPressed();
    bool BPE_OnSelectLeftKeyPressed();
    bool BPE_OnAddKeyPressed();
    bool BPE_OnResumePressed();
    void RebindEditorProperties(const class UReplayKey*& Key);
    void Construct();
    void BPE_OnKeyAdded(class UReplayKey* _key);
    void OnCachedGeometryAvailableEvent();
    void ApplyCameraSettingsDefaultsToDummy();
    void OnKeyDownDispatch(FKey Key);
    void BPE_OnCameraModeChanged(EReplayCameraMode _eCameraMode);
    void BPE_OnPreviewModeChanged(bool _bInPreview);
    void BndEvt__WBP_ReplayEditorMain_m_TimelineWidget_K2Node_ComponentBoundEvent_0_OnCachedGeometryAvailableDispatcher__DelegateSignature();
    void BPE_OnKeySelectionUpdate(class UReplayKey* _key, bool _bSelected);
    void BPE_OnSelectedKeyDataUpdate(class UReplayKey* _key, const FReplayKeyData& _previousData);
    void ApplyCameraSettingsDefaults(class UReplayKey* Key);
    void BPE_OnTimelineModeToggled();
    void BPE_OnRemovedFromParent();
    void BndEvt__WBP_ReplayEditorMain_WBP_Settings_K2Node_ComponentBoundEvent_1_OnMenuCycle__DelegateSignature(class UWBP_ReplaySubMenuBase_C* Previous, class UWBP_ReplaySubMenuBase_C* Next);
    void BndEvt__WBP_ReplayEditorMain_WBP_Settings_K2Node_ComponentBoundEvent_2_OnAnyPropertyPreEdit__DelegateSignature(class UBindablePropertyBase* _property, class UWBP_ReplaySubMenuWithProperties_C* Menu);
    void ApplyVirtualCameraSettings(class UReplayKey* Key);
    void ApplyVirtualCameraSettingsToDummy();
    void BndEvt__WBP_ReplayEditorMain_WBP_Settings_K2Node_ComponentBoundEvent_0_OnMenuPoppedDispatcher__DelegateSignature();
    void BndEvt__WBP_ReplayEditorMain_WBP_Settings_K2Node_ComponentBoundEvent_4_OnPhotoSettingsAspectRatioUpdated__DelegateSignature();
    void BndEvt__WBP_ReplayEditorMain_WBP_Settings_K2Node_ComponentBoundEvent_5_OnPhotoSettingsPostProcessUpdated__DelegateSignature();
    void BPE_OnKeyPastedOn(class UReplayKey* _key, bool _bIsNew);
    void BndEvt__WBP_ReplayEditorMain_InputContainer_Zoom_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void BndEvt__WBP_ReplayEditorMain_InputContainer_Resume_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void BndEvt__WBP_ReplayEditorMain_InputContainer_NavigationMode_K2Node_ComponentBoundEvent_8_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void BndEvt__WBP_ReplayEditorMain_InputContainer_SelectNextPreviousKey_K2Node_ComponentBoundEvent_10_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void BndEvt__WBP_ReplayEditorMain_InputContainer_Scrub_1_K2Node_ComponentBoundEvent_11_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_ReplayEditorMain(int32 EntryPoint);
    void NavigationKeyDownDispatcher__DelegateSignature(FKey Key);
}; // Size: 0x8A1

#endif
