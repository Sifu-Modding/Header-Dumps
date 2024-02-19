#ifndef UE4SS_SDK_BP_TrophyUnlock_Retro_HPP
#define UE4SS_SDK_BP_TrophyUnlock_Retro_HPP

class UBP_TrophyUnlock_Retro_C : public UBP_GoalsSaveUnlockCondition_Master_C
{
    FString achievementId;                                                            // 0x00E0 (size: 0x10)

    bool BPE_CanBeUnlocked(const class UWorld* _world);
}; // Size: 0xF0

#endif
