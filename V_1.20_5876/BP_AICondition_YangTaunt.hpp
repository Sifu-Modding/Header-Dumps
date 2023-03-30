#ifndef UE4SS_SDK_BP_AICondition_YangTaunt_HPP
#define UE4SS_SDK_BP_AICondition_YangTaunt_HPP

class UBP_AICondition_YangTaunt_C : public UAIComboCondition
{
    FSCMathExpressionFloat DistanceToWaypoint;                                        // 0x00E0 (size: 0x20)
    bool CheckTargetDistance;                                                         // 0x0100 (size: 0x1)
    FSCMathExpressionFloat DistanceToTarget;                                          // 0x0108 (size: 0x20)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0x128

#endif
