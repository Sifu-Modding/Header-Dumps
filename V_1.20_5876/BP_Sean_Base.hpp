#ifndef UE4SS_SDK_BP_Sean_Base_HPP
#define UE4SS_SDK_BP_Sean_Base_HPP

class ABP_Sean_Base_C : public ABP_AICharacter_Boss_Base_C
{
    TArray<FSean_BurstEventsInfo> HeatInfosEvents;                                    // 0x1F10 (size: 0x10)
    float HeatGaugeValue;                                                             // 0x1F20 (size: 0x4)
    FString DEBUG STRING;                                                             // 0x1F28 (size: 0x10)
    float IncreaseHeatValue;                                                          // 0x1F38 (size: 0x4)
    class USean_P3ToBurstPhaseTransition_C* SeanP3ToBurst;                            // 0x1F40 (size: 0x8)

    void ComputeIncreaseHeatGaugeValue(TEnumAsByte<Sean_BurstAttackResultType> EventType, FHitRequest HitRequest, float& GaugeDecreaseValue);
}; // Size: 0x1F48

#endif
