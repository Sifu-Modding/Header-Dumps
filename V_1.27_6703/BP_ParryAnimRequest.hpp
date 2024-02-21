#ifndef UE4SS_SDK_BP_ParryAnimRequest_HPP
#define UE4SS_SDK_BP_ParryAnimRequest_HPP

class UBP_ParryAnimRequest_C : public UParryAnimRequest
{
    FQuadrantAnimContainer DefaultAnims;                                              // 0x0028 (size: 0x60)
    FCardinalAnimContainer FromDownAnims;                                             // 0x0088 (size: 0x60)
    FQuadrantAnimContainer DefaultAnimsWeapon;                                        // 0x00E8 (size: 0x60)
    FCardinalAnimContainer FromDownAnimsWeapon;                                       // 0x0148 (size: 0x60)
    TMap<class EQuadrantTypes, class FAnimContainer> ParryPickupAnims;                // 0x01A8 (size: 0x50)

    void BPE_GetPickupOnParryAnim(const FHitRequest& _request, class AFightingCharacter* _character, FAnimContainer& _outAnim);
    void BPE_GetParryAnimWeapon(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
    void BPE_GetParryAnim(const FParryRequestInfos& _infos, FAnimContainer& _outAnim);
}; // Size: 0x1F8

#endif
