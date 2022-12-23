#ifndef UE4SS_SDK_BP_TargetIsParryVictim_HPP
#define UE4SS_SDK_BP_TargetIsParryVictim_HPP

class UBP_TargetIsParryVictim_C : public UComboTransitionCondition
{

    uint8 BPE_GetTargetNode(const class AFightingCharacter* _owner, const class AActor* _target);
};

#endif
