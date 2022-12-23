#ifndef UE4SS_SDK_BP_Menu_Options_Display_HPP
#define UE4SS_SDK_BP_Menu_Options_Display_HPP

class UBP_Menu_Options_Display_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;
    class UBP_Btn_SpinBox_Clicked_C* Btn_HUDFraming;
    class UBP_Btn_SpinBox_C* DarkMode;
    class UScrollBox* GraphicsScroll;
    class UBP_Btn_SpinBox_C* HideHUD;
    class UBP_Btn_SpinBox_C* HUDSize;
    class UBP_Btn_InputTip_C* InputTip_AutoDetect;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_SpinBox_C* Opt_HighContrast;
    class UBP_Btn_SpinBox_C* Opt_Luminosity;
    class USCUserWidget* FocusedOption;
    class UBP_Menu_ReframingOffset_Widget_C* MenuReframing_Widget;

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
    void ExecuteUbergraph_BP_Menu_Options_Display(int32 EntryPoint);
};

#endif
