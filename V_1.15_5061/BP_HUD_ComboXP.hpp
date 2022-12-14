#ifndef UE4SS_SDK_BP_HUD_ComboXP_HPP
#define UE4SS_SDK_BP_HUD_ComboXP_HPP

class UBP_HUD_ComboXP_C : public UInGameNotification
{
    class UWidgetAnimation* MaxEfficiencyAnim;
    class UWidgetAnimation* Scoring_UpdateMaxFloorAnim;
    class UWidgetAnimation* Scoring_UpdateMaxAnim;
    class UWidgetAnimation* Scoring_FadeAnim;
    class UWidgetAnimation* Scoring_UpdateCurrentAnim;
    class UWidgetAnimation* UpdateMaxAnim;
    class UWidgetAnimation* FadeAnim;
    class UWidgetAnimation* UpdateCurrentAnim;
    class UImage* ArrowIcon;
    class UImage* EfficiencyFeedback;
    class UImage* FightPointsBar;
    class UVerticalBox* LevelScoreBox;
    class UImage* LimitBottom;
    class UImage* LimitTop;
    class UTextBlock* Scoring_LevelScore;
    class UTextBlock* Scoring_LevelScoreLabel;
    class UImage* Scoring_Line;
    class UTextBlock* Scoring_MulitplierLabel;
    class UTextBlock* Scoring_MultiplierValue;
    bool Displayed;
    class UBPStatsComponent_MainChar_C* StatsComponent;
    bool ForceHide;
    float PreviousMaxFP;
    float PreviousFP;
    bool LowFeedback;
    class UBP_PlayerScoringComponent_C* ScoringComponent;
    float CurrentFloor;
    FTimerHandle OutOfFightTimer;
    class UCurveLinearColor* EfficiencyCurve;
    FLinearColor CurrentEfficiencyColor;
    class UCurveFloat* WidthEfficientCurve;
    class USCLevelSequence* K2Node_Event__inSequence;
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void ED_UpdateFloorScore(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1;
    void ED_ToggleFloorScore(bool bpp__Freeze__pf);
    EAlertLevel K2Node_CustomEvent_eAlertLevel;
    bool K2Node_SwitchEnum_CmpSuccess;
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2;
    void CharacterStatChangedDelegate(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3;
    void WidgetAnimationDynamicEvent();
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4;
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5;
    void TimerDynamicDelegate();
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6;
    void ED_DisplayRecap(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    float K2Node_CustomEvent_CurrentSavedHighscore;
    float K2Node_CustomEvent_CurrentLevelScore;
    bool K2Node_CustomEvent_NewHighscoreReached;
    float CallFunc_BreakVector2D_X;
    float CallFunc_BreakVector2D_Y;
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7;
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    float K2Node_CustomEvent_OldValue;
    float K2Node_CustomEvent_NewValue;
    FUI_Base_Colors CallFunc_GetUI_Colors_BaseColors;
    FUI_GameplayColors CallFunc_GetUI_Colors_GameplayColors;
    FUI_ElementColors CallFunc_GetUI_Colors_ElementColors;
    FSlateColor K2Node_MakeStruct_SlateColor;
    ECharacterStat K2Node_CustomEvent__type;
    int32 K2Node_CustomEvent__previousValue;
    int32 K2Node_CustomEvent__currentValue;
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8;
    void ED_OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    bool K2Node_SwitchEnum_CmpSuccess_1;
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9;
    void AlertLevelChanged(EAlertLevel EAlertLevel);
    FBP_HUD_ComboXP_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10;
    void WidgetAnimationDynamicEvent();

    void ED_UpdateFloorScore__DelegateSignature(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void ED_ToggleFloorScore__DelegateSignature(bool bpp__Freeze__pf);
    void ED_OnEfficiencyChanged__DelegateSignature(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void ED_DisplayRecap__DelegateSignature(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void UpdateFloorScoreGauge(float bpp__FloorScore__pf, float bpp__MaxFloorScore__pf);
    void UpdateDisplayedValues(bool bpp__IsLevelScore__pf, float bpp__CurrentValue__pf, bool bpp__bPlayAnimation__pf);
    void UnbindScoringComponentEvents();
    void ToggleScoring(bool bpp__Hide__pf);
    void ToggleFreezeGauge(bool bpp__IsFrozen__pf);
    void SetStyle();
    void OutOfFight();
    void OnRecapDisplayed(float bpp__CurrentSavedHighscore__pf, float bpp__CurrentLevelScore__pf, bool bpp__NewHighscoreReached__pf);
    void OnEfficiencyChanged(float bpp__OldValue__pf, float bpp__NewValue__pf);
    void OnAlertLevelChanged(EAlertLevel bpp__eAlertLevel__pf);
    void EventOnStatChanged(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
    void Construct();
    void CollapsedAfterFade();
    void BPE_OnCinematicStarted(const class USCLevelSequence* bpp___inSequence__pf__const);
    void CharacterStatChangedDelegate__DelegateSignature(ECharacterStat bpp___type__pf, int32 bpp___previousValue__pf, int32 bpp___currentValue__pf);
};

#endif
