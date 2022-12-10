#ifndef UE4SS_SDK_BP_BossTransitionSyncAttackHit_HPP
#define UE4SS_SDK_BP_BossTransitionSyncAttackHit_HPP

class UBP_BossTransitionSyncAttackHit_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;
    FWeaponAnimInfo AttackerWeaponAnim;

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
};

#endif
