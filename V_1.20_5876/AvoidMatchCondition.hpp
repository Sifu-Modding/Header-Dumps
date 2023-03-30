#ifndef UE4SS_SDK_AvoidMatchCondition_HPP
#define UE4SS_SDK_AvoidMatchCondition_HPP

class UAvoidMatchCondition_C : public UAvoidMatchCondition
{

    EAvoidTrackingTypes BPE_GetAttackTrackingResponseFromAvoidType(EAvoidType _eAvoidType);
    bool BPE_DoesAvoidDismissesHit(EAvoidType _eAvoidType, ESCCardinalPoints _eCardPoint, const FHitBox& _hitbox, bool _bMirror);
    bool BPE_DoesAvoidMatch(EAvoidType _eAvoidType, const FHitBox& _hitbox, bool _bMirror);
}; // Size: 0x28

#endif
