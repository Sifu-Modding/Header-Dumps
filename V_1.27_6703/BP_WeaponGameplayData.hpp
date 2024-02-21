#ifndef UE4SS_SDK_BP_WeaponGameplayData_HPP
#define UE4SS_SDK_BP_WeaponGameplayData_HPP

class UBP_WeaponGameplayData_C : public UWeaponGameplayData
{
    TEnumAsByte<EWeaponType> EWeaponType;                                             // 0x0070 (size: 0x1)
    bool bIsUnbreakable;                                                              // 0x0071 (size: 0x1)

    bool BPE_CanBeDrop();
    void BPE_OnChangeCombo(class AFightingCharacter* _owner, bool _bDroppingWeapon);
}; // Size: 0x72

#endif
