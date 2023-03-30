#ifndef UE4SS_SDK_BP_AICondition_FengjieDistanceCheck_HPP
#define UE4SS_SDK_BP_AICondition_FengjieDistanceCheck_HPP

class UBP_AICondition_FengjieDistanceCheck_C : public UAIComboCondition
{
    float DistanceToWaypoint;                                                         // 0x00E0 (size: 0x4)
    float DistanceBetweenTargetAndWaypoint;                                           // 0x00E4 (size: 0x4)

    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE8

#endif
