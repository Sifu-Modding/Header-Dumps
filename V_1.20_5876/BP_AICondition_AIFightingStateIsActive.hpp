#ifndef UE4SS_SDK_BP_AICondition_AIFightingStateIsActive_HPP
#define UE4SS_SDK_BP_AICondition_AIFightingStateIsActive_HPP

class UBP_AICondition_AIFightingStateIsActive_C : public UAIComboCondition
{
    EFightingState State;                                                             // 0x00E0 (size: 0x1)
    bool Invert;                                                                      // 0x00E1 (size: 0x1)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE2

#endif
