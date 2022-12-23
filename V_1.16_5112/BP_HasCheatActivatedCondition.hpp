#ifndef UE4SS_SDK_BP_HasCheatActivatedCondition_HPP
#define UE4SS_SDK_BP_HasCheatActivatedCondition_HPP

class UBP_HasCheatActivatedCondition_C : public UBlueprintActorCondition
{
    FGameplayTag CheatWanted;

    bool BPE_Evaluate(const class AActor* _actor);
};

#endif
