#ifndef UE4SS_SDK_BP_Action_GetUpAttack_HPP
#define UE4SS_SDK_BP_Action_GetUpAttack_HPP

class UBP_Action_GetUpAttack_C : public UBP_AiActionLaunchCombo_C
{
    TArray<FAIConditionClassInstance> Conditions;                                     // 0x0108 (size: 0x10)

    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
}; // Size: 0x118

#endif
