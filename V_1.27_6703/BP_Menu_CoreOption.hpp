#ifndef UE4SS_SDK_BP_Menu_CoreOption_HPP
#define UE4SS_SDK_BP_Menu_CoreOption_HPP

class UBP_Menu_CoreOption_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UWidgetAnimation* bkg4to5;                                                  // 0x0918 (size: 0x8)
    class UWidgetAnimation* ContentTransition;                                        // 0x0920 (size: 0x8)
    class UWidgetAnimation* bkg3to4;                                                  // 0x0928 (size: 0x8)
    class UWidgetAnimation* bkg2to3;                                                  // 0x0930 (size: 0x8)
    class UWidgetAnimation* bkg1to2;                                                  // 0x0938 (size: 0x8)
    class UWidgetAnimation* bkg0to1;                                                  // 0x0940 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x0948 (size: 0x8)
    class UImage* BarelyVisibleImage;                                                 // 0x0950 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x0958 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x0960 (size: 0x8)
    class UBP_InputAction_C* BP_InputAction;                                          // 0x0968 (size: 0x8)
    class UBP_Menu_Difficulty_C* BP_Menu_Difficulty;                                  // 0x0970 (size: 0x8)
    class UImage* ClearlyVisibleImage;                                                // 0x0978 (size: 0x8)
    class UTextBlock* Disclaimer;                                                     // 0x0980 (size: 0x8)
    class UWidgetSwitcher* DisclaimerSwitcher;                                        // 0x0988 (size: 0x8)
    class UHorizontalBox* HorizontalBox_GamerTag;                                     // 0x0990 (size: 0x8)
    class UOverlay* HUDGuides;                                                        // 0x0998 (size: 0x8)
    class UBP_Btn_InputTip_C* InputBackAudio;                                         // 0x09A0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputBackHUD;                                           // 0x09A8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueAudio;                                     // 0x09B0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueDisclaimer;                                // 0x09B8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueGamma;                                     // 0x09C0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputContinueHUD;                                       // 0x09C8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputDefault;                                           // 0x09D0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x09D8 (size: 0x8)
    class UImage* NotVisibleImage;                                                    // 0x09E0 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_DarkMode;                                            // 0x09E8 (size: 0x8)
    class UBP_Btn_SpinBox_C* Opt_Luminosity;                                          // 0x09F0 (size: 0x8)
    class UWidgetSwitcher* OptionsSwitcher;                                           // 0x09F8 (size: 0x8)
    class UTextBlock* PressTitle;                                                     // 0x0A00 (size: 0x8)
    class USafeZone* SafeZone_options;                                                // 0x0A08 (size: 0x8)
    class UHorizontalBox* SampleImages;                                               // 0x0A10 (size: 0x8)
    class UBP_Btn_SpinBox_C* SliderAudioLanguage;                                     // 0x0A18 (size: 0x8)
    class UBP_Btn_SpinBox_C* SliderSubtitles;                                         // 0x0A20 (size: 0x8)
    class UBP_Btn_SpinBox_C* SliderTextLanguage;                                      // 0x0A28 (size: 0x8)
    class UTextBlock* TextBlock_GamerTag;                                             // 0x0A30 (size: 0x8)
    class UTextBlock* TextHUDinstruction;                                             // 0x0A38 (size: 0x8)
    class UTextBlock* TitleHUD_1;                                                     // 0x0A40 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x0A48 (size: 0x8)
    class UImage* TopRight;                                                           // 0x0A50 (size: 0x8)
    int32 CurrentSwitcherIndex;                                                       // 0x0A58 (size: 0x4)

    void UpdateGamerTagVisibility();
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
}; // Size: 0xA5C

#endif
