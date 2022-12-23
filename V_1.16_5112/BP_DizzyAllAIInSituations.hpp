#ifndef UE4SS_SDK_BP_DizzyAllAIInSituations_HPP
#define UE4SS_SDK_BP_DizzyAllAIInSituations_HPP

class UBP_DizzyAllAIInSituations_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AActor*> AIsDizzy;
    int32 iNumAIsToDizzy;
    TSoftObjectPtr<AActor> ItemToTriggerDizzy;

    void BPE_OnFirstConditionActive();
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_DizzyAllAIInSituations(int32 EntryPoint);
};

#endif
