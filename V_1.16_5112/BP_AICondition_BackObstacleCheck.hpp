#ifndef UE4SS_SDK_BP_AICondition_BackObstacleCheck_HPP
#define UE4SS_SDK_BP_AICondition_BackObstacleCheck_HPP

class UBP_AICondition_BackObstacleCheck_C : public UAIComboCondition
{
    float BackDistance;
    bool LineTrace;
    TEnumAsByte<EDrawDebugTrace::Type> TraceDebug;

    FString BPE_GetLog();
    bool BPE_TestCondition(const class UAIFightingComponent* _aiComponent, const class AActor* _target);
};

#endif
