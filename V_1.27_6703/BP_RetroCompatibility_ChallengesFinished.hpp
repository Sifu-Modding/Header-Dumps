#ifndef UE4SS_SDK_BP_RetroCompatibility_ChallengesFinished_HPP
#define UE4SS_SDK_BP_RetroCompatibility_ChallengesFinished_HPP

class UBP_RetroCompatibility_ChallengesFinished_C : public UBP_GoalsSaveUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)

    bool CheckCompletionTrophy(FString AchievementName);
    void BPE_CheckingSave(const class USCSaveObject* _saveToCheck);
    void ExecuteUbergraph_BP_RetroCompatibility_ChallengesFinished(int32 EntryPoint);
}; // Size: 0xE8

#endif
