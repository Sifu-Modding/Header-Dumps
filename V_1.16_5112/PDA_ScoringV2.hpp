#ifndef UE4SS_SDK_PDA_ScoringV2_HPP
#define UE4SS_SDK_PDA_ScoringV2_HPP

class UPDA_ScoringV2_C : public UPrimaryDataAsset
{
    TMap<EWeaponType, float> ScoreMultiplierBonusUsingWeapon;
    TArray<FSTR_Scoring_Archetypes> Archetypes;
    TArray<FSTR_Scoring_MultiplierFloors> LevelMultiplierFloorsValues;
    FSTR_Scoring_ScoreBonus OnKillScoreBonusMCHealth;
    FSTR_Scoring_KillStreakBonus OnKillMultiplierBonusKillStreak;
    float OnKillMultiplierBonusEnvironment;
    TMap<Enum_Scoring_FocusType, float> Focus Types;
    TMap<class FName, class Enum_Scoring_FocusType> GetFocusFromBoneName;
    float ScoreMultiplierOnPunish;
    float ScoreMalusMultiplierOnStructureBrokenOpponent;
    int32 GenericActionsQueueSize;
    int32 KillActionsQueueSize;
    TMap<class InputAction, class FSTR_DiminishingReturnInfos> AttackTypes;
    FSTR_DiminishingReturnInfos DefenseValues;
    TMap<class EScoringKillType, class FSTR_DiminishingReturnInfos> KillTypes;
    bool DecrementFloorWhenScoreFloorIsZero;
    TMap<class UAttackDB*, class FSTR_DiminishingReturnInfos> AttackTypesByAttackDB;
    TMap<class EScoringActionType, class FFloatRange> EfficiencyBoundsByActionType;
    float InactionTime;
    float InactionTime_AfterInactivity;
    float InactiveActionCoeff;
    int32 EfficiencyQueueSIze;
    class UCurveFloat* CurveEfficiencyWeightByPlaceInQueue;
    float FloorScoreMalusRatioOnHit;
    FSTR_Scoring_EfficiencyMalus EfficiencyMalusWhenHit;
    float ScoreOnAIFriendlyHit;
    class UCurveFloat* OnKillScoreBonusFromAIHealth;
    TArray<FSTR_Scoring_InfoByHitbox> AttackTypesByHitboxData;
    bool ApplyStructureBrokenCondition;

    void ShouldDecrementFloorWhenFloorScoreIsZero(bool& bpp__DecrementFloor__pf);
    void GetScore_KillAction(EScoringKillType bpp__KillAction__pf, bool& bpp__ActionFound__pf, float& bpp__ScoreValue__pf, bool& bpp__NeedsDiminishing__pf, bool& bpp__AddToQueue__pf, class UCurveFloat*& bpp__DiminishingReturnRate__pf, float& bpp__MaxDiminishingReturn__pf, bool& bpp__ImpactScoreStat__pf);
    void GetScore_Focus(FVitalPointDataDefinition bpp__VitalPointDataDef__pf, class AFightingCharacter* bpp__MainCharacter__pf, float& bpp__ScoreValue__pf);
    void GetScore_Defense(float& bpp__ScorexValue__pfT, bool& bpp__NeedsxDiminishing__pfT, bool& bpp__AddxtoxQueue__pfTT, class UCurveFloat*& bpp__DiminishingxReturnxRate__pfTT, float& bpp__MaxxDiminishingxReturn__pfTT, bool& bpp__ImpactScoreStat__pf);
    void GetScore_AttackFromInputAction(InputAction bpp__InputAction__pf, bool& bpp__ActionxFound__pfT, float& bpp__ScoreValue__pf, bool& bpp__NeedsDiminishing__pf, bool& bpp__AddToQueue__pf, class UCurveFloat*& bpp__DiminishingReturnRate__pf, float& bpp__MaxDiminishingReturn__pf, bool& bpp__ImpactScoreStat__pf, bool& bpp__ApplyMultiplierBonus__pf);
    void GetScore_AttackFromHitboxData(FDataTableRowHandle bpp__HitboxRowHandle__pf, bool& bpp__AttackFound__pf, float& bpp__ScoreValue__pf, bool& bpp__NeedsDiminishing__pf, bool& bpp__AddToQueue__pf, class UCurveFloat*& bpp__DiminishingReturnRate__pf, float& bpp__MaxDiminishingReturn__pf, bool& bpp__ImpactScoreStat__pf, bool& bpp__bApplyMultiplierBonus__pf);
    void GetScore_AttackFromAttackDB(class UAttackDB* bpp__AttackDB__pf, bool& bpp__AttackFound__pf, float& bpp__ScoreValue__pf, bool& bpp__NeedsDiminishing__pf, bool& bpp__AddToQueue__pf, class UCurveFloat*& bpp__DiminishingReturnRate__pf, float& bpp__MaxDiminishingReturn__pf, bool& bpp__ImpactScoreStat__pf, bool& bpp__ApplyMultiplierBonus__pf);
    void GetScore_Archetype(class UArchetypeAsset* bpp__Archetype__pf, int32& bpp__ScoreValue__pf);
    void GetScore_AIFriendlyHit(float& bpp__Score__pf);
    void GetMultiplierFloorValue(float bpp__Floor__pf, float& bpp__FloorScoreForNextFloor__pf, float& bpp__FloorScoreRatioWhenEnteringFromLower__pf, float& bpp__FloorScoreRatioWhenEnteringFromUpper__pf, FFloatRange& bpp__DecrementRateRange__pf, FFloatRange& bpp__CooldownBeforeDecrementRange__pf);
    void GetMaxFloor(int32& bpp__MaxMultiplier__pf);
    void GetMalus_OnHitStructureBrokenAI(float& bpp__MalusMultiplier__pf);
    void GetKillActionsQueueSize();
    void GetInactionTime(bool bpp__IsDuringInactivity__pf, float& bpp__InactionTime__pf);
    void GetGenericActionsQueueSize(int32& bpp__StackSize__pf);
    void GetFloorScoreGlobalMalusRatioOnHit(float& bpp__MalusRatio__pf);
    void GetEfficiencyQueueSize(int32& bpp__Size__pf);
    void GetEfficiencyMalusOnHit(float& bpp__EfficiencyValue__pf, int32& bpp__NbOfOccurencesInQueue__pf);
    void GetEfficiencyBoundsFromActionType(EScoringActionType bpp__ScoringActionType__pf, float& bpp__MinEfficiency__pf, float& bpp__MaxEfficiency__pf);
    void GetBonus_OnWeaponHit(EWeaponType bpp__WeaponType__pf, float& bpp__MultiplierBonus__pf);
    void GetBonus_OnPunish(float& bpp__Multiplier__pf);
    void GetBonus_OnEnvironmentKill(float& bpp__EnvironmentMultiplier__pf);
    void GetBonus_MCLife(class AFightingCharacter* bpp__MainChar__pf, float& bpp__ScoreBonus__pf);
    void GetBonus_KillStreak(float bpp__KillNumber__pf, float& bpp__MultiplierBonus__pf, float& bpp__DurationBetweenKills__pf);
    void GetBonus_AILife(class AFightingCharacter* bpp__AI__pf, float& bpp__ScoreBonus__pf);
};

#endif
