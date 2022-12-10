#ifndef UE4SS_SDK_BP_UnbreakableWeapon_HPP
#define UE4SS_SDK_BP_UnbreakableWeapon_HPP

class UBP_UnbreakableWeapon_C : public UBP_GameplayCheatMaster_C
{
    TEnumAsByte<EWeaponType> EWeaponType;

    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
};

#endif
