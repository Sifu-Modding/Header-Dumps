#ifndef UE4SS_SDK_BP_LessonActionCondition_Attack_Master_HPP
#define UE4SS_SDK_BP_LessonActionCondition_Attack_Master_HPP

class UBP_LessonActionCondition_Attack_Master_C : public UBP_LessonActionCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UAttackDB* AttackDBUsed;                                                    // 0x0248 (size: 0x8)
    bool AttackFound;                                                                 // 0x0250 (size: 0x1)
    int32 NumberOfExpectedHits;                                                       // 0x0254 (size: 0x4)
    int32 HitNumber;                                                                  // 0x0258 (size: 0x4)

    void UnbindAll();
    void BPE_Init();
    void OnAttackHit(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void OnMultiHitAttack(const FAttackHitRequest& _hitRequest, const FImpactResult& _impactResult, class AActor* _hittedActor);
    void OnCurrentAttackCancelled(uint8 _ID, class UOrderComponent* _OrderComponent);
    void ExecuteUbergraph_BP_LessonActionCondition_Attack_Master(int32 EntryPoint);
}; // Size: 0x25C

#endif
