#ifndef UE4SS_SDK_BP_VitalPointCheckConditionTaunt_HPP
#define UE4SS_SDK_BP_VitalPointCheckConditionTaunt_HPP

class UBP_VitalPointCheckConditionTaunt_C : public UBP_VitalPointCheckConditionBase_C
{

    bool BPE_CanActivate(const class AFightingCharacter* _attacker, const class AFightingCharacter* _defender);
};

#endif
