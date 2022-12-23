#ifndef UE4SS_SDK_BP_OnMCStatCheckDiff_WithinTimeLimit_HPP
#define UE4SS_SDK_BP_OnMCStatCheckDiff_WithinTimeLimit_HPP

class UBP_OnMCStatCheckDiff_WithinTimeLimit_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ECharacterStat eWantedStat;
    int32 iWantedDiff;
    float iWantedTimeLimit;
    TArray<int32> iValues;
    TArray<float> iTimes;
    bool bIncludeValueAtStart;

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void UpdateValues(int32 iCurrentValue, bool& bUnlockAchievement);
    void BPE_Init();
    void BPE_Shutdown();
    void OnStatChanged_Event(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void ExecuteUbergraph_BP_OnMCStatCheckDiff_WithinTimeLimit(int32 EntryPoint);
};

#endif
