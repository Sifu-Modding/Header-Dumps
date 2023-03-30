#ifndef UE4SS_SDK_BP_Menu_Difficulty_HPP
#define UE4SS_SDK_BP_Menu_Difficulty_HPP

class UBP_Menu_Difficulty_C : public UGraphOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0898 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_130;                                        // 0x08A0 (size: 0x8)
    class UImage* BlackTransparentBG;                                                 // 0x08A8 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x08B0 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x08B8 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_Menu_Popup_Validation;                      // 0x08C0 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_Classic;                                 // 0x08C8 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_Easy;                                    // 0x08D0 (size: 0x8)
    class UBP_Btn_Difficulty_ListItem_C* Btn_Hard;                                    // 0x08D8 (size: 0x8)
    class UBP_Btn_InputTip_C* BtnStart;                                               // 0x08E0 (size: 0x8)
    class UTextBlock* BtnText;                                                        // 0x08E8 (size: 0x8)
    class UTextBlock* BtnText_1;                                                      // 0x08F0 (size: 0x8)
    class UTextBlock* BtnText_2;                                                      // 0x08F8 (size: 0x8)
    class UTextBlock* BtnText_3;                                                      // 0x0900 (size: 0x8)
    class UTextBlock* BtnText_4;                                                      // 0x0908 (size: 0x8)
    class UTextBlock* BtnText_5;                                                      // 0x0910 (size: 0x8)
    class UCanvasPanel* CanvasPanel_205;                                              // 0x0918 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x0920 (size: 0x8)
    class UImage* Line;                                                               // 0x0928 (size: 0x8)
    class UImage* Line_2;                                                             // 0x0930 (size: 0x8)
    class UCanvasPanel* Popup;                                                        // 0x0938 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0940 (size: 0x8)
    class UButtonUserWidget* FocusedCombo;                                            // 0x0948 (size: 0x8)
    bool AudioApplied;                                                                // 0x0950 (size: 0x1)
    class UBP_Btn_Difficulty_C* FocusedOption;                                        // 0x0958 (size: 0x8)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0960 (size: 0x50)
    class UPlayerFightingComponent* PlayerFightingComp;                               // 0x09B0 (size: 0x8)
    FBP_Menu_Difficulty_COnDifficultyChosen OnDifficultyChosen;                       // 0x09B8 (size: 0x10)
    void OnDifficultyChosen(EGameDifficulty difficulty);
    EGameDifficulty FocusedDifficulty;                                                // 0x09C8 (size: 0x1)
    bool NewGame;                                                                     // 0x09C9 (size: 0x1)

    void SetNewGameState(bool ShowBackgroundBlurrr);
    void NoPopup();
    void YesPopup();
    void OpenPopup(FText Title);
    void SetDescription();
    void MenuReady();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_8_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Hard_K2Node_ComponentBoundEvent_9_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_10_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Difficulty_Btn_Hard_K2Node_ComponentBoundEvent_12_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Easy_K2Node_ComponentBoundEvent_13_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Difficulty_Btn_Classic_K2Node_ComponentBoundEvent_14_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void ExecuteUbergraph_BP_Menu_Difficulty(int32 EntryPoint);
    void OnDifficultyChosen__DelegateSignature(EGameDifficulty difficulty);
}; // Size: 0x9CA

#endif
