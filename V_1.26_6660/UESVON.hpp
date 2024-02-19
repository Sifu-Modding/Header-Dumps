#ifndef UE4SS_SDK_UESVON_HPP
#define UE4SS_SDK_UESVON_HPP

#include "UESVON_enums.hpp"

class ASVONVolume : public AVolume
{
    bool myShowMortonCodes;                                                           // 0x02E8 (size: 0x1)
    bool myShowNeighbourLinks;                                                        // 0x02E9 (size: 0x1)
    bool myShowParentChildLinks;                                                      // 0x02EA (size: 0x1)
    int32 myVoxelPower;                                                               // 0x02EC (size: 0x4)
    TEnumAsByte<ECollisionChannel> myCollisionChannel;                                // 0x02F0 (size: 0x1)
    TEnumAsByte<EObjectTypeQuery> myObjectTypes;                                      // 0x02F1 (size: 0x1)
    float myClearance;                                                                // 0x02F4 (size: 0x4)
    ESVOGenerationStrategy myGenerationStrategy;                                      // 0x02F8 (size: 0x1)
    uint8 myNumLayers;                                                                // 0x02F9 (size: 0x1)
    int32 myNumBytes;                                                                 // 0x02FC (size: 0x4)
    class USVONVolumeRenderingComponent* RenderingComp;                               // 0x0300 (size: 0x8)

}; // Size: 0x330

class UAITask_SVONMoveTo : public UAITask
{
    FAITask_SVONMoveToOnRequestFailed OnRequestFailed;                                // 0x0078 (size: 0x10)
    void GenericGameplayTaskDelegate();
    FAITask_SVONMoveToOnMoveFinished OnMoveFinished;                                  // 0x0088 (size: 0x10)
    void SVONMoveTaskCompletedSignature(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    FAIMoveRequest MoveRequest;                                                       // 0x0098 (size: 0x40)

    class UAITask_SVONMoveTo* SVONAIMoveTo(class AAIController* Controller, FVector GoalLocation, bool aUseAsyncPathfinding, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, bool bLockAILogic, bool bUseContinuosGoalTracking);
}; // Size: 0x138

class UBTTask_SVONMoveTo : public UBTTask_BlackboardBase
{
    float AcceptableRadius;                                                           // 0x0098 (size: 0x4)
    float ObservedBlackboardValueTolerance;                                           // 0x009C (size: 0x4)
    uint8 bObserveBlackboardValue;                                                    // 0x00A0 (size: 0x1)
    uint8 bTrackMovingGoal;                                                           // 0x00A0 (size: 0x1)
    uint8 bReachTestIncludesAgentRadius;                                              // 0x00A0 (size: 0x1)
    uint8 bReachTestIncludesGoalRadius;                                               // 0x00A0 (size: 0x1)
    bool bUseAsyncPathfinding;                                                        // 0x00A4 (size: 0x1)

}; // Size: 0xB0

class USVONNavigationComponent : public UActorComponent
{
    bool DebugPrintCurrentPosition;                                                   // 0x00C0 (size: 0x1)
    bool DebugPrintMortonCodes;                                                       // 0x00C1 (size: 0x1)
    bool DebugDrawOpenNodes;                                                          // 0x00C2 (size: 0x1)
    bool UseUnitCost;                                                                 // 0x00C3 (size: 0x1)
    float UnitCost;                                                                   // 0x00C4 (size: 0x4)
    float EstimateWeight;                                                             // 0x00C8 (size: 0x4)
    float NodeSizeCompensation;                                                       // 0x00CC (size: 0x4)
    ESVONPathCostType PathCostType;                                                   // 0x00D0 (size: 0x1)

}; // Size: 0xF8

class USVONVolumeRenderingComponent : public UPrimitiveComponent
{
}; // Size: 0x4A0

#endif
