#ifndef UE4SS_SDK_BP_EquippedWeaponVitalPointCondition_HPP
#define UE4SS_SDK_BP_EquippedWeaponVitalPointCondition_HPP

class UBP_EquippedWeaponVitalPointCondition_C : public UBP_VitalPointCheckConditionBase_C
{
    int32 MaxDamagedWeaponIndex;                                                      // 0x0088 (size: 0x4)
    TArray<class TSubclassOf<UBaseWeaponData>> AuthorizedWeaponData;                  // 0x0090 (size: 0x10)

    bool BPE_CanActivate(const class AFightingCharacter* _attacker, const class AFightingCharacter* _defender);
}; // Size: 0xA0

#endif
