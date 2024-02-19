#ifndef UE4SS_SDK_BP_LockAllSkills_HPP
#define UE4SS_SDK_BP_LockAllSkills_HPP

class UBP_LockAllSkills_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void ExecuteUbergraph_BP_LockAllSkills(int32 EntryPoint);
}; // Size: 0x40

#endif
