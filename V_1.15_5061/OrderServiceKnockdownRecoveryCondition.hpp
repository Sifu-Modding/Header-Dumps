#ifndef UE4SS_SDK_OrderServiceKnockdownRecoveryCondition_HPP
#define UE4SS_SDK_OrderServiceKnockdownRecoveryCondition_HPP

class UOrderServiceKnockdownRecoveryCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
