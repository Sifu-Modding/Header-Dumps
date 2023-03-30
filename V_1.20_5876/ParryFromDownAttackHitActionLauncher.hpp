#ifndef UE4SS_SDK_ParryFromDownAttackHitActionLauncher_HPP
#define UE4SS_SDK_ParryFromDownAttackHitActionLauncher_HPP

class UParryFromDownAttackHitActionLauncher_C : public UBP_SynchronizedAttacksHitAction_C
{

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x2A8

#endif
