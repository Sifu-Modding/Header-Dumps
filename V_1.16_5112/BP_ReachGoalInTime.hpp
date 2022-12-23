#ifndef UE4SS_SDK_BP_ReachGoalInTime_HPP
#define UE4SS_SDK_BP_ReachGoalInTime_HPP

class UBP_ReachGoalInTime_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<ASCPlayerStart> FromStartSpot;

    void GoalReached();
    void BPE_OnTimerEnded();
    void BPE_Init();
    void OnGiveInitialControlToPlayer_Event();
    void ExecuteUbergraph_BP_ReachGoalInTime(int32 EntryPoint);
};

#endif
