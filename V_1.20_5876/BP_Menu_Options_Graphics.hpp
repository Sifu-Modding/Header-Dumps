#ifndef UE4SS_SDK_BP_Menu_Options_Graphics_HPP
#define UE4SS_SDK_BP_Menu_Options_Graphics_HPP

class UBP_Menu_Options_Graphics_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0898 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08A0 (size: 0x8)
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;                      // 0x08A8 (size: 0x8)
    class UScrollBox* GraphicsScroll;                                                 // 0x08B0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_AutoDetect;                                    // 0x08B8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x08C0 (size: 0x8)
    class UBP_Btn_SpinBox_C* NVidia_DLSS;                                             // 0x08C8 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_RenderRes;                                           // 0x08D0 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_Resolution;                                          // 0x08D8 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_VSync;                                               // 0x08E0 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_Window;                                              // 0x08E8 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_AntiAliasing;                                      // 0x08F0 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_Effects;                                           // 0x08F8 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_Foliage;                                           // 0x0900 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_PostProcess;                                       // 0x0908 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_Shadows;                                           // 0x0910 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_Textures;                                          // 0x0918 (size: 0x8)
    class UBP_Btn_SpinBox_C* Scala_ViewDistance;                                      // 0x0920 (size: 0x8)
    class UBP_Btn_SpinBox_C* FocusedOption;                                           // 0x0928 (size: 0x8)
    TArray<UDLSSMode> CurrentlySupportedDLSSModes;                                    // 0x0930 (size: 0x10)
    TMap<class UDLSSMode, class FText> DLSSTitles;                                    // 0x0940 (size: 0x50)
    TMap<class UDLSSMode, class FText> DLSSTooltips;                                  // 0x0990 (size: 0x50)
    TMap<TEnumAsByte<EWindowMode::Type>, FText> WindowModeTooltips;                   // 0x09E0 (size: 0x50)

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
}; // Size: 0xA30

#endif
