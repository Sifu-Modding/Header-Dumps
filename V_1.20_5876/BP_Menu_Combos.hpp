#ifndef UE4SS_SDK_BP_Menu_Combos_HPP
#define UE4SS_SDK_BP_Menu_Combos_HPP

class UBP_Menu_Combos_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UBP_Btn_Combo_C* A+X-Throw;                                                 // 0x0878 (size: 0x8)
    class UBP_Btn_Combo_C* BFX-PalmAttack;                                            // 0x0880 (size: 0x8)
    class UBP_Btn_Combo_C* BFY-SweepKick;                                             // 0x0888 (size: 0x8)
    class UBP_Menu_Options_Remapping_Layout_C* BP_Menu_Options_Remapping_Layout;      // 0x0890 (size: 0x8)
    class UScrollBox* CombosScroll;                                                   // 0x0898 (size: 0x8)
    class UBP_Btn_Combo_C* FFX-GroundedPunch;                                         // 0x08A0 (size: 0x8)
    class UBP_Btn_Combo_C* FFY-ThrustKick;                                            // 0x08A8 (size: 0x8)
    class UBP_Btn_Combo_C* FRT-SideSwitch;                                            // 0x08B0 (size: 0x8)
    class UBP_Btn_Combo_C* HoldX-GuardBreaker;                                        // 0x08B8 (size: 0x8)
    class UBP_Btn_Combo_C* HoldY-ChargePunch;                                         // 0x08C0 (size: 0x8)
    class UBP_Btn_Combo_C* LBY-ChargedHook;                                           // 0x08C8 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryHoldY-Throw;                                      // 0x08D0 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryX-3Hit;                                           // 0x08D8 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryY-PicHead;                                        // 0x08E0 (size: 0x8)
    class UBP_Btn_Combo_C* PostPushedX-Damage;                                        // 0x08E8 (size: 0x8)
    class UBP_Btn_Combo_C* PostPushedY-Knockdown;                                     // 0x08F0 (size: 0x8)
    class UBP_Btn_Combo_C* RTX-RunningKhapChoy;                                       // 0x08F8 (size: 0x8)
    class UBP_Btn_Combo_C* RTY-RunningSlideKick;                                      // 0x0900 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXX-FastAttacks;                                         // 0x0908 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXY-ClawCombo;                                           // 0x0910 (size: 0x8)
    class UBP_Btn_Combo_C* XXXY-SpinKickCombo;                                        // 0x0918 (size: 0x8)
    class UBP_Btn_Combo_C* XXY-PushbackKickCombo;                                     // 0x0920 (size: 0x8)
    class UBP_Btn_Combo_C* Y_Y-MultiHit;                                              // 0x0928 (size: 0x8)
    class UBP_Btn_Combo_C* YX-Disengage;                                              // 0x0930 (size: 0x8)
    class UBP_Btn_Combo_C* YY_Y-SpinHighKick;                                         // 0x0938 (size: 0x8)
    class UBP_Btn_Combo_C* YYXY-ThrowCombo;                                           // 0x0940 (size: 0x8)
    class UBP_Btn_Combo_C* YYYY-HeavyAttack;                                          // 0x0948 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0950 (size: 0x8)
    class UWidget* PreviousButton;                                                    // 0x0958 (size: 0x8)
    TArray<class UBP_Btn_Combo_C*> ComboArray;                                        // 0x0960 (size: 0x10)
    class UInputMappingWidgetData* ControllerData;                                    // 0x0970 (size: 0x8)

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
}; // Size: 0x978

#endif
