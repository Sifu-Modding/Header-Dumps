#ifndef UE4SS_SDK_BP_Menu_Options_Display_HPP
#define UE4SS_SDK_BP_Menu_Options_Display_HPP

class UBP_Menu_Options_Display_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0918 (size: 0x8)
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;                      // 0x0920 (size: 0x8)
    class UBP_Btn_SpinBox_Clicked_C* Btn_HUDFraming;                                  // 0x0928 (size: 0x8)
    class UBP_Btn_SpinBox_C* DarkMode;                                                // 0x0930 (size: 0x8)
    class UScrollBox* GraphicsScroll;                                                 // 0x0938 (size: 0x8)
    class UBP_Btn_SpinBox_C* HideHUD;                                                 // 0x0940 (size: 0x8)
    class UBP_Btn_SpinBox_C* HUDSize;                                                 // 0x0948 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_AutoDetect;                                    // 0x0950 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0958 (size: 0x8)
    class UBP_Btn_SpinBox_C* LightIntensity;                                          // 0x0960 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_HighContrast;                                        // 0x0968 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_Luminosity;                                          // 0x0970 (size: 0x8)
    class UBP_Btn_SpinBox_C* SmallScreenSize;                                         // 0x0978 (size: 0x8)
    class USCUserWidget* FocusedOption;                                               // 0x0980 (size: 0x8)
    class UBP_Menu_ReframingOffset_Widget_C* MenuReframing_Widget;                    // 0x0988 (size: 0x8)

    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    void OnDarkModeChange(EGameOptionTypes eGameOptionType);
    void PickFirstFocusableOption(class UBP_Btn_SpinBox_C*& AsBP Btn Spin Box);
    void ShowInfoBtn(class UBP_Btn_SpinBox_Clicked_C* SpinBoxClicked);
    bool BPE_OnBackButtonPressed();
    void ShowInfo(class UBP_Btn_SpinBox_C* SpinBox);
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void LoopGraphicsOptions();
    void BndEvt__BP_Menu_Options_Display_Btn_HUDFraming_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_Opt_HighContrast_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_DarkMode_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_LightIntensity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_SmallScreenSize_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void LaunchAutoDetect();
    void BPE_OnDataUpdated();
    void BPE_GiveFocus();
    void BndEvt__Opt_Luminosity_K2Node_ComponentBoundEvent_2_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_HUDSize_K2Node_ComponentBoundEvent_14_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_HideHUD_K2Node_ComponentBoundEvent_15_OnReceivedFocus__DelegateSignature();
    void BndEvt__Opt_Luminosity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_HUDSize_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_HideHUD_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BndEvt__BP_Menu_Options_Display_BP_Btn_SpinBox_Clicked_K2Node_ComponentBoundEvent_5_OnReceivedFocus__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BP_Menu_Options_Display_Opt_HighContrast_K2Node_ComponentBoundEvent_12_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_DarkMode_K2Node_ComponentBoundEvent_8_OnReceivedFocus__DelegateSignature();
    void Construct();
    void Destruct();
    void BndEvt__BP_Menu_Options_Display_LightIntensity_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_SmallScreenSize_K2Node_ComponentBoundEvent_0_OnReceivedFocus__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Options_Display(int32 EntryPoint);
}; // Size: 0x990

#endif
