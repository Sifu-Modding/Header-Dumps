#ifndef UE4SS_SDK_BP_PagedMenu_Pause_HPP
#define UE4SS_SDK_BP_PagedMenu_Pause_HPP

class UBP_PagedMenu_Pause_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UBP_Notif_XP_C* BarXP;                                                      // 0x03E0 (size: 0x8)
    class UImage* BkgPause;                                                           // 0x03E8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x03F0 (size: 0x8)
    class UBP_HorizontalPagedMenu_C* BP_HorizontalPagedMenu_C_0;                      // 0x03F8 (size: 0x8)
    class UBP_MenuDifficulty_Widget_C* BP_MenuDifficulty_Widget;                      // 0x0400 (size: 0x8)
    class UBP_Notif_Currency_C* BP_Notif_Currency;                                    // 0x0408 (size: 0x8)
    class UBP_Notif_CustomOn_C* BP_Notif_CustomOn;                                    // 0x0410 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_PauseAgeDeath;                              // 0x0418 (size: 0x8)
    class UImage* Icon;                                                               // 0x0420 (size: 0x8)
    class UBP_Btn_InputTip_C* Input_ZoomItem;                                         // 0x0428 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Exit²;                                         // 0x0430 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Navigate;                                      // 0x0438 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Remapping;                                     // 0x0440 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Scroll;                                        // 0x0448 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_ZoomIn;                                        // 0x0450 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_ZoomOut;                                       // 0x0458 (size: 0x8)
    class UImage* Line;                                                               // 0x0460 (size: 0x8)
    class UTextBlock* Stamp_Number;                                                   // 0x0468 (size: 0x8)
    class UBorder* STAMPS;                                                            // 0x0470 (size: 0x8)
    class UBP_Notif_Currency_C* Widget_CurrencyTotal;                                 // 0x0478 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0480 (size: 0x8)
    bool bPlayEnterSound;                                                             // 0x0488 (size: 0x1)

    void UpdateStamps();
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
}; // Size: 0x489

#endif
