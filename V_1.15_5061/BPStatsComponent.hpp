#ifndef UE4SS_SDK_BPStatsComponent_HPP
#define UE4SS_SDK_BPStatsComponent_HPP

class UBPStatsComponent_C : public UStatsComponent
{
    TArray<class UCurveFloat*> StyleBonusCurveAgility;
    TArray<class UCurveFloat*> StyleBonusCurveStrength;
    TArray<class UCurveFloat*> StyleBonusCurveVitality;
    TArray<class UCurveFloat*> StyleBonusCurveEndurance;
    TArray<class UCurveFloat*> StyleBonusCurveFaith;
    TArray<float> Balanced_InitStats;
    TArray<float> Agile_InitStats;
    TArray<float> Tank_InitStats;
    TArray<float> LostP_InitStats;
    class UCurveFloat* ShardBonus;
    TArray<float> Balanced_MaxStats;
    TArray<float> Agile_MaxStats;
    TArray<float> Tank_MaxStats;
    TArray<float> LostP_MaxStats;
    class UCurveFloat* StatRatio;
    class UCurveFloat* StatBonusDynamic;
    class UCurveFloat* StyleBonusDistributionPoint;
    class UCurveFloat* XPGainFromLevelDiff;
    FBPStatsComponent_CED_NewSparePoint ED_NewSparePoint;
    void ED_NewSparePoint();
    class UCurveFloat* FaithBonusDynamic;
    float XPMin;
    class UCurveFloat* XPPerLevelCurve;
    float LevelMin;

    void ED_NewSparePoint__DelegateSignature();
    void BPE_GetXPGain(class AActor* bpp___victim__pf, int32 bpp__VictimLevel__pf, int32& bpp__XPLevel__pf);
};

#endif
