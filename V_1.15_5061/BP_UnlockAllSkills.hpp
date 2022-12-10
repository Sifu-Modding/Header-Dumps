#ifndef UE4SS_SDK_BP_UnlockAllSkills_HPP
#define UE4SS_SDK_BP_UnlockAllSkills_HPP

class UBP_UnlockAllSkills_C : public UBP_GameplayCheatMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class TSubclassOf<USkillGameplayEffect>> Skills;

    void BPE_OnCheatActivated(class APlayerController* _playerController, FString _argument);
    void BPE_OnCheatDeactivated(class APlayerController* _playerController);
    void ExecuteUbergraph_BP_UnlockAllSkills(int32 EntryPoint);
};

#endif
