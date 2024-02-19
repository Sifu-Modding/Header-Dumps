#ifndef UE4SS_SDK_BP_HUD_ComboXP_HPP
#define UE4SS_SDK_BP_HUD_ComboXP_HPP

class UBP_HUD_ComboXP_C : public UInGameNotification
{
    class UWidgetAnimation* Scoring_UpdateMaxFloorAnim;                               // 0x03A8 (size: 0x8)
    class UWidgetAnimation* Scoring_UpdateMaxAnim;                                    // 0x03B0 (size: 0x8)
    class UWidgetAnimation* Scoring_FadeAnim;                                         // 0x03B8 (size: 0x8)
    class UWidgetAnimation* Scoring_UpdateCurrentAnim;                                // 0x03C0 (size: 0x8)
    class UImage* ArrowIcon;                                                          // 0x03C8 (size: 0x8)
    class UImage* EfficiencyFeedback;                                                 // 0x03D0 (size: 0x8)
    class UImage* FightPointsBar;                                                     // 0x03D8 (size: 0x8)
    class UVerticalBox* LevelScoreBox;                                                // 0x03E0 (size: 0x8)
    class UImage* LimitBottom;                                                        // 0x03E8 (size: 0x8)
    class UImage* LimitTop;                                                           // 0x03F0 (size: 0x8)
    class UTextBlock* Scoring_LevelScore;                                             // 0x03F8 (size: 0x8)
    class UTextBlock* Scoring_LevelScoreLabel;                                        // 0x0400 (size: 0x8)
    class UTextBlock* Scoring_LevelScoreLabel_1;                                      // 0x0408 (size: 0x8)
    class UImage* Scoring_Line;                                                       // 0x0410 (size: 0x8)
    class UTextBlock* Scoring_MulitplierLabel;                                        // 0x0418 (size: 0x8)
    class UTextBlock* Scoring_MultiplierValue;                                        // 0x0420 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0428 (size: 0x8)
    bool Displayed;                                                                   // 0x0430 (size: 0x1)
    class UBPStatsComponent_MainChar_C* StatsComponent;                               // 0x0438 (size: 0x8)
    bool ForceHide;                                                                   // 0x0440 (size: 0x1)
    float PreviousMaxFP;                                                              // 0x0444 (size: 0x4)
    float PreviousFP;                                                                 // 0x0448 (size: 0x4)
    bool LowFeedback;                                                                 // 0x044C (size: 0x1)
    class UBP_PlayerScoringComponent_C* ScoringComponent;                             // 0x0450 (size: 0x8)
    float CurrentFloor;                                                               // 0x0458 (size: 0x4)
    FTimerHandle OutOfFightTimer;                                                     // 0x0460 (size: 0x8)
    class UCurveLinearColor* EfficiencyCurve;                                         // 0x0468 (size: 0x8)
    FLinearColor CurrentEfficiencyColor;                                              // 0x0470 (size: 0x10)
    class UCurveFloat* WidthEfficientCurve;                                           // 0x0480 (size: 0x8)
    bool ForceShow;                                                                   // 0x0488 (size: 0x1)
    FName Scoring Notification SFX;                                                   // 0x048C (size: 0x8)
    class USCLevelSequence* K2Node_Event__inSequence_1;                               // 0x0498 (size: 0x8)
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x04A0 (size: 0x10)
    void ED_UpdateFloorScore(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x04B0 (size: 0x10)
    void ED_ToggleFloorScore(bool bpp__Freeze__pf);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x04C0 (size: 0x10)
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    EAlertLevel K2Node_CustomEvent_eAlertLevel;                                       // 0x04D0 (size: 0x1)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x04D1 (size: 0x1)
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x04D4 (size: 0x10)
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x04E4 (size: 0x10)
    void WidgetAnimationDynamicEvent();
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5; // 0x04F4 (size: 0x10)
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    float K2Node_CustomEvent_CurrentSavedHighscore;                                   // 0x0504 (size: 0x4)
    float K2Node_CustomEvent_CurrentLevelScore;                                       // 0x0508 (size: 0x4)
    bool K2Node_CustomEvent_NewHighscoreReached;                                      // 0x050C (size: 0x1)
    float CallFunc_BreakVector2D_X;                                                   // 0x0510 (size: 0x4)
    float CallFunc_BreakVector2D_Y;                                                   // 0x0514 (size: 0x4)
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6; // 0x0518 (size: 0x10)
    void TimerDynamicDelegate();
    float K2Node_CustomEvent_OldValue;                                                // 0x0528 (size: 0x4)
    float K2Node_CustomEvent_NewValue;                                                // 0x052C (size: 0x4)
    FSlateColor K2Node_MakeStruct_SlateColor;                                         // 0x0530 (size: 0x28)
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;                                 // 0x0558 (size: 0xE8)
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;                          // 0x0640 (size: 0x160)
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;                            // 0x07A0 (size: 0x50)
    ECharacterStat K2Node_CustomEvent__type;                                          // 0x07F0 (size: 0x1)
    int32 K2Node_CustomEvent__previousValue;                                          // 0x07F4 (size: 0x4)
    int32 K2Node_CustomEvent__currentValue;                                           // 0x07F8 (size: 0x4)
    bool K2Node_SwitchEnum_CmpSuccess_1;                                              // 0x07FC (size: 0x1)
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7; // 0x0800 (size: 0x10)
    void ED_OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8; // 0x0810 (size: 0x10)
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9; // 0x0820 (size: 0x10)
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10; // 0x0830 (size: 0x10)
    void WidgetAnimationDynamicEvent();
    class USCLevelSequence* K2Node_Event__inSequence;                                 // 0x0840 (size: 0x8)

    void ED_UpdateFloorScore__DelegateSignature(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void ED_ToggleFloorScore__DelegateSignature(bool bpp__Freeze__pf);
    void ED_OnEfficiencyChanged__DelegateSignature(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void ED_DisplayRecap__DelegateSignature(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void UpdateFloorScoreGauge(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void UpdateDisplayedValues(bool bpp__IsLevelScore__pf, float bpp__CurrentValue__pf, bool bpp__bPlayAnimation__pf);
    void UnbindScoringComponentEvents();
    void ToggleScoring(bool bpp__Hide__pf);
    void ToggleFreezeGauge(bool bpp__IsFrozen__pf);
    bool ShouldInitializeUI();
    void SetStyle();
    void SetScoreLabelForArena(bool bpp__IsInArena__pf);
    void OutOfFight();
    void OnRecapDisplayed(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void OnAlertLevelChanged(EAlertLevel bpp__eAlertLevel__pf);
    void EventOnStatChanged(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void Construct();
    void CollapsedAfterFade();
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void BPE_OnCinematicFinished(const class USCLevelSequence* bpp___inSequence__pf__const);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
}; // Size: 0x848

#endif
