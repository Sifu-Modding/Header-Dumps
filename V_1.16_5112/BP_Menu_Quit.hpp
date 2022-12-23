#ifndef UE4SS_SDK_BP_Menu_Quit_HPP
#define UE4SS_SDK_BP_Menu_Quit_HPP

class UBP_Menu_Quit_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Menu_C* BtnGiveUp;
    class UBP_Btn_Menu_C* BtnMainMenu;
    class UBP_Btn_Menu_C* BtnQuit;
    class UBP_Btn_Menu_C* BtnRestart;
    class UButtonUserWidget* Focus Button;
    int32 iHideoutIdx;

    void ReloadMap();
    void OnRecordingCompleteWaited(const FOnRecordingCompleteWaitedOnRecordingCompleted& OnRecordingCompleted);
    void WaitForReplayRecordingComplete(const FWaitForReplayRecordingCompleteOnRecordingCompleted& OnRecordingCompleted, bool& Wait);
    void SetupDarkMode();
    void GetWidgetToFocus(class UWidget*& OutWidget);
    void CreatePopupQuit();
    void CreatePopupGiveUp();
    void CreatePopupRestart();
    void CreatePopupMainMenu();
    void BndEvt__BtnRestart_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BtnRestart_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_17_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void GoToNextMap();
    void RestartMap();
    void QuitGame();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Quit_BtnGiveUp_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Quit_BtnRestart_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Quit_BtnGiveUp_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Quit_BtnRestart_K2Node_ComponentBoundEvent_5_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void GiveUp();
    void ReturnToMainMenu();
    void ReturnToMainMenuWaitRecordingComplete();
    void GiveUpWaitRecordingComplete();
    void QuitGameWaitRecordingComplete();
    void RestartMapWaitRecordingComplete();
    void ExecuteUbergraph_BP_Menu_Quit(int32 EntryPoint);
};

#endif
