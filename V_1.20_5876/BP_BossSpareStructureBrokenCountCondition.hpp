#ifndef UE4SS_SDK_BP_BossSpareStructureBrokenCountCondition_HPP
#define UE4SS_SDK_BP_BossSpareStructureBrokenCountCondition_HPP

class UBP_BossSpareStructureBrokenCountCondition_C : public UBlueprintActorCondition
{
    int32 StructureBrokenCount;                                                       // 0x0028 (size: 0x4)

    bool BPE_Evaluate(const class AActor* _actor);
}; // Size: 0x2C

#endif
