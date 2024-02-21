#ifndef UE4SS_SDK_OrderServiceSnapCondition_HPP
#define UE4SS_SDK_OrderServiceSnapCondition_HPP

class UOrderServiceSnapCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
