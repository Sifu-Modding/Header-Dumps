#ifndef UE4SS_SDK_BP_IsInPlayerTagsAchievementUnlock_HPP
#define UE4SS_SDK_BP_IsInPlayerTagsAchievementUnlock_HPP

class UBP_IsInPlayerTagsAchievementUnlock_C : public USaveUnlockCondition
{
    FGameplayTag NeededTagInSave;                                                     // 0x00E0 (size: 0x8)

    bool BPE_CanBeUnlocked(const class UWorld* _world);
}; // Size: 0xE8

#endif
