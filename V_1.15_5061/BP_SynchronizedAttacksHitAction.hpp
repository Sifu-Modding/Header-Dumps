#ifndef UE4SS_SDK_BP_SynchronizedAttacksHitAction_HPP
#define UE4SS_SDK_BP_SynchronizedAttacksHitAction_HPP

class UBP_SynchronizedAttacksHitAction_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;
    TArray<FOverridingHitBox> Hits;
    FAnimSyncContainer LethalAnims;
    FWeaponAnimInfo AttackerWeaponAnim;
    FWeaponAnimInfo LethalAttackerWeaponAnim;

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
};

#endif
