#ifndef UE4SS_SDK_BP_OnTrophyUnlocked_Unlock_HPP
#define UE4SS_SDK_BP_OnTrophyUnlocked_Unlock_HPP

class UBP_OnTrophyUnlocked_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    FString TrophyIdWanted;                                                           // 0x01F0 (size: 0x10)

    void m_OnAchievementCompleted_Event(FString _achievementId);
    void BPE_Init();
    void BPE_Shutdown();
    void m_OnQueryAchievementsCompleted_Event();
    void ExecuteUbergraph_BP_OnTrophyUnlocked_Unlock(int32 EntryPoint);
}; // Size: 0x200

#endif
