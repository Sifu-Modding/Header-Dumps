#ifndef UE4SS_SDK_BP_EquippedWeaponVitalPointCondition_HPP
#define UE4SS_SDK_BP_EquippedWeaponVitalPointCondition_HPP

class UBP_EquippedWeaponVitalPointCondition_C : public UBP_VitalPointCheckConditionBase_C
{
    int32 MaxDamagedWeaponIndex;
    TArray<class TSubclassOf<UBaseWeaponData>> AuthorizedWeaponData;

    bool BPE_CanActivate(const class AFightingCharacter* _attacker, const class AFightingCharacter* _defender);
};

#endif
