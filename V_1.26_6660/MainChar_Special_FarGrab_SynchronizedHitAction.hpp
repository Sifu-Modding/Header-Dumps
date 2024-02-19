#ifndef UE4SS_SDK_MainChar_Special_FarGrab_SynchronizedHitAction_HPP
#define UE4SS_SDK_MainChar_Special_FarGrab_SynchronizedHitAction_HPP

class UMainChar_Special_FarGrab_SynchronizedHitAction_C : public UBP_SynchronizedAttacksHitAction_C
{

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x2A8

#endif
