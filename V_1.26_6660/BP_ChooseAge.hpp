#ifndef UE4SS_SDK_BP_ChooseAge_HPP
#define UE4SS_SDK_BP_ChooseAge_HPP

class UBP_ChooseAge_C : public UBP_GameplayCheatMaster_C
{

    FString BPE_GetArgument(const FGameplayTag& _tag);
    bool BPE_CanApplyCheat(class UGameInstance* _gameInstance, class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
}; // Size: 0x38

#endif
