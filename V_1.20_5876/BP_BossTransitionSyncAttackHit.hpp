#ifndef UE4SS_SDK_BP_BossTransitionSyncAttackHit_HPP
#define UE4SS_SDK_BP_BossTransitionSyncAttackHit_HPP

class UBP_BossTransitionSyncAttackHit_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;                                                         // 0x0118 (size: 0x30)
    FWeaponAnimInfo AttackerWeaponAnim;                                               // 0x0148 (size: 0x90)

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x1D8

#endif
