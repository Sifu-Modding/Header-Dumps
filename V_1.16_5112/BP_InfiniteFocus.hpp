#ifndef UE4SS_SDK_BP_InfiniteFocus_HPP
#define UE4SS_SDK_BP_InfiniteFocus_HPP

class UBP_InfiniteFocus_C : public UBP_GameplayCheatMaster_C
{

    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
};

#endif
