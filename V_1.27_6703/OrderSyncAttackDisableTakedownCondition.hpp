#ifndef UE4SS_SDK_OrderSyncAttackDisableTakedownCondition_HPP
#define UE4SS_SDK_OrderSyncAttackDisableTakedownCondition_HPP

class UOrderSyncAttackDisableTakedownCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
