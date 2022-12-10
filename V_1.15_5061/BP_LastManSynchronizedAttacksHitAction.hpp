#ifndef UE4SS_SDK_BP_LastManSynchronizedAttacksHitAction_HPP
#define UE4SS_SDK_BP_LastManSynchronizedAttacksHitAction_HPP

class UBP_LastManSynchronizedAttacksHitAction_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;
    FAnimSyncContainer KnockedDownAnims;
    FWeaponAnimInfo AttackerWeaponAnim;
    FWeaponAnimInfo KnockedDownAttackerWeaponAnim;
    TArray<FOverridingHitBox> Hits;
    TMap<class TSubclassOf<UBaseWeaponData>, class FSyncAttackAnimContainer> PerWeaponAnims;
    bool bDisableMirroring;

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
};

#endif
