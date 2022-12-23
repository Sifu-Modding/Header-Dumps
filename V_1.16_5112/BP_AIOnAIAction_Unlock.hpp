#ifndef UE4SS_SDK_BP_AIOnAIAction_Unlock_HPP
#define UE4SS_SDK_BP_AIOnAIAction_Unlock_HPP

class UBP_AIOnAIAction_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UClass* WantedAction;

    void BPE_OnAllSituationResolved();
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void ExecuteUbergraph_BP_AIOnAIAction_Unlock(int32 EntryPoint);
};

#endif
