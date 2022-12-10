#ifndef UE4SS_SDK_BP_ThrowObjectAnimRequest_HPP
#define UE4SS_SDK_BP_ThrowObjectAnimRequest_HPP

class UBP_ThrowObjectAnimRequest_C : public UThrowObjectAnimRequest
{
    FStruct_MovableAnimations ThrowLightFeet;
    FStruct_MovableAnimations ThrowHeavyHands;
    FStruct_MovableAnimations ThrowLightHands;
    FStruct_MovableAnimations ThrowHeavyFeet;
    FStruct_MovableAnimations ThrowCRLightFeet;
    FStruct_MovableAnimations ThrowCRHeavyFeet;
    FStruct_MovableAnimations ThrowLightHandsFromPickup;
    FStruct_MovableAnimations ThrowCRLightHandsFromPickup;
    FStruct_MovableAnimations ThrowCRLightHands;
    FStruct_MovableAnimations ThrowCRHeavyHands;

    class UAttackDB* BPE_GetThrowComboAttack(const class AActor* _Instigator, const FVector& _vTargetDir, const class AThrowableActor* _throwable, const class AActor* _target, bool& _bOutMirror);
    void GetLeftSide(EQuadrantTypes Quadrant, class AFightingCharacter* Chara, class AActor* Throwable, FVector TargetDir, bool& PlayLeftSide);
    void GetWeightCategory(class UObject* TestObject, EWeightCategory& Weight, bool& WeightFound);
    void GetQuadrant(class AFightingCharacter* Character, const FVector& TargetDir, EQuadrantTypes& Quadrant, bool& QuadrantFound);
};

#endif
