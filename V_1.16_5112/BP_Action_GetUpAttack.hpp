#ifndef UE4SS_SDK_BP_Action_GetUpAttack_HPP
#define UE4SS_SDK_BP_Action_GetUpAttack_HPP

class UBP_Action_GetUpAttack_C : public UBP_AiActionLaunchCombo_C
{
    TArray<FAIConditionClassInstance> Conditions;

    bool BPE_CanPerform(const class USCAIComponent* _aiComponent);
};

#endif
