#ifndef UE4SS_SDK_BP_Menu_Shrine_HPP
#define UE4SS_SDK_BP_Menu_Shrine_HPP

class UBP_Menu_Shrine_C : public UBP_Menu_WithPopup_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* QuitAnim;
    class UVerticalBox* AgeBox;
    class UPerPlatformTextBlock* AgeCondition;
    class UBP_Menu_ShrineReward_C* AgeReward01;
    class UBP_Menu_ShrineReward_C* AgeReward02;
    class UBP_Menu_ShrineReward_C* AgeReward03;
    class UTextBlock* AgeTxt;
    class UTextBlock* AgeValue;
    class UBorder* Bkg;
    class UBP_Btn_InputTip_C* BP_Back;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Notif_AgeDeathCounter_C* BP_DeathCounter;
    class UBP_Btn_Input_C* BP_InputIcon;
    class UBP_Notif_Spend_C* BP_Notif_Spend;
    class UBP_Notif_XP_C* BP_Notif_XP;
    class UBP_Menu_Popup_Validation_C* BP_PopupUnlock;
    class UBP_Btn_InputTip_C* BP_Select;
    class UBP_Btn_InputBtn_C* Btn_OpenSkillTree;
    class UImage* LineAge;
    class UImage* LineScore;
    class UImage* LineXP;
    class UImage* Over;
    class UBackgroundBlur* PopupUnlock_Bkg;
    class UVerticalBox* ScoreBox;
    class UPerPlatformTextBlock* ScoreCondition;
    class UBP_Menu_ShrineReward_C* ScoreReward01;
    class UBP_Menu_ShrineReward_C* ScoreReward02;
    class UBP_Menu_ShrineReward_C* ScoreReward03;
    class UTextBlock* ScoreTxt;
    class UTextBlock* ScoreValue;
    class UTextBlock* SkillTreeTxt;
    class UImage* StampImg;
    class UImage* StrokeAge;
    class UImage* StrokeScore;
    class UImage* StrokeXP;
    class UVerticalBox* XPBox;
    class UPerPlatformTextBlock* XPCondition;
    class UBP_Menu_ShrineReward_C* XPReward01;
    class UBP_Menu_ShrineReward_C* XPReward02;
    class UBP_Menu_ShrineReward_C* XPReward03;
    class UTextBlock* XPTxt;
    class UTextBlock* XPValue;
    FBP_Menu_Shrine_COnRewardItemSelected OnRewardItemSelected;
    void OnRewardItemSelected(TSubclassOf<class UGameplayEffect> SelectedReward);
    class ABP_UI_3D_C* BP_UI_3D;
    TSoftObjectPtr<ABP_UI_3D_C> BP_UI_3D_Soft;
    int32 BP_UI_3D_MID_Index;
    class UMaterialInstanceDynamic* BP_UI_3D_MID;
    class UMaterialInterface* BP_UI_3D_Material;
    class UShrineWidgetData_C* Shrine Data;
    FBP_Menu_Shrine_COnShrineCancelled OnShrineCancelled;
    void OnShrineCancelled();
    FLinearColor BackgroundColor;
    class UButtonUserWidget* FocusedButton;

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
};

#endif
