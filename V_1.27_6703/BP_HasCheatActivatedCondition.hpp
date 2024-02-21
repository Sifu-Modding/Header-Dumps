#ifndef UE4SS_SDK_BP_HasCheatActivatedCondition_HPP
#define UE4SS_SDK_BP_HasCheatActivatedCondition_HPP

class UBP_HasCheatActivatedCondition_C : public UBlueprintActorCondition
{
    FGameplayTag CheatWanted;                                                         // 0x0028 (size: 0x8)

    bool BPE_Evaluate(const class AActor* _actor);
}; // Size: 0x30

#endif
