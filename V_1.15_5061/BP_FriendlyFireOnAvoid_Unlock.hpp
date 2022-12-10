#ifndef UE4SS_SDK_BP_FriendlyFireOnAvoid_Unlock_HPP
#define UE4SS_SDK_BP_FriendlyFireOnAvoid_Unlock_HPP

class UBP_FriendlyFireOnAvoid_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    uint8 uAttackOrderIDAvoided;
    class AActor* avoidedInstigator;

    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnMatchEnded(bool _bHasWon);
    void OnAvoidSuccessDynamic_Event(FHitRequest _hitRequest, FHitDefenseResult _hitDefenseResult);
    void BPE_OnFirstConditionActive();
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_FriendlyFireOnAvoid_Unlock(int32 EntryPoint);
};

#endif
