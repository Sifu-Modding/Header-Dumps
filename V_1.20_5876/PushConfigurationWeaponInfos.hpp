#ifndef UE4SS_SDK_PushConfigurationWeaponInfos_HPP
#define UE4SS_SDK_PushConfigurationWeaponInfos_HPP

struct FPushConfigurationWeaponInfos
{
    FPushAnims FarAnims_4_08DB8FF04C0922BABB182BBFA171F6A5;                           // 0x0000 (size: 0xA8)
    FPushAnims CloseAnims_6_9955C15E47B3357C4827C89E2A37BB93;                         // 0x00A8 (size: 0xA8)
    TMap<class EnvironmentalImpactReceiverType, class FPushAnims> PushEnvClose_11_81DD2A4C4861369F03939FA59F14192E; // 0x0150 (size: 0x50)
    TSoftClassPtr<ABaseWeapon> WeaponClass_18_26D2480C47ADE14F9E80898B3BFF4A41;       // 0x01A0 (size: 0x28)

}; // Size: 0x1C8

#endif
