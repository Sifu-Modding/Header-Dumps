#ifndef UE4SS_SDK_BP_Menu_CoreOption_HPP
#define UE4SS_SDK_BP_Menu_CoreOption_HPP

class UBP_Menu_CoreOption_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* bkg4to5;
    class UWidgetAnimation* ContentTransition;
    class UWidgetAnimation* bkg3to4;
    class UWidgetAnimation* bkg2to3;
    class UWidgetAnimation* bkg1to2;
    class UWidgetAnimation* bkg0to1;
    class UBackgroundBlur* BackgroundBlur;
    class UImage* BarelyVisibleImage;
    class UImage* BottomLeft;
    class UImage* BottomRight;
    class UBP_InputAction_C* BP_InputAction;
    class UBP_Menu_Difficulty_C* BP_Menu_Difficulty;
    class UImage* ClearlyVisibleImage;
    class UTextBlock* Disclaimer;
    class UWidgetSwitcher* DisclaimerSwitcher;
    class UOverlay* HUDGuides;
    class UBP_Btn_InputTip_C* InputBackAudio;
    class UBP_Btn_InputTip_C* InputBackHUD;
    class UBP_Btn_InputTip_C* InputContinueAudio;
    class UBP_Btn_InputTip_C* InputContinueDisclaimer;
    class UBP_Btn_InputTip_C* InputContinueGamma;
    class UBP_Btn_InputTip_C* InputContinueHUD;
    class UBP_Btn_InputTip_C* InputDefault;
    class UInvalidationBox* InvalidationBox_0;
    class UImage* NotVisibleImage;
    class UBP_Btn_SpinBox_C* Opt_DarkMode;
    class UBP_Btn_SpinBox_C* Opt_Luminosity;
    class UWidgetSwitcher* OptionsSwitcher;
    class UTextBlock* PressTitle;
    class USafeZone* SafeZone_options;
    class UHorizontalBox* SampleImages;
    class UBP_Btn_SpinBox_C* SliderAudioLanguage;
    class UBP_Btn_SpinBox_C* SliderSubtitles;
    class UBP_Btn_SpinBox_C* SliderTextLanguage;
    class UTextBlock* TextHUDinstruction;
    class UTextBlock* TitleHUD_1;
    class UImage* TopLeft;
    class UImage* TopRight;
    int32 CurrentSwitcherIndex;

    bool BPE_OnInputAction(InputAction eAction);
    bool BPE_OnMenuActionSecondaryPressed();
    void UpdateHUD();
    bool BPE_OnBackButtonPressed();
    void CultureSwitchFailed_34FD40B24DF429C31908EDA09006181F();
    void CultureSwitched_34FD40B24DF429C31908EDA09006181F();
    void IncrementSwitcherIndex();
    void DecrementSwitcherIndex();
    void Construct();
    void BndEvt__Opt_Luminosity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_CoreOption_SliderSubtitles_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__BP_Menu_CoreOption_SliderTextLanguage_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_CoreOption_SliderAudioLanguage_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void BndEvt__BP_Menu_CoreOption_Opt_DarkMode_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(int32 Value, ECycleDirection Direction, float RatioFloat);
    void OnDifficultyChosen(EGameDifficulty difficulty);
    void ExecuteUbergraph_BP_Menu_CoreOption(int32 EntryPoint);
};

#endif
