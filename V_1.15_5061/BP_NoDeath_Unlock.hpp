#ifndef UE4SS_SDK_BP_NoDeath_Unlock_HPP
#define UE4SS_SDK_BP_NoDeath_Unlock_HPP

class UBP_NoDeath_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnFirstConditionActive();
    void m_OnDeath_Event();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_NoDeath_Unlock(int32 EntryPoint);
};

#endif
