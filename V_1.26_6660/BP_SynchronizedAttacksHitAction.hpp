#ifndef UE4SS_SDK_BP_SynchronizedAttacksHitAction_HPP
#define UE4SS_SDK_BP_SynchronizedAttacksHitAction_HPP

class UBP_SynchronizedAttacksHitAction_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;                                                         // 0x0118 (size: 0x30)
    TArray<FOverridingHitBox> Hits;                                                   // 0x0148 (size: 0x10)
    FAnimSyncContainer LethalAnims;                                                   // 0x0158 (size: 0x30)
    FWeaponAnimInfo AttackerWeaponAnim;                                               // 0x0188 (size: 0x90)
    FWeaponAnimInfo LethalAttackerWeaponAnim;                                         // 0x0218 (size: 0x90)

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x2A8

#endif
