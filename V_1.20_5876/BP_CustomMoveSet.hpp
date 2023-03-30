#ifndef UE4SS_SDK_BP_CustomMoveSet_HPP
#define UE4SS_SDK_BP_CustomMoveSet_HPP

class UBP_CustomMoveSet_C : public UBP_GameplayCheatMaster_C
{

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
}; // Size: 0x38

#endif
