#ifndef UE4SS_SDK_BP_ScoreMultiplierModalClass_UnlockCondition_HPP
#define UE4SS_SDK_BP_ScoreMultiplierModalClass_UnlockCondition_HPP

class UBP_ScoreMultiplierModalClass_UnlockCondition_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bHasActiveSituation;
    class UStatsComponent* StatsComponent;
    int32 Mult2Occurrences;
    int32 Mult1Occurrences;
    int32 Mult3Occurrences;
    int32 iWantedModalMultiplier;
    int32 ModalMultiplier;

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void BPE_OnAllSituationResolved();
    void OnStatChanged_Event(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_ScoreMultiplierModalClass_UnlockCondition(int32 EntryPoint);
};

#endif
