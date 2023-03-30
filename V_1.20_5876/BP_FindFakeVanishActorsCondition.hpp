#ifndef UE4SS_SDK_BP_FindFakeVanishActorsCondition_HPP
#define UE4SS_SDK_BP_FindFakeVanishActorsCondition_HPP

class UBP_FindFakeVanishActorsCondition_C : public UComboAIConditionFindActorsEnvQuery
{
    float Fake Vanish Attack Actor Max Distance;                                      // 0x0110 (size: 0x4)
    float Fake Vanish Attack Actor Min Distance;                                      // 0x0114 (size: 0x4)

    void BPE_GetEnvQueryParameterValue(FName _paramName, const class ASCCharacter* _owner, FSCTypedValue& _outValue);
}; // Size: 0x118

#endif
