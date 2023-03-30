#ifndef UE4SS_SDK_BP_PermanentSkill_Unlock_HPP
#define UE4SS_SDK_BP_PermanentSkill_Unlock_HPP

class UBP_PermanentSkill_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    TArray<class TSubclassOf<USkillGameplayEffect>> ListOfSkills;                     // 0x01F0 (size: 0x10)
    int32 iWantedNumOfPermanentSkills;                                                // 0x0200 (size: 0x4)
    int32 iNumPermanentlyUnlockedSkills;                                              // 0x0204 (size: 0x4)
    bool bAlreadyUnlocked;                                                            // 0x0208 (size: 0x1)

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void m_OnSkillConsolidated_Event();
    void BPE_OnFirstConditionActive();
    void BPE_Shutdown();
    void BPE_Init();
    void GoalsUnlocked_Event();
    void m_OnSaveCheckFinished_Event();
    void ExecuteUbergraph_BP_PermanentSkill_Unlock(int32 EntryPoint);
}; // Size: 0x209

#endif
