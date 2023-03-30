#ifndef UE4SS_SDK_BP_Menu_Startup_HPP
#define UE4SS_SDK_BP_Menu_Startup_HPP

class UBP_Menu_Startup_C : public UStartupMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UWidgetAnimation* FadeSkipCinematicInput;                                   // 0x0430 (size: 0x8)
    class UWidgetAnimation* StoryAnimLeft;                                            // 0x0438 (size: 0x8)
    class UWidgetAnimation* StoryAnimRight;                                           // 0x0440 (size: 0x8)
    class UWidgetAnimation* FadeAnim;                                                 // 0x0448 (size: 0x8)
    class UOverlay* AllowSkipOverlay;                                                 // 0x0450 (size: 0x8)
    class UCanvasPanel* ArenaRecap;                                                   // 0x0458 (size: 0x8)
    class UWidgetSwitcher* BackgroundSwitcher;                                        // 0x0460 (size: 0x8)
    class UImage* BkgLinear;                                                          // 0x0468 (size: 0x8)
    class UBP_Arena_Challenge_Recap_C* BP_Arena_Challenge_Recap;                      // 0x0470 (size: 0x8)
    class UBP_Arena_PopupWarning_C* BP_Arena_InfoChall;                               // 0x0478 (size: 0x8)
    class UBP_BlackFade_C* BP_BlackFade;                                              // 0x0480 (size: 0x8)
    class UBP_Btn_Hold_C* BP_Btn_SkipHold;                                            // 0x0488 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_BtnTip_Back;                                         // 0x0490 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_BtnTip_Cheats;                                       // 0x0498 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_BtnTip_Confirm;                                      // 0x04A0 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_BtnTip_SwapCharacter;                                // 0x04A8 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_BtnTip_TrainingRoom;                                 // 0x04B0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupPlayWithoutSaving;                     // 0x04B8 (size: 0x8)
    class UBP_VersionWidget_C* BP_VersionWidget;                                      // 0x04C0 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnArena;                                               // 0x04C8 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnContinue;                                            // 0x04D0 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnCredits;                                             // 0x04D8 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnLoadSave;                                            // 0x04E0 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnMainNewGame;                                         // 0x04E8 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnNewGame;                                             // 0x04F0 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnOptions;                                             // 0x04F8 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnPressStartSimple;                                    // 0x0500 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnPressTrainingRoom;                                   // 0x0508 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnQuit;                                                // 0x0510 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnReplayEditor;                                        // 0x0518 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnShowArenaSelection;                                  // 0x0520 (size: 0x8)
    class UBP_Btn_TitleBtn_C* BtnStory;                                               // 0x0528 (size: 0x8)
    class UHorizontalBox* HorizontalBox_GamerTag;                                     // 0x0530 (size: 0x8)
    class UHorizontalBox* InputTips;                                                  // 0x0538 (size: 0x8)
    class UImage* LineImage;                                                          // 0x0540 (size: 0x8)
    class ULoading_Checkpoint_Background_C* Loading_Checkpoint_Background;            // 0x0548 (size: 0x8)
    class UCanvasPanel* MainMenu;                                                     // 0x0550 (size: 0x8)
    class UVerticalBox* MenuBox;                                                      // 0x0558 (size: 0x8)
    class UVerticalBox* PreArenaSelection;                                            // 0x0560 (size: 0x8)
    class UCanvasPanel* PressStart;                                                   // 0x0568 (size: 0x8)
    class UHorizontalBox* SkipButtonHorizontalBox;                                    // 0x0570 (size: 0x8)
    class UVerticalBox* StoryBox;                                                     // 0x0578 (size: 0x8)
    class UWidgetSwitcher* SubMenuSwitcher;                                           // 0x0580 (size: 0x8)
    class UTextBlock* TextBlock_GamerTag;                                             // 0x0588 (size: 0x8)
    TArray<EMenuEnum> MenuToKeepAmb;                                                  // 0x0590 (size: 0x10)
    bool bStarted;                                                                    // 0x05A0 (size: 0x1)
    bool bSaveLoaded;                                                                 // 0x05A1 (size: 0x1)
    FBP_Menu_Startup_CLocalOnSaveLoadedEventDispatcher LocalOnSaveLoadedEventDispatcher; // 0x05A8 (size: 0x10)
    void LocalOnSaveLoadedEventDispatcher(ELoadResult _eLoadResult);
    bool NewGameAsked;                                                                // 0x05B8 (size: 0x1)
    bool IsUsingBackgroundToMask3D;                                                   // 0x05B9 (size: 0x1)
    bool IsInSelectHideoutMap;                                                        // 0x05BA (size: 0x1)
    bool WaitingImpostorsStabilization;                                               // 0x05BB (size: 0x1)
    bool StorySubMenuOpened;                                                          // 0x05BC (size: 0x1)
    TEnumAsByte<StartupMenu_Submenu> CurrentSubMenu;                                  // 0x05BD (size: 0x1)
    FGameplayTagContainer CurrentMapTags;                                             // 0x05C0 (size: 0x20)
    bool IsLeavingMap;                                                                // 0x05E0 (size: 0x1)
    TSoftObjectPtr<ABP_TrainingManager_C> Training Manager;                           // 0x05E8 (size: 0x28)
    TSoftObjectPtr<ASCPlayerStart> PlayerStart;                                       // 0x0610 (size: 0x28)
    bool bWaitingToGoToStoryMap;                                                      // 0x0638 (size: 0x1)
    bool ConfirmationPopupOpened;                                                     // 0x0639 (size: 0x1)
    bool CanSkipArenaIntro;                                                           // 0x063A (size: 0x1)

    void SequenceEvent__ENTRYPOINTBP_Menu_Startup_2();
    void SequenceEvent__ENTRYPOINTBP_Menu_Startup_1();
    void SequenceEvent__ENTRYPOINTBP_Menu_Startup_0();
    void LaunchArenaSetup();
    bool IsArenaMapParkour();
    void UpdateGamerTagVisibility();
    bool HasAccessToArena();
    bool AreCheatsUnlocked();
    void OnLeftTrainingRoom();
    void OnTrainingRoomShown();
    void ShowTrainingRoom();
    void PreTrainingRoomShown();
    bool BPE_OnInputAction(InputAction eAction);
    void OnStorySubMenuClosed();
    void SetStorySubMenuPosition();
    void UpdateButtonsVisibilityWhileStoryMenuActive();
    void OnStorySubMenuOpened();
    void CloseStorySubMenu();
    void OpenArenaSelection();
    bool IsAnySave();
    bool BPE_OnMenuActionSecondaryPressed();
    bool IsInProgressStoryMap();
    void UpdateMainMenuButtonsVisibility();
    bool IsWuguanMap();
    bool BPE_HandleNavigationBack();
    bool IsArenaChallengeMap();
    bool IsArenaMenuMap();
    void DisableMenuInteraction();
    void RefreshInputTipsVisibility();
    void EnableInputs();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void UpdateSubMenuAlignment(EPlayerScreenSide LocalScreenSide);
    void IdentifySubMenuToShow();
    void RefreshSubMenuFocus();
    void SetCurrentSubMenu(TEnumAsByte<StartupMenu_Submenu> SubMenu);
    bool BPE_OnActionButtonPressed();
    void Launch(bool enableOptionMenu);
    void UnbindEventToSaveLoaded(const FUnbindEventToSaveLoadedEvent& Event);
    void BindEventToSaveLoaded(const FBindEventToSaveLoadedEvent& Event, bool bCallIfAlreadyLoaded);
    void Construct();
    void CE_OnSaveLoaded(ELoadResult _eLoadResult);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Popup_Validation_K2Node_ComponentBoundEvent_5_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_Popup_Validation_K2Node_ComponentBoundEvent_6_NoClicked__DelegateSignature();
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
    void BndEvt__BP_Menu_Startup_BtnArena_K2Node_ComponentBoundEvent_3_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnShowArenaSelection_K2Node_ComponentBoundEvent_4_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnStory_K2Node_ComponentBoundEvent_7_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void OpenTrainingRoom();
    void SaveStatusChanged(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void BndEvt__BP_Menu_Startup_BtnPressTrainingRoom_K2Node_ComponentBoundEvent_9_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void OnTrainingRoomHidden();
    void BPE_OnSaveCreated();
    void BndEvt__BP_Menu_Startup_BtnReplayEditor_K2Node_ComponentBoundEvent_13_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Startup_BtnStory_1_K2Node_ComponentBoundEvent_14_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void SaveStatusChanged_NoSave(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void SaveStatusChanged_SaveBeforeTuto(bool _bSaveInProgress, ESaveResult _eSaveResult);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_Menu_Startup(int32 EntryPoint);
    void LocalOnSaveLoadedEventDispatcher__DelegateSignature(ELoadResult _eLoadResult);
}; // Size: 0x63B

#endif
