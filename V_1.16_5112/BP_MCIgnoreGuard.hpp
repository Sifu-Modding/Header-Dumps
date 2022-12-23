#ifndef UE4SS_SDK_BP_MCIgnoreGuard_HPP
#define UE4SS_SDK_BP_MCIgnoreGuard_HPP

class UBP_MCIgnoreGuard_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_MCIgnoreGuard(int32 EntryPoint);
};

#endif
