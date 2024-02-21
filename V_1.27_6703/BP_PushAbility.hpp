#ifndef UE4SS_SDK_BP_PushAbility_HPP
#define UE4SS_SDK_BP_PushAbility_HPP

class UBP_PushAbility_C : public UPushInstigatorAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    FAnimSyncContainer CounterPushAnim;                                               // 0x0578 (size: 0x30)
    FGameplayTag ResistanceTag;                                                       // 0x05A8 (size: 0x8)
    FSCGameplayAbilityActivationInfo Activation Infos;                                // 0x05B0 (size: 0x128)
    class AFightingCharacter* Target;                                                 // 0x06D8 (size: 0x8)

    void BPE_OnActivateAbility(const FSCGameplayAbilityActivationInfo& _activationInfos);
    void ExecuteUbergraph_BP_PushAbility(int32 EntryPoint);
}; // Size: 0x6E0

#endif
