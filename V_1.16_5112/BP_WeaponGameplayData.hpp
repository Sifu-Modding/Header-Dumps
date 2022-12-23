#ifndef UE4SS_SDK_BP_WeaponGameplayData_HPP
#define UE4SS_SDK_BP_WeaponGameplayData_HPP

class UBP_WeaponGameplayData_C : public UWeaponGameplayData
{
    TEnumAsByte<EWeaponType> EWeaponType;

    void BPE_OnChangeCombo(class AFightingCharacter* _owner, bool _bDroppingWeapon);
};

#endif
