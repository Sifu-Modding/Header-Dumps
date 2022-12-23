#ifndef UE4SS_SDK_BP_ReplayPhotomodeMenu_HPP
#define UE4SS_SDK_BP_ReplayPhotomodeMenu_HPP

class UBP_ReplayPhotomodeMenu_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_EndRecording;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_Photomode;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_ReplayEditor;
    class UBP_Btn_ReplayPhotomodeMenu_C* Btn_StartRecording;
    class UBP_Btn_InputTip_C* BtnStart;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UButtonUserWidget* Focus Button;
    float PreviousTimeDilation;
    int32 PauseRecordingTag;
    EReplayStopRecordingReason ReplayStopRecordingReason;
    bool CanGoBackToMenu;

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
};

#endif
