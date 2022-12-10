#ifndef UE4SS_SDK_BP_PushbackCancelAbility_HPP
#define UE4SS_SDK_BP_PushbackCancelAbility_HPP

class UBP_PushbackCancelAbility_C : public USCGameplayAbility
{
    FAnimContainer Anim;

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
};

#endif
