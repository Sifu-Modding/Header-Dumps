#ifndef UE4SS_SDK_OrderServiceIsPlayerCondition_HPP
#define UE4SS_SDK_OrderServiceIsPlayerCondition_HPP

class UOrderServiceIsPlayerCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
