#ifndef UE4SS_SDK_BP_AiCondition_Behavior_HPP
#define UE4SS_SDK_BP_AiCondition_Behavior_HPP

class UBP_AiCondition_Behavior_C : public UAIComboCondition
{
    EGlobalBehaviors Behavior;                                                        // 0x00E0 (size: 0x1)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE1

#endif
