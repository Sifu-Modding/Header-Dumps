#ifndef UE4SS_SDK_BP_DizzyReductionAbility_HPP
#define UE4SS_SDK_BP_DizzyReductionAbility_HPP

class UBP_DizzyReductionAbility_C : public UDizzyReductionAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)

    void BPE_OnDizzyReduction(const FSCGameplayAbilityActorInfo& _infos, float _fTimeLeft, float _fTimeReduced);
    void ExecuteUbergraph_BP_DizzyReductionAbility(int32 EntryPoint);
}; // Size: 0x578

#endif
