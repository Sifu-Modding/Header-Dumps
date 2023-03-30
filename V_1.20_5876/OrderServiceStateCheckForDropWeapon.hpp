#ifndef UE4SS_SDK_OrderServiceStateCheckForDropWeapon_HPP
#define UE4SS_SDK_OrderServiceStateCheckForDropWeapon_HPP

class UOrderServiceStateCheckForDropWeapon_C : public UOrderServiceActivationConditions
{

    bool BPE_CanActivate(uint8 _uiOrderId, const class ABaseCharacter* _owner);
}; // Size: 0x28

#endif
