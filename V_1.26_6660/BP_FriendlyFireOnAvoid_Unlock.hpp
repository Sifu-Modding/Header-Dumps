#ifndef UE4SS_SDK_BP_FriendlyFireOnAvoid_Unlock_HPP
#define UE4SS_SDK_BP_FriendlyFireOnAvoid_Unlock_HPP

class UBP_FriendlyFireOnAvoid_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)
    uint8 uAttackOrderIDAvoided;                                                      // 0x01E8 (size: 0x1)
    class AActor* avoidedInstigator;                                                  // 0x01F0 (size: 0x8)

    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnMatchEnded(bool _bHasWon);
    void OnAvoidSuccessDynamic_Event(FHitRequest _hitRequest, FHitDefenseResult _hitDefenseResult);
    void BPE_OnFirstConditionActive();
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_FriendlyFireOnAvoid_Unlock(int32 EntryPoint);
}; // Size: 0x1F8

#endif
