#ifndef UE4SS_SDK_BP_Menu_Startup_HPP
#define UE4SS_SDK_BP_Menu_Startup_HPP

class UBP_Menu_Startup_C : public UStartupMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnim;
    class UWidgetSwitcher* BackgroundSwitcher;
    class UImage* BkgLinear;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Arena_Challenge_Recap_C* BP_Arena_Challenge_Recap;
    class UBP_BlackFade_C* BP_BlackFade;
    class UBP_Menu_Popup_Validation_C* BP_PopupPlayWithoutSaving;
    class UBP_VersionWidget_C* BP_VersionWidget;
    class UBP_Btn_TitleBtn_C* BtnContinue;
    class UBP_Btn_TitleBtn_C* BtnCredits;
    class UBP_Btn_TitleBtn_C* BtnLoadSave;
    class UBP_Btn_TitleBtn_C* BtnNewGame;
    class UBP_Btn_TitleBtn_C* BtnOptions;
    class UBP_Btn_TitleBtn_C* BtnPressStartSimple;
    class UBP_Btn_TitleBtn_C* BtnQuit;
    class UBP_Btn_InputTip_C* InputTip_Launch;
    class UInvalidationBox* InvalidationBox_0;
    class ULoading_Checkpoint_Background_C* Loading_Checkpoint_Background;
    class UVerticalBox* MenuBox;
    class UWidgetSwitcher* MenuSwitcher;
    class UVerticalBox* PressStartBox;
    class UCanvasPanel* Start_Arena;
    float InitialFov;
    bool bStarted;
    bool bSaveLoaded;
    FBP_Menu_Startup_CLocalOnSaveLoadedEventDispatcher LocalOnSaveLoadedEventDispatcher;
    void LocalOnSaveLoadedEventDispatcher(ELoadResult _eLoadResult);
    bool NewGameAsked;
    bool LeftAligment;
    bool IsUsingBackgroundToMask3D;
    bool IsInSelectHideoutMap;
    TArray<EMenuEnum> MenuToKeepAmb;
    bool WaitingImpostorsStabilization;
    bool ArenaMode;

    void SequenceEvent__ENTRYPOINTBP_Menu_Startup_0();
    void SetupArena();
    void DisableMenuInteraction();
    void UnbindEventToSaveLoaded(const FUnbindEventToSaveLoadedEvent& Event);
    void UpdateLoadSaveGameButtonVisibility();
    void EnableInputs();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void SetMenuAlignment(EPlayerScreenSide LocalScreenSide);
    bool BPE_OnActionButtonPressed();
    void Launch(bool enableOptionMenu);
    void BindEventToSaveLoaded(const FBindEventToSaveLoadedEvent& Event, bool bCallIfAlreadyLoaded);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Popup_Validation_K2Node_ComponentBoundEvent_5_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_Popup_Validation_K2Node_ComponentBoundEvent_6_NoClicked__DelegateSignature();
    void CE_OnSaveLoaded(ELoadResult _eLoadResult);
    void Construct();
    void BndEvt__BP_Menu_Startup_BtnContinue_1_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnOptions2_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnQuit2_K2Node_ComponentBoundEvent_11_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnContinue2_K2Node_ComponentBoundEvent_12_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnLoadSave_K2Node_ComponentBoundEvent_0_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_ShowState(EStartupMenuState _eState);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_Startup_BtnPressStartSimple_K2Node_ComponentBoundEvent_1_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_GiveFocus();
    void PressSimpleStart();
    void BndEvt__BP_Menu_Startup_BtnCredits_K2Node_ComponentBoundEvent_2_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BPE_OnAllImpostorsStabilized();
    void ExecuteUbergraph_BP_Menu_Startup(int32 EntryPoint);
    void LocalOnSaveLoadedEventDispatcher__DelegateSignature(ELoadResult _eLoadResult);
};

#endif
