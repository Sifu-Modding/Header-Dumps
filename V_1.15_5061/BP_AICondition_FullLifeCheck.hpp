#ifndef UE4SS_SDK_BP_AICondition_FullLifeCheck_HPP
#define UE4SS_SDK_BP_AICondition_FullLifeCheck_HPP

class UBP_AICondition_FullLifeCheck_C : public UAIComboCondition
{
    bool CheckStructure;
    FSCMathExpressionFloat Condition;
    int32 FightDuration;

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
};

#endif
