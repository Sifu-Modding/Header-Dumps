#ifndef UE4SS_SDK_BP_DamageChangeAge_HPP
#define UE4SS_SDK_BP_DamageChangeAge_HPP

class UBP_DamageChangeAge_C : public UBP_GameplayCheatMaster_C
{

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
}; // Size: 0x38

#endif
