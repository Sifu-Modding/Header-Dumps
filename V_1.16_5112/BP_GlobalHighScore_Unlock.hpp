#ifndef UE4SS_SDK_BP_GlobalHighScore_Unlock_HPP
#define UE4SS_SDK_BP_GlobalHighScore_Unlock_HPP

class UBP_GlobalHighScore_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float fWantedCumulatedHighScore;
    float fTotalHighScore;

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void ED_DisplayRecap_Event(float CurrentSavedHighscore, float CurrentLevelScore, bool NewHighscoreReached);
    void BPE_OnFirstConditionActive();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnAllSituationResolved();
    void BPE_Init();
    void GoalsUnlocked_Event();
    void ExecuteUbergraph_BP_GlobalHighScore_Unlock(int32 EntryPoint);
};

#endif
