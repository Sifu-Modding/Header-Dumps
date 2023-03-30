#ifndef UE4SS_SDK_BP_BossSpareStructureBrokenCountAndTagCheckCondition_HPP
#define UE4SS_SDK_BP_BossSpareStructureBrokenCountAndTagCheckCondition_HPP

class UBP_BossSpareStructureBrokenCountAndTagCheckCondition_C : public UBP_BossSpareStructureBrokenCountCondition_C
{
    FGameplayTagContainer TagToCheck;                                                 // 0x0030 (size: 0x20)

    bool BPE_Evaluate(const class AActor* _actor);
}; // Size: 0x50

#endif
