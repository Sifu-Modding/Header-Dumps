#ifndef UE4SS_SDK_BP_ChooseAge_HPP
#define UE4SS_SDK_BP_ChooseAge_HPP

class UBP_ChooseAge_C : public UBP_GameplayCheatMaster_C
{

    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
};

#endif
