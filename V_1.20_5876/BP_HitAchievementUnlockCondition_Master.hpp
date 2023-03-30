#ifndef UE4SS_SDK_BP_HitAchievementUnlockCondition_Master_HPP
#define UE4SS_SDK_BP_HitAchievementUnlockCondition_Master_HPP

class UBP_HitAchievementUnlockCondition_Master_C : public UHitAchievementUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01D0 (size: 0x8)
    bool bNeedGoalsUnlocked;                                                          // 0x01D8 (size: 0x1)

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_UnlockAchievement_Debug();
    void ExecuteUbergraph_BP_HitAchievementUnlockCondition_Master(int32 EntryPoint);
}; // Size: 0x1D9

#endif
