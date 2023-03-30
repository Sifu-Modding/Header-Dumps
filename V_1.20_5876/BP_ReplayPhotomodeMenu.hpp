#ifndef UE4SS_SDK_BP_ReplayPhotomodeMenu_HPP
#define UE4SS_SDK_BP_ReplayPhotomodeMenu_HPP

class UBP_ReplayPhotomodeMenu_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0420 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_EndRecording;                            // 0x0428 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_Photomode;                               // 0x0430 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_ReplayEditor;                            // 0x0438 (size: 0x8)
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_StartRecording;                          // 0x0440 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x0448 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0450 (size: 0x8)
    class UButtonUserWidget* Focus Button;                                            // 0x0458 (size: 0x8)
    float PreviousTimeDilation;                                                       // 0x0460 (size: 0x4)
    int32 PauseRecordingTag;                                                          // 0x0464 (size: 0x4)
    EReplayStopRecordingReason ReplayStopRecordingReason;                             // 0x0468 (size: 0x1)
    bool CanGoBackToMenu;                                                             // 0x0469 (size: 0x1)

    void SpaceQueryStatusCallback(const FReplaySizeManagement& _sizeManagement, bool _bHasSpaceForNewReplay);
    void QuitMenu();
    void IsTimeFrozen(bool& Frozen);
    bool BPE_OnBackButtonPressed();
    void GetWidgetToFocus(class UWidget*& OutWidget);
    void CreatePopupReplayEditor();
    void BPE_OnVisible();
    void UpdateReplayEditorVisibility();
    void OnRecordingStreamingCompleted();
    void StopRecordingAndEnterReplayManagement();
    void ResumeGameplay();
    void BPE_OnHidden();
    void QuitReplayManagementRequested();
    void BndEvt__BP_ReplayPhotomodeMenu_Btn_StartRecording_K2Node_ComponentBoundEvent_12_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_ReplayPhotomodeMenu_Btn_ReplayEditor_K2Node_ComponentBoundEvent_15_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_ReplayPhotomodeMenu_Btn_Photomode_K2Node_ComponentBoundEvent_18_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void Construct();
    void EnterReplayManagement();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_ReplayPhotomodeMenu_Btn_EndRecording_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnRecordingChanged(bool _bRecording);
    void FreezeTime(bool Freeze);
    void ExecuteUbergraph_BP_ReplayPhotomodeMenu(int32 EntryPoint);
}; // Size: 0x46A

#endif
