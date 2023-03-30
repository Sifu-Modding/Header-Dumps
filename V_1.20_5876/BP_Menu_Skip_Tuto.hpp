#ifndef UE4SS_SDK_BP_Menu_Skip_Tuto_HPP
#define UE4SS_SDK_BP_Menu_Skip_Tuto_HPP

class UBP_Menu_Skip_Tuto_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0898 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x08A0 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x08A8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08B0 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x08B8 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_Dont_Skip_Tuto;                          // 0x08C0 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_SkipTuto;                                // 0x08C8 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x08D0 (size: 0x8)
    class UTextBlock* BtnText_1;                                                      // 0x08D8 (size: 0x8)
    class UTextBlock* BtnText_2;                                                      // 0x08E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_205;                                              // 0x08E8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x08F0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x08F8 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0900 (size: 0x8)
    bool AudioApplied;                                                                // 0x0908 (size: 0x1)
    class UBP_Btn_Difficulty_C* FocusedOption;                                        // 0x0910 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0918 (size: 0x50)
    class UPlayerFightingComponent* PlayerFightingComp;                               // 0x0968 (size: 0x8)
    bool NewGame;                                                                     // 0x0970 (size: 0x1)
    FBP_Menu_Skip_Tuto_COnSkipIntroductionChosen OnSkipIntroductionChosen;            // 0x0978 (size: 0x10)
    void OnSkipIntroductionChosen(TEnumAsByte<EnumSkipIntroSelection> SkipIntroduction);

    void PushMenu();
    void MenuReady();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ExecuteUbergraph_BP_Menu_Skip_Tuto(int32 EntryPoint);
    void OnSkipIntroductionChosen__DelegateSignature(TEnumAsByte<EnumSkipIntroSelection> SkipIntroduction);
}; // Size: 0x988

#endif
