#ifndef UE4SS_SDK_BP_PermanentSkill_Unlock_HPP
#define UE4SS_SDK_BP_PermanentSkill_Unlock_HPP

class UBP_PermanentSkill_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class TSubclassOf<USkillGameplayEffect>> ListOfSkills;
    int32 iWantedNumOfPermanentSkills;
    int32 iNumPermanentlyUnlockedSkills;
    bool bAlreadyUnlocked;

    void BPE_GetTitleAndDescription(FText& _title, FText& _description);
    void m_OnSkillConsolidated_Event();
    void BPE_OnFirstConditionActive();
    void BPE_Shutdown();
    void BPE_Init();
    void GoalsUnlocked_Event();
    void m_OnSaveCheckFinished_Event();
    void ExecuteUbergraph_BP_PermanentSkill_Unlock(int32 EntryPoint);
};

#endif
