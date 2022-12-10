#ifndef UE4SS_SDK_BP_OrderServiceCanVanishAttackCondition_HPP
#define UE4SS_SDK_BP_OrderServiceCanVanishAttackCondition_HPP

class UBP_OrderServiceCanVanishAttackCondition_C : public UOrderServiceActivationConditions
{
    float Min Distance To Target;
    float Max Angle To Target;

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
