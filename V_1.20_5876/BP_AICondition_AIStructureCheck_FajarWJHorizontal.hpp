#ifndef UE4SS_SDK_BP_AICondition_AIStructureCheck_FajarWJHorizontal_HPP
#define UE4SS_SDK_BP_AICondition_AIStructureCheck_FajarWJHorizontal_HPP

class UBP_AICondition_AIStructureCheck_FajarWJHorizontal_C : public UAIComboCondition
{
    FSCMathExpressionFloat StructureCheckInPercent;                                   // 0x00E0 (size: 0x20)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0x100

#endif
