#ifndef UE4SS_SDK_BP_DizzyAllAIInSituations_HPP
#define UE4SS_SDK_BP_DizzyAllAIInSituations_HPP

class UBP_DizzyAllAIInSituations_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)
    TArray<class AActor*> AIsDizzy;                                                   // 0x01E8 (size: 0x10)
    int32 iNumAIsToDizzy;                                                             // 0x01F8 (size: 0x4)
    TSoftObjectPtr<AActor> ItemToTriggerDizzy;                                        // 0x0200 (size: 0x28)

    void BPE_OnFirstConditionActive();
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_DizzyAllAIInSituations(int32 EntryPoint);
}; // Size: 0x228

#endif
