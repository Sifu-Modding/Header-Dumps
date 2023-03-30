#ifndef UE4SS_SDK_BP_ScoreMultiplierModalClass_UnlockCondition_HPP
#define UE4SS_SDK_BP_ScoreMultiplierModalClass_UnlockCondition_HPP

class UBP_ScoreMultiplierModalClass_UnlockCondition_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    bool bHasActiveSituation;                                                         // 0x01F0 (size: 0x1)
    class UStatsComponent* StatsComponent;                                            // 0x01F8 (size: 0x8)
    int32 Mult2Occurrences;                                                           // 0x0200 (size: 0x4)
    int32 Mult1Occurrences;                                                           // 0x0204 (size: 0x4)
    int32 Mult3Occurrences;                                                           // 0x0208 (size: 0x4)
    int32 iWantedModalMultiplier;                                                     // 0x020C (size: 0x4)
    int32 ModalMultiplier;                                                            // 0x0210 (size: 0x4)

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void BPE_OnAllSituationResolved();
    void OnStatChanged_Event(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnFirstConditionActive();
    void ExecuteUbergraph_BP_ScoreMultiplierModalClass_UnlockCondition(int32 EntryPoint);
}; // Size: 0x214

#endif
