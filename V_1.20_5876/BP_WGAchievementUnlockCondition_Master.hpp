#ifndef UE4SS_SDK_BP_WGAchievementUnlockCondition_Master_HPP
#define UE4SS_SDK_BP_WGAchievementUnlockCondition_Master_HPP

class UBP_WGAchievementUnlockCondition_Master_C : public UWGAchievementUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C8 (size: 0x8)
    bool bNeedGoalsUnlocked;                                                          // 0x01D0 (size: 0x1)
    FBP_WGAchievementUnlockCondition_Master_CGoalsUnlocked GoalsUnlocked;             // 0x01D8 (size: 0x10)
    void GoalsUnlocked();

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_UnlockAchievement_Debug();
    void BPE_Init();
    void m_OnObjectUnlocked_Event(FGameplayTag _objectUnlockedTag);
    void ExecuteUbergraph_BP_WGAchievementUnlockCondition_Master(int32 EntryPoint);
    void GoalsUnlocked__DelegateSignature();
}; // Size: 0x1E8

#endif
