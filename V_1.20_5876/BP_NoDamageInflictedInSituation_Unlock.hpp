#ifndef UE4SS_SDK_BP_NoDamageInflictedInSituation_Unlock_HPP
#define UE4SS_SDK_BP_NoDamageInflictedInSituation_Unlock_HPP

class UBP_NoDamageInflictedInSituation_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)

    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnSituationResolved(class AAISituationActor* _situation, bool _bHasActiveSituation);
    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_NoDamageInflictedInSituation_Unlock(int32 EntryPoint);
}; // Size: 0x1E8

#endif
