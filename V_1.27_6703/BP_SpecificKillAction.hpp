#ifndef UE4SS_SDK_BP_SpecificKillAction_HPP
#define UE4SS_SDK_BP_SpecificKillAction_HPP

class UBP_SpecificKillAction_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)
    TArray<FName> WantedAttackName;                                                   // 0x01E8 (size: 0x10)
    TSoftObjectPtr<AAISpawner> WantedVictim;                                          // 0x01F8 (size: 0x28)
    TSoftClassPtr<UArchetypeAsset> WantedVictimArchetype;                             // 0x0220 (size: 0x28)

    void CheckConditions(FName AttackName, class AFightingCharacter* Victim, bool& bConditionValidated);
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnFirstConditionActive();
    void OnAIDeathDetected_Event(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_SpecificKillAction(int32 EntryPoint);
}; // Size: 0x248

#endif
