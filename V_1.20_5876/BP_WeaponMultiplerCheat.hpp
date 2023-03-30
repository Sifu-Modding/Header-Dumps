#ifndef UE4SS_SDK_BP_WeaponMultiplerCheat_HPP
#define UE4SS_SDK_BP_WeaponMultiplerCheat_HPP

class UBP_WeaponMultiplerCheat_C : public UBP_GameplayCheatMaster_C
{
    TSubclassOf<class UGameplayEffect> WeaponMultiplierEffect;                        // 0x0038 (size: 0x8)

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
}; // Size: 0x40

#endif
