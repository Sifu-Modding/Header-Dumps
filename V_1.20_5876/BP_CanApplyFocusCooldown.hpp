#ifndef UE4SS_SDK_BP_CanApplyFocusCooldown_HPP
#define UE4SS_SDK_BP_CanApplyFocusCooldown_HPP

class UBP_CanApplyFocusCooldown_C : public UGameplayEffectCustomApplicationRequirement
{

    bool CanApplyGameplayEffect(const class UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
}; // Size: 0x28

#endif
