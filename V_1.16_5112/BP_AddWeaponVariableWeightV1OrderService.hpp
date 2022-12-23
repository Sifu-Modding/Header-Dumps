#ifndef UE4SS_SDK_BP_AddWeaponVariableWeightV1OrderService_HPP
#define UE4SS_SDK_BP_AddWeaponVariableWeightV1OrderService_HPP

class UBP_AddWeaponVariableWeightV1OrderService_C : public UAddWeaponIdleVariableWeightOrderService
{
    ESpeedState SpeedState;

    class UBlendProfile* BPE_GetBlendProfileForWeapon(const class UBaseWeaponData* _weaponData);
};

#endif
