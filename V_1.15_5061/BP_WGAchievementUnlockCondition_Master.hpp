#ifndef UE4SS_SDK_BP_WGAchievementUnlockCondition_Master_HPP
#define UE4SS_SDK_BP_WGAchievementUnlockCondition_Master_HPP

class UBP_WGAchievementUnlockCondition_Master_C : public UWGAchievementUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool bNeedGoalsUnlocked;
    FBP_WGAchievementUnlockCondition_Master_CGoalsUnlocked GoalsUnlocked;
    void GoalsUnlocked();

    bool BPE_CanBeUnlocked(const class UWorld* _world);
    void BPE_UnlockAchievement_Debug();
    void BPE_Init();
    void m_OnObjectUnlocked_Event(FGameplayTag _objectUnlockedTag);
    void ExecuteUbergraph_BP_WGAchievementUnlockCondition_Master(int32 EntryPoint);
    void GoalsUnlocked__DelegateSignature();
};

#endif
