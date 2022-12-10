#ifndef UE4SS_SDK_BP_ParryAnimRequest_HPP
#define UE4SS_SDK_BP_ParryAnimRequest_HPP

class UBP_ParryAnimRequest_C : public UParryAnimRequest
{
    FQuadrantAnimContainer DefaultAnims;
    FCardinalAnimContainer FromDownAnims;
    FQuadrantAnimContainer DefaultAnimsWeapon;
    FCardinalAnimContainer FromDownAnimsWeapon;
    TMap<class EQuadrantTypes, class FAnimContainer> ParryPickupAnims;

    void BPE_GetPickupOnParryAnim(const FHitRequest& _request, class AFightingCharacter* _character, FAnimContainer& _outAnim);
    void BPE_GetParryAnimWeapon(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
    void BPE_GetParryAnim(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
};

#endif
