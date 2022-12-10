#ifndef UE4SS_SDK_BP_HitAchievementUnlockCondition_Master_HPP
#define UE4SS_SDK_BP_HitAchievementUnlockCondition_Master_HPP

class UBP_HitAchievementUnlockCondition_Master_C : public UHitAchievementUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bNeedGoalsUnlocked;

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_UnlockAchievement_Debug();
    void ExecuteUbergraph_BP_HitAchievementUnlockCondition_Master(int32 EntryPoint);
};

#endif
