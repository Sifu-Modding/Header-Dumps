#ifndef UE4SS_SDK_BP_AICondition_FullLifeCheck_HPP
#define UE4SS_SDK_BP_AICondition_FullLifeCheck_HPP

class UBP_AICondition_FullLifeCheck_C : public UAIComboCondition
{
    bool CheckStructure;                                                              // 0x00E0 (size: 0x1)
    FSCMathExpressionFloat Condition;                                                 // 0x00E8 (size: 0x20)
    int32 FightDuration;                                                              // 0x0108 (size: 0x4)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0x10C

#endif
