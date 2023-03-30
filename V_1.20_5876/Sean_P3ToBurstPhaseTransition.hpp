#ifndef UE4SS_SDK_Sean_P3ToBurstPhaseTransition_HPP
#define UE4SS_SDK_Sean_P3ToBurstPhaseTransition_HPP

class USean_P3ToBurstPhaseTransition_C : public UAIPhaseTransition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    TArray<FSean_BurstEventsInfo> HeatInfosEvents;                                    // 0x0048 (size: 0x10)
    class ABP_Sean_Base_C* SeanBP;                                                    // 0x0058 (size: 0x8)
    float IncreaseValueHeat;                                                          // 0x0060 (size: 0x4)
    float OldHeatValue;                                                               // 0x0064 (size: 0x4)

    void ComputeGaugeIncrease(TEnumAsByte<Sean_BurstAttackResultType> EventType, FGameplayTagContainer GameplayTagContainer, float& GaugeIncreaseValue);
    void BPE_OnParentPhaseStarted(class UAIFightingComponent* _aiComponent);
    void OnAttackHit(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void Take Damange(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_Sean_P3ToBurstPhaseTransition(int32 EntryPoint);
}; // Size: 0x68

#endif
