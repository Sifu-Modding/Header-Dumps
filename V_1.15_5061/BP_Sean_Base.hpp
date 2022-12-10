#ifndef UE4SS_SDK_BP_Sean_Base_HPP
#define UE4SS_SDK_BP_Sean_Base_HPP

class ABP_Sean_Base_C : public ABP_AICharacter_Boss_Base_C
{
    TArray<FSean_BurstEventsInfo> HeatInfosEvents;
    float HeatGaugeValue;
    FString DEBUG STRING;
    float IncreaseHeatValue;
    class USean_P3ToBurstPhaseTransition_C* SeanP3ToBurst;

    void ComputeIncreaseHeatGaugeValue(TEnumAsByte<Sean_BurstAttackResultType> EventType, FHitRequest HitRequest, float& GaugeDecreaseValue);
};

#endif
