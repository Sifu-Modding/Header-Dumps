#ifndef UE4SS_SDK_BP_SlowMotionAbility_HPP
#define UE4SS_SDK_BP_SlowMotionAbility_HPP

class UBP_SlowMotionAbility_C : public USCGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void m_OnPaused_34F2BDB944DE9F512D792E80FAA20F2F();
    void m_OnStarted_34F2BDB944DE9F512D792E80FAA20F2F();
    void m_OnFinish_34F2BDB944DE9F512D792E80FAA20F2F();
    void K2_OnEndAbility(bool bWasCancelled);
    void K2_CommitExecute();
    void ExecuteUbergraph_BP_SlowMotionAbility(int32 EntryPoint);
}; // Size: 0x570

#endif
