#ifndef UE4SS_SDK_BP_Weapon_Interface_HPP
#define UE4SS_SDK_BP_Weapon_Interface_HPP

class IBP_Weapon_Interface_C : public IInterface
{

    void UpdateDurabilityRTPC();
    void SendOptionValueAndTriggerUpdate(bool bpp__bIsHighContrast__pf);
    void GetWeaponType(EWeaponType& bpp__WeaponType__pf);
    void GetWeaponAkComponent(class UAkComponent*& bpp__AkComponent__pf);
    void GetAkWeaponNameSwitch(AKE_WeaponName_Switch& bpp__Name__pf);
}; // Size: 0x28

#endif
