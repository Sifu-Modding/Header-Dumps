#ifndef UE4SS_SDK_BP_OrderServiceCanVanishAttackCondition_HPP
#define UE4SS_SDK_BP_OrderServiceCanVanishAttackCondition_HPP

class UBP_OrderServiceCanVanishAttackCondition_C : public UOrderServiceActivationConditions
{
    float Min Distance To Target;                                                     // 0x0028 (size: 0x4)
    float Max Angle To Target;                                                        // 0x002C (size: 0x4)

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x30

#endif
