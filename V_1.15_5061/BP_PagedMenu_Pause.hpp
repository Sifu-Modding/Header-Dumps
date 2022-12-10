#ifndef UE4SS_SDK_BP_PagedMenu_Pause_HPP
#define UE4SS_SDK_BP_PagedMenu_Pause_HPP

class UBP_PagedMenu_Pause_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Notif_XP_C* BarXP;
    class UImage* BkgPause;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_HorizontalPagedMenu_C* BP_HorizontalPagedMenu_C_0;
    class UBP_MenuDifficulty_Widget_C* BP_MenuDifficulty_Widget;
    class UBP_Notif_AgeDeathCounter_C* BP_PauseAgeDeath;
    class UBP_Btn_InputTip_C* Input_ZoomItem;
    class UBP_Btn_InputTip_C* InputTip_Exit²;
    class UBP_Btn_InputTip_C* InputTip_Navigate;
    class UBP_Btn_InputTip_C* InputTip_Remapping;
    class UBP_Btn_InputTip_C* InputTip_Scroll;
    class UBP_Btn_InputTip_C* InputTip_ZoomIn;
    class UBP_Btn_InputTip_C* InputTip_ZoomOut;
    class UBP_Notif_Currency_C* Widget_CurrencyTotal;
    class UWidgetSwitcher* WidgetSwitcher_0;
    bool bPlayEnterSound;

    void SetDarkmode(bool DarkMode);
    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    void ResetXpAnim();
    bool BPE_OnMenuButtonPressed();
    void PlayXpAnim();
    void GetInputTipVisibility();
    bool BPE_OnBackButtonPressed();
    bool BPE_OnPageNavigation(ECycleDirection _eDirection);
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void OnCurrentMenuChanged_Event(EMenuEnum OldMenu, EMenuEnum NewMenu);
    void BndEvt__BP_HorizontalPagedMenu_C_0_K2Node_ComponentBoundEvent_1_OnAllMenuClosed__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void HandleMultipleMenuRequest(FString InArguments, const TArray<FMenuRequestStructure>& InRequestList);
    void Destruct();
    void ExecuteUbergraph_BP_PagedMenu_Pause(int32 EntryPoint);
};

#endif
