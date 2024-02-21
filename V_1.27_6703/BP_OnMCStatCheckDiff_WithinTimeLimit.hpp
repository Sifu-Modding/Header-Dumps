#ifndef UE4SS_SDK_BP_OnMCStatCheckDiff_WithinTimeLimit_HPP
#define UE4SS_SDK_BP_OnMCStatCheckDiff_WithinTimeLimit_HPP

class UBP_OnMCStatCheckDiff_WithinTimeLimit_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    ECharacterStat eWantedStat;                                                       // 0x01F0 (size: 0x1)
    int32 iWantedDiff;                                                                // 0x01F4 (size: 0x4)
    float iWantedTimeLimit;                                                           // 0x01F8 (size: 0x4)
    TArray<int32> iValues;                                                            // 0x0200 (size: 0x10)
    TArray<float> iTimes;                                                             // 0x0210 (size: 0x10)
    bool bIncludeValueAtStart;                                                        // 0x0220 (size: 0x1)

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void UpdateValues(int32 iCurrentValue, bool& bUnlockAchievement);
    void BPE_Init();
    void BPE_Shutdown();
    void OnStatChanged_Event(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void ExecuteUbergraph_BP_OnMCStatCheckDiff_WithinTimeLimit(int32 EntryPoint);
}; // Size: 0x221

#endif
