#ifndef UE4SS_SDK_BP_MapCompletedAchievement_HPP
#define UE4SS_SDK_BP_MapCompletedAchievement_HPP

class UBP_MapCompletedAchievement_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EGameDifficulty eWantedDifficulty;
    FGameplayTag NeededTagInSave;
    bool bInvertTagNeeded;
    bool bMustClearMap;
    TArray<TSoftObjectPtr<AAISituationActor>> SituationsToIgnoreInClearTest;
    TArray<TSoftObjectPtr<AAISituationActor>> SituationsToNOTClear;

    void CanBeIgnored(class AAISituationActor* Situation, bool& bCanBeIgnored);
    void MustNotClearSituation(class AAISituationActor* Situation, bool& bMustNotClear);
    TArray<FString> BPE_GetDebugInfo();
    void Are Situations Cleared(bool& bAllCleared);
    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_MapCompletedAchievement(int32 EntryPoint);
};

#endif
