#ifndef UE4SS_SDK_BP_NoDeath_Unlock_HPP
#define UE4SS_SDK_BP_NoDeath_Unlock_HPP

class UBP_NoDeath_Unlock_C : public UBP_WGAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)

    void BPE_OnFirstConditionActive();
    void m_OnDeath_Event();
    void BPE_OnMatchEnded(bool _bHasWon);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_NoDeath_Unlock(int32 EntryPoint);
}; // Size: 0x1F0

#endif
