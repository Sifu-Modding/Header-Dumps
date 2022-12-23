#ifndef UE4SS_SDK_BP_LockAllSkills_HPP
#define UE4SS_SDK_BP_LockAllSkills_HPP

class UBP_LockAllSkills_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void ExecuteUbergraph_BP_LockAllSkills(int32 EntryPoint);
};

#endif
