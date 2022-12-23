#ifndef UE4SS_SDK_BP_NoDamageInflictedInSituation_Unlock_HPP
#define UE4SS_SDK_BP_NoDamageInflictedInSituation_Unlock_HPP

class UBP_NoDamageInflictedInSituation_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnSituationResolved(class AAISituationActor* _situation, bool _bHasActiveSituation);
    void BPE_OnMatchEnded(bool _bHasWon);
    void ExecuteUbergraph_BP_NoDamageInflictedInSituation_Unlock(int32 EntryPoint);
};

#endif
