#ifndef UE4SS_SDK_BP_PushAbility_HPP
#define UE4SS_SDK_BP_PushAbility_HPP

class UBP_PushAbility_C : public UPushInstigatorAbility
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimSyncContainer CounterPushAnim;
    FGameplayTag ResistanceTag;
    FSCGameplayAbilityActivationInfo Activation Infos;
    class AFightingCharacter* Target;

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void ExecuteUbergraph_BP_PushAbility(int32 EntryPoint);
};

#endif
