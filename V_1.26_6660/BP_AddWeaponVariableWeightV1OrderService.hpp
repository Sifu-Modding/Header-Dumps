#ifndef UE4SS_SDK_BP_AddWeaponVariableWeightV1OrderService_HPP
#define UE4SS_SDK_BP_AddWeaponVariableWeightV1OrderService_HPP

class UBP_AddWeaponVariableWeightV1OrderService_C : public UAddWeaponIdleVariableWeightOrderService
{
    ESpeedState SpeedState;                                                           // 0x0090 (size: 0x1)

    class UBlendProfile* BPE_GetBlendProfileForWeapon(const class UBaseWeaponData* _weaponData);
}; // Size: 0x91

#endif
