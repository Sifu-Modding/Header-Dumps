#ifndef UE4SS_SDK_BP_AICondition_IsNotInCinematic_HPP
#define UE4SS_SDK_BP_AICondition_IsNotInCinematic_HPP

class UBP_AICondition_IsNotInCinematic_C : public UAIComboCondition
{

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE0

#endif
