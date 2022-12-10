#ifndef UE4SS_SDK_BP_IsInPlayerTagsAchievementUnlock_HPP
#define UE4SS_SDK_BP_IsInPlayerTagsAchievementUnlock_HPP

class UBP_IsInPlayerTagsAchievementUnlock_C : public USaveUnlockCondition
{
    FGameplayTag NeededTagInSave;

    bool BPE_CanBeUnlocked(const class UWorld* _world);
};

#endif
