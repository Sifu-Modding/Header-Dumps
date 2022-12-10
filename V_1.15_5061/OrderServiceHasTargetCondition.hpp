#ifndef UE4SS_SDK_OrderServiceHasTargetCondition_HPP
#define UE4SS_SDK_OrderServiceHasTargetCondition_HPP

class UOrderServiceHasTargetCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
