#ifndef UE4SS_SDK_BP_DodgeAnimRequest_HPP
#define UE4SS_SDK_BP_DodgeAnimRequest_HPP

class UBP_DodgeAnimRequest_C : public UDodgeAnimRequest
{
    TMap<class ESCCardinalPoints, class FAnimContainer> Dodges;
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromDown;
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromHitted;
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesForWeapons;
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromDownForWeapons;
    TMap<class ESCCardinalPoints, class FAnimContainer> DodgesFromHittedForWeapons;

    void MirrorAttackOrigin(EAttackOrigin Origin, bool mirror, EAttackOrigin& FinalOrigin);
    void BPE_GetDodgeAnimations(TArray<FAnimContainer>& _outAnimContainer, TArray<FAnimContainer>& _outWeaponAnimContainer, bool& _bMirror, ESCCardinalPoints& _eOutCardinalPoint, class AFightingCharacter* _owner, EQuadrantTypes _eQuadrant, ESCCardinalPoints _eCardinalPoint, const class AFightingCharacter* _attacker, const FHitBox& _nextHit, bool _bAttackMirror, float _fHitDelay, const FNetOrderStructDodge& _dodgeStruct);
};

#endif
