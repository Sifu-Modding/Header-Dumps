#ifndef UE4SS_SDK_BP_ThrowObjectAnimRequest_HPP
#define UE4SS_SDK_BP_ThrowObjectAnimRequest_HPP

class UBP_ThrowObjectAnimRequest_C : public UThrowObjectAnimRequest
{
    FStruct_MovableAnimations ThrowLightFeet;                                         // 0x0028 (size: 0x10)
    FStruct_MovableAnimations ThrowHeavyHands;                                        // 0x0038 (size: 0x10)
    FStruct_MovableAnimations ThrowLightHands;                                        // 0x0048 (size: 0x10)
    FStruct_MovableAnimations ThrowHeavyFeet;                                         // 0x0058 (size: 0x10)
    FStruct_MovableAnimations ThrowCRLightFeet;                                       // 0x0068 (size: 0x10)
    FStruct_MovableAnimations ThrowCRHeavyFeet;                                       // 0x0078 (size: 0x10)
    FStruct_MovableAnimations ThrowLightHandsFromPickup;                              // 0x0088 (size: 0x10)
    FStruct_MovableAnimations ThrowCRLightHandsFromPickup;                            // 0x0098 (size: 0x10)
    FStruct_MovableAnimations ThrowCRLightHands;                                      // 0x00A8 (size: 0x10)
    FStruct_MovableAnimations ThrowCRHeavyHands;                                      // 0x00B8 (size: 0x10)

    class UAttackDB* BPE_GetThrowComboAttack(const class AActor* _Instigator, const FVector& _vTargetDir, const class AThrowableActor* _throwable, const class AActor* _target, bool& _bOutMirror);
    void GetLeftSide(EQuadrantTypes Quadrant, class AFightingCharacter* Chara, class AActor* Throwable, FVector TargetDir, bool& PlayLeftSide);
    void GetWeightCategory(class UObject* TestObject, EWeightCategory& Weight, bool& WeightFound);
    void GetQuadrant(class AFightingCharacter* Character, const FVector& TargetDir, EQuadrantTypes& Quadrant, bool& QuadrantFound);
}; // Size: 0xC8

#endif
