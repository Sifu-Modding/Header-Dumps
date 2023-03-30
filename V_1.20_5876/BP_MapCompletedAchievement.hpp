#ifndef UE4SS_SDK_BP_MapCompletedAchievement_HPP
#define UE4SS_SDK_BP_MapCompletedAchievement_HPP

class UBP_MapCompletedAchievement_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    EGameDifficulty eWantedDifficulty;                                                // 0x01F0 (size: 0x1)
    FGameplayTag NeededTagInSave;                                                     // 0x01F4 (size: 0x8)
    bool bInvertTagNeeded;                                                            // 0x01FC (size: 0x1)
    bool bMustClearMap;                                                               // 0x01FD (size: 0x1)
    TArray<TSoftObjectPtr<AAISituationActor>> SituationsToIgnoreInClearTest;          // 0x0200 (size: 0x10)
    TArray<TSoftObjectPtr<AAISituationActor>> SituationsToNOTClear;                   // 0x0210 (size: 0x10)

    void CanBeIgnored(class AAISituationActor* Situation, bool& bCanBeIgnored);
    void MustNotClearSituation(class AAISituationActor* Situation, bool& bMustNotClear);
    TArray<FString> BPE_GetDebugInfo();
    void Are Situations Cleared(bool& bAllCleared);
    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_MapCompletedAchievement(int32 EntryPoint);
}; // Size: 0x220

#endif
