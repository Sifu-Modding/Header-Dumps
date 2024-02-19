#ifndef UE4SS_SDK_BPStatsComponent_HPP
#define UE4SS_SDK_BPStatsComponent_HPP

class UBPStatsComponent_C : public UStatsComponent
{
    TArray<class UCurveFloat*> StyleBonusCurveAgility;                                // 0x02F8 (size: 0x10)
    TArray<class UCurveFloat*> StyleBonusCurveStrength;                               // 0x0308 (size: 0x10)
    TArray<class UCurveFloat*> StyleBonusCurveVitality;                               // 0x0318 (size: 0x10)
    TArray<class UCurveFloat*> StyleBonusCurveEndurance;                              // 0x0328 (size: 0x10)
    TArray<class UCurveFloat*> StyleBonusCurveFaith;                                  // 0x0338 (size: 0x10)
    TArray<float> Balanced_InitStats;                                                 // 0x0348 (size: 0x10)
    TArray<float> Agile_InitStats;                                                    // 0x0358 (size: 0x10)
    TArray<float> Tank_InitStats;                                                     // 0x0368 (size: 0x10)
    TArray<float> LostP_InitStats;                                                    // 0x0378 (size: 0x10)
    class UCurveFloat* ShardBonus;                                                    // 0x0388 (size: 0x8)
    TArray<float> Balanced_MaxStats;                                                  // 0x0390 (size: 0x10)
    TArray<float> Agile_MaxStats;                                                     // 0x03A0 (size: 0x10)
    TArray<float> Tank_MaxStats;                                                      // 0x03B0 (size: 0x10)
    TArray<float> LostP_MaxStats;                                                     // 0x03C0 (size: 0x10)
    class UCurveFloat* StatRatio;                                                     // 0x03D0 (size: 0x8)
    class UCurveFloat* StatBonusDynamic;                                              // 0x03D8 (size: 0x8)
    class UCurveFloat* StyleBonusDistributionPoint;                                   // 0x03E0 (size: 0x8)
    class UCurveFloat* XPGainFromLevelDiff;                                           // 0x03E8 (size: 0x8)
    FBPStatsComponent_CED_NewSparePoint ED_NewSparePoint;                             // 0x03F0 (size: 0x10)
    void ED_NewSparePoint();
    class UCurveFloat* FaithBonusDynamic;                                             // 0x0400 (size: 0x8)
    float XPMin;                                                                      // 0x0408 (size: 0x4)
    class UCurveFloat* XPPerLevelCurve;                                               // 0x0410 (size: 0x8)
    float LevelMin;                                                                   // 0x0418 (size: 0x4)

    void ED_NewSparePoint__DelegateSignature();
    void BPE_GetXPGain(class AActor* bpp___victim__pf, int32 bpp__VictimLevel__pf, int32& bpp__XPLevel__pf);
}; // Size: 0x420

#endif
