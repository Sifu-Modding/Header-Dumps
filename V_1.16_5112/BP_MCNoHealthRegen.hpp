#ifndef UE4SS_SDK_BP_MCNoHealthRegen_HPP
#define UE4SS_SDK_BP_MCNoHealthRegen_HPP

class UBP_MCNoHealthRegen_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MCNoHealthRegen(int32 EntryPoint);
};

#endif
