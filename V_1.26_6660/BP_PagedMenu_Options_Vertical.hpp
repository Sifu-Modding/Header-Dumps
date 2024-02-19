#ifndef UE4SS_SDK_BP_PagedMenu_Options_Vertical_HPP
#define UE4SS_SDK_BP_PagedMenu_Options_Vertical_HPP

class UBP_PagedMenu_Options_Vertical_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UImage* BackgroundImg;                                                      // 0x0420 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0428 (size: 0x8)
    class UBP_VerticalPagedMenu_C* BP_VerticalPagedMenu;                              // 0x0430 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Exit;                                          // 0x0440 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0448 (size: 0x8)
    bool Startup;                                                                     // 0x0450 (size: 0x1)
    bool QuitMenu;                                                                    // 0x0451 (size: 0x1)
    bool bInSubMenu;                                                                  // 0x0452 (size: 0x1)
    bool New Waiting for Validation;                                                  // 0x0453 (size: 0x1)
    EMenuEnum CurrentMenu;                                                            // 0x0454 (size: 0x1)

    void OnUpdateModeChange();
    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    void RestoreDefaults();
    void OnValidateSettings();
    void TryToAutoDetect();
    bool BPE_OnMenuActionSecondaryPressed();
    void OnPopupClosed();
    ESlateVisibility GetInputTipDefaultVisibility();
    void StartupDisplay(bool LocalStartup);
    void DisplayApplyPopup();
    void ApplySettings();
    void CancelSettings();
    void DisplayDefaultPopup();
    bool BPE_OnBackButtonPressed();
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    void Destruct();
    void LoopOnSettings(bool bCanLaunchAutoDetect);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_VerticalPagedMenu_K2Node_ComponentBoundEvent_6_OnAllMenuClosed__DelegateSignature();
    void BndEvt__BP_PagedMenu_Options_Vertical_BP_VerticalPagedMenu_K2Node_ComponentBoundEvent_0_OnWaitingForValidationChanged__DelegateSignature(bool bNewWaitingForValidation);
    void HandleMultipleMenuRequest(FString InArguments, const TArray<FMenuRequestStructure>& InRequestList);
    void OnCurrentMenuChanged(EMenuEnum OldMenu, EMenuEnum NewMenu);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void ExecuteUbergraph_BP_PagedMenu_Options_Vertical(int32 EntryPoint);
}; // Size: 0x455

#endif
