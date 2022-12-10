#ifndef UE4SS_SDK_BP_OnTrophyUnlocked_Unlock_HPP
#define UE4SS_SDK_BP_OnTrophyUnlocked_Unlock_HPP

class UBP_OnTrophyUnlocked_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FString TrophyIdWanted;

    void m_OnAchievementCompleted_Event(FString _achievementId);
    void BPE_Init();
    void BPE_Shutdown();
    void m_OnQueryAchievementsCompleted_Event();
    void ExecuteUbergraph_BP_OnTrophyUnlocked_Unlock(int32 EntryPoint);
};

#endif
