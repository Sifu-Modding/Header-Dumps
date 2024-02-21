#ifndef UE4SS_SDK_BP_UnlockAllSkills_HPP
#define UE4SS_SDK_BP_UnlockAllSkills_HPP

class UBP_UnlockAllSkills_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class TSubclassOf<USkillGameplayEffect>> Skills;                           // 0x0040 (size: 0x10)

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_UnlockAllSkills(int32 EntryPoint);
}; // Size: 0x50

#endif
