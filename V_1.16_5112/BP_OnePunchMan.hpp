#ifndef UE4SS_SDK_BP_OnePunchMan_HPP
#define UE4SS_SDK_BP_OnePunchMan_HPP

class UBP_OnePunchMan_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_OnePunchMan(int32 EntryPoint);
};

#endif
