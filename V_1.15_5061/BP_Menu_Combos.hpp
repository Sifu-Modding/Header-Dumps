#ifndef UE4SS_SDK_BP_Menu_Combos_HPP
#define UE4SS_SDK_BP_Menu_Combos_HPP

class UBP_Menu_Combos_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Btn_Combo_C* A+X-Throw;
    class UBP_Btn_Combo_C* BFX-PalmAttack;
    class UBP_Btn_Combo_C* BFY-SweepKick;
    class UBP_Menu_Options_Remapping_Layout_C* BP_Menu_Options_Remapping_Layout;
    class UScrollBox* CombosScroll;
    class UBP_Btn_Combo_C* FFX-GroundedPunch;
    class UBP_Btn_Combo_C* FFY-ThrustKick;
    class UBP_Btn_Combo_C* FRT-SideSwitch;
    class UBP_Btn_Combo_C* HoldX-GuardBreaker;
    class UBP_Btn_Combo_C* HoldY-ChargePunch;
    class UBP_Btn_Combo_C* LBY-ChargedHook;
    class UBP_Btn_Combo_C* PostParryHoldY-Throw;
    class UBP_Btn_Combo_C* PostParryX-3Hit;
    class UBP_Btn_Combo_C* PostParryY-PicHead;
    class UBP_Btn_Combo_C* PostPushedX-Damage;
    class UBP_Btn_Combo_C* PostPushedY-Knockdown;
    class UBP_Btn_Combo_C* RTX-RunningKhapChoy;
    class UBP_Btn_Combo_C* RTY-RunningSlideKick;
    class UBP_Btn_Combo_C* XXXXX-FastAttacks;
    class UBP_Btn_Combo_C* XXXXY-ClawCombo;
    class UBP_Btn_Combo_C* XXXY-SpinKickCombo;
    class UBP_Btn_Combo_C* XXY-PushbackKickCombo;
    class UBP_Btn_Combo_C* Y_Y-MultiHit;
    class UBP_Btn_Combo_C* YX-Disengage;
    class UBP_Btn_Combo_C* YY_Y-SpinHighKick;
    class UBP_Btn_Combo_C* YYXY-ThrowCombo;
    class UBP_Btn_Combo_C* YYYY-HeavyAttack;
    class UButtonUserWidget* FocusedCombo;
    class UWidget* PreviousButton;
    TArray<class UBP_Btn_Combo_C*> ComboArray;
    class UInputMappingWidgetData* ControllerData;

    void OnDarkModeChange();
    class UWidgetData* Onm_GetDataDelegate_0();
    bool OpenRemappingMenu();
    bool BPE_OnMenuActionSecondaryPressed();
    class UWidget* LoopList(EUINavigation Navigation);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Menu_Combos_FFX-GroundedPunch_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Combos_FFY-ThrustKick_K2Node_ComponentBoundEvent_2_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Combos_BFY-SweepKick_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode, bool _bInit);
    void ExecuteUbergraph_BP_Menu_Combos(int32 EntryPoint);
};

#endif
