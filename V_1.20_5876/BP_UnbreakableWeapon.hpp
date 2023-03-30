#ifndef UE4SS_SDK_BP_UnbreakableWeapon_HPP
#define UE4SS_SDK_BP_UnbreakableWeapon_HPP

class UBP_UnbreakableWeapon_C : public UBP_GameplayCheatMaster_C
{
    TMap<class FString, class TSoftClassPtr<UObject>> GoldenWeaponDispenser;          // 0x0038 (size: 0x50)

    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
}; // Size: 0x88

#endif
