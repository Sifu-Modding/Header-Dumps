#ifndef UE4SS_SDK_OrderChargeBuildupStepCondition_HPP
#define UE4SS_SDK_OrderChargeBuildupStepCondition_HPP

class UOrderChargeBuildupStepCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
