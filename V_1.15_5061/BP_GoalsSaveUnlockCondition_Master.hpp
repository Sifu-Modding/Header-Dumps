#ifndef UE4SS_SDK_BP_GoalsSaveUnlockCondition_Master_HPP
#define UE4SS_SDK_BP_GoalsSaveUnlockCondition_Master_HPP

class UBP_GoalsSaveUnlockCondition_Master_C : public USaveUnlockCondition
{

    bool BPE_CanBeUnlocked(const class UWorld* _world);
};

#endif
