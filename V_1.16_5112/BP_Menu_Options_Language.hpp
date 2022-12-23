#ifndef UE4SS_SDK_BP_Menu_Options_Language_HPP
#define UE4SS_SDK_BP_Menu_Options_Language_HPP

class UBP_Menu_Options_Language_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* AudioScroll;
    class UHorizontalBox* Border_InputsnoAnim;
    class UBP_Menu_Option_InfoPanel_C* BP_Menu_Option_InfoPanel;
    class UBP_Btn_SpinBox_C* GameplayLanguageSubtitles;
    class UBP_Btn_SpinBox_C* GameplayLanguageVoices;
    class UBP_Btn_SpinBox_C* GameplaySubtitles;
    class UBP_Btn_SpinBox_C* GameplaySubtitlesOpacity;
    class UBP_Btn_InputTip_C* InputTip_Back;
    class UBP_Btn_InputTip_C* InputTip_Default;
    class UBackgroundBlur* LoadingBackground;
    class UThrobber* Throbber_102;
    class UButtonUserWidget* FocusedCombo;
    bool AudioApplied;
    class UBP_Btn_SpinBox_C* FocusedOption;
    class UBP_Popup_Loading_C* LoadingPopup;

    TArray<EGameOptionTypes> BPE_GetHandledOptionTypes();
    void OnDarkModeChange();
    void UpdateDescriptionPanelText();
    void InitLanguage();
    bool BPE_OnBackButtonPressed();
    void ShowInfo();
    class UWidget* LoopFromBottom(EUINavigation Navigation);
    class UWidget* LoopFromTop(EUINavigation Navigation);
    void Loop Language Options();
    void CultureSwitchFailed_BB1C823F4D89772C400008939ABE275A();
    void CultureSwitched_BB1C823F4D89772C400008939ABE275A();
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
    void ExecuteUbergraph_BP_Menu_Options_Language(int32 EntryPoint);
};

#endif
