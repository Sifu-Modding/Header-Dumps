#ifndef UE4SS_SDK_BP_Menu_Death_HPP
#define UE4SS_SDK_BP_Menu_Death_HPP

class UBP_Menu_Death_C : public UDeathMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UWidgetAnimation* NoCounterNoAgeFeedbackRise;                               // 0x03F8 (size: 0x8)
    class UWidgetAnimation* NoCounterRise;                                            // 0x0400 (size: 0x8)
    class UWidgetAnimation* NoCounterIntro;                                           // 0x0408 (size: 0x8)
    class UWidgetAnimation* SkillUnlocked;                                            // 0x0410 (size: 0x8)
    class UWidgetAnimation* ContinueAnim;                                             // 0x0418 (size: 0x8)
    class UWidgetAnimation* FirstDeathAnim;                                           // 0x0420 (size: 0x8)
    class UWidgetAnimation* DeathMask;                                                // 0x0428 (size: 0x8)
    class UWidgetAnimation* GameoverIntro;                                            // 0x0430 (size: 0x8)
    class UWidgetAnimation* CounterRise;                                              // 0x0438 (size: 0x8)
    class UWidgetAnimation* CounterIntro;                                             // 0x0440 (size: 0x8)
    class UVerticalBox* AgingImpactBox;                                               // 0x0448 (size: 0x8)
    class UVerticalBox* AgingImpactBox_Reversed;                                      // 0x0450 (size: 0x8)
    class UCanvasPanel* ArenaDeath;                                                   // 0x0458 (size: 0x8)
    class UImage* Bkg_Death;                                                          // 0x0460 (size: 0x8)
    class UImage* Bkg_GameOver;                                                       // 0x0468 (size: 0x8)
    class UImage* Bkg_Rise;                                                           // 0x0470 (size: 0x8)
    class UImage* BlackMask;                                                          // 0x0478 (size: 0x8)
    class UBP_HUD_Age_C* BP_AgeCentered;                                              // 0x0480 (size: 0x8)
    class UBP_Notif_AgeDeathCounter_C* BP_AgeCorner;                                  // 0x0488 (size: 0x8)
    class UBP_Btn_Hold_C* BP_Btn_Hold;                                                // 0x0490 (size: 0x8)
    class UBP_Btn_Title_C* BP_DeathSub;                                               // 0x0498 (size: 0x8)
    class UBP_Notif_Spend_C* BP_Notif_Spend;                                          // 0x04A0 (size: 0x8)
    class UBP_Notif_XP_C* BP_Notif_XP;                                                // 0x04A8 (size: 0x8)
    class UBP_Popup_Multichoice_C* BP_Popup_Multichoice;                              // 0x04B0 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupGiveup;                                // 0x04B8 (size: 0x8)
    class UBP_Menu_Popup_Validation_C* BP_PopupUnlock;                                // 0x04C0 (size: 0x8)
    class UBP_Btn_InputTip_C* ContinueInput;                                          // 0x04C8 (size: 0x8)
    class UCanvasPanel* Death;                                                        // 0x04D0 (size: 0x8)
    class UCanvasPanel* DeathCanvas;                                                  // 0x04D8 (size: 0x8)
    class UHorizontalBox* DeathCounterBox;                                            // 0x04E0 (size: 0x8)
    class UWidgetSwitcher* DeathSwitcher;                                             // 0x04E8 (size: 0x8)
    class UVerticalBox* FirstDeathBox;                                                // 0x04F0 (size: 0x8)
    class UTextBlock* FlowCounterTxt;                                                 // 0x04F8 (size: 0x8)
    class UCanvasPanel* GameOver;                                                     // 0x0500 (size: 0x8)
    class UImage* ImgStroke;                                                          // 0x0508 (size: 0x8)
    class UImage* LineHorizontal;                                                     // 0x0510 (size: 0x8)
    class UImage* LineHorizontal_2;                                                   // 0x0518 (size: 0x8)
    class UTextBlock* NewCounterTxt;                                                  // 0x0520 (size: 0x8)
    class UTextBlock* OldCounterTxt;                                                  // 0x0528 (size: 0x8)
    class UBackgroundBlur* PopupBackground;                                           // 0x0530 (size: 0x8)
    class UBP_Btn_InputTip_C* RestartTip;                                             // 0x0538 (size: 0x8)
    class UBP_Btn_InputTip_C* RiseTip;                                                // 0x0540 (size: 0x8)
    class UBP_Menu_SkillPanel_C* SkillPanel_Death;                                    // 0x0548 (size: 0x8)
    class UImage* UI_3D_Image;                                                        // 0x0550 (size: 0x8)
    bool bIsGameOver;                                                                 // 0x0558 (size: 0x1)
    bool bResurrected;                                                                // 0x0559 (size: 0x1)
    bool bHolding;                                                                    // 0x055A (size: 0x1)
    bool bInterrupted;                                                                // 0x055B (size: 0x1)
    class ABP_UI_3D_C* UI_3D_BP;                                                      // 0x0560 (size: 0x8)
    TSoftObjectPtr<ABP_UI_3D_C> UI_3D_BP_Soft;                                        // 0x0568 (size: 0x28)
    int32 UI_3D_Pendant_ChargeID;                                                     // 0x0590 (size: 0x4)
    float UI_3D_Pendant_HoldValue;                                                    // 0x0594 (size: 0x4)
    int32 PreviousChargeLimit;                                                        // 0x0598 (size: 0x4)
    bool bHasSoundStarted;                                                            // 0x059C (size: 0x1)
    bool bCoinExplode;                                                                // 0x059D (size: 0x1)
    bool bFromHideoutSelect;                                                          // 0x059E (size: 0x1)
    int32 CurrentCoins;                                                               // 0x05A0 (size: 0x4)
    int32 UI_3D_MID_Index;                                                            // 0x05A4 (size: 0x4)
    class UMaterialInstanceDynamic* UI_3D_MID;                                        // 0x05A8 (size: 0x8)
    class UMaterialInterface* UI_3D_Material;                                         // 0x05B0 (size: 0x8)
    float PauseTime;                                                                  // 0x05B8 (size: 0x4)
    class UWidgetAnimation* PausedAnim;                                               // 0x05C0 (size: 0x8)
    bool bIsFirstDeath;                                                               // 0x05C8 (size: 0x1)
    class UAkAudioEvent* AkEvent;                                                     // 0x05D0 (size: 0x8)
    FLinearColor BackgroundColor;                                                     // 0x05D8 (size: 0x10)
    int32 iHideoutIdx;                                                                // 0x05E8 (size: 0x4)

    void SequenceEvent__ENTRYPOINTBP_Menu_Death_19();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_18();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_17();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_16();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_15();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_14();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_13();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_12();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_11();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_10();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_9();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_8();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_7();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_6();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_5();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_4();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_3();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_2();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_1();
    void SequenceEvent__ENTRYPOINTBP_Menu_Death_0();
    class UWidgetAnimation* GetIntroAnimation();
    void Trigger Automatic Rise();
    bool IsArenaGameMode();
    void UpdateCurrentDeathScreen();
    void UpdateCurrencyPopup();
    void MultichoiceDisplay(bool Condition);
    bool BPE_OnBackButtonPressed();
    void OnSkillPermanentUnlock();
    void PauseAnimOnFirstDeath(class UWidgetAnimation* LocalAnim, class UAkAudioEvent* AkEventToPlay);
    void GetAgeBonus(bool Previous, int32& HealthBonus, int32& DamageBonus);
    void OnSkillUnlocked(TSubclassOf<class USkillGameplayEffect> SkillUnlocked);
    void OnSkillClicked();
    void OnHold_BuildUp(float HoldValue);
    void TriggerChargeTurnOff(int32 ExplodingChargeID);
    void RiseFlash();
    void TriggerChargeExplode(int32 ExplodingChargeID);
    void ResolveChargesExplode(int32 PreviousChargeLimit, int32 CurrentChargeLimit);
    void SetHoldValue(float NewHoldValue);
    void EnsureUI3DBP(bool& bIsValid);
    void HoldSkillStopped();
    void HoldSkillStarted();
    void CallStandBackUp();
    void ResetUI();
    void UpdateStats();
    void UpdateSkillPanelVisibility();
    bool BPE_OnMenuButtonPressed();
    bool BPE_OnMenuActionSecondaryHoldButtonPressed();
    void PopupDisplay(class UWidget* Popup, bool DisplayPopup);
    void GetChargesColor(FSlateColor& ChargeColor);
    bool IsRiseAvaible();
    void UpdateCharges();
    void UpdateGameOver();
    class UStatsComponent* GetStatsComponent();
    void EventEnableInputs();
    void EventCloseMenu();
    void LaunchRiseEvent();
    void FirstDeathIntroStop();
    void FirstDeathRiseStop();
    void SwitchAge();
    void DeathSoundAmbiance();
    void DeathSoundRise();
    void SwitchAgeInstant();
    void On Character Stats Changed();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void OnCharacterStatChanged(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void UnbindEvents();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void LaunchTimer_BreakCoinsSFX();
    void BndEvt__BP_Menu_Death_BP_PopupUnlock_K2Node_ComponentBoundEvent_0_YesClicked__DelegateSignature();
    void BndEvt__BP_Menu_Death_BP_PopupUnlock_K2Node_ComponentBoundEvent_1_NoClicked__DelegateSignature();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void OnGiveUpClick(int32 Choice);
    void OnGiveUpBack();
    void Destruct();
    void ExecuteUbergraph_BP_Menu_Death(int32 EntryPoint);
}; // Size: 0x5EC

#endif
