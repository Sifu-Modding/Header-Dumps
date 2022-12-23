#ifndef UE4SS_SDK_BP_AiCondition_Behavior_HPP
#define UE4SS_SDK_BP_AiCondition_Behavior_HPP

class UBP_AiCondition_Behavior_C : public UAIComboCondition
{
    EGlobalBehaviors Behavior;

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
};

#endif
