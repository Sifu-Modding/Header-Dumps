#ifndef UE4SS_SDK_BP_GuardAbility_HPP
#define UE4SS_SDK_BP_GuardAbility_HPP

class UBP_GuardAbility_C : public UGuardAbility
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAbilityTask* SlomoTask;
    FActiveGameplayEffectHandle SlowMoEffect;

    void BPE_OnParryPickup(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FHitRequest& _request);
    void BPE_OnDefense(const FSCGameplayAbilityActivationInfo& _activationInfos, const FHitResult& _hit, const FImpactResult& _Impact, const FHitRequest& _request);
    void K2_OnEndAbility(bool bWasCancelled);
    void BPE_OnSlowmoActivable(bool _bActivable);
    void ExecuteUbergraph_BP_GuardAbility(int32 EntryPoint);
};

#endif
