#ifndef UE4SS_SDK_BP_ReachGoalInTime_HPP
#define UE4SS_SDK_BP_ReachGoalInTime_HPP

class UBP_ReachGoalInTime_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TSoftObjectPtr<ASCPlayerStart> FromStartSpot;                                     // 0x01F0 (size: 0x28)

    void GoalReached();
    void BPE_OnTimerEnded();
    void BPE_Init();
    void OnGiveInitialControlToPlayer_Event();
    void ExecuteUbergraph_BP_ReachGoalInTime(int32 EntryPoint);
}; // Size: 0x218

#endif
