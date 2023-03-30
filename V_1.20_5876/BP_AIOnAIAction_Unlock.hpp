#ifndef UE4SS_SDK_BP_AIOnAIAction_Unlock_HPP
#define UE4SS_SDK_BP_AIOnAIAction_Unlock_HPP

class UBP_AIOnAIAction_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)
    UClass* WantedAction;                                                             // 0x01E8 (size: 0x8)

    void BPE_OnAllSituationResolved();
    void BPE_OnAIHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void ExecuteUbergraph_BP_AIOnAIAction_Unlock(int32 EntryPoint);
}; // Size: 0x1F0

#endif
