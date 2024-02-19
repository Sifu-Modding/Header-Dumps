#ifndef UE4SS_SDK_BP_Menu_Options_Language_HPP
#define UE4SS_SDK_BP_Menu_Options_Language_HPP

class UBP_Menu_Options_Language_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E8 (size: 0x8)
    class UScrollBox* AudioScroll;                                                    // 0x08F0 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08F8 (size: 0x8)
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;                      // 0x0900 (size: 0x8)
    class UBP_Btn_SpinBox_C* GameplayLanguageSubtitles;                               // 0x0908 (size: 0x8)
    class UBP_Btn_SpinBox_C* GameplayLanguageVoices;                                  // 0x0910 (size: 0x8)
    class UBP_Btn_SpinBox_C* GameplaySubtitles;                                       // 0x0918 (size: 0x8)
    class UBP_Btn_SpinBox_C* GameplaySubtitlesOpacity;                                // 0x0920 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0928 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Default;                                       // 0x0930 (size: 0x8)
    class UBackgroundBlur* LoadingBackground;                                         // 0x0938 (size: 0x8)
    class UThrobber* Throbber_102;                                                    // 0x0940 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0948 (size: 0x8)
    bool AudioApplied;                                                                // 0x0950 (size: 0x1)
    class UBP_Btn_SpinBox_C* FocusedOption;                                           // 0x0958 (size: 0x8)
    class UBP_Popup_Loading_C* LoadingPopup;                                          // 0x0960 (size: 0x8)

    void RestoreDefaultLanguage();
    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    void OnDarkModeChange();
    void UpdateDescriptionPanelText();
    void InitLanguage();
    bool BPE_OnBackButtonPressed();
    void ShowInfo();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void Loop Language Options();
    void CultureSwitchFailed_DDF283534F8F6CFC88E8FEA5B5C91EF2();
    void CultureSwitched_DDF283534F8F6CFC88E8FEA5B5C91EF2();
    void BndEvt__BP_Menu_Options_Audio_GameplayLanguage_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Audio_GameplaySubtitles_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Language_GameplaySubtitlesOpacity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_Options_Language_GameplayLanguageSubtitles_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Options_Audio_GameplayLanguage_K2Node_ComponentBoundEvent_3_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Audio_GameplaySubtitles_K2Node_ComponentBoundEvent_6_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Audio_GameplayLanguageSubtitles_K2Node_ComponentBoundEvent_8_OnReceivedFocus__DelegateSignature();
    void BndEvt__BP_Menu_Options_Language_GameplaySubtitlesOpacity_K2Node_ComponentBoundEvent_1_OnReceivedFocus__DelegateSignature();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_OnCultureChanged();
    void UpdateVoicesLanguage(int32 iLanguageIndex);
    void ExecuteUbergraph_BP_Menu_Options_Language(int32 EntryPoint);
}; // Size: 0x968

#endif
