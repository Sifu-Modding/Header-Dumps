#ifndef UE4SS_SDK_BP_HighScoreUnlock_Retro_HPP
#define UE4SS_SDK_BP_HighScoreUnlock_Retro_HPP

class UBP_HighScoreUnlock_Retro_C : public UBP_GoalsSaveUnlockCondition_Master_C
{
    FName sWantedMapHighScore;                                                        // 0x00E0 (size: 0x8)
    float fWantedHighScore;                                                           // 0x00E8 (size: 0x4)

    bool BPE_CanBeUnlocked(const class UWorld* _world);
}; // Size: 0xEC

#endif
