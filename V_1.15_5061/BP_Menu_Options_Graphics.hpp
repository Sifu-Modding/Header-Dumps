#ifndef UE4SS_SDK_BP_Menu_Options_Graphics_HPP
#define UE4SS_SDK_BP_Menu_Options_Graphics_HPP

class UBP_Menu_Options_Graphics_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;
    class UScrollBox* GraphicsScroll;
    class UBP_Btn_InputTip_C* InputTip_AutoDetect;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_SpinBox_C* NVidia_DLSS;
    class UBP_Btn_SpinBox_C* Opt_RenderRes;
    class UBP_Btn_SpinBox_C* Opt_Resolution;
    class UBP_Btn_SpinBox_C* Opt_VSync;
    class UBP_Btn_SpinBox_C* Opt_Window;
    class UBP_Btn_SpinBox_C* Scala_AntiAliasing;
    class UBP_Btn_SpinBox_C* Scala_Effects;
    class UBP_Btn_SpinBox_C* Scala_Foliage;
    class UBP_Btn_SpinBox_C* Scala_PostProcess;
    class UBP_Btn_SpinBox_C* Scala_Shadows;
    class UBP_Btn_SpinBox_C* Scala_Textures;
    class UBP_Btn_SpinBox_C* Scala_ViewDistance;
    class UBP_Btn_SpinBox_C* FocusedOption;
    TArray<UDLSSMode> CurrentlySupportedDLSSModes;
    TMap<class UDLSSMode, class FText> DLSSTitles;
    TMap<class UDLSSMode, class FText> DLSSTooltips;
    TMap<TEnumAsByte<EWindowMode::Type>, FText> WindowModeTooltips;

    void PickFirstFocusableOption(class UBP_Btn_SpinBox_C*& AsBP Btn Spin Box);
    void UpdateDLSSSpinBox(bool bHideExperimentalFeatures);
    void UpdateResolutionList();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void ShowInfo();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void LoopGraphicsOptions();
    void BndEvt__Scala_Shadows_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_Textures_K2Node_ComponentBoundEvent_20_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_ViewDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_Effects_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_PostProcess_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_Foliage_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Scala_AntiAliasing_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Opt_Resolution_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Display_NVidia_DLSS_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Opt_Window_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Opt_VSync_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__Opt_RenderRes_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void LaunchAutoDetect();
    void BPE_OnDataUpdated();
    void BPE_GiveFocus();
    void BndEvt__Scala_Shadows_K2Node_ComponentBoundEvent_5_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_Textures_K2Node_ComponentBoundEvent_6_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_ViewDistance_K2Node_ComponentBoundEvent_7_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_Effects_K2Node_ComponentBoundEvent_8_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_PostProcess_K2Node_ComponentBoundEvent_9_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_Foliage_K2Node_ComponentBoundEvent_10_OnReceivedFocus__DelegateSignature();
    void BndEvt__Scala_AntiAliasing_K2Node_ComponentBoundEvent_11_OnReceivedFocus__DelegateSignature();
    void BndEvt__Opt_Resolution_K2Node_ComponentBoundEvent_0_OnReceivedFocus__DelegateSignature();
    void BndEvt__Opt_RenderRes_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BndEvt__Opt_Window_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void BndEvt__Opt_VSync_K2Node_ComponentBoundEvent_4_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Display_NVidia_DLSS_K2Node_ComponentBoundEvent_7_OnReceivedFocus__DelegateSignature();
    void ExecuteUbergraph_BP_Menu_Options_Graphics(int32 EntryPoint);
};

#endif
