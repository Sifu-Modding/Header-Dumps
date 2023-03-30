#ifndef UE4SS_SDK_BP_Menu_Shrine_HPP
#define UE4SS_SDK_BP_Menu_Shrine_HPP

class UBP_Menu_Shrine_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UWidgetAnimation* QuitAnim;                                                 // 0x0420 (size: 0x8)
    class UVerticalBox* AgeBox;                                                       // 0x0428 (size: 0x8)
    class UPerPlatformTextBlock* AgeCondition;                                        // 0x0430 (size: 0x8)
    class UBP_Menu_ShrineReward_C* AgeReward01;                                       // 0x0438 (size: 0x8)
    class UBP_Menu_ShrineReward_C* AgeReward02;                                       // 0x0440 (size: 0x8)
    class UBP_Menu_ShrineReward_C* AgeReward03;                                       // 0x0448 (size: 0x8)
    class UTextBlock* AgeTxt;                                                         // 0x0450 (size: 0x8)
    class UTextBlock* AgeValue;                                                       // 0x0458 (size: 0x8)
    class UBorder* Bkg;                                                               // 0x0460 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_Back;                                                // 0x0468 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x0470 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_DeathCounter;                               // 0x0478 (size: 0x8)
    class UBP_Btn_Input_C* BP_InputIcon;                                              // 0x0480 (size: 0x8)
    class UBP_Notif_Spend_C* BP_Notif_Spend;                                          // 0x0488 (size: 0x8)
    class UBP_Notif_XP_C* BP_Notif_XP;                                                // 0x0490 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupUnlock;                                // 0x0498 (size: 0x8)
    class UBP_Btn_InputTip_C* BP_Select;                                              // 0x04A0 (size: 0x8)
    class UBP_Btn_InputBtn_C* Btn_OpenSkillTree;                                      // 0x04A8 (size: 0x8)
    class UImage* LineAge;                                                            // 0x04B0 (size: 0x8)
    class UImage* LineScore;                                                          // 0x04B8 (size: 0x8)
    class UImage* LineXP;                                                             // 0x04C0 (size: 0x8)
    class UImage* Over;                                                               // 0x04C8 (size: 0x8)
    class UBackgroundBlur* PopupUnlock_Bkg;                                           // 0x04D0 (size: 0x8)
    class UVerticalBox* ScoreBox;                                                     // 0x04D8 (size: 0x8)
    class UPerPlatformTextBlock* ScoreCondition;                                      // 0x04E0 (size: 0x8)
    class UBP_Menu_ShrineReward_C* ScoreReward01;                                     // 0x04E8 (size: 0x8)
    class UBP_Menu_ShrineReward_C* ScoreReward02;                                     // 0x04F0 (size: 0x8)
    class UBP_Menu_ShrineReward_C* ScoreReward03;                                     // 0x04F8 (size: 0x8)
    class UTextBlock* ScoreTxt;                                                       // 0x0500 (size: 0x8)
    class UTextBlock* ScoreValue;                                                     // 0x0508 (size: 0x8)
    class UTextBlock* SkillTreeTxt;                                                   // 0x0510 (size: 0x8)
    class UImage* StampImg;                                                           // 0x0518 (size: 0x8)
    class UImage* StrokeAge;                                                          // 0x0520 (size: 0x8)
    class UImage* StrokeScore;                                                        // 0x0528 (size: 0x8)
    class UImage* StrokeXP;                                                           // 0x0530 (size: 0x8)
    class UVerticalBox* XPBox;                                                        // 0x0538 (size: 0x8)
    class UPerPlatformTextBlock* XPCondition;                                         // 0x0540 (size: 0x8)
    class UBP_Menu_ShrineReward_C* XPReward01;                                        // 0x0548 (size: 0x8)
    class UBP_Menu_ShrineReward_C* XPReward02;                                        // 0x0550 (size: 0x8)
    class UBP_Menu_ShrineReward_C* XPReward03;                                        // 0x0558 (size: 0x8)
    class UTextBlock* XPTxt;                                                          // 0x0560 (size: 0x8)
    class UTextBlock* XPValue;                                                        // 0x0568 (size: 0x8)
    FBP_Menu_Shrine_COnRewardItemSelected OnRewardItemSelected;                       // 0x0570 (size: 0x10)
    void OnRewardItemSelected(TSubclassOf<class UGameplayEffect> SelectedReward);
    class ABP_UI_3D_C* BP_UI_3D;                                                      // 0x0580 (size: 0x8)
    TSoftObjectPtr<ABP_UI_3D_C> BP_UI_3D_Soft;                                        // 0x0588 (size: 0x28)
    int32 BP_UI_3D_MID_Index;                                                         // 0x05B0 (size: 0x4)
    class UMaterialInstanceDynamic* BP_UI_3D_MID;                                     // 0x05B8 (size: 0x8)
    class UMaterialInterface* BP_UI_3D_Material;                                      // 0x05C0 (size: 0x8)
    class UShrineWidgetData_C* Shrine Data;                                           // 0x05C8 (size: 0x8)
    FBP_Menu_Shrine_COnShrineCancelled OnShrineCancelled;                             // 0x05D0 (size: 0x10)
    void OnShrineCancelled();
    FLinearColor BackgroundColor;                                                     // 0x05E0 (size: 0x10)
    class UButtonUserWidget* FocusedButton;                                           // 0x05F0 (size: 0x8)

    void SequenceEvent__ENTRYPOINTBP_Menu_Shrine_0();
    void PopupXPDisplay(class UButtonUserWidget* RewardBtnIn, bool Display);
    void Update Dark Mode(bool DarkMode);
    class UWidget* FocusOnPreviousButton(EUINavigation Navigation);
    void SetCustomScoreValue(float ScoreFloor1, float ScoreFloor2, float ScoreFloor3);
    bool BPE_OnMenuActionSecondaryPressed();
    void SetFocusedText(class UTextBlock* Text, bool Focused);
    void SetStyle(bool DarkMode);
    void Update Values();
    void OnPopupClosed();
    void PopupCancel();
    void Ensure UI3DBP(bool& bIsValid);
    bool BPE_OnBackButtonPressed();
    void LaunchQuit();
    void OnRewardItemSelected_Event(TSubclassOf<class UGameplayEffect> InReward);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void SetupShrineUI3D(bool RewardChosen);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__BP_Menu_Shrine_ShrineReward01_K2Node_ComponentBoundEvent_0_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_ShrineReward02_K2Node_ComponentBoundEvent_1_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_ShrineReward03_K2Node_ComponentBoundEvent_2_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_ShrineReward01_K2Node_ComponentBoundEvent_3_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward02_K2Node_ComponentBoundEvent_4_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward03_K2Node_ComponentBoundEvent_5_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward04_K2Node_ComponentBoundEvent_6_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward05_K2Node_ComponentBoundEvent_7_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward06_K2Node_ComponentBoundEvent_8_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward07_K2Node_ComponentBoundEvent_9_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward08_K2Node_ComponentBoundEvent_10_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ShrineReward09_K2Node_ComponentBoundEvent_11_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ScoreReward01_K2Node_ComponentBoundEvent_12_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_ScoreReward02_K2Node_ComponentBoundEvent_13_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_ScoreReward03_K2Node_ComponentBoundEvent_14_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_AgeReward01_K2Node_ComponentBoundEvent_18_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_AgeReward02_K2Node_ComponentBoundEvent_19_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_AgeReward03_K2Node_ComponentBoundEvent_20_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ScoreReward01_K2Node_ComponentBoundEvent_21_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ScoreReward02_K2Node_ComponentBoundEvent_22_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_ScoreReward03_K2Node_ComponentBoundEvent_23_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_XPReward01_K2Node_ComponentBoundEvent_24_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_XPReward02_K2Node_ComponentBoundEvent_25_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_XPReward03_K2Node_ComponentBoundEvent_26_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void BndEvt__BP_Menu_Shrine_BP_Btn_InputBtn_K2Node_ComponentBoundEvent_27_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_Btn_OpenSkillTree_K2Node_ComponentBoundEvent_30_ButtonUserWidgetDelegate__DelegateSignature(class UButtonUserWidget* _button, EFocusCause _eCause);
    void SetShrineCharged(bool NewCharge);
    void BndEvt__BP_Menu_Shrine_XPReward01_K2Node_ComponentBoundEvent_29_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_BP_PopupUnlock_K2Node_ComponentBoundEvent_31_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_Shrine_BP_PopupUnlock_K2Node_ComponentBoundEvent_32_NoClicked__DelegateSignature();
    void BndEvt__BP_Menu_Shrine_XPReward02_K2Node_ComponentBoundEvent_33_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_XPReward03_K2Node_ComponentBoundEvent_34_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_AgeReward01_K2Node_ComponentBoundEvent_35_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_AgeReward02_K2Node_ComponentBoundEvent_36_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_AgeReward03_K2Node_ComponentBoundEvent_37_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_ScoreReward01_K2Node_ComponentBoundEvent_38_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_ScoreReward02_K2Node_ComponentBoundEvent_39_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_ScoreReward03_K2Node_ComponentBoundEvent_40_ButtonUserWidgetClickDelegate__DelegateSignature(class UButtonUserWidget* _button, bool _bWithMouse);
    void BndEvt__BP_Menu_Shrine_XPReward01_K2Node_ComponentBoundEvent_15_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_XPReward02_K2Node_ComponentBoundEvent_16_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void BndEvt__BP_Menu_Shrine_XPReward03_K2Node_ComponentBoundEvent_17_OnRewardSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> InReward);
    void ExecuteUbergraph_BP_Menu_Shrine(int32 EntryPoint);
    void OnShrineCancelled__DelegateSignature();
    void OnRewardItemSelected__DelegateSignature(TSubclassOf<class UGameplayEffect> SelectedReward);
}; // Size: 0x5F8

#endif
