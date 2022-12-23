#ifndef UE4SS_SDK_OrderParryInstigatorRedirectCondition_HPP
#define UE4SS_SDK_OrderParryInstigatorRedirectCondition_HPP

class UOrderParryInstigatorRedirectCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
};

#endif
