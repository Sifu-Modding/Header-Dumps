#ifndef UE4SS_SDK_BP_LastManSynchronizedAttacksHitAction_HPP
#define UE4SS_SDK_BP_LastManSynchronizedAttacksHitAction_HPP

class UBP_LastManSynchronizedAttacksHitAction_C : public USynchronizedAttackHitActionLauncher
{
    FAnimSyncContainer Anims;                                                         // 0x0118 (size: 0x30)
    FAnimSyncContainer KnockedDownAnims;                                              // 0x0148 (size: 0x30)
    FWeaponAnimInfo AttackerWeaponAnim;                                               // 0x0178 (size: 0x90)
    FWeaponAnimInfo KnockedDownAttackerWeaponAnim;                                    // 0x0208 (size: 0x90)
    TArray<FOverridingHitBox> Hits;                                                   // 0x0298 (size: 0x10)
    TMap<class TSubclassOf<UBaseWeaponData>, class FSyncAttackAnimContainer> PerWeaponAnims; // 0x02A8 (size: 0x50)
    bool bDisableMirroring;                                                           // 0x02F8 (size: 0x1)

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x2F9

#endif
