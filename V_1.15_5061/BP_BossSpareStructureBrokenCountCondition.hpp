#ifndef UE4SS_SDK_BP_BossSpareStructureBrokenCountCondition_HPP
#define UE4SS_SDK_BP_BossSpareStructureBrokenCountCondition_HPP

class UBP_BossSpareStructureBrokenCountCondition_C : public UBlueprintActorCondition
{
    int32 StructureBrokenCount;

    bool BPE_Evaluate(const class AActor* _actor);
};

#endif
