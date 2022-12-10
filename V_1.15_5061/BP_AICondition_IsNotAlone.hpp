#ifndef UE4SS_SDK_BP_AICondition_IsNotAlone_HPP
#define UE4SS_SDK_BP_AICondition_IsNotAlone_HPP

class UBP_AICondition_IsNotAlone_C : public UAIComboCondition
{

    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
};

#endif
