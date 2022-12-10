#ifndef UE4SS_SDK_BP_Menu_Skills_HPP
#define UE4SS_SDK_BP_Menu_Skills_HPP

class UBP_Menu_Skills_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SkillUnlockedAnim;
    class UBP_Btn_InputTip_C* BackTip;
    class UImage* Bkg;
    class UBP_Btn_Title_C* BP_Btn_Subtitle;
    class UBP_Notif_AgeDeathCounter_C* BP_DeathCounter;
    class UBP_Notif_Spend_C* BP_Notif_Spend;
    class UBP_Notif_XP_C* BP_Notif_XP;
    class UBP_Menu_Popup_Validation_C* BP_PopupUnlock;
    class UHorizontalBox* BtnBox;
    class UInvalidationBox* InvalidationBox_0;
    class UBackgroundBlur* PopupBackground;
    class UBP_Menu_SkillPanel_C* SkillPanel_Shrine;
    class UImage* UI_3D_Image;
    class UImage* WhiteMask;
    FBP_Menu_Skills_CDisplaySkillPanel DisplaySkillPanel;
    void DisplaySkillPanel();
    bool InDeath;
    bool InShrine;
    float SkillTreeProgression;
    int32 AudioProgressionSplitCount;
    bool NewSkillUnlocked;
    class ABP_UI_3D_C* UI_3D_BP;
    TSoftObjectPtr<ABP_UI_3D_C> UI_3D_BP_Soft;
    int32 CurrentCoins;
    class UMaterialInstanceDynamic* UI_3D_MID;
    int32 UI_3D_MID_Index;
    class UMaterialInterface* UI_3D_Material;
    FLinearColor BackgroundColor;

    void UpdateCurrencyPopup();
    class UStatsComponent* GetStatsComponent();
    void UpdateDarkMode(bool DarkMode);
    void OnSkillPermUnlock();
    void OnSkillUnlocked(TSubclassOf<class USkillGameplayEffect> SkillUnlocked);
    void DisplayUnlockPopup();
    void PopupDisplay(class UWidget* Popup, class UWidget* Buttons, bool DisplayPopup);
    void SetupPendantCharges();
    void EnsureUI3DBP(bool& bIsValid);
    void UpdateSkillTreeAge();
    void GetAudioProgressionSplitIndex(float Progression, int32& Split);
    void SetAudioProgress();
    bool BPE_OnBackButtonPressed();
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void LaunchQuit();
    void BPE_DebugSkillButtonUpdated();
    void BndEvt__BP_Menu_Skills_BP_PopupUnlock_K2Node_ComponentBoundEvent_0_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_Skills_BP_PopupUnlock_K2Node_ComponentBoundEvent_1_NoClicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_Menu_Skills(int32 EntryPoint);
    void DisplaySkillPanel__DelegateSignature();
};

#endif
