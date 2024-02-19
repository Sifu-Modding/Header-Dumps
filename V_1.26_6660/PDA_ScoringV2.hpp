#ifndef UE4SS_SDK_PDA_ScoringV2_HPP
#define UE4SS_SDK_PDA_ScoringV2_HPP

class UPDA_ScoringV2_C : public UPrimaryDataAsset
{
    TMap<EWeaponType, float> ScoreMultiplierBonusUsingWeapon;                         // 0x0030 (size: 0x50)
    TArray<FSTR_Scoring_Archetypes> Archetypes;                                       // 0x0080 (size: 0x10)
    TArray<FSTR_Scoring_MultiplierFloors> LevelMultiplierFloorsValues;                // 0x0090 (size: 0x10)
    FSTR_Scoring_ScoreBonus OnKillScoreBonusMCHealth;                                 // 0x00A0 (size: 0x10)
    FSTR_Scoring_KillStreakBonus OnKillMultiplierBonusKillStreak;                     // 0x00B0 (size: 0x18)
    float OnKillMultiplierBonusEnvironment;                                           // 0x00C8 (size: 0x4)
    TMap<Enum_Scoring_FocusType, float> Focus Types;                                  // 0x00D0 (size: 0x50)
    TMap<class FName, class Enum_Scoring_FocusType> GetFocusFromBoneName;             // 0x0120 (size: 0x50)
    float ScoreMultiplierOnPunish;                                                    // 0x0170 (size: 0x4)
    float ScoreMalusMultiplierOnStructureBrokenOpponent;                              // 0x0174 (size: 0x4)
    int32 GenericActionsQueueSize;                                                    // 0x0178 (size: 0x4)
    int32 KillActionsQueueSize;                                                       // 0x017C (size: 0x4)
    TMap<class InputAction, class FSTR_DiminishingReturnInfos> AttackTypes;           // 0x0180 (size: 0x50)
    FSTR_DiminishingReturnInfos DefenseValues;                                        // 0x01D0 (size: 0x18)
    TMap<class EScoringKillType, class FSTR_DiminishingReturnInfos> KillTypes;        // 0x01E8 (size: 0x50)
    bool DecrementFloorWhenScoreFloorIsZero;                                          // 0x0238 (size: 0x1)
    TMap<class UAttackDB*, class FSTR_DiminishingReturnInfos> AttackTypesByAttackDB;  // 0x0240 (size: 0x50)
    TMap<class EScoringActionType, class FFloatRange> EfficiencyBoundsByActionType;   // 0x0290 (size: 0x50)
    float InactionTime;                                                               // 0x02E0 (size: 0x4)
    float InactionTime_AfterInactivity;                                               // 0x02E4 (size: 0x4)
    float InactiveActionCoeff;                                                        // 0x02E8 (size: 0x4)
    int32 EfficiencyQueueSIze;                                                        // 0x02EC (size: 0x4)
    class UCurveFloat* CurveEfficiencyWeightByPlaceInQueue;                           // 0x02F0 (size: 0x8)
    float FloorScoreMalusRatioOnHit;                                                  // 0x02F8 (size: 0x4)
    FSTR_Scoring_EfficiencyMalus EfficiencyMalusWhenHit;                              // 0x02FC (size: 0x8)
    float ScoreOnAIFriendlyHit;                                                       // 0x0304 (size: 0x4)
    class UCurveFloat* OnKillScoreBonusFromAIHealth;                                  // 0x0308 (size: 0x8)
    TArray<FSTR_Scoring_InfoByHitbox> AttackTypesByHitboxData;                        // 0x0310 (size: 0x10)
    bool ApplyStructureBrokenCondition;                                               // 0x0320 (size: 0x1)
    class UCurveFloat* OnEnvironmentalKillScoreBonusFromAIHealth;                     // 0x0328 (size: 0x8)

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
    void GetEfficiencyBoundsFromActionType(EScoringActionType bpp__ScoringActionType__pf, bool& bpp__ActionTypeFound__pf, float& bpp__MinEfficiency__pf, float& bpp__MaxEfficiency__pf);
    void GetBonus_OnWeaponHit(EWeaponType bpp__WeaponType__pf, float& bpp__MultiplierBonus__pf);
    void GetBonus_OnPunish(float& bpp__Multiplier__pf);
    void GetBonus_OnEnvironmentKill(EScoringKillType bpp__ScoringKillType__pf, float bpp__HealthBeforeKill__pf, float& bpp__EnvironmentBonus__pf);
    void GetBonus_MCLife(class AFightingCharacter* bpp__MainChar__pf, float& bpp__ScoreBonus__pf);
    void GetBonus_KillStreak(float bpp__KillNumber__pf, float& bpp__MultiplierBonus__pf, float& bpp__DurationBetweenKills__pf);
    void GetBonus_AILife(class AFightingCharacter* bpp__AI__pf, float& bpp__ScoreBonus__pf);
}; // Size: 0x330

#endif
