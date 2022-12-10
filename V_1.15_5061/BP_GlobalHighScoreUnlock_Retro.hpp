#ifndef UE4SS_SDK_BP_GlobalHighScoreUnlock_Retro_HPP
#define UE4SS_SDK_BP_GlobalHighScoreUnlock_Retro_HPP

class UBP_GlobalHighScoreUnlock_Retro_C : public UBP_GoalsSaveUnlockCondition_Master_C
{
    float fWantedCumulatedHighScore;

    bool BPE_CanBeUnlocked(const class UWorld* _world);
};

#endif
