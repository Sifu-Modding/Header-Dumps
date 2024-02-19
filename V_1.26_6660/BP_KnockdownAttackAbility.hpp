#ifndef UE4SS_SDK_BP_KnockdownAttackAbility_HPP
#define UE4SS_SDK_BP_KnockdownAttackAbility_HPP

class UBP_KnockdownAttackAbility_C : public USCGameplayAbility
{
    class UAnimSequence* HeavyInstigatorAnim;                                         // 0x0568 (size: 0x8)
    class UAnimSequence* HeavyVictimAnim;                                             // 0x0570 (size: 0x8)
    class UAnimSequence* VictimAnim;                                                  // 0x0578 (size: 0x8)
    class UAnimSequence* InstigatorAnim;                                              // 0x0580 (size: 0x8)

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
}; // Size: 0x588

#endif
