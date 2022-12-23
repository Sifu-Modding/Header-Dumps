#ifndef UE4SS_SDK_CanCounterGrabCondition_HPP
#define UE4SS_SDK_CanCounterGrabCondition_HPP

class UCanCounterGrabCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
