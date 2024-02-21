#ifndef UE4SS_SDK_BP_PushbackCancelAbility_HPP
#define UE4SS_SDK_BP_PushbackCancelAbility_HPP

class UBP_PushbackCancelAbility_C : public USCGameplayAbility
{
    FAnimContainer Anim;                                                              // 0x0568 (size: 0x18)

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
}; // Size: 0x580

#endif
