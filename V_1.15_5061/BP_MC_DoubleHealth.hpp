#ifndef UE4SS_SDK_BP_MC_DoubleHealth_HPP
#define UE4SS_SDK_BP_MC_DoubleHealth_HPP

class UBP_MC_DoubleHealth_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FActiveGameplayEffectHandle HandleEffect;
    FGameplayEffectContextHandle NewVar_0;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MC_DoubleHealth(int32 EntryPoint);
};

#endif
