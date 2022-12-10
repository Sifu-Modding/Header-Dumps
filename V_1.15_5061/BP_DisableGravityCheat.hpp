#ifndef UE4SS_SDK_BP_DisableGravityCheat_HPP
#define UE4SS_SDK_BP_DisableGravityCheat_HPP

class UBP_DisableGravityCheat_C : public UGravityCheatData
{

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
};

#endif
