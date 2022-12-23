#ifndef UE4SS_SDK_BP_ReplayController_HPP
#define UE4SS_SDK_BP_ReplayController_HPP

class ABP_ReplayController_C : public AReplayController
{
    FPointerToUberGraphFrame UberGraphFrame;
    float GoToTimeSeconds;
    float GoToTimeSecondsPerTreshold;
    bool bCameraFocusPlayer;
    class UWBP_ReplayEditorMain_C* EditorMainWidget;
    bool bInPhotoMode;
    class UBP_Menu_Popup_Validation_C* PopupWidget;
    class UBP_Popup_Background_C* PopupBackground;

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
};

#endif
