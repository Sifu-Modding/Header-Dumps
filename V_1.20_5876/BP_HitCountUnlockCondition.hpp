#ifndef UE4SS_SDK_BP_HitCountUnlockCondition_HPP
#define UE4SS_SDK_BP_HitCountUnlockCondition_HPP

class UBP_HitCountUnlockCondition_C : public UStarUnlockCondition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    int32 AllowedHitCount;                                                            // 0x0030 (size: 0x4)
    int32 DamageCount;                                                                // 0x0034 (size: 0x4)
    class AFightingCharacter* Fighting Character;                                     // 0x0038 (size: 0x8)

    bool IsVictimOfAGrab();
    bool BPE_VerifyCondition();
    void BPE_BindCallbacks(class AFightingCharacter* _FightingCharacter);
    void OnMCTookDamage(float _fAmount, class UHealthComponent* _healthComponent, bool _bApplied);
    void ExecuteUbergraph_BP_HitCountUnlockCondition(int32 EntryPoint);
}; // Size: 0x40

#endif
