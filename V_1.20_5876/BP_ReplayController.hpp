#ifndef UE4SS_SDK_BP_ReplayController_HPP
#define UE4SS_SDK_BP_ReplayController_HPP

class ABP_ReplayController_C : public AReplayController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0CA0 (size: 0x8)
    float GoToTimeSeconds;                                                            // 0x0CA8 (size: 0x4)
    float GoToTimeSecondsPerTreshold;                                                 // 0x0CAC (size: 0x4)
    bool bCameraFocusPlayer;                                                          // 0x0CB0 (size: 0x1)
    class UWBP_ReplayEditorMain_C* EditorMainWidget;                                  // 0x0CB8 (size: 0x8)
    bool bInPhotoMode;                                                                // 0x0CC0 (size: 0x1)
    class UBP_Menu_Popup_Validation_C* PopupWidget;                                   // 0x0CC8 (size: 0x8)
    class UBP_Popup_Background_C* PopupBackground;                                    // 0x0CD0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* PopupFinalEditWidget;                          // 0x0CD8 (size: 0x8)

    void HideFinalEditPopup();
    void ShowFinalEditPopup(const FShowFinalEditPopupLaunchFinalEditCallback& LaunchFinalEditCallback);
    void HideLeavePopup();
    void LeaveReplayEditor();
    void ShowLeavePopup();
    void InpActEvt_Ctrl_S_K2Node_InputKeyEvent_0(FKey Key);
    void BPE_OnReplayCameraModeChanged(EReplayCameraMode _eCameraMode);
    void ReceiveBeginPlay();
    void UnloadBank();
    void OnTimeDilationSetRTPC(float _fTimeDilation);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void PlaybackReachEnd();
    void ExecuteUbergraph_BP_ReplayController(int32 EntryPoint);
}; // Size: 0xCE0

#endif
