#ifndef UE4SS_SDK_BP_ThrowEnemyOnOthers_HPP
#define UE4SS_SDK_BP_ThrowEnemyOnOthers_HPP

class UBP_ThrowEnemyOnOthers_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<AActor*, int32> ThrownAIs;

    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnOrderStarted(uint8 _orderID, class UOrderComponent* _OrderComponent);
    void OnPushedEnded(uint8 _ID, class UOrderComponent* _OrderComponent);
    void BPE_Init();
    void ExecuteUbergraph_BP_ThrowEnemyOnOthers(int32 EntryPoint);
};

#endif
