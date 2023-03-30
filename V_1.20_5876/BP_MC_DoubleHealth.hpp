#ifndef UE4SS_SDK_BP_MC_DoubleHealth_HPP
#define UE4SS_SDK_BP_MC_DoubleHealth_HPP

class UBP_MC_DoubleHealth_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    FActiveGameplayEffectHandle HandleEffect;                                         // 0x0040 (size: 0x8)
    FGameplayEffectContextHandle NewVar_0;                                            // 0x0048 (size: 0x18)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MC_DoubleHealth(int32 EntryPoint);
}; // Size: 0x60

#endif
