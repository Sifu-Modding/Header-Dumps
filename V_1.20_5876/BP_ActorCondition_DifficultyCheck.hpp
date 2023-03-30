#ifndef UE4SS_SDK_BP_ActorCondition_DifficultyCheck_HPP
#define UE4SS_SDK_BP_ActorCondition_DifficultyCheck_HPP

class UBP_ActorCondition_DifficultyCheck_C : public UBlueprintActorCondition
{
    EGameDifficulty difficulty;                                                       // 0x0028 (size: 0x1)

    bool BPE_Evaluate(const class AActor* _actor);
}; // Size: 0x29

#endif
