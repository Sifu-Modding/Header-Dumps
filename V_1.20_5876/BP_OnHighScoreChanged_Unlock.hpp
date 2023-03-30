#ifndef UE4SS_SDK_BP_OnHighScoreChanged_Unlock_HPP
#define UE4SS_SDK_BP_OnHighScoreChanged_Unlock_HPP

class UBP_OnHighScoreChanged_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    float fWantedHighScore;                                                           // 0x01F0 (size: 0x4)

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void ED_DisplayRecap_Event(float CurrentSavedHighscore, float CurrentLevelScore, bool NewHighscoreReached);
    void BPE_OnFirstConditionActive();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_OnHighScoreChanged_Unlock(int32 EntryPoint);
}; // Size: 0x1F4

#endif
