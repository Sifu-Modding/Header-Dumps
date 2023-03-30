#ifndef UE4SS_SDK_BP_FajarVanishFindActorCondition_HPP
#define UE4SS_SDK_BP_FajarVanishFindActorCondition_HPP

class UBP_FajarVanishFindActorCondition_C : public UComboAIConditionFindActorEnvQuery
{
    float Max Angle To Vanish Point;                                                  // 0x0120 (size: 0x4)
    float Min Distance To Vanish Point;                                               // 0x0124 (size: 0x4)
    float Max Distance To Vanish Point;                                               // 0x0128 (size: 0x4)

    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
}; // Size: 0x12C

#endif
