#ifndef UE4SS_SDK_BP_Menu_Skills_HPP
#define UE4SS_SDK_BP_Menu_Skills_HPP

class UBP_Menu_Skills_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* SkillUnlockedAnim;                                        // 0x03E0 (size: 0x8)
    class UBP_Btn_InputTip_C* BackTip;                                                // 0x03E8 (size: 0x8)
    class UImage* Bkg;                                                                // 0x03F0 (size: 0x8)
    class UBP_Btn_Title_C* BP_Btn_Subtitle;                                           // 0x03F8 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_DeathCounter;                               // 0x0400 (size: 0x8)
    class UBP_Notif_Spend_C* BP_Notif_Spend;                                          // 0x0408 (size: 0x8)
    class UBP_Notif_XP_C* BP_Notif_XP;                                                // 0x0410 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupUnlock;                                // 0x0418 (size: 0x8)
    class UHorizontalBox* BtnBox;                                                     // 0x0420 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0428 (size: 0x8)
    class UBackgroundBlur* PopupBackground;                                           // 0x0430 (size: 0x8)
    class UBP_Menu_SkillPanel_C* SkillPanel_Shrine;                                   // 0x0438 (size: 0x8)
    class UImage* UI_3D_Image;                                                        // 0x0440 (size: 0x8)
    class UImage* WhiteMask;                                                          // 0x0448 (size: 0x8)
    FBP_Menu_Skills_CDisplaySkillPanel DisplaySkillPanel;                             // 0x0450 (size: 0x10)
    void DisplaySkillPanel();
    bool InDeath;                                                                     // 0x0460 (size: 0x1)
    bool InShrine;                                                                    // 0x0461 (size: 0x1)
    float SkillTreeProgression;                                                       // 0x0464 (size: 0x4)
    int32 AudioProgressionSplitCount;                                                 // 0x0468 (size: 0x4)
    bool NewSkillUnlocked;                                                            // 0x046C (size: 0x1)
    class ABP_UI_3D_C* UI_3D_BP;                                                      // 0x0470 (size: 0x8)
    TSoftObjectPtr<ABP_UI_3D_C> UI_3D_BP_Soft;                                        // 0x0478 (size: 0x28)
    int32 CurrentCoins;                                                               // 0x04A0 (size: 0x4)
    class UMaterialInstanceDynamic* UI_3D_MID;                                        // 0x04A8 (size: 0x8)
    int32 UI_3D_MID_Index;                                                            // 0x04B0 (size: 0x4)
    class UMaterialInterface* UI_3D_Material;                                         // 0x04B8 (size: 0x8)
    FLinearColor BackgroundColor;                                                     // 0x04C0 (size: 0x10)

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
}; // Size: 0x4D0

#endif
