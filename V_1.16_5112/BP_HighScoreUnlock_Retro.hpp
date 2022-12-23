#ifndef UE4SS_SDK_BP_HighScoreUnlock_Retro_HPP
#define UE4SS_SDK_BP_HighScoreUnlock_Retro_HPP

class UBP_HighScoreUnlock_Retro_C : public UBP_GoalsSaveUnlockCondition_Master_C
{
    FName sWantedMapHighScore;
    float fWantedHighScore;

    bool BPE_CanBeUnlocked(const class UWorld* _world);
};

#endif
