#ifndef UE4SS_SDK_BP_Menu_SkillPanel_HPP
#define UE4SS_SDK_BP_Menu_SkillPanel_HPP

class UBP_Menu_SkillPanel_C : public UMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* FastPermAnim;                                             // 0x03E0 (size: 0x8)
    class UWidgetAnimation* PermAnim;                                                 // 0x03E8 (size: 0x8)
    class UWidgetAnimation* UnlockedAnim;                                             // 0x03F0 (size: 0x8)
    class UWidgetAnimation* OnValidated;                                              // 0x03F8 (size: 0x8)
    class UTextBlock* AgeOldTxt_1;                                                    // 0x0400 (size: 0x8)
    class UTextBlock* AllSkillsLockedText;                                            // 0x0408 (size: 0x8)
    class UImage* BracketRight;                                                       // 0x0410 (size: 0x8)
    class UImage* ChargeHorizontal;                                                   // 0x0418 (size: 0x8)
    class UHorizontalBox* ChargeLine;                                                 // 0x0420 (size: 0x8)
    class UImage* ChargeVertical;                                                     // 0x0428 (size: 0x8)
    class UHorizontalBox* CostConsolidateBox;                                         // 0x0430 (size: 0x8)
    class UTextBlock* CostText_XP;                                                    // 0x0438 (size: 0x8)
    class UTextBlock* CostValue;                                                      // 0x0440 (size: 0x8)
    class UImage* ImgPermFeedback;                                                    // 0x0448 (size: 0x8)
    class UImage* ImgUnlockFeedback;                                                  // 0x0450 (size: 0x8)
    class UVerticalBox* InfoBox;                                                      // 0x0458 (size: 0x8)
    class UBP_Btn_Input_C* InputConsolidate;                                          // 0x0460 (size: 0x8)
    class UBP_Btn_Input_C* InputUnlock;                                               // 0x0468 (size: 0x8)
    class UTextBlock* LearnText;                                                      // 0x0470 (size: 0x8)
    class UImage* LineHorizontal;                                                     // 0x0478 (size: 0x8)
    class UImage* LineVertical;                                                       // 0x0480 (size: 0x8)
    class UTextBlock* MaxAge;                                                         // 0x0488 (size: 0x8)
    class UTextBlock* ModifiersONText;                                                // 0x0490 (size: 0x8)
    class UTextBlock* MovesetType;                                                    // 0x0498 (size: 0x8)
    class UWidgetSwitcher* PanelSwitcher;                                             // 0x04A0 (size: 0x8)
    class UHorizontalBox* PermanentBox;                                               // 0x04A8 (size: 0x8)
    class UTextBlock* PermanentText;                                                  // 0x04B0 (size: 0x8)
    class UBorder* PermBorder;                                                        // 0x04B8 (size: 0x8)
    class UImage* PermItem01;                                                         // 0x04C0 (size: 0x8)
    class UImage* PermItem02;                                                         // 0x04C8 (size: 0x8)
    class UImage* PermItem03;                                                         // 0x04D0 (size: 0x8)
    class UImage* PermItem04;                                                         // 0x04D8 (size: 0x8)
    class UImage* PermItem05;                                                         // 0x04E0 (size: 0x8)
    class UImage* PermLine;                                                           // 0x04E8 (size: 0x8)
    class UHorizontalBox* ProgressBox;                                                // 0x04F0 (size: 0x8)
    class UTextBlock* SkillDescription;                                               // 0x04F8 (size: 0x8)
    class URichTextBlock* SkillDetailsDeath;                                          // 0x0500 (size: 0x8)
    class URichTextBlock* SkillDetailsNotDeath;                                       // 0x0508 (size: 0x8)
    class UWidgetSwitcher* SkillDetailsSwitcher;                                      // 0x0510 (size: 0x8)
    class UAsyncImage* SkillIllustration;                                             // 0x0518 (size: 0x8)
    class UTextBlock* SkillName;                                                      // 0x0520 (size: 0x8)
    class UUniformGridPanel* SkillsBox;                                               // 0x0528 (size: 0x8)
    class UImage* SkillsLockedDot;                                                    // 0x0530 (size: 0x8)
    class URichTextBlock* SkillWeaponsDeath;                                          // 0x0538 (size: 0x8)
    class URichTextBlock* SkillWeaponsNotDeath;                                       // 0x0540 (size: 0x8)
    class UBorder* UnlockBorder;                                                      // 0x0548 (size: 0x8)
    class UHorizontalBox* UnlockBox;                                                  // 0x0550 (size: 0x8)
    class UBorder* UnlockCostBorder;                                                  // 0x0558 (size: 0x8)
    class UImage* UnlockLine;                                                         // 0x0560 (size: 0x8)
    class UTextBlock* UnlockText;                                                     // 0x0568 (size: 0x8)
    class UImage* VideoMask;                                                          // 0x0570 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Age;                                        // 0x0578 (size: 0x8)
    class UButtonUserWidget* ButtonHolded;                                            // 0x0580 (size: 0x8)
    class UAsyncTaskTick* HoldTask;                                                   // 0x0588 (size: 0x8)
    class UBP_Menu_SkillBtn_C* UnlockedSkillBtn;                                      // 0x0590 (size: 0x8)
    TArray<class UBP_Menu_SkillBtn_C*> SkillBtnArray;                                 // 0x0598 (size: 0x10)
    class UBP_Menu_SkillBtn_C* currentButton;                                         // 0x05A8 (size: 0x8)
    FBP_Menu_SkillPanel_CHoldStarted HoldStarted;                                     // 0x05B0 (size: 0x10)
    void HoldStarted();
    FBP_Menu_SkillPanel_CHoldStopped HoldStopped;                                     // 0x05C0 (size: 0x10)
    void HoldStopped();
    FBP_Menu_SkillPanel_CFifthLevelSkillUnlocked FifthLevelSkillUnlocked;             // 0x05D0 (size: 0x10)
    void FifthLevelSkillUnlocked(TSubclassOf<class UGameplayEffect> SkillUnlocked);
    FBP_Menu_SkillPanel_CSkillUnlocked SkillUnlocked;                                 // 0x05E0 (size: 0x10)
    void SkillUnlocked(TSubclassOf<class USkillGameplayEffect> SkillUnlocked);
    FBP_Menu_SkillPanel_CSkillConsolidated SkillConsolidated;                         // 0x05F0 (size: 0x10)
    void SkillConsolidated(TSubclassOf<class USkillGameplayEffect> Skill);
    FBP_Menu_SkillPanel_CSkillClicked SkillClicked;                                   // 0x0600 (size: 0x10)
    void SkillClicked();
    FBP_Menu_SkillPanel_CSkillPermanentUnlocked SkillPermanentUnlocked;               // 0x0610 (size: 0x10)
    void SkillPermanentUnlocked();
    class UMediaPlayer* SkillsMediaPlayer;                                            // 0x0620 (size: 0x8)
    class UMediaSource* MediaSourceToPlay;                                            // 0x0628 (size: 0x8)
    class UMediaSource* PendingMediaSourceToPlay;                                     // 0x0630 (size: 0x8)
    float UpdateMediaPlayerDelay;                                                     // 0x0638 (size: 0x4)
    bool bIsLoadingMediaSource;                                                       // 0x063C (size: 0x1)
    int32 LastSkillCurrentPermUnlockStep;                                             // 0x0640 (size: 0x4)
    bool UnlockablePrePerm;                                                           // 0x0644 (size: 0x1)

    void SequenceEvent__ENTRYPOINTBP_Menu_SkillPanel_2();
    void SequenceEvent__ENTRYPOINTBP_Menu_SkillPanel_1();
    void SequenceEvent__ENTRYPOINTBP_Menu_SkillPanel_0();
    bool IsLockAllSkills();
    void PlayPermanentUnlockSound();
    void GetSkillStatus(class UBP_Menu_SkillBtn_C* SkillBtn, int32& Cost, bool& PermUnlock, bool& FirstUnlock);
    void GetConsolidable(class UBP_Menu_SkillBtn_C* Button, TSubclassOf<class USkillGameplayEffect> Effect, bool& Consolidable);
    void PlayBaseUnlockSound();
    void CheckAllSkillsPermanentlyUnlocked();
    void SkillPermUnlock();
    void SetSkillDetails(TSubclassOf<class USkillGameplayEffect> LocalSkill);
    void CallSkillClicked();
    void Unlock Skill();
    void OnSkillConsolidate(class UBP_Menu_SkillBtn_C* Button);
    void AchievementLevel5_Skill();
    void UpdatePanelSwitcher(bool LocalDeath);
    void GetFirstUnlockableButton(class UBP_Menu_SkillBtn_C*& Button);
    void GetRowVisibility(TArray<class UWidget*>& Array, bool& RowVisible);
    void UpdateRowsVisibility(bool LocalSpend);
    void GetContexts(bool& SpendContext, bool& DeathContext);
    class UWidget* WrapNextButton(EUINavigation Navigation);
    void GetSkillProgress(TSubclassOf<class USkillGameplayEffect> LocalSkill, int32& Current, int32& Max, int32& ConsolidationValue);
    void ValidatePanel();
    void OnSkillBtnUnlocked(class UBP_Menu_SkillBtn_C* Button, TArray<class TSubclassOf<USkillGameplayEffect>>& PrevSkills, TArray<class TSubclassOf<USkillGameplayEffect>>& NewSkills);
    void OnSkillBtnLost(class UBP_Menu_SkillBtn_C* Button);
    void OnSkillBtnFocused(class UBP_Menu_SkillBtn_C* Button);
    void UpdateSkillButtons(bool LocalSpend, bool LocalDeath);
    void SetPanelStyle(bool LocalSpend, bool LocalDeath);
    void UpdatePanelDisplay(class UBP_Menu_SkillBtn_C* SkillBtn);
    void Construct();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void OnUpdateMediaPlayer();
    void Destruct();
    void OnUpdateMediaPlayerDelayed();
    void PlayUnlockAnim(bool PermUnlock, int32 CurrentPermUnlockStep);
    void OnUnlockAnimFinished();
    void ExecuteUbergraph_BP_Menu_SkillPanel(int32 EntryPoint);
    void SkillPermanentUnlocked__DelegateSignature();
    void SkillClicked__DelegateSignature();
    void SkillConsolidated__DelegateSignature(TSubclassOf<class USkillGameplayEffect> Skill);
    void SkillUnlocked__DelegateSignature(TSubclassOf<class USkillGameplayEffect> SkillUnlocked);
    void FifthLevelSkillUnlocked__DelegateSignature(TSubclassOf<class UGameplayEffect> SkillUnlocked);
    void HoldStopped__DelegateSignature();
    void HoldStarted__DelegateSignature();
}; // Size: 0x645

#endif
