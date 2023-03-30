#ifndef UE4SS_SDK_BP_SynchronizedAttacksLoopHit_HPP
#define UE4SS_SDK_BP_SynchronizedAttacksLoopHit_HPP

class UBP_SynchronizedAttacksLoopHit_C : public USynchronizedAttackLoopHitActionLauncher
{
    TArray<FOverridingHitBox> Hits;                                                   // 0x01D0 (size: 0x10)
    FAnimSyncContainer LethalEntryAnims;                                              // 0x01E0 (size: 0x30)
    FAnimSyncContainer LoopAnims;                                                     // 0x0210 (size: 0x30)
    FAnimSyncContainer ExitAnims;                                                     // 0x0240 (size: 0x30)
    FAnimSyncContainer EntryAnims;                                                    // 0x0270 (size: 0x30)
    FWeaponAnimInfo AttackerWeaponAnimEntry;                                          // 0x02A0 (size: 0x90)
    FWeaponAnimInfo AttackerWeaponAnimLoop;                                           // 0x0330 (size: 0x90)
    FWeaponAnimInfo AttackerWeaponAnimExit;                                           // 0x03C0 (size: 0x90)

    void BPE_GetSynchronizedAttackLoopAnims(const FHitDescription& _hitDescription, class AFightingCharacter* _victimChar, bool& _bOutIsLethal, FAnimSyncContainer& _outAnimsEntry, FAnimSyncContainer& _outAnimsLoop, FAnimSyncContainer& _outAnimsExit, FWeaponAnimInfo& _outAttackerWeaponAnimEntry, FWeaponAnimInfo& _outAttackerWeaponAnimLoop, FWeaponAnimInfo& _outAttackerWeaponAnimExit, TArray<FOverridingHitBox>& _outHitsToApply);
}; // Size: 0x450

#endif
