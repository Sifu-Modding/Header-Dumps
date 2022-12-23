#ifndef UE4SS_SDK_BP_PagedMenu_Options_Vertical_HPP
#define UE4SS_SDK_BP_PagedMenu_Options_Vertical_HPP

class UBP_PagedMenu_Options_Vertical_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BackgroundImg;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_VerticalPagedMenu_C* BP_VerticalPagedMenu;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_InputTip_C* InputTip_Exit;
    class UWidgetSwitcher* WidgetSwitcher_0;
    bool Startup;
    bool QuitMenu;
    bool bInSubMenu;
    bool New Waiting for Validation;
    EMenuEnum CurrentMenu;

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
};

#endif
