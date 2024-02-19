#ifndef UE4SS_SDK_BP_KeepMultiplierAboveForSomeTime_Unlock_HPP
#define UE4SS_SDK_BP_KeepMultiplierAboveForSomeTime_Unlock_HPP

class UBP_KeepMultiplierAboveForSomeTime_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    int32 iWantedValue;                                                               // 0x01F0 (size: 0x4)

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void OnStatChanged_Event(ECharacterStat _type, int32 _previousValue, int32 _currentValue);
    void BPE_Init();
    void BPE_Shutdown();
    void BPE_OnTimerEnded();
    void ED_ToggleFloorScore_Event(bool Freeze);
    void ExecuteUbergraph_BP_KeepMultiplierAboveForSomeTime_Unlock(int32 EntryPoint);
}; // Size: 0x1F4

#endif
