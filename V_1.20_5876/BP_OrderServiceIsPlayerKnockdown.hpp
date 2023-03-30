#ifndef UE4SS_SDK_BP_OrderServiceIsPlayerKnockdown_HPP
#define UE4SS_SDK_BP_OrderServiceIsPlayerKnockdown_HPP

class UBP_OrderServiceIsPlayerKnockdown_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
