#ifndef UE4SS_SDK_BP_SpecificKillAction_HPP
#define UE4SS_SDK_BP_SpecificKillAction_HPP

class UBP_SpecificKillAction_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FName> WantedAttackName;
    TSoftObjectPtr<AAISpawner> WantedVictim;
    TSoftClassPtr<UArchetypeAsset> WantedVictimArchetype;

    void CheckConditions(FName AttackName, class AFightingCharacter* Victim, bool& bConditionValidated);
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnFirstConditionActive();
    void OnAIDeathDetected_Event(const class AFightingCharacter* _AICharacter, const FDamageInfos& _damageInfos);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_SpecificKillAction(int32 EntryPoint);
};

#endif
