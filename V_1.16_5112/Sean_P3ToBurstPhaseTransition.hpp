#ifndef UE4SS_SDK_Sean_P3ToBurstPhaseTransition_HPP
#define UE4SS_SDK_Sean_P3ToBurstPhaseTransition_HPP

class USean_P3ToBurstPhaseTransition_C : public UAIPhaseTransition
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FSean_BurstEventsInfo> HeatInfosEvents;
    class ABP_Sean_Base_C* SeanBP;
    float IncreaseValueHeat;
    float OldHeatValue;

    void ComputeGaugeIncrease(TEnumAsByte<Sean_BurstAttackResultType> EventType, FGameplayTagContainer GameplayTagContainer, float& GaugeIncreaseValue);
    void BPE_OnParentPhaseStarted(class UAIFightingComponent* _aiComponent);
    void OnAttackHit(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void Take Damange(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_Sean_P3ToBurstPhaseTransition(int32 EntryPoint);
};

#endif
