#ifndef UE4SS_SDK_BP_DodgeAnimRequest_HPP
#define UE4SS_SDK_BP_DodgeAnimRequest_HPP

class UBP_DodgeAnimRequest_C : public UDodgeAnimRequest
{
    TMap<class ESCCardinalPoints, class FAnimContainer> Dodges;                       // 0x0028 (size: 0x50)
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromDown;               // 0x0078 (size: 0x50)
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromHitted;             // 0x00C8 (size: 0x50)
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesForWeapons;             // 0x0118 (size: 0x50)
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromDownForWeapons;     // 0x0168 (size: 0x50)
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromHittedForWeapons;   // 0x01B8 (size: 0x50)

    void MirrorAttackOrigin(EAttackOrigin Origin, bool mirror, EAttackOrigin& FinalOrigin);
    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, class AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const class AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct);
}; // Size: 0x208

#endif
