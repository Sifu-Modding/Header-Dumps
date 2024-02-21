#ifndef UE4SS_SDK_BP_Sean_Base_HPP
#define UE4SS_SDK_BP_Sean_Base_HPP

class ABP_Sean_Base_C : public ABP_AICharacter_Boss_Base_C
{
    TArray<FSean_BurstEventsInfo> HeatInfosEvents;                                    // 0x2028 (size: 0x10)
    float HeatGaugeValue;                                                             // 0x2038 (size: 0x4)
    FString DEBUG STRING;                                                             // 0x2040 (size: 0x10)
    float IncreaseHeatValue;                                                          // 0x2050 (size: 0x4)
    class USean_P3ToBurstPhaseTransition_C* SeanP3ToBurst;                            // 0x2058 (size: 0x8)

    void ComputeIncreaseHeatGaugeValue(TEnumAsByte<Sean_BurstAttackResultType> EventType, FHitRequest HitRequest, float& GaugeDecreaseValue);
}; // Size: 0x2060

#endif
