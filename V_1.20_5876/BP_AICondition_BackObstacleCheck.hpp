#ifndef UE4SS_SDK_BP_AICondition_BackObstacleCheck_HPP
#define UE4SS_SDK_BP_AICondition_BackObstacleCheck_HPP

class UBP_AICondition_BackObstacleCheck_C : public UAIComboCondition
{
    float BackDistance;                                                               // 0x00E0 (size: 0x4)
    bool LineTrace;                                                                   // 0x00E4 (size: 0x1)
    TEnumAsByte<EDrawDebugTrace::Type> TraceDebug;                                    // 0x00E5 (size: 0x1)

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
}; // Size: 0xE6

#endif
