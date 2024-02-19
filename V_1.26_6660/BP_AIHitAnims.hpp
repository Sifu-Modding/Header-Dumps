#ifndef UE4SS_SDK_BP_AIHitAnims_HPP
#define UE4SS_SDK_BP_AIHitAnims_HPP

class UBP_AIHitAnims_C : public UBP_HitAnims_C
{
    FAnimSyncContainer LightKnockdownAttack;                                          // 0x0F70 (size: 0x30)
    FAnimSyncContainer HeavyKockdownAttack;                                           // 0x0FA0 (size: 0x30)
    bool KnockdownAttackMirrorable;                                                   // 0x0FD0 (size: 0x1)
    FAnimSyncContainer InverseAttackAnims;                                            // 0x0FD8 (size: 0x30)
    FAnimSyncContainer CrookedFootAnims;                                              // 0x1008 (size: 0x30)

    void GetAnimInvert(FAnimSyncContainer& bpp__syncContainer__pf);
    void GetAnimCrookedFoot(FAnimSyncContainer& bpp__syncContainer__pf);
}; // Size: 0x1038

#endif
