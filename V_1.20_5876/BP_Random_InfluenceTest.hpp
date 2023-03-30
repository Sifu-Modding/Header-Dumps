#ifndef UE4SS_SDK_BP_Random_InfluenceTest_HPP
#define UE4SS_SDK_BP_Random_InfluenceTest_HPP

class UBP_Random_InfluenceTest_C : public UBPInfluenceTest
{
    float Random;                                                                     // 0x0068 (size: 0x4)

    FText BPE_GetDescriptionDetails();
    bool BPE_RunBPTest(const class UAIFightingComponent* _testedAI);
}; // Size: 0x6C

#endif
