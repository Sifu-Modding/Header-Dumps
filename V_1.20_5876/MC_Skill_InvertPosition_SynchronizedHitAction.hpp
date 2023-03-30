#ifndef UE4SS_SDK_MC_Skill_InvertPosition_SynchronizedHitAction_HPP
#define UE4SS_SDK_MC_Skill_InvertPosition_SynchronizedHitAction_HPP

class UMC_Skill_InvertPosition_SynchronizedHitAction_C : public USynchronizedAttackHitActionLauncher
{

    void BPE_GetSynchronizedAttackAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, FAnimSyncContainer& _outAnims, FWeaponAnimInfo& _outAttackerWeaponAnim, TArray<FOverridingHitBox>& _outHitsToApply, bool& _bOutDisableMirroring);
}; // Size: 0x118

#endif
