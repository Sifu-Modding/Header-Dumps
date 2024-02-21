#ifndef UE4SS_SDK_OrderServiceCanCancelAttackCondition_HPP
#define UE4SS_SDK_OrderServiceCanCancelAttackCondition_HPP

class UOrderServiceCanCancelAttackCondition_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
