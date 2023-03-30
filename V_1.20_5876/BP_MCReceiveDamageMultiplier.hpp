#ifndef UE4SS_SDK_BP_MCReceiveDamageMultiplier_HPP
#define UE4SS_SDK_BP_MCReceiveDamageMultiplier_HPP

class UBP_MCReceiveDamageMultiplier_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TSubclassOf<class UCheat_DamageMultiplierReceivedGameplayEffect_C> ActiveDamageMultiplier; // 0x0040 (size: 0x8)
    TMap<class FString, class TSubclassOf<UCheat_DamageMultiplierReceivedGameplayEffect_C>> DamageMultiplierTab; // 0x0048 (size: 0x50)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MCReceiveDamageMultiplier(int32 EntryPoint);
}; // Size: 0x98

#endif
