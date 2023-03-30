#ifndef UE4SS_SDK_BP_IsOrderRunning_InfluenceTest_HPP
#define UE4SS_SDK_BP_IsOrderRunning_InfluenceTest_HPP

class UBP_IsOrderRunning_InfluenceTest_C : public UBPInfluenceTest
{
    EOrderType Order;                                                                 // 0x0068 (size: 0x1)

    FText BPE_GetDescriptionDetails();
    bool BPE_RunBPTest(const class UAIFightingComponent* _testedAI);
}; // Size: 0x69

#endif
