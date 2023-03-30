#ifndef UE4SS_SDK_BP_NoHit_Unlock_HPP
#define UE4SS_SDK_BP_NoHit_Unlock_HPP

class UBP_NoHit_Unlock_C : public UBP_HitAchievementUnlockCondition_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)

    void BPE_OnMCHit(class AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    void BPE_OnAllSituationResolved();
    void ExecuteUbergraph_BP_NoHit_Unlock(int32 EntryPoint);
}; // Size: 0x1E8

#endif
