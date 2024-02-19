#ifndef UE4SS_SDK_BP_AICondition_HeightComparison_HPP
#define UE4SS_SDK_BP_AICondition_HeightComparison_HPP

class UBP_AICondition_HeightComparison_C : public UAIComboCondition
{
    float HeightDifference;                                                           // 0x00E0 (size: 0x4)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE4

#endif
