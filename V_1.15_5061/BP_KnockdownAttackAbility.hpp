#ifndef UE4SS_SDK_BP_KnockdownAttackAbility_HPP
#define UE4SS_SDK_BP_KnockdownAttackAbility_HPP

class UBP_KnockdownAttackAbility_C : public USCGameplayAbility
{
    class UAnimSequence* HeavyInstigatorAnim;
    class UAnimSequence* HeavyVictimAnim;
    class UAnimSequence* VictimAnim;
    class UAnimSequence* InstigatorAnim;

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
};

#endif
