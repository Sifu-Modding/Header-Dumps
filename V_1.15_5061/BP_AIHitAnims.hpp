#ifndef UE4SS_SDK_BP_AIHitAnims_HPP
#define UE4SS_SDK_BP_AIHitAnims_HPP

class UBP_AIHitAnims_C : public UBP_HitAnims_C
{
    FAnimSyncContainer LightKnockdownAttack;
    FAnimSyncContainer HeavyKockdownAttack;
    bool KnockdownAttackMirrorable;
    FAnimSyncContainer InverseAttackAnims;
    FAnimSyncContainer CrookedFootAnims;

    void GetAnimInvert(FAnimSyncContainer& bpp__syncContainer__pf);
    void GetAnimCrookedFoot(FAnimSyncContainer& bpp__syncContainer__pf);
};

#endif
