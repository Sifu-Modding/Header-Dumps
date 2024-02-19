#ifndef UE4SS_SDK_BP_Menu_Combos_HPP
#define UE4SS_SDK_BP_Menu_Combos_HPP

class UBP_Menu_Combos_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UBP_Btn_Combo_C* A+X-Throw;                                                 // 0x08F0 (size: 0x8)
    class UVerticalBox* AgileCombos;                                                  // 0x08F8 (size: 0x8)
    class UVerticalBox* BaseCombos;                                                   // 0x0900 (size: 0x8)
    class UBP_Btn_Combo_C* BFX-PalmAttack;                                            // 0x0908 (size: 0x8)
    class UBP_Btn_Combo_C* BFY-SweepKick;                                             // 0x0910 (size: 0x8)
    class UBP_Menu_Options_Remapping_Layout_C* BP_Menu_Options_Remapping_Layout;      // 0x0918 (size: 0x8)
    class UVerticalBox* BrawlerCombos;                                                // 0x0920 (size: 0x8)
    class UScrollBox* CombosScroll;                                                   // 0x0928 (size: 0x8)
    class UWidgetSwitcher* CombosSwitcher;                                            // 0x0930 (size: 0x8)
    class UBP_Btn_Combo_C* FFX-GroundedPunch;                                         // 0x0938 (size: 0x8)
    class UBP_Btn_Combo_C* FFY-ThrustKick;                                            // 0x0940 (size: 0x8)
    class UBP_Btn_Combo_C* FRT-SideSwitch;                                            // 0x0948 (size: 0x8)
    class UBP_Btn_Combo_C* HoldX-GuardBreaker;                                        // 0x0950 (size: 0x8)
    class UBP_Btn_Combo_C* HoldY-ChargePunch;                                         // 0x0958 (size: 0x8)
    class UBP_Btn_Combo_C* LBY-ChargedHook;                                           // 0x0960 (size: 0x8)
    class UVerticalBox* PakMeiCombos;                                                 // 0x0968 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryHoldY-Throw;                                      // 0x0970 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryX-3Hit;                                           // 0x0978 (size: 0x8)
    class UBP_Btn_Combo_C* PostParryY-PicHead;                                        // 0x0980 (size: 0x8)
    class UBP_Btn_Combo_C* PostPushedX-Damage;                                        // 0x0988 (size: 0x8)
    class UBP_Btn_Combo_C* PostPushedY-Knockdown;                                     // 0x0990 (size: 0x8)
    class UBP_Btn_Combo_C* RTX-RunningKhapChoy;                                       // 0x0998 (size: 0x8)
    class UBP_Btn_Combo_C* RTY-RunningSlideKick;                                      // 0x09A0 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x09A8 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXAgile-LightAttacks;                                    // 0x09B0 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXBrawler-LightAttacks;                                  // 0x09B8 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXPakMei-LightAttacks;                                   // 0x09C0 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXX-FastAttacks;                                         // 0x09C8 (size: 0x8)
    class UBP_Btn_Combo_C* XXXXY-ClawCombo;                                           // 0x09D0 (size: 0x8)
    class UBP_Btn_Combo_C* XXXY-SpinKickCombo;                                        // 0x09D8 (size: 0x8)
    class UBP_Btn_Combo_C* XXXYAgile-ReverseKick;                                     // 0x09E0 (size: 0x8)
    class UBP_Btn_Combo_C* XXXYBrawler-KnockdownPunch;                                // 0x09E8 (size: 0x8)
    class UBP_Btn_Combo_C* XXXYPakMei-ClawStrike;                                     // 0x09F0 (size: 0x8)
    class UBP_Btn_Combo_C* XXY-PushbackKickCombo;                                     // 0x09F8 (size: 0x8)
    class UBP_Btn_Combo_C* XXYAgile-HandstandSpinKick;                                // 0x0A00 (size: 0x8)
    class UBP_Btn_Combo_C* XXYBrawler-FrontKick;                                      // 0x0A08 (size: 0x8)
    class UBP_Btn_Combo_C* XXYPakMei-CrouchSweep;                                     // 0x0A10 (size: 0x8)
    class UBP_Btn_Combo_C* Y_Y-MultiHit;                                              // 0x0A18 (size: 0x8)
    class UBP_Btn_Combo_C* YX-Disengage;                                              // 0x0A20 (size: 0x8)
    class UBP_Btn_Combo_C* YY_Y-SpinHighKick;                                         // 0x0A28 (size: 0x8)
    class UBP_Btn_Combo_C* YYXAgile-SpinSweep;                                        // 0x0A30 (size: 0x8)
    class UBP_Btn_Combo_C* YYXBrawler-KneestrikeGrab;                                 // 0x0A38 (size: 0x8)
    class UBP_Btn_Combo_C* YYXPakMei-CrookedFoot;                                     // 0x0A40 (size: 0x8)
    class UBP_Btn_Combo_C* YYXY-ThrowCombo;                                           // 0x0A48 (size: 0x8)
    class UBP_Btn_Combo_C* YYYAgile-HeavyAttacks;                                     // 0x0A50 (size: 0x8)
    class UBP_Btn_Combo_C* YYYBrawler-HeavyAttacks;                                   // 0x0A58 (size: 0x8)
    class UBP_Btn_Combo_C* YYYPakMei-HeavyAttacks;                                    // 0x0A60 (size: 0x8)
    class UBP_Btn_Combo_C* YYYY-HeavyAttack;                                          // 0x0A68 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0A70 (size: 0x8)
    class UWidget* PreviousButton;                                                    // 0x0A78 (size: 0x8)
    class UInputMappingWidgetData* ControllerData;                                    // 0x0A80 (size: 0x8)
    TArray<class UBP_Btn_Combo_C*> Combo Array;                                       // 0x0A88 (size: 0x10)

    void SetupMovesetModifiers();
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
}; // Size: 0xA98

#endif
